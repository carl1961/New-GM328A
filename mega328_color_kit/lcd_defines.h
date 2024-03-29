/* ************************************************************************
 *  (c) by Karl-Heinz Kuebbeler, Projekt Transistor Tester
 *  
 *  File:       lcd_defines.h
 *  Funktion:   Assing from lcd_bitmap parameter
 * 
 * History:     Date        Sign    Kommentar 
 *              2021-01-02  Bohu    add ISO 8859-2font  
 *              2021-01-09  Karl    ASCII-replacements for text display
 *              2021-01-11  Buhu    Zeile 469 defined vor SLOVAK zugefügt ohne Erfolg
 *              2011-01-11  Karl    Change of defined LANG_.. statements
 * ************************************************************************ */

// Options for lcd_pgm_bitmap option parameter:
#define OPT_HREVERSE    1 // Display bitmap reversed horizontally
#define OPT_VREVERSE    2 // Display bitmap reversed vertically
#define OPT_CINVERSE	4 // color is inverted (black to white ...) not used!

#define SCREEN_WIDTH  128
#define SCREEN_HEIGHT 64

// configure the LINE_LENGTH and LCD_LINES for character Display
#ifdef FOUR_LINE_LCD
 #if FOUR_LINE_LCD == 1
  #define LCD_LINES 4
  #define PAGES_PER_LINE 1
  #ifndef LCD_LINE_LENGTH
   #define LCD_LINE_LENGTH 20  /* usually a 20 character line */
  #endif
 #else
  #define LCD_LINES FOUR_LINE_LCD
  #define PAGES_PER_LINE 1
  #ifndef LCD_LINE_LENGTH
   #define LCD_LINE_LENGTH 16  /* usually a 16 character line */
  #endif
 #endif
#else  /* no FOUR_LINE_LCD */
  #define PAGES_PER_LINE 1
  #define LCD_LINES 2
  #define LCD_LINE_LENGTH 16
#endif
#if (LCD_ST_TYPE != 7735) && (LCD_ST_TYPE != 9163) && (LCD_ST_TYPE != 9341)
 #undef LCD_CHANGE_COLOR
#endif
#ifndef LCD_SCREEN_ROTATE
 #define LCD_SCREEN_ROTATE 0
#endif


/* *********************************************************************************************************** */
#if ((LCD_ST_TYPE == 7565) || (LCD_ST_TYPE == 1306))

//LCD-commands
	#define CMD_DISPLAY_OFF         0xAE
	#define CMD_DISPLAY_ON          0xAF

	#define CMD_SET_DISP_START_LINE 0x40
	#define CMD_SET_PAGE            0xB0

	#define CMD_SET_COLUMN_UPPER    0x10
	#define CMD_SET_COLUMN_LOWER    0x00

	#define CMD_SET_ADC_NORMAL      0xA0
	#define CMD_SET_ADC_REVERSE     0xA1

	#define CMD_SET_DISP_NORMAL     0xA6
	#define CMD_SET_DISP_REVERSE    0xA7

	#define CMD_SET_ALLPTS_NORMAL   0xA4
	#define CMD_SET_ALLPTS_ON       0xA5
	#define CMD_SET_BIAS_9          0xA2 
	#define CMD_SET_BIAS_7          0xA3

	#define CMD_RMW                 0xE0
	#define CMD_RMW_CLEAR           0xEE
	#define CMD_INTERNAL_RESET      0xE2
	#define CMD_SET_COM_NORMAL      0xC0
	#define CMD_SET_COM_REVERSE     0xC8
	#define CMD_SET_POWER_CONTROL   0x28
	#define CMD_SET_RESISTOR_RATIO  0x20
	#define CMD_SET_VOLUME_FIRST    0x81
 #if (LCD_ST_TYPE == 1306)
  #ifndef VOLUME_VALUE
 	#define VOLUME_VALUE   60	/* second byte of CMD_SET_VOLUME == volume value */
  #endif
 	#define CMD_SET_MEMORY_ADDR_MODE 0x20
 	#define CMD_SET_ChargePump	0x8D
 	#define CMD_SET_MUX_RATIO	0xA8
 	#define CMD_SET_DISPLAY_OFFSET	0xD3
 	#define CMD_SET_DIVIDE_RATIO	0xD5
 	#define CMD_SET_PreCharge_PERIOD 0xD9
 	#define CMD_SET_COM_Pins_CONFIG 0xDA
 	#define CMD_SET_Vcomh_DESELECT_LEVEL 0xDB
 #else
  #ifndef VOLUME_VALUE
 	#define VOLUME_VALUE   40	/* second byte of CMD_SET_VOLUME == volume value */
  #endif
 #endif
	#define CMD_SET_STATIC_OFF      0xAC
	#define CMD_SET_STATIC_ON       0xAD
	#define CMD_SET_STATIC_REG      0x0
	#define CMD_SET_BOOSTER_FIRST   0xF8
	#define CMD_SET_BOOSTER_234     0
	#define CMD_SET_BOOSTER_5       1
	#define CMD_SET_BOOSTER_6       3
	#define CMD_NOP                 0xE3
	#define CMD_TEST                0xF0

