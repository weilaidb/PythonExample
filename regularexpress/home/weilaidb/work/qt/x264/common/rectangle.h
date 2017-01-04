static ALWAYS_INLINE void x264_macroblock_cache_rect( void *dst, int w, int h, int s, uint32_t v )
extern void (*x264_cache_mv_func_table[10])(void *, uint32_t);\
extern void (*x264_cache_mvd_func_table[10])(void *, uint32_t);\
extern void (*x264_cache_ref_func_table[10])(void *, uint32_t);\
#define x264_macroblock_cache_mv_ptr( a, x, y, w, h, l, mv ) x264_macroblock_cache_mv( a, x, y, w, h, l, M32( mv ) )
static ALWAYS_INLINE void x264_macroblock_cache_mv( x264_t *h, int x, int y, int width, int height, int i_list, uint32_t mv )
static ALWAYS_INLINE void x264_macroblock_cache_mvd( x264_t *h, int x, int y, int width, int height, int i_list, uint16_t mvd )
static ALWAYS_INLINE void x264_macroblock_cache_ref( x264_t *h, int x, int y, int width, int height, int i_list, uint8_t ref )
static ALWAYS_INLINE void x264_macroblock_cache_skip( x264_t *h, int x, int y, int width, int height, int b_skip )
static ALWAYS_INLINE void x264_macroblock_cache_intra8x8_pred( x264_t *h, int x, int y, int i_mode )
