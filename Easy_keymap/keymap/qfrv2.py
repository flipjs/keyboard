#!/usr/bin/env python

"""Easy AVR USB Keyboard Firmware Keymapper.

Copyright 2014 David Howland, All rights reserved.

"""

description = "QuickFire Rapid (Frosty Flake v2)"
unique_id = "QFRFLAKEV2_001"
firmware = "QFRFLAKEV2"

display_height = int(6.5*4)
display_width = int(18.25*4)

num_rows = 8
num_cols = 18
num_leds = 3

uc_size = 'small'

#autogen start
layers_map = 0x00000cfa

actions_map = 0x0000075a

tapkeys_map = 0x000001ba

macro_map = 0x0000129a

led_map = 0x0000229a
bl_mask_map = None

pw_defs_map = 0x000022e7

led_hw_map = 0x000022aa
row_hw_map = 0x000022d7
col_hw_map = 0x000022b3
#autogen finish

led_definition = [
    ('Caps', 'Caps Lock'),
    ('Scroll', 'Scroll Lock'),
    ('F9', 'Win Lock')
]

backlighting = False

keyboard_definition = [
    [((4, 4), (6, 6), 'HID_KEYBOARD_SC_ESCAPE'),
     (4, None, '0'),
     ((4, 4), (4, 7), 'HID_KEYBOARD_SC_F1'),
     ((4, 4), (4, 8), 'HID_KEYBOARD_SC_F2'),
     ((4, 4), (2, 8), 'HID_KEYBOARD_SC_F3'),
     ((4, 4), (6, 8), 'HID_KEYBOARD_SC_F4'),
     (2, None, '0'),
     ((4, 4), (5, 15), 'HID_KEYBOARD_SC_F5'),
     ((4, 4), (6, 11), 'HID_KEYBOARD_SC_F6'),
     ((4, 4), (2, 12), 'HID_KEYBOARD_SC_F7'),
     ((4, 4), (4, 12), 'HID_KEYBOARD_SC_F8'),
     (2, None, '0'),
     ((4, 4), (4, 14), 'HID_KEYBOARD_SC_F9'),
     ((4, 4), (5, 14), 'HID_KEYBOARD_SC_F10'),
     ((4, 4), (6, 14), 'HID_KEYBOARD_SC_F11'),
     ((4, 4), (0, 14), 'HID_KEYBOARD_SC_F12'),
     (1, None, '0'),
     ((4, 4), (5, 13), 'HID_KEYBOARD_SC_PRINT_SCREEN'),
     ((4, 4), (7, 13), 'HID_KEYBOARD_SC_SCROLL_LOCK'),
     ((4, 4), (7, 15), 'HID_KEYBOARD_SC_PAUSE')],

    2,

    [((4, 4), (4, 6), 'HID_KEYBOARD_SC_GRAVE_ACCENT_AND_TILDE'),
     ((4, 4), (5, 6), 'HID_KEYBOARD_SC_1_AND_EXCLAMATION'),
     ((4, 4), (5, 7), 'HID_KEYBOARD_SC_2_AND_AT'),
     ((4, 4), (5, 8), 'HID_KEYBOARD_SC_3_AND_HASHMARK'),
     ((4, 4), (5, 9), 'HID_KEYBOARD_SC_4_AND_DOLLAR'),
     ((4, 4), (4, 9), 'HID_KEYBOARD_SC_5_AND_PERCENTAGE'),
     ((4, 4), (4, 10), 'HID_KEYBOARD_SC_6_AND_CARET'),
     ((4, 4), (5, 10), 'HID_KEYBOARD_SC_7_AND_AND_AMPERSAND'),
     ((4, 4), (5, 11), 'HID_KEYBOARD_SC_8_AND_ASTERISK'),
     ((4, 4), (5, 12), 'HID_KEYBOARD_SC_9_AND_OPENING_PARENTHESIS'),
     ((4, 4), (5, 5), 'HID_KEYBOARD_SC_0_AND_CLOSING_PARENTHESIS'),
     ((4, 4), (4, 5), 'HID_KEYBOARD_SC_MINUS_AND_UNDERSCORE'),
     ((4, 4), (4, 11), 'HID_KEYBOARD_SC_EQUAL_AND_PLUS'),
     ((8, 4), (2, 14), 'HID_KEYBOARD_SC_BACKSPACE'),
     (1, None, '0'),
     ((4, 4), (4, 17), 'HID_KEYBOARD_SC_INSERT'),
     ((4, 4), (4, 2), 'HID_KEYBOARD_SC_HOME'),
     ((4, 4), (4, 4), 'HID_KEYBOARD_SC_PAGE_UP')],

    [((6, 4), (2, 6), 'HID_KEYBOARD_SC_TAB'),
     ((4, 4), (7, 6), 'HID_KEYBOARD_SC_Q'),
     ((4, 4), (7, 7), 'HID_KEYBOARD_SC_W'),
     ((4, 4), (7, 8), 'HID_KEYBOARD_SC_E'),
     ((4, 4), (7, 9), 'HID_KEYBOARD_SC_R'),
     ((4, 4), (2, 9), 'HID_KEYBOARD_SC_T'),
     ((4, 4), (2, 10), 'HID_KEYBOARD_SC_Y'),
     ((4, 4), (7, 10), 'HID_KEYBOARD_SC_U'),
     ((4, 4), (7, 11), 'HID_KEYBOARD_SC_I'),
     ((4, 4), (7, 12), 'HID_KEYBOARD_SC_O'),
     ((4, 4), (7, 5), 'HID_KEYBOARD_SC_P'),
     ((4, 4), (2, 5), 'HID_KEYBOARD_SC_OPENING_BRACKET_AND_OPENING_BRACE'),
     ((4, 4), (2, 11), 'HID_KEYBOARD_SC_CLOSING_BRACKET_AND_CLOSING_BRACE'),
     ((6, 4), (3, 14), 'HID_KEYBOARD_SC_BACKSLASH_AND_PIPE'),
     (1, None, '0'),
     ((4, 4), (4, 16), 'HID_KEYBOARD_SC_DELETE'),
     ((4, 4), (5, 2), 'HID_KEYBOARD_SC_END'),
     ((4, 4), (5, 4), 'HID_KEYBOARD_SC_PAGE_DOWN')],

    [((7, 4), (2, 7), 'HID_KEYBOARD_SC_CAPS_LOCK'),
     ((4, 4), (3, 6), 'HID_KEYBOARD_SC_A'),
     ((4, 4), (3, 7), 'HID_KEYBOARD_SC_S'),
     ((4, 4), (3, 8), 'HID_KEYBOARD_SC_D'),
     ((4, 4), (3, 9), 'HID_KEYBOARD_SC_F'),
     ((4, 4), (6, 9), 'HID_KEYBOARD_SC_G'),
     ((4, 4), (6, 10), 'HID_KEYBOARD_SC_H'),
     ((4, 4), (3, 10), 'HID_KEYBOARD_SC_J'),
     ((4, 4), (3, 11), 'HID_KEYBOARD_SC_K'),
     ((4, 4), (3, 12), 'HID_KEYBOARD_SC_L'),
     ((4, 4), (3, 5), 'HID_KEYBOARD_SC_SEMICOLON_AND_COLON'),
     ((4, 4), (6, 5), 'HID_KEYBOARD_SC_APOSTROPHE_AND_QUOTE'),
     ((4, 4), (3, 14), 'HID_KEYBOARD_SC_NON_US_HASHMARK_AND_TILDE'),
     ((5, 4), (1, 14), 'HID_KEYBOARD_SC_ENTER'),
     (13, None, '0')],

    [((5, 4), (2, 1), 'HID_KEYBOARD_SC_LEFT_SHIFT'),
     ((4, 4), (6, 7), 'HID_KEYBOARD_SC_NON_US_BACKSLASH_AND_PIPE'),
     ((4, 4), (1, 6), 'HID_KEYBOARD_SC_Z'),
     ((4, 4), (1, 7), 'HID_KEYBOARD_SC_X'),
     ((4, 4), (1, 8), 'HID_KEYBOARD_SC_C'),
     ((4, 4), (1, 9), 'HID_KEYBOARD_SC_V'),
     ((4, 4), (0, 9), 'HID_KEYBOARD_SC_B'),
     ((4, 4), (0, 10), 'HID_KEYBOARD_SC_N'),
     ((4, 4), (1, 10), 'HID_KEYBOARD_SC_M'),
     ((4, 4), (1, 11), 'HID_KEYBOARD_SC_COMMA_AND_LESS_THAN_SIGN'),
     ((4, 4), (1, 12), 'HID_KEYBOARD_SC_DOT_AND_GREATER_THAN_SIGN'),
     ((4, 4), (0, 5), 'HID_KEYBOARD_SC_SLASH_AND_QUESTION_MARK'),
     ((11, 4), (3, 1), 'HID_KEYBOARD_SC_RIGHT_SHIFT'),
     (5, None, '0'),
     ((4, 4), (6, 2), 'HID_KEYBOARD_SC_UP_ARROW'),
     (4, None, '0')],

    [((5, 4), (4, 15), 'HID_KEYBOARD_SC_LEFT_CONTROL'),
     ((5, 4), (2, 3), 'HID_KEYBOARD_SC_LEFT_GUI'),
     ((5, 4), (6, 13), 'HID_KEYBOARD_SC_LEFT_ALT'),
     ((25, 4), (6, 16), 'HID_KEYBOARD_SC_SPACE'),
     ((5, 4), (0, 13), 'HID_KEYBOARD_SC_RIGHT_ALT'),
     ((5, 4), (3, 0), 'HID_KEYBOARD_SC_RIGHT_GUI'),
     ((5, 4), (0, 12), 'HID_KEYBOARD_SC_APPLICATION'),
     ((5, 4), (1, 15), 'HID_KEYBOARD_SC_RIGHT_CONTROL'),
     (1, None, '0'),
     ((4, 4), (0, 2), 'HID_KEYBOARD_SC_LEFT_ARROW'),
     ((4, 4), (0, 16), 'HID_KEYBOARD_SC_DOWN_ARROW'),
     ((4, 4), (0, 17), 'HID_KEYBOARD_SC_RIGHT_ARROW')]
]

alt_layouts = {}

if __name__ == '__main__':
    print("Keyboard definition for Quickfire Rapid keyboard")
