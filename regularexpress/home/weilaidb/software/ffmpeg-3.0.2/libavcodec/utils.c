#if CONFIG_ICONV
# include <iconv.h>
const char av_codec_ffversion[] = "FFmpeg version " FFMPEG_VERSION;
#if HAVE_PTHREADS || HAVE_W32THREADS || HAVE_OS2THREADS
static int default_lockmgr_cb(void **arg, enum AVLockOp op)
static int (*lockmgr_cb)(void **mutex, enum AVLockOp op) = default_lockmgr_cb;
static int (*lockmgr_cb)(void **mutex, enum AVLockOp op) = NULL;
volatile int ff_avcodec_locked;
static int volatile entangled_thread_counter = 0;
static void *codec_mutex;
static void *avformat_mutex;
void av_fast_padded_malloc(void *ptr, unsigned int *size, size_t min_size)
void av_fast_padded_mallocz(void *ptr, unsigned int *size, size_t min_size)
static AVCodec *first_avcodec = NULL;
static AVCodec **last_avcodec = &first_avcodec;
AVCodec *av_codec_next(const AVCodec *c)
static av_cold void avcodec_init(void)
int av_codec_is_encoder(const AVCodec *codec)
int av_codec_is_decoder(const AVCodec *codec)
av_cold void avcodec_register(AVCodec *codec)
#if FF_API_EMU_EDGE
unsigned avcodec_get_edge_width(void)
#if FF_API_SET_DIMENSIONS
void avcodec_set_dimensions(AVCodecContext *s, int width, int height)
int ff_set_dimensions(AVCodecContext *s, int width, int height)
int ff_set_sar(AVCodecContext *avctx, AVRational sar)
int ff_side_data_update_matrix_encoding(AVFrame *frame,
enum AVMatrixEncoding matrix_encoding)
void avcodec_align_dimensions2(AVCodecContext *s, int *width, int *height,
int linesize_align[AV_NUM_DATA_POINTERS])
void avcodec_align_dimensions(AVCodecContext *s, int *width, int *height)
int avcodec_enum_to_chroma_pos(int *xpos, int *ypos, enum AVChromaLocation pos)
enum AVChromaLocation avcodec_chroma_pos_to_enum(int xpos, int ypos)
int avcodec_fill_audio_frame(AVFrame *frame, int nb_channels,
enum AVSampleFormat sample_fmt, const uint8_t *buf,
int buf_size, int align)
static int update_frame_pool(AVCodecContext *avctx, AVFrame *frame)
static int audio_get_buffer(AVCodecContext *avctx, AVFrame *frame)
static int video_get_buffer(AVCodecContext *s, AVFrame *pic)
void ff_color_frame(AVFrame *frame, const int c[4])
int avcodec_default_get_buffer2(AVCodecContext *avctx, AVFrame *frame, int flags)
static int add_metadata_from_side_data(AVPacket *avpkt, AVFrame *frame)
int ff_init_buffer_info(AVCodecContext *avctx, AVFrame *frame)
int ff_decode_frame_props(AVCodecContext *avctx, AVFrame *frame)
static int get_buffer_internal(AVCodecContext *avctx, AVFrame *frame, int flags)
int ff_get_buffer(AVCodecContext *avctx, AVFrame *frame, int flags)
static int reget_buffer_internal(AVCodecContext *avctx, AVFrame *frame)
int ff_reget_buffer(AVCodecContext *avctx, AVFrame *frame)
int avcodec_default_execute(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2), void *arg, int *ret, int count, int size)
int avcodec_default_execute2(AVCodecContext *c, int (*func)(AVCodecContext *c2, void *arg2, int jobnr, int threadnr), void *arg, int *ret, int count)
enum AVPixelFormat avpriv_find_pix_fmt(const PixelFormatTag *tags,
unsigned int fourcc)
static int is_hwaccel_pix_fmt(enum AVPixelFormat pix_fmt)
enum AVPixelFormat avcodec_default_get_format(struct AVCodecContext *s, const enum AVPixelFormat *fmt)
static AVHWAccel *find_hwaccel(enum AVCodecID codec_id,
enum AVPixelFormat pix_fmt)
static int setup_hwaccel(AVCodecContext *avctx,
const enum AVPixelFormat fmt,
const char *name)
int ff_get_format(AVCodecContext *avctx, const enum AVPixelFormat *fmt)
MAKE_ACCESSORS(AVCodecContext, codec, AVRational, pkt_timebase)
MAKE_ACCESSORS(AVCodecContext, codec, const AVCodecDescriptor *, codec_descriptor)
MAKE_ACCESSORS(AVCodecContext, codec, int, lowres)
MAKE_ACCESSORS(AVCodecContext, codec, int, seek_preroll)
MAKE_ACCESSORS(AVCodecContext, codec, uint16_t*, chroma_intra_matrix)
unsigned av_codec_get_codec_properties(const AVCodecContext *codec)
int av_codec_get_max_lowres(const AVCodec *codec)
static void get_subtitle_defaults(AVSubtitle *sub)
static int64_t get_bit_rate(AVCodecContext *ctx)
int attribute_align_arg ff_codec_open2_recursive(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options)
int attribute_align_arg avcodec_open2(AVCodecContext *avctx, const AVCodec *codec, AVDictionary **options)
int ff_alloc_packet2(AVCodecContext *avctx, AVPacket *avpkt, int64_t size, int64_t min_size)
int ff_alloc_packet(AVPacket *avpkt, int size)
static int pad_last_frame(AVCodecContext *s, AVFrame **dst, const AVFrame *src)
int attribute_align_arg avcodec_encode_audio2(AVCodecContext *avctx,
AVPacket *avpkt,
const AVFrame *frame,
int *got_packet_ptr)
int attribute_align_arg avcodec_encode_video2(AVCodecContext *avctx,
AVPacket *avpkt,
const AVFrame *frame,
int *got_packet_ptr)
int avcodec_encode_subtitle(AVCodecContext *avctx, uint8_t *buf, int buf_size,
const AVSubtitle *sub)
static int64_t guess_correct_pts(AVCodecContext *ctx,
int64_t reordered_pts, int64_t dts)
static int apply_param_change(AVCodecContext *avctx, AVPacket *avpkt)
static int unrefcount_frame(AVCodecInternal *avci, AVFrame *frame)
int attribute_align_arg avcodec_decode_video2(AVCodecContext *avctx, AVFrame *picture,
int *got_picture_ptr,
const AVPacket *avpkt)
int attribute_align_arg avcodec_decode_audio4(AVCodecContext *avctx,
AVFrame *frame,
int *got_frame_ptr,
const AVPacket *avpkt)
#define UTF8_MAX_BYTES 4
static int recode_subtitle(AVCodecContext *avctx,
AVPacket *outpkt, const AVPacket *inpkt)
static int utf8_check(const uint8_t *str)
int avcodec_decode_subtitle2(AVCodecContext *avctx, AVSubtitle *sub,
int *got_sub_ptr,
AVPacket *avpkt)
void avsubtitle_free(AVSubtitle *sub)
av_cold int avcodec_close(AVCodecContext *avctx)
static enum AVCodecID remap_deprecated_codec_id(enum AVCodecID id)
static AVCodec *find_encdec(enum AVCodecID id, int encoder)
AVCodec *avcodec_find_encoder(enum AVCodecID id)
AVCodec *avcodec_find_encoder_by_name(const char *name)
AVCodec *avcodec_find_decoder(enum AVCodecID id)
AVCodec *avcodec_find_decoder_by_name(const char *name)
const char *avcodec_get_name(enum AVCodecID id)
size_t av_get_codec_tag_string(char *buf, size_t buf_size, unsigned int codec_tag)
void avcodec_string(char *buf, int buf_size, AVCodecContext *enc, int encode)
const char *av_get_profile_name(const AVCodec *codec, int profile)
const char *avcodec_profile_name(enum AVCodecID codec_id, int profile)
unsigned avcodec_version(void)
const char *avcodec_configuration(void)
const char *avcodec_license(void)
void avcodec_flush_buffers(AVCodecContext *avctx)
int av_get_exact_bits_per_sample(enum AVCodecID codec_id)
enum AVCodecID av_get_pcm_codec(enum AVSampleFormat fmt, int be)
int av_get_bits_per_sample(enum AVCodecID codec_id)
int av_get_audio_frame_duration(AVCodecContext *avctx, int frame_bytes)
#if !HAVE_THREADS
int ff_thread_init(AVCodecContext *s)
unsigned int av_xiphlacing(unsigned char *s, unsigned int v)
int ff_match_2uint16(const uint16_t(*tab)[2], int size, int a, int b)
#if FF_API_MISSING_SAMPLE
FF_DISABLE_DEPRECATION_WARNINGS
void av_log_missing_feature(void *avc, const char *feature, int want_sample)
void av_log_ask_for_sample(void *avc, const char *msg, ...)
FF_ENABLE_DEPRECATION_WARNINGS
static AVHWAccel *first_hwaccel = NULL;
static AVHWAccel **last_hwaccel = &first_hwaccel;
void av_register_hwaccel(AVHWAccel *hwaccel)
AVHWAccel *av_hwaccel_next(const AVHWAccel *hwaccel)
int av_lockmgr_register(int (*cb)(void **mutex, enum AVLockOp op))
int ff_lock_avcodec(AVCodecContext *log_ctx, const AVCodec *codec)
int ff_unlock_avcodec(const AVCodec *codec)
int avpriv_lock_avformat(void)
int avpriv_unlock_avformat(void)
unsigned int avpriv_toupper4(unsigned int x)
int ff_thread_ref_frame(ThreadFrame *dst, ThreadFrame *src)
#if !HAVE_THREADS
enum AVPixelFormat ff_thread_get_format(AVCodecContext *avctx, const enum AVPixelFormat *fmt)
int ff_thread_get_buffer(AVCodecContext *avctx, ThreadFrame *f, int flags)
void ff_thread_release_buffer(AVCodecContext *avctx, ThreadFrame *f)
void ff_thread_finish_setup(AVCodecContext *avctx)
void ff_thread_report_progress(ThreadFrame *f, int progress, int field)
void ff_thread_await_progress(ThreadFrame *f, int progress, int field)
int ff_thread_can_start_frame(AVCodecContext *avctx)
int ff_alloc_entries(AVCodecContext *avctx, int count)
void ff_reset_entries(AVCodecContext *avctx)
void ff_thread_await_progress2(AVCodecContext *avctx, int field, int thread, int shift)
void ff_thread_report_progress2(AVCodecContext *avctx, int field, int thread, int n)
int avcodec_is_open(AVCodecContext *s)
int avpriv_bprint_to_extradata(AVCodecContext *avctx, struct AVBPrint *buf)
const uint8_t *avpriv_find_start_code(const uint8_t *av_restrict p,
const uint8_t *end,
uint32_t *av_restrict state)
AVCPBProperties *av_cpb_properties_alloc(size_t *size)
AVCPBProperties *ff_add_cpb_side_data(AVCodecContext *avctx)
