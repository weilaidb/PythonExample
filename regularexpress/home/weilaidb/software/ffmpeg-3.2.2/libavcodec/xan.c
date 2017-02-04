#define BITSTREAM_READER_LE
#define RUNTIME_GAMMA 0
MKTAG
MKTAG
MKTAG
#define PALETTE_COUNT 256
#define PALETTE_SIZE (PALETTE_COUNT * 3)
#define PALETTES_MAX 256
typedef struct XanContext  XanContext;
xan_decode_end
xan_decode_init
xan_huffman_decode
xan_unpack
xan_wc3_output_pixel_run
xan_wc3_copy_pixel_run
xan_wc3_decode_frame
#if RUNTIME_GAMMA
mul
pow4
pow5
gamma_corr
static const uint8_t gamma_lookup[256] = ;
xan_decode_frame
AVCodec ff_xan_wc3_decoder = ;
