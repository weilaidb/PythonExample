#if HAVE_YASM
typedef void emu_edge_vfix_func(uint8_t *dst, x86_reg dst_stride,
const uint8_t *src, x86_reg src_stride,
x86_reg start_y, x86_reg end_y, x86_reg bh);
typedef void emu_edge_vvar_func(uint8_t *dst, x86_reg dst_stride,
const uint8_t *src, x86_reg src_stride,
x86_reg start_y, x86_reg end_y, x86_reg bh,
x86_reg w);
extern emu_edge_vfix_func ff_emu_edge_vfix1_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix2_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix3_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix4_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix5_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix6_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix7_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix8_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix9_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix10_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix11_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix12_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix13_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix14_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix15_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix16_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix17_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix18_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix19_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix20_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix21_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix22_mmx;
#if ARCH_X86_32
static emu_edge_vfix_func * const vfixtbl_mmx[22] = ;
extern emu_edge_vvar_func ff_emu_edge_vvar_mmx;
extern emu_edge_vfix_func ff_emu_edge_vfix16_sse;
extern emu_edge_vfix_func ff_emu_edge_vfix17_sse;
extern emu_edge_vfix_func ff_emu_edge_vfix18_sse;
extern emu_edge_vfix_func ff_emu_edge_vfix19_sse;
extern emu_edge_vfix_func ff_emu_edge_vfix20_sse;
extern emu_edge_vfix_func ff_emu_edge_vfix21_sse;
extern emu_edge_vfix_func ff_emu_edge_vfix22_sse;
static emu_edge_vfix_func * const vfixtbl_sse[22] = ;
extern emu_edge_vvar_func ff_emu_edge_vvar_sse;
typedef void emu_edge_hfix_func(uint8_t *dst, x86_reg dst_stride,
x86_reg start_x, x86_reg bh);
typedef void emu_edge_hvar_func(uint8_t *dst, x86_reg dst_stride,
x86_reg start_x, x86_reg n_words, x86_reg bh);
extern emu_edge_hfix_func ff_emu_edge_hfix2_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix4_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix6_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix8_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix10_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix12_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix14_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix16_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix18_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix20_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix22_mmx;
#if ARCH_X86_32
static emu_edge_hfix_func * const hfixtbl_mmx[11] = ;
extern emu_edge_hvar_func ff_emu_edge_hvar_mmx;
extern emu_edge_hfix_func ff_emu_edge_hfix16_sse2;
extern emu_edge_hfix_func ff_emu_edge_hfix18_sse2;
extern emu_edge_hfix_func ff_emu_edge_hfix20_sse2;
extern emu_edge_hfix_func ff_emu_edge_hfix22_sse2;
static emu_edge_hfix_func * const hfixtbl_sse2[11] = ;
extern emu_edge_hvar_func ff_emu_edge_hvar_sse2;
#if HAVE_AVX2_EXTERNAL
extern emu_edge_hfix_func ff_emu_edge_hfix8_avx2;
extern emu_edge_hfix_func ff_emu_edge_hfix10_avx2;
extern emu_edge_hfix_func ff_emu_edge_hfix12_avx2;
extern emu_edge_hfix_func ff_emu_edge_hfix14_avx2;
extern emu_edge_hfix_func ff_emu_edge_hfix16_avx2;
extern emu_edge_hfix_func ff_emu_edge_hfix18_avx2;
extern emu_edge_hfix_func ff_emu_edge_hfix20_avx2;
extern emu_edge_hfix_func ff_emu_edge_hfix22_avx2;
static emu_edge_hfix_func * const hfixtbl_avx2[11] = ;
extern emu_edge_hvar_func ff_emu_edge_hvar_avx2;
static av_always_inline void emulated_edge_mc(uint8_t *dst, const uint8_t *src,
ptrdiff_t dst_stride,
ptrdiff_t src_stride,
x86_reg block_w, x86_reg block_h,
x86_reg src_x, x86_reg src_y,
x86_reg w, x86_reg h,
emu_edge_vfix_func * const *vfix_tbl,
emu_edge_vvar_func *v_extend_var,
emu_edge_hfix_func * const *hfix_tbl,
emu_edge_hvar_func *h_extend_var)
#if ARCH_X86_32
static av_noinline void emulated_edge_mc_mmx(uint8_t *buf, const uint8_t *src,
ptrdiff_t buf_stride,
ptrdiff_t src_stride,
int block_w, int block_h,
int src_x, int src_y, int w, int h)
static av_noinline void emulated_edge_mc_sse(uint8_t *buf, const uint8_t *src,
ptrdiff_t buf_stride,
ptrdiff_t src_stride,
int block_w, int block_h,
int src_x, int src_y, int w, int h)
static av_noinline void emulated_edge_mc_sse2(uint8_t *buf, const uint8_t *src,
ptrdiff_t buf_stride,
ptrdiff_t src_stride,
int block_w, int block_h,
int src_x, int src_y, int w,
int h)
#if HAVE_AVX2_EXTERNAL
static av_noinline void emulated_edge_mc_avx2(uint8_t *buf, const uint8_t *src,
ptrdiff_t buf_stride,
ptrdiff_t src_stride,
int block_w, int block_h,
int src_x, int src_y, int w,
int h)
void ff_prefetch_mmxext(uint8_t *buf, ptrdiff_t stride, int h);
void ff_prefetch_3dnow(uint8_t *buf, ptrdiff_t stride, int h);
av_cold void ff_videodsp_init_x86(VideoDSPContext *ctx, int bpc)
