#define AVCODEC_INTERNAL_H
#define FF_CODEC_CAP_INIT_THREADSAFE        (1 << 0)
#define FF_CODEC_CAP_INIT_CLEANUP           (1 << 1)
#define FF_CODEC_CAP_SETS_PKT_DTS           (1 << 2)
#define FF_CODEC_CAP_SKIP_FRAME_FILL_PARAM  (1 << 3)
#   define ff_tlog(ctx, ...) av_log(ctx, AV_LOG_TRACE, __VA_ARGS__)
#   define ff_tlog(ctx, ...) do  while(0)
#if !FF_API_QUANT_BIAS
#define FF_DEFAULT_QUANT_BIAS 999999
#define FF_SANE_NB_CHANNELS 64U
#define FF_SIGNBIT(x) ((x) >> CHAR_BIT * sizeof(x) - 1)
#if HAVE_AVX
#   define STRIDE_ALIGN 32
#elif HAVE_SIMD_ALIGN_16
#   define STRIDE_ALIGN 16
#   define STRIDE_ALIGN 8
typedef struct FramePool  FramePool;
typedef struct AVCodecInternal  AVCodecInternal;
struct AVCodecDefault ;
extern const uint8_t ff_log2_run[41];
int ff_match_2uint16(const uint16_t (*tab)[2], int size, int a, int b);
unsigned int avpriv_toupper4(unsigned int x);
int ff_init_buffer_info(AVCodecContext *s, AVFrame *frame);
void ff_color_frame(AVFrame *frame, const int color[4]);
extern volatile int ff_avcodec_locked;
int ff_lock_avcodec(AVCodecContext *log_ctx, const AVCodec *codec);
int ff_unlock_avcodec(const AVCodec *codec);
int avpriv_lock_avformat(void);
int avpriv_unlock_avformat(void);
#define FF_MAX_EXTRADATA_SIZE ((1 << 28) - AV_INPUT_BUFFER_PADDING_SIZE)
int ff_alloc_packet2(AVCodecContext *avctx, AVPacket *avpkt, int64_t size, int64_t min_size);
attribute_deprecated int ff_alloc_packet(AVPacket *avpkt, int size);
static av_always_inline int64_t ff_samples_to_time_base(AVCodecContext *avctx,
int64_t samples)
static av_always_inline float ff_exp2fi(int x)
int ff_get_buffer(AVCodecContext *avctx, AVFrame *frame, int flags);
int ff_reget_buffer(AVCodecContext *avctx, AVFrame *frame);
int ff_thread_can_start_frame(AVCodecContext *avctx);
int avpriv_h264_has_num_reorder_frames(AVCodecContext *avctx);
int ff_codec_open2_recursive(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options);
int avpriv_bprint_to_extradata(AVCodecContext *avctx, struct AVBPrint *buf);
const uint8_t *avpriv_find_start_code(const uint8_t *p,
const uint8_t *end,
uint32_t *state);
int avpriv_codec_get_cap_skip_frame_fill_param(const AVCodec *codec);
int ff_set_dimensions(AVCodecContext *s, int width, int height);
int ff_set_sar(AVCodecContext *avctx, AVRational sar);
int ff_side_data_update_matrix_encoding(AVFrame *frame,
enum AVMatrixEncoding matrix_encoding);
int ff_get_format(AVCodecContext *avctx, const enum AVPixelFormat *fmt);
int ff_decode_frame_props(AVCodecContext *avctx, AVFrame *frame);
AVCPBProperties *ff_add_cpb_side_data(AVCodecContext *avctx);
int ff_side_data_set_encoder_stats(AVPacket *pkt, int quality, int64_t *error, int error_count, int pict_type);
int ff_alloc_a53_sei(const AVFrame *frame, size_t prefix_len,
void **data, size_t *sei_size);
