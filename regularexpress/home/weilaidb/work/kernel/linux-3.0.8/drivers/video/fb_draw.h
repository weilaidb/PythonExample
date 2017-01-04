#define _FB_DRAW_H
static inline unsigned long
comp(unsigned long a, unsigned long b, unsigned long mask)
#if BITS_PER_LONG == 64
static inline unsigned long
pixel_to_pat( u32 bpp, u32 pixel)
static inline unsigned long
pixel_to_pat( u32 bpp, u32 pixel)
#if BITS_PER_LONG == 64
#define REV_PIXELS_MASK1 0x5555555555555555ul
#define REV_PIXELS_MASK2 0x3333333333333333ul
#define REV_PIXELS_MASK4 0x0f0f0f0f0f0f0f0ful
#define REV_PIXELS_MASK1 0x55555555ul
#define REV_PIXELS_MASK2 0x33333333ul
#define REV_PIXELS_MASK4 0x0f0f0f0ful
static inline unsigned long fb_rev_pixels_in_long(unsigned long val,
u32 bswapmask)
static inline u32 fb_shifted_pixels_mask_u32(struct fb_info *p, u32 index,
u32 bswapmask)
static inline unsigned long fb_shifted_pixels_mask_long(struct fb_info *p,
u32 index,
u32 bswapmask)
static inline u32 fb_compute_bswapmask(struct fb_info *info)
static inline unsigned long fb_rev_pixels_in_long(unsigned long val,
u32 bswapmask)
#define fb_shifted_pixels_mask_u32(p, i, b) FB_SHIFT_HIGH((p), ~(u32)0, (i))
#define fb_shifted_pixels_mask_long(p, i, b) FB_SHIFT_HIGH((p), ~0UL, (i))
#define fb_compute_bswapmask(...) 0
#define cpu_to_le_long _cpu_to_le_long(BITS_PER_LONG)
#define _cpu_to_le_long(x) __cpu_to_le_long(x)
#define __cpu_to_le_long(x) cpu_to_le##x
#define le_long_to_cpu _le_long_to_cpu(BITS_PER_LONG)
#define _le_long_to_cpu(x) __le_long_to_cpu(x)
#define __le_long_to_cpu(x) le##x##_to_cpu
static inline unsigned long rolx(unsigned long word, unsigned int shift, unsigned int x)
