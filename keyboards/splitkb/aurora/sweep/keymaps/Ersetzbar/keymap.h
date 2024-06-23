#pragma once
#include QMK_KEYBOARD_H
#include "keymap_german.h"


// Friendly layer names
enum layers {
  BASE,
  NAV,
  FN,
  NUM,
  MOUSE,
  GAME1,
  GAME2,
};

enum custom_keycodes{
    Game
};

//div keys
#define PRE_WIN LSFT(KC_TAB)  // previous window
#define QK_ON QK_AUTOCORRECT_ON // autocorrect on
#define QK_OFF QK_AUTOCORRECT_OFF // autocorrect off
#define PIN_APP LCTL(SGUI(KC_Q)) // pin application across desktops
#define PIN_WIN LCTL(SGUI(KC_A)) // pin window across desktops
#define DSK_MGR LALT(KC_BSLS) //desktop manager
#define RBG_PMD RGB_RMOD
#define TO_BASE DF(BASE)

// // Thumb keys
#define NAV_SPC LT(NAV, KC_SPC)
#define FN_RTN LT(FN, KC_ENT)
// #define RTHUMB2 MT(MOD_RSFT, KC_ENT)

// BASE home row modifiers
#define HM_A LGUI_T(KC_A)
#define HM_R LALT_T(KC_R)
#define HM_S LSFT_T(KC_S)
#define HM_T LCTL_T(KC_T)
#define HM_N LCTL_T(KC_N)
#define HM_E RSFT_T(KC_E)
#define HM_I LALT_T(KC_I)
#define HM_O LGUI_T(KC_O)

// Home row modifiers in layers
// #define HM_PNKY KC_LALT
// #define HM_LEFT LSFT_T(KC_LEFT)
// #define HM_DOWN LCTL_T(KC_DOWN)
// #define HM_RGHT LGUI_T(KC_RIGHT)
// #define HM_4 LGUI_T(KC_4)
// #define HM_5 LCTL_T(KC_5)
// #define HM_6 LSFT_T(KC_6)
// #define HM_0 LALT_T(KC_0)

//NAV Home row modifiers
#define OS_LGUI OSM(MOD_LGUI)
#define OS_LALT OSM(MOD_LALT)
#define OS_LSFT OSM(MOD_LSFT)
#define OS_LCTL OSM(MOD_LCTL)
#define HM_LEFT LGUI_T(KC_LEFT)
#define HM_DOWN LCTL_T(KC_DOWN)
#define HM_RGHT LSFT_T(KC_RIGHT)
#define HM_RTRN LALT_T(KC_ENT)

//FN Home row modifiers
#define HM_F11 LGUI_T(KC_F11)
#define HM_F4 LALT_T(KC_F4)
#define HM_F5 LSFT_T(KC_F5)
#define HM_F6 LCTL_T(KC_F6)
#define HM_PDSK LCTL_T(LGUI(LCTL(KC_LEFT)))   // previous desktop
#define HM_VOLD RSFT_T(KC_VOLD)
#define HM_NDSK LALT_T(LGUI(LCTL(KC_RIGHT))) // next desktop

//NUM Home row modifiers
#define HM_0 GUI_T(DE_0)
#define HM_4 LALT_T(DE_4)
#define HM_5 LSFT_T(DE_5)
#define HM_6 LCTL_T(DE_6)

//GAME keys
#define WvW LALT(KC_B)
#define GL2_TAB LT(GAME2,KC_TAB)
