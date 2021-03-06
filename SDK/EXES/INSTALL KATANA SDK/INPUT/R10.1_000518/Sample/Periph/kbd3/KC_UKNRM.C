/********************************************************************
 *  Shinobi Library Sample
 *  Copyright (c) 1998 SEGA
 *
 *  Library : Controller Library
 *  Module  : Keyboard functions
 *  File    : kc_uknrm.c
 *  Date    : 1999-05-27
 *  Version : 1.00
 *  Note    : Key table of UK 105 keys keyboard(Normal)
 ********************************************************************/

#define NO_DATA 0

const char KeyTbl_NormalUk[] = {
	/* 00H No Data */			0,
	/* 01H Roll Over */			255,
	/* 02H Post Fail */			255,
	/* 03H Undef Error */		255,
	/* 04H a */			    	'a',
	/* 05H b */			    	'b',
	/* 06H c */			    	'c',
	/* 07H d */			    	'd',
	/* 08H e */			    	'e',
	/* 09H f */			    	'f',
	/* 0AH g */			    	'g',
	/* 0BH h */			    	'h',
	/* 0CH i */			    	'i',
	/* 0DH j */			    	'j',
	/* 0EH k */			    	'k',
	/* 0FH l */			    	'l',

	/* 10H m */			    	'm',
	/* 11H n */			    	'n',
	/* 12H o */			    	'o',
	/* 13H p */			    	'p',
	/* 14H q */			    	'q',
	/* 15H r */			    	'r',
	/* 16H s */			    	's',
	/* 17H t */			    	't',
	/* 18H u */			    	'u',
	/* 19H v */			    	'v',
	/* 1AH w */			    	'w',
	/* 1BH x */			    	'x',
	/* 1CH y */			    	'y',
	/* 1DH z */			    	'z',
	/* 1EH 1 */			    	'1',
	/* 1FH 2 */			    	'2',

	/* 20H 3 */			    	'3',
	/* 21H 4 */			    	'4',
	/* 22H 5 */			    	'5',
	/* 23H 6 */			    	'6',
	/* 24H 7 */			    	'7',
	/* 25H 8 */			    	'8',
	/* 26H 9 */			    	'9',
	/* 27H 0 */			    	'0',
	/* 28H Return */		    '\n',
	/* 29H Esc */			    '\x1b',
	/* 2AH BackSpace */		    '\x08',
	/* 2BH Tab */			    '\t',
	/* 2CH Space */			    ' ',
	/* 2DH - */				    '-',
	/* 2EH ^ */				    '=',
	/* 2FH @ */				    '[',

	/* 30H [ */				    ']',
	/* 31H �� */			    '\\',
	/* 32H ] */				    '#',
	/* 33H ; */				    ';',
	/* 34H : */				    '\'',
	/* 35H ���p/�S�p */		    '`',
	/* 36H , */				    ',',
	/* 37H . */				    '.',
	/* 38H / */				    '/',
	/* 39H CapsLock */		    0x9a,
	/* 3AH F1 */			    0xf1,
	/* 3BH F2 */			    0xf2,
	/* 3CH F3 */			    0xf3,
	/* 3DH F4 */			    0xf4,
	/* 3EH F5 */			    0xf5,
	/* 3FH F6 */			    0xf6,

	/* 40H F7 */			    0xf7,
	/* 41H F8 */			    0xf8,
	/* 42H F9 */			    0xf9,
	/* 43H F10 */			    0xfa,
	/* 44H F11 */			    0xfb,
	/* 45H F12 */			    0xfc,
	/* 46H PrintScreen */		0x90,
	/* 47H ScrollLock */	    0x91,
	/* 48H Pause */			    0x92,
	/* 49H Insert */		    0x93,
	/* 4AH Home */			    0x95,
	/* 4BH PageUp */		    0x97,
	/* 4CH Delete */			0x7f,
	/* 4DH End */				0x96,
	/* 4EH PageDown */			0x98,
	/* 4FH �� */				0x1d,

	/* 50H �� */				0x1c,
	/* 51H �� */				0x1f,
	/* 52H �� */				0x1e,
	/* 53H NumPad NumLock */	0x99,
	/* 54H NumPad / */			'/',
	/* 55H NumPad * */			'*',
	/* 56H NumPad - */			'-',
	/* 57H NumPad + */			'+',
	/* 58H NumPad Enter */		'\n',
	/* 59H NumPad 1 */			'1',
	/* 5AH 2 */					'2',
	/* 5BH 3 */					'3',
	/* 5CH 4 */					'4',
	/* 5DH 5 */					'5',
	/* 5EH 6 */					'6',
	/* 5FH 7 */					'7',

	/* 60H 8 */					'8',
	/* 61H 9 */					'9',
	/* 62H 0 */					'0',
	/* 63H . */					'.',
	/* 64H | */					'\\',
	/* 65H S3 */				0x9f,
	/* 66H Power */				NO_DATA,
	/* 67H NumPad = */			'=',
	/* 68H F13 */				NO_DATA,
	/* 69H F14 */				NO_DATA,
	/* 6AH F15 */				NO_DATA,
	/* 6BH F16 */				NO_DATA,
	/* 6CH F17 */				NO_DATA,
	/* 6DH F18 */				NO_DATA,
	/* 6EH F19 */				NO_DATA,
	/* 6FH F20 */				NO_DATA,

	/* 70H F21 */				NO_DATA,
	/* 71H F22 */				NO_DATA,
	/* 72H F23 */				NO_DATA,
	/* 73H F24 */				NO_DATA,
	/* 74H Execute */			NO_DATA,
	/* 75H Help */				NO_DATA,
	/* 76H Menu */				NO_DATA,
	/* 77H Select */			NO_DATA,
	/* 78H Stop */				NO_DATA,
	/* 79H Again */				NO_DATA,
	/* 7AH Undo */				NO_DATA,
	/* 7BH Cut */				NO_DATA,
	/* 7CH Copy */				NO_DATA,
	/* 7DH Paste */				NO_DATA,
	/* 7EH Find */				NO_DATA,
	/* 7FH Mute */				NO_DATA,

	/* 80H Volume Up */			NO_DATA,
	/* 81H Volume Down */		NO_DATA,
	/* 82H CapsLock(Fixed) */	NO_DATA,
	/* 83H NumLock(Fixed) */	NO_DATA,
	/* 84H ScrollLock(Fixed) */	NO_DATA,
	/* 85H NumPad , */			',',
	/* 86H NumPad = */			'=',
	/* 87H _ */					'\\',
	/* 88H �J�^/�Ђ� */			NO_DATA,
	/* 89H | */					'`',
	/* 8AH �ϊ� */				NO_DATA,
	/* 8BH ���ϊ� */			NO_DATA,
	/* 8CH (none) */			NO_DATA,
	/* 8DH (none) */			NO_DATA,
	/* 8EH (none) */			NO_DATA,
	/* 8FH (none) */			NO_DATA,

	/* 90H (none) */			NO_DATA,
	/* 91H (none) */			NO_DATA,
	/* 92H (none) */			NO_DATA,
	/* 93H (none) */			NO_DATA,
	/* 94H (none) */			NO_DATA,
	/* 95H (none) */			NO_DATA,
	/* 96H (none) */			NO_DATA,
	/* 97H (none) */			NO_DATA,
	/* 98H (none) */			NO_DATA,
	/* 99H (none) */			NO_DATA,
	/* 9AH (none) */			NO_DATA,
	/* 9BH (none) */			NO_DATA,
	/* 9CH (none) */			NO_DATA,
	/* 9DH (none) */			NO_DATA,
	/* 9EH (none) */			NO_DATA,
	/* 9FH (none) */			NO_DATA,

	/* A0H (none) */			NO_DATA,
	/* A1H (none) */			NO_DATA,
	/* A2H (none) */			NO_DATA,
	/* A3H (none) */			NO_DATA,
	/* A4H (none) */			NO_DATA,
	/* A5H (none) */			NO_DATA,
	/* A6H (none) */			NO_DATA,
	/* A7H (none) */			NO_DATA,
	/* A8H (none) */			NO_DATA,
	/* A9H (none) */			NO_DATA,
	/* AAH (none) */			NO_DATA,
	/* ABH (none) */			NO_DATA,
	/* ACH (none) */			NO_DATA,
	/* ADH (none) */			NO_DATA,
	/* AEH (none) */			NO_DATA,
	/* AFH (none) */			NO_DATA,

	/* B0H (none) */			NO_DATA,
	/* B1H (none) */			NO_DATA,
	/* B2H (none) */			NO_DATA,
	/* B3H (none) */			NO_DATA,
	/* B4H (none) */			NO_DATA,
	/* B5H (none) */			NO_DATA,
	/* B6H (none) */			NO_DATA,
	/* B7H (none) */			NO_DATA,
	/* B8H (none) */			NO_DATA,
	/* B9H (none) */			NO_DATA,
	/* BAH (none) */			NO_DATA,
	/* BBH (none) */			NO_DATA,
	/* BCH (none) */			NO_DATA,
	/* BDH (none) */			NO_DATA,
	/* BEH (none) */			NO_DATA,
	/* BFH (none) */			NO_DATA,

	/* C0H (none) */			NO_DATA,
	/* C1H (none) */			NO_DATA,
	/* C2H (none) */			NO_DATA,
	/* C3H (none) */			NO_DATA,
	/* C4H (none) */			NO_DATA,
	/* C5H (none) */			NO_DATA,
	/* C6H (none) */			NO_DATA,
	/* C7H (none) */			NO_DATA,
	/* C8H (none) */			NO_DATA,
	/* C9H (none) */			NO_DATA,
	/* CAH (none) */			NO_DATA,
	/* CBH (none) */			NO_DATA,
	/* CCH (none) */			NO_DATA,
	/* CDH (none) */			NO_DATA,
	/* CEH (none) */			NO_DATA,
	/* CFH (none) */			NO_DATA,

	/* D0H (none) */			NO_DATA,
	/* D1H (none) */			NO_DATA,
	/* D2H (none) */			NO_DATA,
	/* D3H (none) */			NO_DATA,
	/* D4H (none) */			NO_DATA,
	/* D5H (none) */			NO_DATA,
	/* D6H (none) */			NO_DATA,
	/* D7H (none) */			NO_DATA,
	/* D8H (none) */			NO_DATA,
	/* D9H (none) */			NO_DATA,
	/* DAH (none) */			NO_DATA,
	/* DBH (none) */			NO_DATA,
	/* DCH (none) */			NO_DATA,
	/* DDH (none) */			NO_DATA,
	/* DEH (none) */			NO_DATA,
	/* DFH (none) */			NO_DATA,

	/* E0H (none) */			NO_DATA,
	/* E1H (none) */			NO_DATA,
	/* E2H (none) */			NO_DATA,
	/* E3H (none) */			NO_DATA,
	/* E4H (none) */			NO_DATA,
	/* E5H (none) */			NO_DATA,
	/* E6H (none) */			NO_DATA,
	/* E7H (none) */			NO_DATA,
	/* E8H (none) */			NO_DATA,
	/* E9H (none) */			NO_DATA,
	/* EAH (none) */			NO_DATA,
	/* EBH (none) */			NO_DATA,
	/* ECH (none) */			NO_DATA,
	/* EDH (none) */			NO_DATA,
	/* EEH (none) */			NO_DATA,
	/* EFH (none) */			NO_DATA,

	/* F0H (none) */			NO_DATA,
	/* F1H (none) */			NO_DATA,
	/* F2H (none) */			NO_DATA,
	/* F3H (none) */			NO_DATA,
	/* F4H (none) */			NO_DATA,
	/* F5H (none) */			NO_DATA,
	/* F6H (none) */			NO_DATA,
	/* F7H (none) */			NO_DATA,
	/* F8H (none) */			NO_DATA,
	/* F9H (none) */			NO_DATA,
	/* FAH (none) */			NO_DATA,
	/* FBH (none) */			NO_DATA,
	/* FCH (none) */			NO_DATA,
	/* FDH (none) */			NO_DATA,
	/* FEH (none) */			NO_DATA,
	/* FFH (none) */			NO_DATA,
};



/******************************* end of file *******************************/