//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_shift_right() // ignored
	#define lcd_shift_left()  // ignored

	#define LCDLoadCustomChar(addr) //load Custom-character (ignored)
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored

/* *********************************************************************************************************** */
#elif (LCD_ST_TYPE == 7108) 	/* not (LCD_ST_TYPE == 7565 || 1306) */
	#define CMD_DISPLAY_OFF	0x3e
	#define CMD_DISPLAY_ON	0x3f
	#define CMD_SET_COLUMN_ADDR	0x40
	#define CMD_SET_PAGE		0xb8
	#define CMD_SET_START_LINE	0xC0		/* set the start line for ST7108, Z address */

//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored

/* *********************************************************************************************************** */
#elif (LCD_ST_TYPE == 7920) 	/* not (LCD_ST_TYPE == 7565 || 1306 || == 7108) */
	#define lcd_write_init(data_length)            _lcd_hw_write(0x80, CMD_SetIFOptions | (data_length << 4))
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored
	#define CMD_CLEAR	0x01		/* clear display, basic Instruction */
	#define CMD_CGRAM_SELECT 0x02		/* SR=0, enable CGRAM address */
	#define CMD_SET_ENTRY_MODE 0x04		/* set cursor posistion and shift for read/write */
 	#define MODE_RIGHT_MOVE 0x02
	#define CMD_DISPLAY_CONTROL	0x08	/* display control, basic Instruction */
 	#define DISPLAY_ON 0x4
 	#define CURSOR_ON 0x02
 	#define BLINK_ON 0x01
	#define CMD_DISPLAY_ON	(CMD_DISPLAY_CONTROL | DISPLAY_ON)
	#define CMD_DISPLAY_OFF	CMD_DISPLAY_CONTROL
	#define CMD_CURSOR_DISPLAY_CONTROL 0x10
	#define CMD_SET_FUNCTION 0x20		/* basic + extended Instruction */
 	#define MODE_8_BIT 0x10		/* Bit 4 is 8 bit mode */
 	#define MODE_EXTENDED 0x04		/* Bit 2 is used for extended Intruction */
 	#define GRAPHIC_DISPLAY_ON 0x02	/* Bit 1 is used for graphic display on, only extended Instruction */
	#define CMD_SET_GDRAM_ADDRESS 0x80	/* set graphic display RAM address ,extended Instruction */
					/* 2x, first vertical address 5:0, second horizontal address 3:0 */
					/* followed by pairs of horizontal data (16-bit) */
//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored

/* *********************************************************************************************************** */
#elif (LCD_ST_TYPE == 8812) 	/* not (LCD_ST_TYPE == 7565 || 1306 || 7108 || 7920)) */
 // support for PCF8812
	#undef SCREEN_WIDTH
	#define SCREEN_WIDTH  102	/* for ST8812 */
	#define CMD_SET_EXTENDED_INSTRUCTION 0x21	/* Function set with H */
	#define CMD_SET_NORMAL_INSTRUCTION 0x20	/* Function set  */
	#define ECMD_SET_HV_STAGES 0x08		/* set multiplication of HV-gen  (0 <= m <= 3) */
	#define ECMD_SET_TEMP_COEF 0x04		/* set temperature coefficient   (0 <= T <= 3) */
	#define ECMD_SET_BIAS 0x10		/* set bias system  (0 <= B <= 7) */
	#define ECMD_SET_CONTRAST 0x80		/* set Vop  value   (0 <= V <= 127) */
	#define CMD_SET_DISPLAY_INVERS  0x0D	/* D and E bit set */
	#define CMD_SET_DISPLAY_NORMAL  0x0C	/* D bit set */
	#define CMD_SET_DISPLAY_WHITE   0x09	/* E bit set */
	#define CMD_SET_DISPLAY_BLACK   0x80	/* no bit set */
	#define CMD_SET_PAGE		0x40		/* set Y address of RAM (0 <= Y <= 8) */

	#define CMD_SET_COLUMN		0x80		/* set X address of RAM (0 <= X < 102) */
