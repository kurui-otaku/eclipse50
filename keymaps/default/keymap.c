#include "quantum.h"

// レイヤー定義
enum layer {
    _BASE,
    _FN
};

// 左右のキー配置を分割して定義
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_split(
        // 左手側
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,
        KC_LCTRL, KC_A,    KC_S,    KC_D,    KC_F,
        KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,
        // 左二列がQWERTY部分
        KC_T, KC_LPRN, KC_UP, KC_RGHT, KC_NO,
        KC_G, KC_LNG1, KC_LEFT, KC_SPC, KC_LALT,
        KC_B, KC_LBRC, KC_DOWN, KC_LGUI, KC_HOME,
        // 右手側
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,  
        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,  
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,  
        KC_RGUI, KC_END,  KC_HOME
    ),
    
    [_FN] = LAYOUT_split(
        _______, _______, _______, _______, _______, _______,  
        _______, _______, _______, _______, _______, _______,  
        _______, _______, _______, _______, _______, _______,  
                         _______, _______, _______,  
        _______, _______, _______, _______, _______, _______,  
        _______, _______, _______, _______, _______, _______,  
        _______, _______, _______, _______, _______, _______,  
        _______, _______, _______
    )
};
