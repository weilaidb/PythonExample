#define BITSTREAM_READER_LE
#define FORMAT_SIMPLE    1
#define FORMAT_ENCRYPTED 2
typedef struct TTAContext  TTAContext;
static const int64_t tta_channel_layouts[7] = ;
static int tta_check_crc(TTAContext *s, const uint8_t *buf, int buf_size)
static uint64_t tta_check_crc64(uint8_t *pass)
static int allocate_buffers(AVCodecContext *avctx)
static av_cold int tta_decode_init(AVCodecContext * avctx)
static int tta_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static int init_thread_copy(AVCodecContext *avctx)
static av_cold int tta_decode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(TTAContext, x)
#define DEC (AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM)
static const AVOption options[] = ;
static const AVClass tta_decoder_class = ;
AVCodec ff_tta_decoder = ;