//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored
/* *********************************************************************************************************** */
#elif (LCD_ST_TYPE == 8814) 	/* not ((LCD_ST_TYPE == 7565 || 1306 || 7108 || 7920 || 8812) */
 // support for PCF8814 , used for Nokia 1100
	#undef SCREEN_WIDTH		
	#define SCREEN_WIDTH  96		/* for ST8814 */
        #undef SCREEN_HEIGHT 
        #define SCREEN_HEIGHT  65
	#define CMD_SET_VOP_UPPER 0x20		/* upper 3 bits of Vop */
	#define CMD_SET_VOP_LOWER 0x80		/* lower 5 bits of Vop */
	#define CMD_SET_ALLPTS_NORMAL   0xA4
	#define CMD_SET_POWER_CONTROL   0x28
	#define CMD_SET_COM_NORMAL      0xC0
	#define CMD_SET_COM_REVERSE     0xC8
	#define CMD_DISPLAY_OFF         0xAE
	#define CMD_DISPLAY_ON          0xAF
	#define CMD_SET_PAGE            0xB0
	#define CMD_SET_START_LINE		0x40    /* set the start line for ST8814, Z address */
	#define CMD_SET_COLUMN_UPPER    0x10
	#define CMD_SET_COLUMN_LOWER    0x00
//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored
/* *********************************************************************************************************** */
#elif (LCD_ST_TYPE == 7735)
	#define CMD_EXIT_SLEEP 0x11
	#define CMD_SET_GAMMA 0x26
	#define CMD_DISPLAY_ON 0x29
 	#define CMD_CASET  0x2a
 	#define CMD_RASET  0x2b
 	#define CMD_RAMWR  0x2c
	#define CMD_MEMORY_ADDRESS_CONTROL 0x36
	#define CMD_SET_COLOR_FORMAT 0x3a
	#define CMD_FRAME_RATE_CONTROL 0xb1
	#define CMD_INVERSION_CONTROL 0xb4
	#define CMD_POWER_CONTROL1 0xc0
	#define CMD_POWER_CONTROL2 0xc1
	#define CMD_VCOM_CONTROL1 0xc5
	#undef SCREEN_HEIGHT
	#undef SCREEN_WIDTH
#if LCD_SCREEN_ROTATE != 0
        #define SCREEN_HEIGHT 160
        #define SCREEN_WIDTH 128
#else
        #define SCREEN_HEIGHT 128
        #define SCREEN_WIDTH 160
#endif
//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored
 #ifndef LCD_ST7565_V_OFFSET
	#define LCD_ST7565_V_OFFSET 0
 #endif
 #ifndef LCD_BG_COLOR
	#define LCD_BG_COLOR 0x0000	/* 5 bit red, 6 bit green, 5 bit blue */
 #endif
 #ifndef LCD_FG_COLOR
	#define LCD_FG_COLOR 0xffff	/* 5 bit red, 6 bit green, 5 bit blue */
 #endif
	#define ST_DIVA 14
	#define ST_VPA 20

/* *********************************************************************************************************** */
#elif (LCD_ST_TYPE == 9341)
	#define CMD_EXIT_SLEEP 0x11
	#define CMD_SET_GAMMA 0x26
	#define CMD_DISPLAY_ON 0x29
 	#define CMD_CASET  0x2a		/* set column address */
 	#define CMD_RASET  0x2b		/* set row (page) address */
	#define CMD_RAMWR 0x2c		/* write data to RAM */
	#define CMD_MEMORY_ADDRESS_CONTROL 0x36
	#define CMD_SET_COLOR_FORMAT 0x3a
	#define CMD_FRAME_RATE_CONTROL 0xb1
	#define CMD_POWER_CONTROL1 0xc0
	#define CMD_POWER_CONTROL2 0xc1
	#define CMD_VCOM_CONTROL1 0xc5
	#undef SCREEN_HEIGHT
	#undef SCREEN_WIDTH
