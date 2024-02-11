/* ************************************************************************
 *
 *   alternative 30x32 component symbols #1
 *   horizontally aligned, horizontal bit order flipped
 *
 *   (c) 2015-2023 by Markus Reschke
 *   modified by indman@EEVblog
 *
 * ************************************************************************ */


/* ************************************************************************
 *   symbol data
 * ************************************************************************ */

#ifdef SYMBOLS_30X32_ALT1_HF


/* source management */
#define SYMBOL_SET                 /* symbol set included */

/* symbol size */
#define SYMBOL_SIZE_X       30     /* width:  30 dots */
#define SYMBOL_SIZE_Y       32     /* height: 32 dots */

/* symbol data format */
#define SYMBOL_BYTES_N     128     /* 128 bytes per symbol */
#define SYMBOL_BYTES_X       4     /* 4 bytes in x direction */
#define SYMBOL_BYTES_Y      32     /* 32 bytes in y direction */


/*
 *  symbol bitmaps
 *  - format:
 *    - 128 bytes per symbol
 *    - first four bytes: first horizontal line (top to down)
 *      first byte: left part
 *    - bit #0: left / bit #7: right (horizontally flipped)
 */

const uint8_t SymbolData[] PROGMEM = {
  0x00,0x00,0xE0,0x10,0x00,0x00,0x10,0x11,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,
  0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x11,0x00,0x00,0xE0,0x08,0x78,0x00,0x00,0x04,
  0x88,0x00,0x04,0x02,0x88,0x00,0x04,0x01,0x78,0x00,0x84,0x00,0x88,0x00,0x44,0x00,
  0x88,0x00,0x24,0x00,0x78,0x00,0x14,0x00,0x00,0x00,0x0C,0x00,0xFC,0xFF,0x07,0x00,
  0x00,0x00,0x0C,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x24,0x02,0x00,0x00,0x44,0x02,
  0x00,0x00,0x84,0x02,0x00,0x00,0x04,0x03,0x00,0x00,0xE4,0x03,0x00,0x00,0x00,0x04,
  0x00,0x00,0xF0,0x09,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0xF0,0x10,
  0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0xF0,0x11,0x00,0x00,0x00,0x00,   /* BJT npn */

  0x00,0x00,0xF0,0x11,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0xF0,0x10,
  0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,0x00,0x00,0xF0,0x09,0x78,0x00,0x00,0x04,
  0x88,0x00,0x24,0x02,0x88,0x00,0x24,0x01,0x78,0x00,0xA4,0x00,0x88,0x00,0x64,0x00,
  0x88,0x00,0xE4,0x03,0x78,0x00,0x14,0x00,0x00,0x00,0x0C,0x00,0xFC,0xFF,0x07,0x00,
  0x00,0x00,0x0C,0x00,0x00,0x00,0x14,0x00,0x00,0x00,0x24,0x00,0x00,0x00,0x44,0x00,
  0x00,0x00,0x84,0x00,0x00,0x00,0x04,0x01,0x00,0x00,0x04,0x02,0x00,0x00,0x00,0x04,
  0x00,0x00,0xE0,0x08,0x00,0x00,0x10,0x11,0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x10,
  0x00,0x00,0x10,0x10,0x00,0x00,0x10,0x11,0x00,0x00,0xE0,0x10,0x00,0x00,0x00,0x00,   /* BJT pnp */

  0x00,0x00,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x14,0xE0,0x10,0x00,0x14,0x00,0x10,
  0x00,0xF4,0xFF,0x1F,0x00,0x14,0x00,0x02,0x00,0x14,0x00,0x02,0x00,0x04,0x00,0x02,
  0x00,0x04,0x01,0x02,0x00,0x94,0x00,0x02,0x00,0x54,0xC0,0x1F,0x00,0xF4,0x0F,0x02,
  0x38,0x54,0x08,0x05,0x44,0x94,0x88,0x08,0x04,0x04,0xC9,0x1F,0x64,0x04,0x08,0x02,
  0x44,0x14,0x08,0x02,0x44,0x14,0x08,0x02,0x38,0xF4,0xFF,0x1F,0x00,0x14,0x00,0x10,
  0xFE,0x17,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0x00,0x00,0xC0,0x11,0x00,0x00,0x00,0x00,   /* MOSFET enh n-ch */

  0x00,0x00,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0xFE,0x17,0xC0,0x11,0x00,0x14,0x00,0x10,
  0x38,0xF4,0xFF,0x1F,0x44,0x14,0x08,0x02,0x04,0x14,0x08,0x02,0x64,0x04,0x08,0x02,
  0x44,0x84,0x08,0x02,0x44,0x14,0x09,0x02,0x38,0x14,0xCA,0x1F,0x00,0xF4,0x0F,0x02,
  0x00,0x14,0x02,0x05,0x00,0x14,0x81,0x08,0x00,0x84,0xC0,0x1F,0x00,0x04,0x00,0x02,
  0x00,0x14,0x00,0x02,0x00,0x14,0x00,0x02,0x00,0xF4,0xFF,0x1F,0x00,0x14,0x00,0x10,
  0x00,0x14,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x00,0xE0,0x10,0x00,0x00,0x00,0x00,   /* MOSFET enh p-ch */

  0x00,0x00,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x14,0xE0,0x10,0x00,0x14,0x00,0x10,
  0x00,0xF4,0xFF,0x1F,0x00,0x14,0x00,0x02,0x00,0x14,0x00,0x02,0x00,0x14,0x00,0x02,
  0x00,0x14,0x01,0x02,0x00,0x94,0x00,0x02,0x00,0x54,0xC0,0x1F,0x00,0xF4,0x0F,0x02,
  0x38,0x54,0x08,0x05,0x44,0x94,0x88,0x08,0x04,0x14,0xC9,0x1F,0x64,0x14,0x08,0x02,
  0x44,0x14,0x08,0x02,0x44,0x14,0x08,0x02,0x38,0xF4,0xFF,0x1F,0x00,0x14,0x00,0x10,
  0xFE,0x17,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0x00,0x00,0xC0,0x11,0x00,0x00,0x00,0x00,   /* MOSFET dep n-ch */

  0x00,0x00,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0xFE,0x17,0xC0,0x11,0x00,0x14,0x00,0x10,
  0x38,0xF4,0xFF,0x1F,0x44,0x14,0x08,0x02,0x04,0x14,0x08,0x02,0x64,0x14,0x08,0x02,
  0x44,0x54,0x08,0x02,0x44,0x94,0x08,0x02,0x38,0x14,0xC9,0x1F,0x00,0xF4,0x0F,0x02,
  0x00,0x14,0x01,0x05,0x00,0x94,0x80,0x08,0x00,0x54,0xC0,0x1F,0x00,0x14,0x00,0x02,
  0x00,0x14,0x00,0x02,0x00,0x14,0x00,0x02,0x00,0xF4,0xFF,0x1F,0x00,0x14,0x00,0x10,
  0x00,0x14,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x00,0xE0,0x10,0x00,0x00,0x00,0x00,   /* MOSFET dep p-ch */

  0x38,0x00,0xC0,0x11,0x44,0x00,0x20,0x12,0x04,0x00,0x20,0x10,0x64,0x00,0xC0,0x11,
  0x44,0x00,0x00,0x12,0x44,0x08,0x20,0x12,0x38,0x10,0xC1,0x11,0x00,0x20,0x01,0x10,
  0xFE,0xFF,0xFF,0x1F,0x00,0x20,0x01,0x00,0x00,0x10,0x01,0x00,0x00,0x08,0x01,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0xFF,0x1F,0x00,0x00,0x01,0x10,
  0x00,0x00,0xE1,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x00,0xE0,0x10,0x00,0x00,0x00,0x00,   /* JFET n-ch */

  0x00,0x00,0xE0,0x10,0x00,0x00,0x20,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x12,
  0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x11,0x00,0x00,0xE1,0x10,0x00,0x00,0x01,0x10,
  0x00,0x00,0xFF,0x1F,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,
  0x00,0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x38,0x00,0x01,0x00,0x44,0x00,0x01,0x00,
  0x04,0x00,0x01,0x00,0x64,0x00,0x01,0x00,0x44,0x00,0x01,0x00,0x44,0x20,0x01,0x00,
  0x38,0x10,0x01,0x00,0x00,0x08,0x01,0x00,0xFE,0xFF,0xFF,0x1F,0x00,0x08,0x01,0x10,
  0x00,0x10,0xC1,0x11,0x00,0x20,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0xC0,0x11,
  0x00,0x00,0x00,0x12,0x00,0x00,0x20,0x12,0x00,0x00,0xC0,0x11,0x00,0x00,0x00,0x00,   /* JFET p-ch */

  0x00,0x00,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0x20,0x10,
  0x00,0x00,0x20,0x10,0x00,0x00,0x20,0x12,0x00,0x00,0xC0,0x11,0x38,0x00,0x00,0x08,
  0x44,0x00,0x08,0x04,0x04,0x00,0x08,0x02,0x64,0x00,0x08,0x01,0x44,0x00,0x8A,0x00,
  0x44,0x00,0x4A,0x00,0x38,0x00,0x2A,0x00,0x00,0x00,0x1A,0x00,0xFE,0xFF,0x0B,0x00,
  0x00,0x00,0x1A,0x00,0x00,0x00,0x2A,0x00,0x00,0x00,0x4A,0x04,0x00,0x00,0x8A,0x04,
  0x00,0x00,0x08,0x05,0x00,0x00,0x08,0x06,0x00,0x00,0xC8,0x07,0x00,0x00,0x00,0x08,
  0x00,0x00,0xE0,0x13,0x00,0x00,0x20,0x10,0x00,0x00,0x20,0x10,0x00,0x00,0xE0,0x11,
  0x00,0x00,0x20,0x10,0x00,0x00,0x20,0x10,0x00,0x00,0xE0,0x13,0x00,0x00,0x00,0x00,   /* IGBT enh n-ch */

  0x00,0x00,0xE0,0x13,0x00,0x00,0x20,0x10,0x00,0x00,0x20,0x10,0x00,0x00,0xE0,0x11,
  0x00,0x00,0x20,0x10,0x00,0x00,0x20,0x10,0x00,0x00,0xE0,0x13,0x38,0x00,0x00,0x08,
  0x44,0x00,0x48,0x04,0x04,0x00,0x48,0x02,0x64,0x00,0x48,0x01,0x44,0x00,0xCA,0x00,
  0x44,0x00,0xCA,0x07,0x38,0x00,0x2A,0x00,0x00,0x00,0x1A,0x00,0xFE,0xFF,0x0B,0x00,
  0x00,0x00,0x1A,0x00,0x00,0x00,0x2A,0x00,0x00,0x00,0x4A,0x00,0x00,0x00,0x8A,0x00,
  0x00,0x00,0x08,0x01,0x00,0x00,0x08,0x02,0x00,0x00,0x08,0x04,0x00,0x00,0x00,0x08,
  0x00,0x00,0xC0,0x11,0x00,0x00,0x20,0x12,0x00,0x00,0x20,0x10,0x00,0x00,0x20,0x10,
  0x00,0x00,0x20,0x10,0x00,0x00,0x20,0x12,0x00,0x00,0xC0,0x11,0x00,0x00,0x00,0x00,   /* IGBT enh p-ch */

  0x00,0x00,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0xC8,0x07,
  0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0x08,0x00,
  0x00,0x00,0x08,0x00,0x00,0xFC,0xFF,0x1F,0x00,0xF8,0xFF,0x0F,0x00,0xF0,0xFF,0x07,
  0x00,0xE0,0xFF,0x03,0x00,0xC0,0xFF,0x01,0x00,0x80,0xFF,0x00,0x00,0x00,0x7F,0x00,
  0x38,0x00,0x3E,0x00,0x44,0x00,0x1C,0x00,0x04,0x00,0x08,0x00,0x64,0xFC,0xFF,0x1F,
  0x44,0x00,0x0C,0x00,0x44,0x00,0x0A,0x00,0x38,0x00,0x09,0x00,0x00,0x80,0x08,0x00,
  0xFE,0x7F,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x00,0x00,0x00,0x48,0x00,
  0x00,0x00,0x48,0x00,0x00,0x00,0x48,0x04,0x00,0x00,0x88,0x03,0x00,0x00,0x00,0x00,   /* SCR */

  0x00,0x8E,0x09,0x00,0x00,0x51,0x0A,0x00,0x00,0x11,0x0A,0x00,0x00,0x1F,0x09,0x00,
  0x00,0x91,0x08,0x00,0x00,0x51,0x08,0x00,0x00,0xD1,0x0B,0x00,0x00,0x00,0x08,0x00,
  0x00,0x00,0x08,0x00,0x00,0xFF,0xFF,0x1F,0x00,0xFE,0x8F,0x00,0x00,0xFE,0xCF,0x01,
  0x00,0xFC,0xC7,0x01,0x00,0xFC,0xE7,0x03,0x00,0xF8,0xE3,0x03,0x00,0xF8,0xF3,0x07,
  0x38,0xF0,0xF1,0x07,0x44,0xF0,0xF9,0x0F,0x04,0xE0,0xF8,0x0F,0x64,0xE0,0xFC,0x1F,
  0x44,0x40,0xFC,0x1F,0x44,0xFE,0xFF,0x3F,0x38,0x20,0x08,0x00,0x00,0x10,0x08,0x00,
  0xFE,0x0F,0xC8,0x11,0x00,0x00,0x28,0x1A,0x00,0x00,0x28,0x12,0x00,0x00,0xE8,0x13,
  0x00,0x00,0x28,0x12,0x00,0x00,0x28,0x12,0x00,0x00,0x28,0x3A,0x00,0x00,0x00,0x00,   /* Triac */

  0x00,0x00,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0xC8,0x07,
  0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0xFE,0xFF,0x48,0x04,0x00,0x00,0x09,0x00,
  0x38,0x00,0x0A,0x00,0x44,0x00,0x0C,0x00,0x04,0xFC,0xFF,0x1F,0x64,0xF8,0xFF,0x0F,
  0x44,0xF0,0xFF,0x07,0x44,0xE0,0xFF,0x03,0x38,0xC0,0xFF,0x01,0x00,0x80,0xFF,0x00,
  0x00,0x00,0x7F,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x1C,0x00,0x00,0x00,0x08,0x00,
  0x00,0xFC,0xFF,0x1F,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,
  0x00,0x00,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x00,0x00,0x00,0x48,0x00,
  0x00,0x00,0x48,0x00,0x00,0x00,0x48,0x04,0x00,0x00,0x88,0x03,0x00,0x00,0x00,0x00,   /* PUT */

  0x00,0x00,0x1E,0x13,0x00,0x00,0xA2,0x14,0x00,0x00,0x22,0x14,0x00,0x00,0x1E,0x12,
  0x00,0x00,0x22,0x11,0x00,0x00,0xA2,0x10,0x3E,0x80,0x9E,0x17,0x40,0x80,0x00,0x10,
  0x80,0x80,0xFF,0x1F,0x00,0x91,0x00,0x00,0x3E,0x92,0x00,0x00,0x02,0x94,0x00,0x00,
  0x02,0x98,0x00,0x00,0x1E,0x9F,0x00,0x00,0x02,0xA0,0x00,0x00,0x02,0xC0,0x00,0x00,
  0x3E,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0xFF,0x1F,0x00,0x80,0x00,0x10,
  0x00,0x80,0x1E,0x11,0x00,0x00,0xA2,0x11,0x00,0x00,0x22,0x11,0x00,0x00,0x1E,0x11,
  0x00,0x00,0x22,0x11,0x00,0x00,0x22,0x11,0x00,0x00,0x9E,0x13,0x00,0x00,0x00,0x00    /* UJT n-type */
     
  #ifdef SYMBOLS_EXTRA
  ,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x01,0x00,
  0x00,0xFC,0x07,0x00,0x00,0xFE,0x0F,0x00,0x00,0x0F,0x1E,0x00,0x00,0x07,0x1C,0x00,
  0x80,0x03,0x38,0x00,0x80,0x03,0x38,0x00,0x80,0x03,0x38,0x00,0x00,0x00,0x38,0x00,
  0x00,0x00,0x1C,0x00,0x00,0x00,0x1E,0x00,0x00,0x00,0x0F,0x00,0x00,0x80,0x07,0x00,
  0x00,0xC0,0x03,0x00,0x00,0xE0,0x01,0x00,0x00,0xF0,0x00,0x00,0x00,0xF0,0x00,0x00,
  0x00,0xF0,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x60,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x60,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* question mark */

  0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x02,0x00,0x00,0x48,0x01,0x00,0x00,0xC8,0x00,
  0x00,0x00,0x48,0x01,0x00,0x00,0x48,0x02,0x00,0x00,0x48,0x04,0x00,0x04,0x08,0x00,
  0x00,0x04,0x08,0x00,0x00,0x04,0x08,0x00,0x00,0xFC,0xFF,0x1F,0x00,0x00,0x08,0x10,
  0x00,0x00,0x1C,0x10,0x00,0x00,0x3E,0x10,0x00,0x00,0x7F,0x00,0x00,0x80,0xFF,0x00,
  0x00,0xC0,0xFF,0x01,0x00,0xE0,0xFF,0x03,0x00,0xF0,0xFF,0x07,0x00,0xF8,0xFF,0x0F,
  0x00,0xFC,0xFF,0x1F,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x08,0x00,
  0x00,0x00,0x88,0x03,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0xC8,0x07,
  0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0x48,0x04,0x00,0x00,0x00,0x00,   /* Zener diode */

  0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0xFF,0x7F,0x00,
  0x00,0x00,0x00,0x00,0xC0,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x01,
  0xC0,0xFF,0xFF,0x01,0xC0,0xFF,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0xFF,0x7F,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,
  0x00,0x80,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,   /* quartz crystal */

  0x00,0x00,0x00,0x11,0x00,0x00,0x00,0x11,0x00,0x00,0xC0,0x17,0x00,0x00,0x00,0x11,
  0x00,0xE0,0x3F,0x11,0x00,0x20,0x20,0x10,0x00,0x3F,0xE0,0x1F,0x00,0x21,0x20,0x10,
  0x00,0xE1,0x3F,0x10,0x1C,0x01,0x00,0x10,0x24,0x01,0x00,0x10,0x44,0xF1,0x3F,0x10,
  0x44,0x11,0x20,0x10,0x44,0x11,0xE0,0x1F,0x24,0x11,0x20,0x00,0x1C,0x11,0x20,0x00,
  0x00,0x11,0x20,0x00,0xFE,0x1F,0x20,0x00,0x00,0x10,0x20,0x00,0x00,0x10,0x20,0x00,
  0x00,0x10,0x20,0x00,0x00,0x10,0xE0,0x1F,0x00,0x10,0x20,0x10,0x00,0xF0,0x3F,0x10,
  0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x10,
  0x00,0x00,0x00,0x10,0x00,0x00,0xC0,0x17,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00    /* OneWire device */
  #endif
};



