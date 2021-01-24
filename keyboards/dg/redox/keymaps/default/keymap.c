#include "redox.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                              ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
      KC_ESC  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                                                KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_BSPC ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                          ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      KC_TAB  , KC_Q    , KC_W    , KC_E    , KC_R    , KC_T    , KC_GRV  ,                            KC_QUOT , KC_Y    , KC_U    , KC_I    , KC_O    , KC_P    , KC_BSLS ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                          ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      KC_CAPS , KC_A    , KC_S    , KC_D    , KC_F    , KC_G    , KC_LAUNCHPAD ,            KC_MISSION_CONTROL , KC_H    , KC_J    , KC_K    , KC_L    , KC_SCLN , KC_ENT  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V    , KC_B    , KC_LBRC , KC_RBRC ,        KC_MINS , KC_EQL  , KC_N    , KC_M    , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┤      ├─────────┼─────────┼───┬─────┴───┬─────┼─────────┼─────────┼─────────┼─────────┤
      KC_LCTL , KC_LCTL , KC_LALT , KC_LGUI ,      KC_LGUI ,      KC_SPC  , MO(1)   ,        MO(2)   , KC_ENT  ,     KC_RGUI ,       KC_LEFT , KC_UP   , KC_DOWN , KC_RGHT
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘    └─────────┴─────────┘      └─────────┴─────────┘   └─────────┘     └─────────┴─────────┴─────────┴─────────┘
  ),

  [1] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                              ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
      _______ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,                                                KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_DEL  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                          ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      _______ , RGB_M_P , RGB_M_B , RGB_M_R , RGB_M_SW, XXXXXXX , KC_F11  ,                            KC_F12  , RGB_MOD , RGB_HUI , RGB_SAI , RGB_VAI , XXXXXXX , XXXXXXX ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                          ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      _______ , RGB_M_SN, RGB_M_X , RGB_M_G , RGB_M_T , RGB_M_K , _______ ,                            _______ , RGB_RMOD, RGB_HUD , RGB_SAD , RGB_VAD , XXXXXXX , _______ ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_UP   , _______ ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┤      ├─────────┼─────────┼───┬─────┴───┬─────┼─────────┼─────────┼─────────┼─────────┤
      _______ , RGB_TOG , _______ , _______ ,      _______ ,      _______ , _______ ,        _______ , _______ ,     _______ ,       _______ , KC_LEFT , KC_DOWN , KC_RGHT 
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘    └─────────┴─────────┘      └─────────┴─────────┘   └─────────┘     └─────────┴─────────┴─────────┴─────────┘
  ),

  [2] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                              ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
      _______ , KC_BRID , KC_BRIU , XXXXXXX , XXXXXXX , XXXXXXX ,                                                KC_MPLY , KC_MNXT , KC_MUTE , KC_VOLD , KC_VOLU , KC_SLEP ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                          ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      XXXXXXX , RGB_M_P , RGB_M_B , RGB_M_R , RGB_M_SW, XXXXXXX , XXXXXXX ,                            KC_MPRV , RGB_MOD , RGB_HUI , RGB_SAI , RGB_VAI , XXXXXXX , XXXXXXX ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                          ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      XXXXXXX , RGB_M_SN, RGB_M_X , RGB_M_G , RGB_M_T , RGB_M_K , _______ ,                            _______ , RGB_RMOD, RGB_HUD , RGB_SAD , RGB_VAD , XXXXXXX , _______ ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐      ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
      _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,        XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , KC_UP   , _______ ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┼─────────┼─────────┤      ├─────────┼─────────┼───┬─────┴───┬─────┼─────────┼─────────┼─────────┼─────────┤
      _______ , RGB_TOG , _______ , _______ ,      _______ ,      _______ , _______ ,        _______ , _______ ,     _______ ,       _______ , KC_LEFT , KC_DOWN , KC_RGHT 
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘    └─────────┴─────────┘      └─────────┴─────────┘   └─────────┘     └─────────┴─────────┴─────────┴─────────┘
  )

};

void led_set_user(uint8_t usb_led) {
  if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    DDRD |= (1 << 5); PORTD &= ~(1 << 5);
  } else {
    DDRD &= ~(1 << 5); PORTD &= ~(1 << 5);
  }
};
