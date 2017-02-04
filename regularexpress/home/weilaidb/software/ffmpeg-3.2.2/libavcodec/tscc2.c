#define BITSTREAM_READER_LE
typedef struct TSCC2Context  TSCC2Context;
free_vlcs
init_vlcs
DEQUANT (((q) * (val) + 0x80) >> 8)
DCT1D \
OP(d0, 5 * ((s0) + (s1) + (s2)) + 2 * (s3));  \
OP(d1, 5 * ((s0) - (s2) - (s3)) + 2 * (s1));  \
OP(d2, 5 * ((s0) - (s2) + (s3)) - 2 * (s1));  \
OP(d3, 5 * ((s0) - (s1) + (s2)) - 2 * (s3));  \
COL_OP  a = (b)
ROW_OP  a = ((b) + 0x20) >> 6
tscc2_idct4_put
tscc2_decode_mb
tscc2_decode_slice
tscc2_decode_frame
tscc2_decode_end
tscc2_decode_init
AVCodec ff_tscc2_decoder = ;
