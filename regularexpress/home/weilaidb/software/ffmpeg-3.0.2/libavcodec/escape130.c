#define BITSTREAM_READER_LE
typedef struct Escape130Context  Escape130Context;
static const uint8_t offset_table[] = ;
static const int8_t sign_table[64][4] = ;
static const int8_t luma_adjust[] = ;
static const int8_t chroma_adjust[2][8] = ;
static const uint8_t chroma_vals[] = ;
static av_cold int escape130_decode_init(AVCodecContext *avctx)
static av_cold int escape130_decode_close(AVCodecContext *avctx)
static int decode_skip_count(GetBitContext* gb)
static int escape130_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_escape130_decoder = ;
