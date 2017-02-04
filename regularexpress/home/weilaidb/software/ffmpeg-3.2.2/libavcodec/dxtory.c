#define BITSTREAM_READER_LE
dxtory_decode_v1_rgb
dxtory_decode_v1_410
dxtory_decode_v1_420
dxtory_decode_v1_444
static const uint8_t def_lru[8] = ;
static const uint8_t def_lru_555[8] = ;
static const uint8_t def_lru_565[8] = ;
decode_sym
check_slice_size
load_buffer
decode_sym_565
typedef int (*decode_slice_func)(GetBitContext *gb, AVFrame *frame,
int line, int height, uint8_t lru[3][8]);
typedef void (*setup_lru_func)(uint8_t lru[3][8]);
dxtory_decode_v2
av_always_inline
dx2_decode_slice_5x5
setup_lru_555
setup_lru_565
dx2_decode_slice_555
dx2_decode_slice_565
dxtory_decode_v2_565
dx2_decode_slice_rgb
default_setup_lru
dxtory_decode_v2_rgb
dx2_decode_slice_410
dxtory_decode_v2_410
dx2_decode_slice_420
dxtory_decode_v2_420
dx2_decode_slice_444
dxtory_decode_v2_444
decode_frame
AVCodec ff_dxtory_decoder = ;