#if LCD_SCREEN_ROTATE != 0
        #define SCREEN_HEIGHT 320
        #define SCREEN_WIDTH 240
#else
        #define SCREEN_HEIGHT 240
        #define SCREEN_WIDTH 320
#endif
//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored
 #ifndef LCD_ST7565_V_OFFSET
	#define LCD_ST7565_V_OFFSET 0
 #endif
 #ifndef LCD_BG_COLOR
	#define LCD_BG_COLOR 0x0000	/* 5 bit red, 6 bit green, 5 bit blue */
 #endif
 #ifndef LCD_FG_COLOR
	#define LCD_FG_COLOR 0xffff	/* 5 bit red, 6 bit green, 5 bit blue */
 #endif
        
/* *********************************************************************************************************** */
#elif (LCD_ST_TYPE == 9163)
	#define CMD_EXIT_SLEEP 0x11
	#define CMD_SET_GAMMA 0x26
	#define CMD_DISPLAY_ON 0x29
 	#define CMD_CASET  0x2a
 	#define CMD_RASET  0x2b
 	#define CMD_RAMWR  0x2c
	#define CMD_MEMORY_ADDRESS_CONTROL 0x36
	#define CMD_SET_COLOR_FORMAT 0x3a
	#define CMD_FRAME_RATE_CONTROL 0xb1
	#define CMD_INVERSION_CONTROL 0xb4
	#define CMD_POWER_CONTROL1 0xc0
	#define CMD_POWER_CONTROL2 0xc1
	#define CMD_VCOM_CONTROL1 0xc5
//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored

	#undef SCREEN_HEIGHT
        #define SCREEN_HEIGHT 128
//	#undef SCREEN_WIDTH
//	#define SCREEN_WIDTH 128
 #ifndef LCD_ST7565_V_OFFSET
	#define LCD_ST7565_V_OFFSET 32	/* 160 - 128 */
 #endif
 #ifndef LCD_BG_COLOR
	#define LCD_BG_COLOR 0x0000	/* 5 bit red, 6 bit green, 5 bit blue */
 #endif
 #ifndef LCD_FG_COLOR
	#define LCD_FG_COLOR 0xffff	/* 5 bit red, 6 bit green, 5 bit blue */
 #endif
	#define ST_DIVA 17
	#define ST_VPA 20

/* *********************************************************************************************************** */
#elif (LCD_ST_TYPE == 1327)
//LCD-commands
 	#define CMD_CASET  0x15
 	#define CMD_RASET  0x75
	#define CMD_SET_CONTRAST_CONTROL 0x81
        #define CMD_DISPLAY_OFF 0xae
	#define CMD_DISPLAY_ON 0xaf
//Makros for LCD
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data);
	#define lcd_cursor_on()  // ignored
	#define lcd_cursor_off() // ignored
	#undef SCREEN_HEIGHT
        #define SCREEN_HEIGHT 128
	#undef SCREEN_WIDTH
	#define SCREEN_WIDTH 128

/* *********************************************************************************************************** */
#else /* not ((LCD_ST_TYPE == 7565 || 1306 || 7920 || 7108 || 8812 || 8814 || 7735 || 9341 || 9163) */
/* must be a character display! */
	#define lcd_write_data(data)                   _lcd_hw_write(0x01, data); wait50us();
	#define lcd_write_init(data_length)            _lcd_hw_write(0x80, CMD_SetIFOptions | (data_length << 4))

 #ifndef VOLUME_VALUE
	#define VOLUME_VALUE   36	/* volume value , default contrast */
 #endif


