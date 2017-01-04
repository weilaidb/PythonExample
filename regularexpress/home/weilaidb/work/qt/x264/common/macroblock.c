#define MC_LUMA(list,p) \
h->mc.mc_luma( &h->mb.pic.p_fdec[p][4*y*FDEC_STRIDE+4*x], FDEC_STRIDE, \
&h->mb.pic.p_fref[list][i_ref][p*4], h->mb.pic.i_stride[p], \
mvx, mvy, 4*width, 4*height, \
list ? x264_weight_none : &h->sh.weight[i_ref][p] );
static NOINLINE void x264_mb_mc_0xywh( x264_t *h, int x, int y, int width, int height )
static NOINLINE void x264_mb_mc_1xywh( x264_t *h, int x, int y, int width, int height )
#define MC_LUMA_BI(p) \
src0 = h->mc.get_ref( tmp0, &i_stride0, &h->mb.pic.p_fref[0][i_ref0][p*4], h->mb.pic.i_stride[p], \
mvx0, mvy0, 4*width, 4*height, x264_weight_none ); \
src1 = h->mc.get_ref( tmp1, &i_stride1, &h->mb.pic.p_fref[1][i_ref1][p*4], h->mb.pic.i_stride[p], \
mvx1, mvy1, 4*width, 4*height, x264_weight_none ); \
h->mc.avg[i_mode]( &h->mb.pic.p_fdec[p][4*y*FDEC_STRIDE+4*x], FDEC_STRIDE, \
src0, i_stride0, src1, i_stride1, weight );
static NOINLINE void x264_mb_mc_01xywh( x264_t *h, int x, int y, int width, int height )
#undef MC_LUMA
#undef MC_LUMA_BI
void x264_mb_mc_8x8( x264_t *h, int i8 )
void x264_mb_mc( x264_t *h )
int x264_macroblock_cache_allocate( x264_t *h )
void x264_macroblock_cache_free( x264_t *h )
int x264_macroblock_thread_allocate( x264_t *h, int b_lookahead )
void x264_macroblock_thread_free( x264_t *h, int b_lookahead )
void x264_macroblock_slice_init( x264_t *h )
void x264_macroblock_thread_init( x264_t *h )
void x264_prefetch_fenc( x264_t *h, x264_frame_t *fenc, int i_mb_x, int i_mb_y )
NOINLINE void x264_copy_column8( pixel *dst, pixel *src )
static void ALWAYS_INLINE x264_macroblock_load_pic_pointers( x264_t *h, int mb_x, int mb_y, int i, int b_chroma, int b_mbaff )
static const x264_left_table_t left_indices[4] =
;
static void ALWAYS_INLINE x264_macroblock_cache_load_neighbours( x264_t *h, int mb_x, int mb_y, int b_interlaced )
#define LTOP 0
#if HAVE_INTERLACED
#   define LBOT 1
#   define LBOT 0
static void ALWAYS_INLINE x264_macroblock_cache_load( x264_t *h, int mb_x, int mb_y, int b_mbaff )
void x264_macroblock_cache_load_progressive( x264_t *h, int mb_x, int mb_y )
void x264_macroblock_cache_load_interlaced( x264_t *h, int mb_x, int mb_y )
static void x264_macroblock_deblock_strength_mbaff( x264_t *h, uint8_t (*bs)[8][4] )
void x264_macroblock_deblock_strength( x264_t *h )
static void ALWAYS_INLINE x264_macroblock_store_pic( x264_t *h, int mb_x, int mb_y, int i, int b_chroma, int b_mbaff )
static void ALWAYS_INLINE x264_macroblock_backup_intra( x264_t *h, int mb_x, int mb_y, int b_mbaff )
void x264_macroblock_cache_save( x264_t *h )
void x264_macroblock_bipred_init( x264_t *h )
