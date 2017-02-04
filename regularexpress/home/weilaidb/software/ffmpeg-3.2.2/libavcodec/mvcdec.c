typedef struct MvcContext  MvcContext;
mvc_decode_init
decode_mvc1
set_4x4_block
PIX32                                            \
AV_WN32A(dst, (mask & target) ? v[true] : v[false]);                      \
dst += 4;
ROW32                                            \
dst = dst_start + (y + row) * linesize + x * 4;                           \
PIX32(1 << (row * 4), a1, a0)                                             \
PIX32(1 << (row * 4 + 1), a1, a0)                                         \
PIX32(1 << (row * 4 + 2), b1, b0)                                         \
PIX32(1 << (row * 4 + 3), b1, b0)
#define MVC2_BLOCK                                                            \
ROW32(0, 1, 0, 3, 2);                                                     \
ROW32(1, 1, 0, 3, 2);                                                     \
ROW32(2, 5, 4, 7, 6);                                                     \
ROW32(3, 5, 4, 7, 6);
decode_mvc2
mvc_decode_frame
#if CONFIG_MVC1_DECODER
AVCodec ff_mvc1_decoder = ;
#if CONFIG_MVC2_DECODER
AVCodec ff_mvc2_decoder = ;