//LCD-commands
	#define CMD_CLEAR_DISPLAY 0x01
	#define CMD_CURSOR_HOME 0x02
	#define CMD_SetEntryMode         0x04
	#define CMD_SetDisplayAndCursor  0x08
	#define CMD_SetIFOptions         0x20
	#define CMD_SetCGRAMAddress      0x40    // for Custom character
	#define CMD_SetDDRAMAddress      0x80    // set Cursor 
	#define CMD1_SetBias             0x10	// set Bias (instruction table 1, DOGM)
	#define CMD1_PowerControl        0x50	// Power Control, set Contrast C5:C4 (instruction table 1, DOGM)
	#define CMD1_FollowerControl     0x60	// Follower Control, amplified ratio (instruction table 1, DOGM)
	#define CMD1_SetContrast         0x70	// set Contrast C3:C0 (instruction table 1, DOGM)
	#define CMD_DISPLAY_OFF          0x08
	#define CMD_DISPLAY_ON           0x0c

//Makros for LCD
	#define lcd_shift_right() lcd_command(0x1c)
	#define lcd_shift_left() lcd_command(0x18)

	#define LCDLoadCustomChar(addr) lcd_command(CMD_SetCGRAMAddress | (addr<<3))	//load Custom-character
	#define lcd_cursor_on()  lcd_command(CMD_SetDisplayAndCursor | 0x06)
	#define lcd_cursor_off() lcd_command(CMD_SetDisplayAndCursor | 0x04)

//Addresses of lines
 #ifndef DD_RAM_OFFSET
  #define DD_RAM_OFFSET 0
 #endif
 #if (defined(LCD_DOGM) && defined(FOUR_LINE_LCD))
  #if FOUR_LINE_LCD == 3
        /* lines for a ST7036 controller, 3 lines */
    	#define LCD_Row1	0x00+DD_RAM_OFFSET
	#define LCD_Row2	0x10+DD_RAM_OFFSET
	#define LCD_Row3	0x20+DD_RAM_OFFSET
	#define LCD_Row4	0x30+DD_RAM_OFFSET
  #else
        /* lines for a SSD1803 controller */
    	#define LCD_Row1	0x00+DD_RAM_OFFSET
	#define LCD_Row2	0x20+DD_RAM_OFFSET
	#define LCD_Row3	0x40+DD_RAM_OFFSET
	#define LCD_Row4	0x60+DD_RAM_OFFSET
  #endif
 #else
  #if LCD_LINE_LENGTH == 20
    	#define LCD_Row1	0x00+DD_RAM_OFFSET
	#define LCD_Row2	0x40+DD_RAM_OFFSET
	#define LCD_Row3	0x14+DD_RAM_OFFSET
	#define LCD_Row4	0x54+DD_RAM_OFFSET
  #else
   #if LCD_LINE_LENGTH < 16
    #warning LCD_LINE_LENGTH not correctly set!
   #endif
    	#define LCD_Row1	0x00+DD_RAM_OFFSET
	#define LCD_Row2	0x40+DD_RAM_OFFSET
	#define LCD_Row3	0x10+DD_RAM_OFFSET
	#define LCD_Row4	0x50+DD_RAM_OFFSET
  #endif
 #endif

#endif

//defines for the cyrillic character set
#if ((LCD_ST_TYPE == 7565) || (LCD_ST_TYPE == 1306) || (LCD_ST_TYPE == 7920) || (LCD_ST_TYPE == 7108) || (LCD_ST_TYPE == 8812) || (LCD_ST_TYPE == 8814) || (LCD_ST_TYPE == 9163) || (LCD_ST_TYPE == 7735) || (LCD_ST_TYPE==9341))
/* cyrillic character position in font tables for graphical displays is defined in fonts/std_defines.hi */
#else

/* Cyrillic character positions in special character ROM of Character display */
#define Cyr_B    0xa0
#define Cyr_G    0xa1
#define Cyr_Jo   0xa2
#define Cyr_Zsch 0xa3
#define Cyr_Z    0xa4
#define Cyr_I    0xa5
#define Cyr_J    0xa6
#define Cyr_L    0xa7
#define Cyr_P    0xa8
#define Cyr_U    0xa9
#define Cyr_F    0xaa
#define Cyr_Tsch 0xab
#define Cyr_Sch  0xac
#define Cyr_HH   0xad
#define Cyr_Y    0xae
#define Cyr_E    0xaf

