typedef struct Slice  Slice;
typedef enum Prediction  Prediction;
typedef struct HuffEntry  HuffEntry;
typedef struct MagicYUVContext  MagicYUVContext;
static int huff_cmp_len(const void *a, const void *b)
static int huff_build(VLC *vlc, uint8_t *len)
static int magy_decode_slice(AVCodecContext *avctx, void *tdata,
int j, int threadnr)
static int magy_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
#if HAVE_THREADS
static int magy_init_thread_copy(AVCodecContext *avctx)
static av_cold int magy_decode_init(AVCodecContext *avctx)
static av_cold int magy_decode_end(AVCodecContext *avctx)
AVCodec ff_magicyuv_decoder = ;
