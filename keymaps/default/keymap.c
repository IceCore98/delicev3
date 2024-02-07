#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum layer_names {
	_BASEL,
	_CAPSL,
	_THUMBLL,
	_THUMBLL2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASEL] = LAYOUT(
	KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,						KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_HOME, KC_END, KC_MPRV, KC_MNXT,
	KC_MS_BTN3, DE_CIRC, DE_1, 	DE_2, DE_3, DE_4, DE_5, 					DE_6, DE_7, DE_8, DE_9, 	DE_0, DE_SS, DE_ACUT, KC_BSPC, KC_DEL, 	KC_MPLY,
	KC_TAB, DE_Q, 				DE_W, DE_E, DE_R, DE_T,						DE_Z, DE_U, DE_I, DE_O,		DE_P, DE_UDIA, DE_PLUS, DE_BSLS, 		KC_MUTE,
	MO(_CAPSL), DE_A, 			DE_S, DE_D, DE_F, DE_G, 					DE_H, DE_J, DE_K, DE_L, 	DE_ODIA, DE_ADIA, KC_ENT, 				KC_PGUP,
	KC_LSFT, KC_F3, DE_Y, 		DE_X, DE_C, DE_V, DE_B, DE_LABK,		DE_HASH, DE_N, DE_M, DE_COMM, 	DE_DOT, DE_MINS, KC_RSFT, KC_UP, 		KC_PGDN,
	KC_LCTL, KC_LWIN, MO(_THUMBLL2), KC_LALT, MO(_THUMBLL), KC_SPC,		KC_BSPC, KC_CAPS, KC_RALT, KC_F13, KC_RCTL, 	KC_LEFT, KC_DOWN, KC_RGHT
),
[_CAPSL] = LAYOUT(
	QK_BOOT, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, 	KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, 
			KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 					KC_TRNS, KC_HOME, KC_UP, KC_END, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 			KC_TRNS, 
		KC_TRNS, KC_TRNS, 			KC_TRNS, KC_LSFT, KC_LCTL, KC_TRNS,						KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, 	KC_TRNS, KC_TRNS, KC_TRNS, 						KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, 			KC_TRNS, 		KC_TRNS, 
	KC_TRNS, KC_TRNS, 						KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS 
),
[_THUMBLL] = LAYOUT(
	KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, 	KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, 
			KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 			KC_TRNS, 
		KC_TRNS, KC_TRNS, 			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,						KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, 						KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, 			KC_TRNS, 		KC_TRNS, 
	KC_TRNS, KC_TRNS, 						KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS 
),
[_THUMBLL2] = LAYOUT(
	KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, 	KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, 
			KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 			KC_TRNS, 
		KC_TRNS, KC_TRNS, 			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,						KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, 						KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, 			KC_TRNS, 		KC_TRNS, 
	KC_TRNS, KC_TRNS, 						KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS 
)

/*
,
[_LAYERX] = LAYOUT_SplitLShift_SplitBackSpace_AnsiEnter(
	KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
	KC_TRNS, 	KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, 
			KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 			KC_TRNS, 
		KC_TRNS, KC_TRNS, 			KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,						KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, 						KC_TRNS, 
	KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 	KC_TRNS, KC_TRNS, 			KC_TRNS, 		KC_TRNS, 
	KC_TRNS, KC_TRNS, 						KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, KC_TRNS, 		KC_TRNS, KC_TRNS, 					KC_TRNS, KC_TRNS, KC_TRNS
)*/

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}
