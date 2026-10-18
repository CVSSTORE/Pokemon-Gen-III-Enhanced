#ifndef POKERUBY_CONSTANTS_RGB_H
#define POKERUBY_CONSTANTS_RGB_H

#define GET_R(color) ((color) & 0x1F)
#define GET_G(color) (((color) >> 5) & 0x1F)
#define GET_B(color) (((color) >> 10) & 0x1F)

#define RGB_ALPHA       (1 << 15)
#define IS_ALPHA(color) ((color) & RGB_ALPHA)

#define RGB2(r, g, b) (((b) << 10) | ((g) << 5) | (r))

// RGB_BLACK and RGB_WHITE are already defined in gba/defines.h
#define RGB_RED        RGB2(31, 0, 0)
#define RGB_GREEN      RGB2(0, 31, 0)
#define RGB_BLUE       RGB2(0, 0, 31)
#define RGB_YELLOW     RGB2(31, 31, 0)
#define RGB_MAGENTA    RGB2(31, 0, 31)
#define RGB_CYAN       RGB2(0, 31, 31)

#endif // POKERUBY_CONSTANTS_RGB_H
