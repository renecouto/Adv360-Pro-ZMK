/*
 * Localized Keys for Portuguese (Brazil ABNT)
 *
 * This file was generated from data with the following license:
 *
 * UNICODE, INC. LICENSE AGREEMENT - DATA FILES AND SOFTWARE
 * 
 * See Terms of Use for definitions of Unicode Inc.'s
 * Data Files and Software.
 * 
 * NOTICE TO USER: Carefully read the following legal agreement.
 * BY DOWNLOADING, INSTALLING, COPYING OR OTHERWISE USING UNICODE INC.'S
 * DATA FILES ("DATA FILES"), AND/OR SOFTWARE ("SOFTWARE"),
 * YOU UNEQUIVOCALLY ACCEPT, AND AGREE TO BE BOUND BY, ALL OF THE
 * TERMS AND CONDITIONS OF THIS AGREEMENT.
 * IF YOU DO NOT AGREE, DO NOT DOWNLOAD, INSTALL, COPY, DISTRIBUTE OR USE
 * THE DATA FILES OR SOFTWARE.
 * 
 * COPYRIGHT AND PERMISSION NOTICE
 * 
 * Copyright © 1991-2022 Unicode, Inc. All rights reserved.
 * Distributed under the Terms of Use in https://www.unicode.org/copyright.html.
 * 
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of the Unicode data files and any associated documentation
 * (the "Data Files") or Unicode software and any associated documentation
 * (the "Software") to deal in the Data Files or Software
 * without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, and/or sell copies of
 * the Data Files or Software, and to permit persons to whom the Data Files
 * or Software are furnished to do so, provided that either
 * (a) this copyright and permission notice appear with all copies
 * of the Data Files or Software, or
 * (b) this copyright and permission notice appear in associated
 * Documentation.
 * 
 * THE DATA FILES AND SOFTWARE ARE PROVIDED "AS IS", WITHOUT WARRANTY OF
 * ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT OF THIRD PARTY RIGHTS.
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS INCLUDED IN THIS
 * NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT OR CONSEQUENTIAL
 * DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THE DATA FILES OR SOFTWARE.
 * 
 * Except as contained in this notice, the name of a copyright holder
 * shall not be used in advertising or otherwise to promote the sale,
 * use or other dealings in these Data Files or Software without prior
 * written authorization of the copyright holder.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define PT_ESCAPE_CHARACTER (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

#define PT_FILE_SEPARATOR (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))

#define PT_GROUP_SEPARATOR (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))

#define PT_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define PT_EXCLAMATION (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define PT_EXCL (PT_EXCLAMATION)

/* " */
#define PT_DOUBLE_QUOTES (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))
#define PT_DQT (PT_DOUBLE_QUOTES)

/* # */
#define PT_HASH (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define PT_POUND (PT_HASH)

/* $ */
#define PT_DOLLAR (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define PT_DLLR (PT_DOLLAR)

/* % */
#define PT_PERCENT (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define PT_PRCNT (PT_PERCENT)

/* & */
#define PT_AMPERSAND (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define PT_AMPS (PT_AMPERSAND)

/* ' */
#define PT_SINGLE_QUOTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))
#define PT_SQT (PT_SINGLE_QUOTE)
#define PT_APOSTROPHE (PT_SINGLE_QUOTE)
#define PT_APOS (PT_SINGLE_QUOTE)

/* ( */
#define PT_LEFT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define PT_LPAR (PT_LEFT_PARENTHESIS)

/* ) */
#define PT_RIGHT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define PT_RPAR (PT_RIGHT_PARENTHESIS)

/* * */
#define PT_ASTERISK (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define PT_ASTRK (PT_ASTERISK)
#define PT_STAR (PT_ASTERISK)

/* + */
#define PT_PLUS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* , */
#define PT_COMMA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define PT_MINUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))

/* . */
#define PT_PERIOD (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define PT_DOT (PT_PERIOD)

/* / */
#define PT_SLASH (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_INTERNATIONAL1))
#define PT_FSLH (PT_SLASH)

/* 0 */
#define PT_N0 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define PT_N1 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define PT_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define PT_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define PT_N4 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define PT_N5 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define PT_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define PT_N7 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define PT_N8 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define PT_N9 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* : */
#define PT_COLON (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))

/* ; */
#define PT_SEMICOLON (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))
#define PT_SEMI (PT_SEMICOLON)

/* < */
#define PT_LESS_THAN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define PT_LT (PT_LESS_THAN)

/* = */
#define PT_EQUAL (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* > */
#define PT_GREATER_THAN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))
#define PT_GT (PT_GREATER_THAN)

/* ? */
#define PT_QUESTION (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W)))
#define PT_QMARK (PT_QUESTION)

/* @ */
#define PT_AT_SIGN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define PT_AT (PT_AT_SIGN)

/* [ */
#define PT_LEFT_BRACKET (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))
#define PT_LBKT (PT_LEFT_BRACKET)

/* \ */
#define PT_BACKSLASH (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define PT_BSLH (PT_BACKSLASH)

/* ] */
#define PT_RIGHT_BRACKET (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))
#define PT_RBKT (PT_RIGHT_BRACKET)

/* ^ */
#define PT_CARET (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))

/* _ */
#define PT_UNDERSCORE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define PT_UNDER (PT_UNDERSCORE)

/* ` */
#define PT_GRAVE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

/* a */
#define PT_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* b */
#define PT_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define PT_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define PT_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define PT_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define PT_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define PT_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define PT_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define PT_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define PT_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define PT_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define PT_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define PT_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* n */
#define PT_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define PT_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define PT_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define PT_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* r */
#define PT_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define PT_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define PT_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define PT_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define PT_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define PT_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* x */
#define PT_X (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* y */
#define PT_Y (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* z */
#define PT_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* { */
#define PT_LEFT_BRACE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define PT_LBRC (PT_LEFT_BRACE)

/* | */
#define PT_PIPE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))

/* } */
#define PT_RIGHT_BRACE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define PT_RBRC (PT_RIGHT_BRACE)

/* ~ */
#define PT_TILDE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* ¢ */
#define PT_CENT (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))

/* £ */
#define PT_POUND_SIGN (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))

/* § */
#define PT_SECTION (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))
#define PT_SECT (PT_SECTION)

/* ¨ */
#define PT_UMLAUT (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))

/* ª */
#define PT_FEMININE_ORDINAL_INDICATOR (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define PT_ORDF (PT_FEMININE_ORDINAL_INDICATOR)

/* ¬ */
#define PT_NOT (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))

/* ° */
#define PT_DEGREE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)))
#define PT_DEG (PT_DEGREE)

/* ² */
#define PT_SUPER2 (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define PT_SQUARE (PT_SUPER2)

/* ³ */
#define PT_SUPER3 (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))
#define PT_CUBE (PT_SUPER3)

/* ´ */
#define PT_ACUTE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* ¹ */
#define PT_SUPER1 (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))

/* º */
#define PT_MASCULINE_ORDINAL_INDICATOR (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define PT_ORDM (PT_MASCULINE_ORDINAL_INDICATOR)

/* ç */
#define PT_C_CEDILLA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* ₢ */
#define PT_CRUZEIRO (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C)))
