#include "quantum.h"
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LSFT_T(KC_A), LT(5,KC_S), LT(10,KC_D), LT(3,KC_F), KC_G, KC_H, LT(4,KC_J), LT(2,KC_K), LT(6,KC_L), RSFT_T(KC_SCLN), KC_Z, LCTL_T(KC_X), LALT_T(KC_C), KC_V, KC_B, KC_N, KC_M, LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH, KC_COPY, KC_BSPC, LT(7,KC_SPC), KC_PSTE),
        [1] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_SCLN, LSFT_T(KC_A), LT(5,KC_R), LT(10,KC_S), LT(3,KC_T), KC_G, KC_M, LT(4,KC_N), LT(2,KC_E), LT(6,KC_I), RSFT_T(KC_O), KC_Z, LCTL_T(KC_X), LALT_T(KC_C), KC_D, KC_V, KC_K, KC_H, LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH, KC_COPY, KC_BSPC, LT(7,KC_SPC), KC_PSTE),
        [2] = LAYOUT_split_3x5_2(RALT(KC_Q), RALT(KC_P), RALT(KC_Y), RALT(KC_S), RALT(KC_5), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_TRNS, KC_TRNS, KC_LGUI, KC_NO, LCTL(KC_LALT), KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [3] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UNDS, KC_PIPE, KC_QUOT, KC_TRNS, KC_CIRC, KC_ASTR, KC_AMPR, KC_NO, KC_TRNS, KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MINS, KC_BSLS, KC_GRV, KC_TRNS, RGB_RMOD, KC_TRNS, KC_TRNS, RGB_MOD),
        [4] = LAYOUT_split_3x5_2(KC_TRNS, KC_COLN, KC_LT, KC_GT, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT, KC_TRNS, KC_NO, KC_EQL, KC_PLUS, KC_PERC, KC_TRNS, KC_EXLM, KC_LBRC, KC_RBRC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD, KC_TRNS, KC_TRNS, KC_VOLU),
        [5] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_TRNS, KC_NO, LCTL(KC_LALT), KC_TRNS, KC_TRNS, KC_TRNS, KC_F4, KC_F5, KC_F6, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F12, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [6] = LAYOUT_split_3x5_2(KC_PSLS, KC_7, KC_8, KC_9, KC_PPLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_0, KC_1, KC_2, KC_3, KC_PMNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_PAST, KC_4, KC_5, KC_6, KC_PEQL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
        [7] = LAYOUT_split_3x5_2(KC_TRNS, KC_TRNS, KC_COLN, KC_ESC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_PERC, KC_SLSH, KC_ENT, KC_TRNS, DF(1), KC_LGUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_EXLM, KC_TRNS, DF(0), KC_TRNS, RALT_T(KC_COMM), RCTL_T(KC_DOT), QK_BOOT, KC_TRNS, KC_TAB, KC_NO, KC_TRNS),
        [8] = LAYOUT_split_3x5_2(KC_1, KC_2, KC_3, KC_4, KC_5, LALT(KC_B), KC_NO, KC_NO, KC_NO, DF(0), KC_LSFT, KC_A, KC_W, KC_D, KC_E, KC_I, KC_H, KC_NO, KC_NO, KC_NO, KC_Q, KC_Z, KC_S, KC_X, KC_R, KC_M, KC_NO, KC_NO, KC_NO, KC_NO, LT(9,KC_TAB), KC_SPC, KC_NO, KC_NO),
        [9] = LAYOUT_split_3x5_2(KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, DF(0), KC_LSFT, KC_A, KC_W, KC_D, KC_F, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_V, KC_T, KC_S, KC_G, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SPC, KC_NO, KC_NO),
        [10] = LAYOUT_split_3x5_2(RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_BTN1, KC_WH_U, KC_BTN2, KC_TRNS, KC_TRNS, KC_BTN2, KC_NO, KC_BTN1, KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_TRNS, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_WH_L, KC_WH_D, KC_WH_R, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

void keyboard_pre_init_user(void) {
    setPinOutput(24);
    writePinHigh(24);
}

enum combos {
    GAME_LAYER,
    GAME_MOUNT,
    AC_ENABLE,
    AC_DISABLE,
    ESC_QW
};

const uint16_t PROGMEM game_layer[] = {KC_Q, KC_Z, KC_T, COMBO_END};
const uint16_t PROGMEM game_mount[] = {KC_V, KC_B, COMBO_END};
const uint16_t PROGMEM ac_enable[] = {KC_Q, KC_E, COMBO_END};
const uint16_t PROGMEM ac_disable[] = {KC_Q, KC_R, COMBO_END};
const uint16_t PROGMEM esc_qw[] = {KC_Q, KC_W, COMBO_END};

combo_t key_combos[] = {
    [GAME_LAYER] = COMBO(game_layer, DF(8)),
    [GAME_MOUNT] = COMBO(game_mount, KC_F11),
    [AC_ENABLE] = COMBO(ac_enable, QK_AUTOCORRECT_ON),
    [AC_DISABLE] = COMBO(ac_disable, QK_AUTOCORRECT_OFF),
    [ESC_QW] = COMBO(esc_qw, KC_ESC),
};

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {
        case GAME_MOUNT:
        case ESC_QW:
            if (!(layer_state_is(8) || layer_state_is(9))) {
                return false;
            }
    }
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case DF(1):
            set_single_persistent_default_layer(1);
        case DF(0):
            set_single_persistent_default_layer(0);
    }
    return true;
}
