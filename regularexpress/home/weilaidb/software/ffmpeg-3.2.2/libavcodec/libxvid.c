#if HAVE_UNISTD_H
#if HAVE_IO_H
#define BUFFER_SIZE         1024
#define BUFFER_REMAINING(x) (BUFFER_SIZE - strlen(x))
#define BUFFER_CAT(x)       (&((x)[strlen(x)]))
struct xvid_context ;
struct xvid_ff_pass1 ;
static int xvid_encode_close(AVCodecContext *avctx);
static int xvid_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *picture, int *got_packet);
static int xvid_ff_2pass_create(xvid_plg_create_t *param, void **handle)
static int xvid_ff_2pass_destroy(struct xvid_context *ref,
xvid_plg_destroy_t *param)
static int xvid_ff_2pass_before(struct xvid_context *ref,
xvid_plg_data_t *param)
static int xvid_ff_2pass_after(struct xvid_context *ref,
xvid_plg_data_t *param)
static int xvid_ff_2pass(void *ref, int cmd, void *p1, void *p2)
static int xvid_strip_vol_header(AVCodecContext *avctx, AVPacket *pkt,
unsigned int header_len,
unsigned int frame_len)
static void xvid_correct_framerate(AVCodecContext *avctx)
static av_cold int xvid_encode_init(AVCodecContext *avctx)
static int xvid_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *picture, int *got_packet)
static av_cold int xvid_encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(struct xvid_context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass xvid_class = ;
AVCodec ff_libxvid_encoder = ;
