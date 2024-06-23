#include "print.h"
#include QMK_KEYBOARD_H
#include "sendstring_german.h"

#include "keycodes.h"

#include "g/keymap_combo.h"
#include "keymap.h"
#include "process_key_override.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_split_3x5_2(
    KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    DE_Y,    DE_QUOT,
    HM_A,    HM_R,    HM_S,    HM_T,    KC_G,    KC_M,    HM_N,    HM_E,    HM_I,    HM_O,
    DE_Z,    KC_X,    KC_C,    KC_D,    KC_V,    KC_K,    KC_H,    DE_COMM, DE_DOT,  DE_QUES,
                               NAV_SPC, FN_RTN , _______, KC_RSFT
  ),
  [NAV] = LAYOUT_split_3x5_2(
    _______, _______, PRE_WIN, _______, _______, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  _______,
    KC_LGUI, KC_LALT, KC_LSFT, KC_LCTL, _______, KC_PGDN, HM_LEFT, HM_DOWN, HM_RGHT, HM_RTRN,
    _______, _______, _______, _______, _______, KC_INS , KC_TAB , DE_LABK, DE_RABK, _______,
                               _______, _______, _______, _______
  ),
  [FN] = LAYOUT_split_3x5_2(
    KC_F12,  KC_F7,   KC_F8,   KC_F9,   _______, KC_MPLY, KC_MPRV, KC_VOLU, KC_MNXT, QK_ON,
    HM_F11,  HM_F4,   HM_F5,   HM_F6,   _______, KC_MUTE, HM_PDSK, HM_VOLD, HM_NDSK, QK_OFF,
    KC_F10,  KC_F1,   KC_F2,   KC_F3,   _______, PIN_APP, PIN_WIN, DSK_MGR, _______, _______,
                               _______, _______, _______, _______
  ),
  [NUM] = LAYOUT_split_3x5_2(
    _______, DE_7,    DE_8,    DE_9,    _______, _______, _______, _______, _______, _______,
    HM_0,    HM_4,    HM_5,    HM_6,    _______, _______, _______, _______, _______, _______,
    _______, DE_1,    DE_2,    DE_3,    _______, _______, _______, _______, _______, _______,
                               _______, _______, _______, _______
  ),
  [MOUSE] = LAYOUT_split_3x5_2(
    TO_BASE, TO_BASE, RGB_HUD, RGB_HUI, RGB_MOD, KC_WH_L, KC_WH_D, KC_MS_U, KC_WH_U, KC_WH_R,
    TO_BASE, TO_BASE, RGB_VAD, RGB_VAI, RGB_TOG, TO_BASE, KC_MS_L, KC_MS_D, KC_MS_R, TO_BASE,
    TO_BASE, TO_BASE, RGB_SPD, RGB_SPI, RBG_PMD, TO_BASE, KC_BTN4, KC_WH_D, KC_BTN5, TO_BASE,
                               KC_MS_L, KC_MS_R, TO_BASE, TO_BASE
  ),
  [GAME1] = LAYOUT_split_3x5_2(
    DE_1,    DE_2,    DE_3,    DE_4,    DE_5,    WvW,     XXXXXXX, XXXXXXX, XXXXXXX, TO_BASE,
    KC_LSFT, KC_A,    KC_W,    KC_D,    KC_E,    KC_I,    KC_H,    XXXXXXX, XXXXXXX, XXXXXXX,
    KC_Q,    DE_Y,    KC_S,    KC_X,    KC_R,    KC_M,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               GL2_TAB, KC_SPC,  XXXXXXX, XXXXXXX
  ),
  [GAME2] = LAYOUT_split_3x5_2(
    DE_6,    DE_7,    DE_8,    DE_9,    DE_0,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO_BASE,
    KC_LSFT, KC_A,    KC_W,    KC_D,    KC_F,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    KC_V,    KC_T,    KC_S,    KC_G,    KC_B,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               XXXXXXX, KC_SPC,  XXXXXXX, XXXXXXX
  ),
};

void keyboard_pre_init_user(void) {
    setPinOutput(24);
    writePinHigh(24);
}

const key_override_t question_exclamation_override = ko_make_basic(MOD_MASK_SHIFT, DE_QUES, DE_EXLM);
const key_override_t sqt_dqt_override = ko_make_basic(MOD_MASK_SHIFT, DE_QUOT, DE_DQUO);

const key_override_t **key_overrides = (const key_override_t *[]){
	&question_exclamation_override,
    &sqt_dqt_override,
	NULL
};

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch (index) {
        // Home-row and other tight combos
        case esc:
        case ret:
        case tab:
        case repeat:
        case cut:
        case copy:
        case paste:
        case bspc:
        case del:
        case lt:
        case gt:
        case lpar:
        case rpar:
        case lbkt:
        case rbkt:
        case lbrc:
        case rbrc:
            return COMBO_TERM;
        default:
            return COMBO_TERM + 25;
    }
}

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {
        case lpar:
        case rpar:
        case lbkt:
        case rbkt:
            if (layer_state_is(NAV)){
                return false;
            }
            break;
        case lbrc:
        case rbrc:
        case lt:
        case gt:
            if(!layer_state_is(NAV)){
                return false;
            }
            break;
    }

    return true;
}
