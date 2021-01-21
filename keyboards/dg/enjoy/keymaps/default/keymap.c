#include "enjoy.h"
#include "analog.h"
#include "pointing_device.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP(
    KC_P7,   KC_P8,   KC_P9,   KC_PPLS, 
    KC_P4,   KC_P5,   KC_P6,   KC_PMNS, 
    KC_P1,   KC_P2,   KC_P3,   KC_PAST, 
    MO(1),   KC_P0,   KC_PDOT, KC_PSLS),

  KEYMAP(
    KC_Q,    KC_W,    KC_E,    KC_R, 
    KC_A,    KC_S,    KC_D,    KC_F, 
    KC_Z,    KC_X,    KC_C,    KC_V, 
    _______, KC_I,    KC_O,    KC_P)

};

// Joystick
uint8_t xPin  = F5;
uint8_t yPin  = F6;

uint16_t originAxisValue = 512;
uint16_t maxAxisValue = 1023;
uint16_t minAxisValue = 0;
uint16_t lastCursor = 0;

uint8_t precisionSpeed = 1;
uint8_t maxCursorSpeed = 2;
uint8_t speedRegulator = 20;  // Lower Values Create Faster Movement
uint8_t cursorTimeout = 10;

int8_t xPolarity = 1;
int8_t yPolarity = 1;

int16_t axisCoordinate(uint8_t pin) {
  int8_t  direction;
  int16_t distanceFromOrigin;
  int16_t range;

  int16_t position = analogReadPin(pin);

  if (originAxisValue == position) {
    return 0;
  } else if (originAxisValue > position) {
    distanceFromOrigin = originAxisValue - position;
    range              = originAxisValue - minAxisValue;
    direction          = 1;
  } else {
    distanceFromOrigin = position - originAxisValue;
    range              = maxAxisValue - originAxisValue;
    direction          = -1;
  }

  float   percent    = (float)distanceFromOrigin / range;
  int16_t coordinate = (int16_t)(percent * 100);
  if (coordinate < 0) {
    return 0;
  } else if (coordinate > 100) {
    return 100 * direction;
  } else {
    return coordinate * direction;
  }
}

int8_t axisToMouseComponent(uint8_t pin, int8_t polarity) {
  int coordinate = axisCoordinate(pin);
  if (coordinate == 0) {
    return 0;
  } else {
    float percent = (float)coordinate / 100;
    if (keyboard_report->mods & MOD_BIT(KC_LSFT)) {
      return percent * precisionSpeed * polarity * (abs(coordinate) / speedRegulator);
    } else {
      return percent * maxCursorSpeed * polarity * (abs(coordinate) / speedRegulator);
    }
  }
}

void pointing_device_task(void) {
  report_mouse_t report = pointing_device_get_report();

  if (timer_elapsed(lastCursor) > cursorTimeout) {
    lastCursor = timer_read();
    report.x   = axisToMouseComponent(xPin, xPolarity);
    report.y   = axisToMouseComponent(yPin, yPolarity);
  }

  pointing_device_set_report(report);
  pointing_device_send();
}
