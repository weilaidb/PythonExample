#define DRAW_MUL(_a, _b) (((unsigned)(_a)*(_b))/255)
#define DRAW_FASTSETPIXEL(type) \
*pixel = (type) color
#define DRAW_FASTSETPIXEL1 DRAW_FASTSETPIXEL(Uint8)
#define DRAW_FASTSETPIXEL2 DRAW_FASTSETPIXEL(Uint16)
#define DRAW_FASTSETPIXEL4 DRAW_FASTSETPIXEL(Uint32)
#define DRAW_FASTSETPIXELXY(x, y, type, bpp, color) \
*(type *)((Uint8 *)dst->pixels + (y) * dst->pitch \
+ (x) * bpp) = (type) color
#define DRAW_FASTSETPIXELXY1(x, y) DRAW_FASTSETPIXELXY(x, y, Uint8, 1, color)
#define DRAW_FASTSETPIXELXY2(x, y) DRAW_FASTSETPIXELXY(x, y, Uint16, 2, color)
#define DRAW_FASTSETPIXELXY4(x, y) DRAW_FASTSETPIXELXY(x, y, Uint32, 4, color)
#define DRAW_SETPIXEL(setpixel) \
do  while (0)
#define DRAW_SETPIXEL_BLEND(getpixel, setpixel) \
do  while (0)
#define DRAW_SETPIXEL_ADD(getpixel, setpixel) \
do  while (0)
#define DRAW_SETPIXEL_MOD(getpixel, setpixel) \
do  while (0)
#define DRAW_SETPIXELXY(x, y, type, bpp, op) \
do  while (0)
#define DRAW_SETPIXEL_RGB555 \
DRAW_SETPIXEL(RGB555_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_BLEND_RGB555 \
DRAW_SETPIXEL_BLEND(RGB_FROM_RGB555(*pixel, sr, sg, sb), \
RGB555_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_ADD_RGB555 \
DRAW_SETPIXEL_ADD(RGB_FROM_RGB555(*pixel, sr, sg, sb), \
RGB555_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_MOD_RGB555 \
DRAW_SETPIXEL_MOD(RGB_FROM_RGB555(*pixel, sr, sg, sb), \
RGB555_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXELXY_RGB555(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_RGB555)
#define DRAW_SETPIXELXY_BLEND_RGB555(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_BLEND_RGB555)
#define DRAW_SETPIXELXY_ADD_RGB555(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_ADD_RGB555)
#define DRAW_SETPIXELXY_MOD_RGB555(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_MOD_RGB555)
#define DRAW_SETPIXEL_RGB565 \
DRAW_SETPIXEL(RGB565_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_BLEND_RGB565 \
DRAW_SETPIXEL_BLEND(RGB_FROM_RGB565(*pixel, sr, sg, sb), \
RGB565_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_ADD_RGB565 \
DRAW_SETPIXEL_ADD(RGB_FROM_RGB565(*pixel, sr, sg, sb), \
RGB565_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_MOD_RGB565 \
DRAW_SETPIXEL_MOD(RGB_FROM_RGB565(*pixel, sr, sg, sb), \
RGB565_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXELXY_RGB565(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_RGB565)
#define DRAW_SETPIXELXY_BLEND_RGB565(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_BLEND_RGB565)
#define DRAW_SETPIXELXY_ADD_RGB565(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_ADD_RGB565)
#define DRAW_SETPIXELXY_MOD_RGB565(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_MOD_RGB565)
#define DRAW_SETPIXEL_RGB888 \
DRAW_SETPIXEL(RGB888_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_BLEND_RGB888 \
DRAW_SETPIXEL_BLEND(RGB_FROM_RGB888(*pixel, sr, sg, sb), \
RGB888_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_ADD_RGB888 \
DRAW_SETPIXEL_ADD(RGB_FROM_RGB888(*pixel, sr, sg, sb), \
RGB888_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXEL_MOD_RGB888 \
DRAW_SETPIXEL_MOD(RGB_FROM_RGB888(*pixel, sr, sg, sb), \
RGB888_FROM_RGB(*pixel, sr, sg, sb))
#define DRAW_SETPIXELXY_RGB888(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_RGB888)
#define DRAW_SETPIXELXY_BLEND_RGB888(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_BLEND_RGB888)
#define DRAW_SETPIXELXY_ADD_RGB888(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_ADD_RGB888)
#define DRAW_SETPIXELXY_MOD_RGB888(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_MOD_RGB888)
#define DRAW_SETPIXEL_ARGB8888 \
DRAW_SETPIXEL(ARGB8888_FROM_RGBA(*pixel, sr, sg, sb, sa))
#define DRAW_SETPIXEL_BLEND_ARGB8888 \
DRAW_SETPIXEL_BLEND(RGBA_FROM_ARGB8888(*pixel, sr, sg, sb, sa), \
ARGB8888_FROM_RGBA(*pixel, sr, sg, sb, sa))
#define DRAW_SETPIXEL_ADD_ARGB8888 \
DRAW_SETPIXEL_ADD(RGBA_FROM_ARGB8888(*pixel, sr, sg, sb, sa), \
ARGB8888_FROM_RGBA(*pixel, sr, sg, sb, sa))
#define DRAW_SETPIXEL_MOD_ARGB8888 \
DRAW_SETPIXEL_MOD(RGBA_FROM_ARGB8888(*pixel, sr, sg, sb, sa), \
ARGB8888_FROM_RGBA(*pixel, sr, sg, sb, sa))
#define DRAW_SETPIXELXY_ARGB8888(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_ARGB8888)
#define DRAW_SETPIXELXY_BLEND_ARGB8888(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_BLEND_ARGB8888)
#define DRAW_SETPIXELXY_ADD_ARGB8888(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_ADD_ARGB8888)
#define DRAW_SETPIXELXY_MOD_ARGB8888(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_MOD_ARGB8888)
#define DRAW_SETPIXEL_RGB \
DRAW_SETPIXEL(PIXEL_FROM_RGB(*pixel, fmt, sr, sg, sb))
#define DRAW_SETPIXEL_BLEND_RGB \
DRAW_SETPIXEL_BLEND(RGB_FROM_PIXEL(*pixel, fmt, sr, sg, sb), \
PIXEL_FROM_RGB(*pixel, fmt, sr, sg, sb))
#define DRAW_SETPIXEL_ADD_RGB \
DRAW_SETPIXEL_ADD(RGB_FROM_PIXEL(*pixel, fmt, sr, sg, sb), \
PIXEL_FROM_RGB(*pixel, fmt, sr, sg, sb))
#define DRAW_SETPIXEL_MOD_RGB \
DRAW_SETPIXEL_MOD(RGB_FROM_PIXEL(*pixel, fmt, sr, sg, sb), \
PIXEL_FROM_RGB(*pixel, fmt, sr, sg, sb))
#define DRAW_SETPIXELXY2_RGB(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_RGB)
#define DRAW_SETPIXELXY4_RGB(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_RGB)
#define DRAW_SETPIXELXY2_BLEND_RGB(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_BLEND_RGB)
#define DRAW_SETPIXELXY4_BLEND_RGB(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_BLEND_RGB)
#define DRAW_SETPIXELXY2_ADD_RGB(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_ADD_RGB)
#define DRAW_SETPIXELXY4_ADD_RGB(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_ADD_RGB)
#define DRAW_SETPIXELXY2_MOD_RGB(x, y) \
DRAW_SETPIXELXY(x, y, Uint16, 2, DRAW_SETPIXEL_MOD_RGB)
#define DRAW_SETPIXELXY4_MOD_RGB(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_MOD_RGB)
#define DRAW_SETPIXEL_RGBA \
DRAW_SETPIXEL(PIXEL_FROM_RGBA(*pixel, fmt, sr, sg, sb, sa))
#define DRAW_SETPIXEL_BLEND_RGBA \
DRAW_SETPIXEL_BLEND(RGBA_FROM_PIXEL(*pixel, fmt, sr, sg, sb, sa), \
PIXEL_FROM_RGBA(*pixel, fmt, sr, sg, sb, sa))
#define DRAW_SETPIXEL_ADD_RGBA \
DRAW_SETPIXEL_ADD(RGBA_FROM_PIXEL(*pixel, fmt, sr, sg, sb, sa), \
PIXEL_FROM_RGBA(*pixel, fmt, sr, sg, sb, sa))
#define DRAW_SETPIXEL_MOD_RGBA \
DRAW_SETPIXEL_MOD(RGBA_FROM_PIXEL(*pixel, fmt, sr, sg, sb, sa), \
PIXEL_FROM_RGBA(*pixel, fmt, sr, sg, sb, sa))
#define DRAW_SETPIXELXY4_RGBA(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_RGBA)
#define DRAW_SETPIXELXY4_BLEND_RGBA(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_BLEND_RGBA)
#define DRAW_SETPIXELXY4_ADD_RGBA(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_ADD_RGBA)
#define DRAW_SETPIXELXY4_MOD_RGBA(x, y) \
DRAW_SETPIXELXY(x, y, Uint32, 4, DRAW_SETPIXEL_MOD_RGBA)
#define ABS(_x) ((_x) < 0 ? -(_x) : (_x))
#define HLINE(type, op, draw_end) \
#define VLINE(type, op, draw_end) \
#define DLINE(type, op, draw_end) \
#define BLINE(x1, y1, x2, y2, op, draw_end) \
#define WULINE(x1, y1, x2, y2, opaque_op, blend_op, draw_end) \
#define AALINE(x1, y1, x2, y2, opaque_op, blend_op, draw_end) \
WULINE(x1, y1, x2, y2, opaque_op, blend_op, draw_end)
#define AALINE(x1, y1, x2, y2, opaque_op, blend_op, draw_end) \
BLINE(x1, y1, x2, y2, opaque_op, draw_end)
#define FILLRECT(type, op) \
do  while (0)