/*
 *  pin position lookup table
 *  - one byte per pin and 3 bytes (pins) for each symbol
 *  - cross reference for the Semi structure's pins:
 *
 *      BJT         FET         SCR         Triac       IGBT
 *  ------------------------------------------------------------------
 *  A   Base        Gate        Gate        Gate        Gate
 *  B   Collector   Drain       Anode       MT2         Collector
 *  C   Emitter     Source      Cathode     MT1         Emitter
 *
 *      PUT         UJT
 *  ------------------------------------------------------------------
 *  A   Gate        Emitter
 *  B   Anode       B2
 *  C   Cathode     B1
 */

const uint8_t PinTable[] PROGMEM = {
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* BJT npn */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* BJT pnp */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET enh n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* MOSFET dep n-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,      /* MOSFET dep p-ch */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,      /* JFET n-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* JFET p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM,   /* IGBT enh n-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP,   /* IGBT enh p-ch */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,   /* SCR */
  PIN_LEFT | PIN_BOTTOM, PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,   /* Triac */
  PIN_LEFT | PIN_TOP,PIN_RIGHT | PIN_TOP| PIN_ALT_CENTER, PIN_RIGHT | PIN_BOTTOM| PIN_ALT_CENTER,       /* PUT */
  PIN_LEFT | PIN_TOP, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM       /* UJT n-type */
  #ifdef SYMBOLS_EXTRA
  ,
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* question mark */
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* Zener diode */
  PIN_NONE, PIN_NONE, PIN_NONE,                                         /* quartz crystal */
  PIN_LEFT | PIN_CENTER, PIN_RIGHT | PIN_TOP, PIN_RIGHT | PIN_BOTTOM    /* OneWire device */
  #endif
};


#endif

/* ************************************************************************
 *   EOF
 * ************************************************************************ */