#define Cyr_Ju   0xb0
#define Cyr_Ja   0xb1
#define Cyr_b    0xb2
#define Cyr_v    0xb3
#define Cyr_g    0xb4
#define Cyr_jo   0xb5
#define Cyr_zsch 0xb6
#define Cyr_z    0xb7
#define Cyr_i    0xb8
#define Cyr_j    0xb9
#define Cyr_k    0xba
#define Cyr_l    0xbb
#define Cyr_m    0xbc
#define Cyr_n    0xbd
#define Cyr_p    0xbe
#define Cyr_t    0xbf

#define Cyr_tsch 0xc0
#define Cyr_sch  0xc1
#define Cyr_hh   0xc2
#define Cyr_y    0xc3
#define Cyr_ww   0xc4
#define Cyr_e    0xc5
#define Cyr_ju   0xc6
#define Cyr_ja   0xc7

#define Cyr_D    0xe0
#define Cyr_C    0xe1
#define Cyr_Schtsch 0xe2
#define Cyr_d    0xe3
#define Cyr_f    0xe4
#define Cyr_c    0xe5
#define Cyr_schtsch 0xe6
#endif


 #ifndef LCD_ST_TYPE
 // it is no graphical display,  use ASCII replacements for special characters
 #define A_acute        'A'
 #define a_acute        'a'
 #define a_acute        'a'
 #define A_uml          'A'
 #define a_uml          'a'
 #define a_e            'a'
 #define A_ogonek       'A'
 #define a_ogonek       'a'
 #define C_acute        'C'
 #define c_acute        'c'
 #define C_caron        'C'
 #define c_caron        'c'
 #define c_caron        'c'
 #define C_circumflex   'C'
 #define c_circumflex   'c'
 #define D_caron        'D'
 #define d_caron        'd'
 #define D_uml          'D'
 #define d_uml          'd'
 #define E_acute        'E'
 #define e_acute        'e'
 #define E_caron        'E'
 #define e_caron        'e'
 #define E_uml          'E'
 #define e_uml          'e'
 #define E_circumflex	'E'
 #define e_circumflex   'e'
 #define E_ogonek       'E'
 #define e_ogonek       'e'
 #define I_acute        'I'
 #define i_acute        'i'
 #define N_acute        'N'
 #define n_acute        'n'
 #define N_caron        'N'
 #define n_caron        'n'
 #define O_acute        'O'
 #define o_acute        'o'
 #define o_slash        'o'
 #define R_caron        'R'
 #define r_caron        'r'
 #define S_acute        'S'
 #define s_acute        's'
 #define S_caron        'S'
 #define s_caron        's'
 #define s_sharp        's'
 #define T_caron        'T'
 #define t_caron        't'
 #define U_acute        'U'
 #define u_acute        'u'
 #define u_above        'u'
 #define U_uml          'U'
 #define u_uml          'u'
 #define Y_acute        'Y'
 #define y_acute        'y'
 #define Z_acute        'A'
 #define z_acute        'a'
 #define Z_caron        'Z'
 #define z_caron        'z'
 #define Z_dotAbove     'Z'
 #define z_dotAbove     'z'
 // Caractères ASCII de remplacement pour accentues francais
 #define Fr_a_grave     'a'
 #define Fr_a_circ      'a'
 #define Fr_e_acute     'e'
 #define Fr_e_circ      'e'
 #define Fr_e_grave     'e' 

#endif

//defines for the big special "character" set, the graphical symbols
#define ICON_WIDTH 24
#define ICON_HEIGHT 32
#define BJT_NPN 0
#define N_E_IGBT 1
#define N_E_MOS 2
#define N_JFET 3
#define TRIAC 4
#define THYRISTOR 5
#define QUESTION 6
#define INDUCTOR 7
#define RESISTOR 8
#define CAPACITOR 9
#define DIODE_C_A 10
#define DIODES_C_A_C_A 11
#define DIODES_A_C_C_A 12
#define DIODES_C_A_A_C 13
#define RESISTORS 14
// define the positioning bits for lcd_big_icon
#define LCD_UPPER_LEFT 0xC0
#define LCD_UPPER_RIGHT 0x80
#define LCD_LOWER_LEFT 0x40
#define LCD_LOWER_RIGHT 0x00
/* ****************************** EOF ***************************************** */
