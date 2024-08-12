#ifndef _INCLUDE_FONT_
#define _INCLUDE_FONT_

#define FONT_HEIGHT 16
#define FONT_WIDTH 8

const unsigned char font8x16[95][16] = {
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
  {0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x00}, // '!'
  {0x6c, 0x6c, 0x6c, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // '"'
  {0x00, 0x24, 0x24, 0x24, 0x24, 0x24, 0x7e, 0x24, 0x24, 0x7e, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00}, // '#'
  {0x00, 0x18, 0x18, 0x3c, 0x42, 0x40, 0x40, 0x40, 0x3c, 0x02, 0x02, 0x42, 0x3c, 0x18, 0x18, 0x00}, // '$'
  {0x00, 0x02, 0x02, 0x3a, 0x2c, 0x3c, 0x04, 0x08, 0x08, 0x08, 0x10, 0x1e, 0x1a, 0x2e, 0x20, 0x00}, // '%'
  {0x00, 0x18, 0x24, 0x24, 0x24, 0x24, 0x18, 0x30, 0x4a, 0x4a, 0x46, 0x46, 0x42, 0x46, 0x3a, 0x00}, // '&'
  {0x18, 0x18, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // '''
  {0x00, 0x06, 0x08, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x10, 0x08, 0x06, 0x00}, // '('
  {0x00, 0x60, 0x10, 0x08, 0x04, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x08, 0x10, 0x60, 0x00}, // ')'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x5a, 0x3c, 0x3c, 0x5a, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00}, // '*'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00}, // '+'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x08, 0x08, 0x00}, // ','
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // '_'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00}, // '.'
  {0x00, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x10, 0x10, 0x10, 0x20, 0x20, 0x00}, // '/'
  {0x00, 0x3c, 0x24, 0x46, 0x46, 0x4a, 0x4a, 0x4a, 0x4a, 0x52, 0x52, 0x52, 0x62, 0x24, 0x3c, 0x00}, // '0'
  {0x00, 0x08, 0x18, 0x28, 0x48, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x7e, 0x00}, // '1'
  {0x00, 0x18, 0x24, 0x42, 0x02, 0x04, 0x04, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x7e, 0x00}, // '2'
  {0x00, 0x3c, 0x42, 0x42, 0x02, 0x02, 0x02, 0x1c, 0x02, 0x02, 0x02, 0x02, 0x42, 0x42, 0x3c, 0x00}, // '3'
  {0x00, 0x0c, 0x0c, 0x14, 0x14, 0x24, 0x24, 0x44, 0x44, 0x44, 0x7e, 0x04, 0x04, 0x04, 0x04, 0x00}, // '4'
  {0x00, 0x7e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7c, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x7c, 0x00}, // '5'
  {0x00, 0x3e, 0x44, 0x42, 0x40, 0x40, 0x44, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00}, // '6'
  {0x00, 0x7e, 0x02, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x10, 0x20, 0x20, 0x40, 0x40, 0x40, 0x00}, // '7'
  {0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00}, // '8'
  {0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x7c, 0x00}, // '9'
  {0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00}, // ':'
  {0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x08, 0x08, 0x00, 0x00}, // ';'
  {0x00, 0x00, 0x00, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00, 0x00}, // '<'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00}, // '='
  {0x00, 0x00, 0x00, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x00, 0x00}, // '>'
  {0x00, 0x3c, 0x42, 0x42, 0x02, 0x02, 0x02, 0x1c, 0x20, 0x20, 0x20, 0x20, 0x00, 0x20, 0x20, 0x00}, // '?'
  {0x00, 0x00, 0x00, 0x7c, 0x82, 0x92, 0x9a, 0xaa, 0x9a, 0x84, 0x80, 0x7c, 0x00, 0x00, 0x00, 0x00}, // '@'
  {0x00, 0x18, 0x18, 0x24, 0x24, 0x24, 0x42, 0x42, 0x7e, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00}, // 'A'
  {0x00, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7c, 0x00}, // 'B'
  {0x00, 0x3e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3e, 0x00}, // 'C'
  {0x00, 0x7c, 0x44, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x44, 0x7c, 0x00}, // 'D'
  {0x00, 0x3e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3e, 0x00}, // 'E'
  {0x00, 0x7e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00}, // 'F'
  {0x00, 0x3e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x4e, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3e, 0x00}, // 'G'
  {0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7e, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00}, // 'H'
  {0x00, 0x7e, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7e, 0x00}, // 'I'
  {0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x7c, 0x00}, // 'J'
  {0x00, 0x44, 0x44, 0x48, 0x48, 0x50, 0x50, 0x60, 0x50, 0x50, 0x48, 0x48, 0x44, 0x44, 0x42, 0x00}, // 'K'
  {0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7e, 0x00}, // 'L'
  {0x00, 0x42, 0x66, 0x66, 0x66, 0x5a, 0x5a, 0x5a, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00}, // 'M'
  {0x00, 0x42, 0x42, 0x62, 0x62, 0x62, 0x52, 0x52, 0x52, 0x4a, 0x4a, 0x4a, 0x46, 0x46, 0x46, 0x00}, // 'N'
  {0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00}, // 'O'
  {0x00, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7c, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00}, // 'P'
  {0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x08, 0x08, 0x04}, // 'Q'
  {0x00, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7c, 0x60, 0x50, 0x50, 0x48, 0x44, 0x44, 0x42, 0x00}, // 'R'
  {0x00, 0x3c, 0x42, 0x42, 0x40, 0x40, 0x40, 0x3c, 0x02, 0x02, 0x02, 0x02, 0x42, 0x42, 0x3c, 0x00}, // 'S'
  {0x00, 0x7e, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00}, // 'T'
  {0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00}, // 'U'
  {0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x24, 0x24, 0x18, 0x18, 0x00}, // 'V'
  {0x00, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x6c, 0x00}, // 'W'
  {0x00, 0x42, 0x42, 0x24, 0x24, 0x24, 0x18, 0x18, 0x18, 0x24, 0x24, 0x24, 0x42, 0x42, 0x42, 0x00}, // 'X'
  {0x00, 0x22, 0x22, 0x22, 0x14, 0x14, 0x14, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00}, // 'Y'
  {0x00, 0x7c, 0x02, 0x02, 0x04, 0x04, 0x04, 0x08, 0x08, 0x08, 0x10, 0x10, 0x10, 0x20, 0x7c, 0x00}, // 'Z'
  {0x00, 0x7c, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x7c, 0x00}, // '['
  {0x00, 0x40, 0x40, 0x40, 0x20, 0x20, 0x20, 0x10, 0x10, 0x10, 0x08, 0x08, 0x08, 0x04, 0x04, 0x00}, // '\'
  {0x00, 0x3e, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3e, 0x00}, // ']'
  {0x00, 0x10, 0x28, 0x28, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // '^'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00}, // '_'
  {0x00, 0x20, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}, // '`'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x02, 0x02, 0x02, 0x3e, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00}, // 'a'
  {0x00, 0x40, 0x40, 0x40, 0x40, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00}, // 'b'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x3e, 0x00}, // 'c'
  {0x00, 0x02, 0x02, 0x02, 0x02, 0x3e, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3e, 0x00}, // 'd'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x42, 0x42, 0x42, 0x7e, 0x40, 0x40, 0x40, 0x40, 0x3e, 0x00}, // 'e'
  {0x00, 0x1e, 0x20, 0x20, 0x20, 0x7e, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00}, // 'f'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3e, 0x02, 0x02, 0x02, 0x7c}, // 'g'
  {0x00, 0x40, 0x40, 0x40, 0x40, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00}, // 'h'
  {0x00, 0x00, 0x00, 0x30, 0x00, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7e, 0x00}, // 'i'
  {0x00, 0x00, 0x00, 0x18, 0x00, 0x38, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x70}, // 'j'
  {0x00, 0x40, 0x40, 0x40, 0x48, 0x48, 0x50, 0x50, 0x60, 0x60, 0x50, 0x50, 0x48, 0x48, 0x44, 0x00}, // 'k'
  {0x00, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7e, 0x00}, // 'l'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x00}, // 'm'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x00}, // 'n'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00}, // 'o'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x7c, 0x40, 0x40, 0x40, 0x40}, // 'p'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3e, 0x02, 0x02, 0x02, 0x02}, // 'q'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x5c, 0x62, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x00}, // 'r'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x40, 0x40, 0x40, 0x3c, 0x02, 0x02, 0x02, 0x02, 0x3c, 0x00}, // 's'
  {0x00, 0x10, 0x10, 0x10, 0x10, 0x7e, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0e, 0x00}, // 't'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x3c, 0x00}, // 'u'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x42, 0x42, 0x42, 0x24, 0x24, 0x24, 0x18, 0x18, 0x00}, // 'v'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x6c, 0x00}, // 'W'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x24, 0x24, 0x18, 0x24, 0x24, 0x42, 0x42, 0x00, 0x00}, // 'x'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x42, 0x42, 0x24, 0x24, 0x18, 0x08, 0x08, 0x08, 0x08, 0x70, 0x00}, // 'y'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x02, 0x04, 0x04, 0x08, 0x08, 0x10, 0x20, 0x40, 0x7e, 0x00}, // 'z'
  {0x00, 0x0e, 0x10, 0x10, 0x10, 0x10, 0x10, 0x70, 0x70, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0e, 0x00}, // '{'
  {0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x00}, // '|'
  {0x00, 0x70, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0e, 0x0e, 0x08, 0x08, 0x08, 0x08, 0x08, 0x70, 0x00}, // '}'
  {0x00, 0x00, 0x00, 0x00, 0x00, 0x64, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}  // '~'
};

#endif
