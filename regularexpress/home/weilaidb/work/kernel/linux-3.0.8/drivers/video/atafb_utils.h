#define _VIDEO_ATAFB_UTILS_H
static inline void *fb_memclear_small(void *s, size_t count)
static inline void *fb_memclear(void *s, size_t count)
static inline void *fb_memset255(void *s, size_t count)
static inline void *fb_memmove(void *d, const void *s, size_t count)
static inline void fast_memmove(char *dst, const char *src, size_t size)
static const u32 four2long[] = ;
static inline void expand8_col2mask(u8 c, u32 m[])
static inline void expand8_2col2mask(u8 fg, u8 bg, u32 fgm[], u32 bgm[])
static inline void fill8_col(u8 *dst, u32 m[])
static inline void fill8_2col(u8 *dst, u8 fg, u8 bg, u32 mask)
static const u32 two2word[] = ;
static inline void expand16_col2mask(u8 c, u32 m[])
static inline void expand16_2col2mask(u8 fg, u8 bg, u32 fgm[], u32 bgm[])
static inline u32 *fill16_col(u32 *dst, int rows, u32 m[])
static inline void memmove32_col(void *dst, void *src, u32 mask, u32 h, u32 bytes)
