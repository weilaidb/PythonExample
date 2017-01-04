#define UNCHECKED_BITSTREAM_READER 1
static int h264_decode_end(AVCodecContext *avctx);
const uint16_t ff_h264_mb_sizes[4] = ;
int avpriv_h264_has_num_reorder_frames(AVCodecContext *avctx)
static void h264_er_decode_mb(void *opaque, int ref, int mv_dir, int mv_type,
int (*mv)[2][4][2],
int mb_x, int mb_y, int mb_intra, int mb_skipped)
void ff_h264_draw_horiz_band(const H264Context *h, H264SliceContext *sl,
int y, int height)
void ff_h264_free_tables(H264Context *h)
int ff_h264_alloc_tables(H264Context *h)
int ff_h264_slice_context_init(H264Context *h, H264SliceContext *sl)
static int h264_init_context(AVCodecContext *avctx, H264Context *h)
static av_cold int h264_decode_end(AVCodecContext *avctx)
static AVOnce h264_vlc_init = AV_ONCE_INIT;
av_cold int ff_h264_decode_init(AVCodecContext *avctx)
#if HAVE_THREADS
static int decode_init_thread_copy(AVCodecContext *avctx)
static void decode_postinit(H264Context *h, int setup_finished)
static void idr(H264Context *h)
void ff_h264_flush_change(H264Context *h)
static void flush_dpb(AVCodecContext *avctx)
#if FF_API_CAP_VDPAU
static const uint8_t start_code[] = ;
static int get_last_needed_nal(H264Context *h)
static void debug_green_metadata(const H264SEIGreenMetaData *gm, void *logctx)
static int decode_nal_units(H264Context *h, const uint8_t *buf, int buf_size)
static int get_consumed_bytes(int pos, int buf_size)
static int output_frame(H264Context *h, AVFrame *dst, H264Picture *srcp)
static int is_extra(const uint8_t *buf, int buf_size)
static int h264_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
#define OFFSET(x) offsetof(H264Context, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption h264_options[] = ;
static const AVClass h264_class = ;
AVCodec ff_h264_decoder = ;
#if CONFIG_H264_VDPAU_DECODER && FF_API_VDPAU
static const AVClass h264_vdpau_class = ;
AVCodec ff_h264_vdpau_decoder = ;
