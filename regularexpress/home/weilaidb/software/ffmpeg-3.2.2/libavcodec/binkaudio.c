#define BITSTREAM_READER_LE
static float quant_table[96];
#define MAX_CHANNELS 2
#define BINK_BLOCK_MAX_SIZE (MAX_CHANNELS << 11)
typedef struct BinkAudioContext  BinkAudioContext;
static av_cold int decode_init(AVCodecContext *avctx)
static float get_float(GetBitContext *gb)
static const uint8_t rle_length_tab[16] = ;
static int decode_block(BinkAudioContext *s, float **out, int use_dct)
static av_cold int decode_end(AVCodecContext *avctx)
static void get_bits_align32(GetBitContext *s)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_binkaudio_rdft_decoder = ;
AVCodec ff_binkaudio_dct_decoder = ;
