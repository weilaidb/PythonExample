#if !HIGH_BIT_DEPTH
#define transpose4x16(r0, r1, r2, r3)        \
static inline void write16x4( uint8_t *dst, int dst_stride,
register vec_u8_t r0, register vec_u8_t r1,
register vec_u8_t r2, register vec_u8_t r3 )
#define read_and_transpose16x6(src, src_stride, r8, r9, r10, r11, r12, r13)\
static inline vec_u8_t diff_lt_altivec( register vec_u8_t x, register vec_u8_t y, register vec_u8_t a )
static inline vec_u8_t h264_deblock_mask( register vec_u8_t p0, register vec_u8_t p1, register vec_u8_t q0,
register vec_u8_t q1, register vec_u8_t alpha, register vec_u8_t beta )
static inline vec_u8_t h264_deblock_q1( register vec_u8_t p0, register vec_u8_t p1, register vec_u8_t p2,
register vec_u8_t q0, register vec_u8_t tc0 )
#define h264_deblock_p0_q0(p0, p1, q0, q1, tc0masked)                                           \
#define h264_loop_filter_luma_altivec(p2, p1, p0, q0, q1, q2, alpha, beta, tc0)              \
void x264_deblock_v_luma_altivec( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
void x264_deblock_h_luma_altivec( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
