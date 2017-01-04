static int build_vlc(VLC *vlc, const uint8_t *bits_table,
const uint8_t *val_table, int nb_codes,
int use_static, int is_ac)
static void build_basic_mjpeg_vlc(MJpegDecodeContext *s)
static void parse_avid(MJpegDecodeContext *s, uint8_t *buf, int len)
static void init_idct(AVCodecContext *avctx)
av_cold int ff_mjpeg_decode_init(AVCodecContext *avctx)
int ff_mjpeg_decode_dqt(MJpegDecodeContext *s)
int ff_mjpeg_decode_dht(MJpegDecodeContext *s)
int ff_mjpeg_decode_sof(MJpegDecodeContext *s)
static inline int mjpeg_decode_dc(MJpegDecodeContext *s, int dc_index)
static int decode_block(MJpegDecodeContext *s, int16_t *block, int component,
int dc_index, int ac_index, int16_t *quant_matrix)
static int decode_dc_progressive(MJpegDecodeContext *s, int16_t *block,
int component, int dc_index,
int16_t *quant_matrix, int Al)
static int decode_block_progressive(MJpegDecodeContext *s, int16_t *block,
uint8_t *last_nnz, int ac_index,
int16_t *quant_matrix,
int ss, int se, int Al, int *EOBRUN)
#define REFINE_BIT(j)
#define ZERO_RUN                                                    \
for (; ; i++)
static int decode_block_refinement(MJpegDecodeContext *s, int16_t *block,
uint8_t *last_nnz,
int ac_index, int16_t *quant_matrix,
int ss, int se, int Al, int *EOBRUN)
#undef REFINE_BIT
#undef ZERO_RUN
static int handle_rstn(MJpegDecodeContext *s, int nb_components)
static int ljpeg_decode_rgb_scan(MJpegDecodeContext *s, int nb_components, int predictor, int point_transform)
static int ljpeg_decode_yuv_scan(MJpegDecodeContext *s, int predictor,
int point_transform, int nb_components)
static av_always_inline void mjpeg_copy_block(MJpegDecodeContext *s,
uint8_t *dst, const uint8_t *src,
int linesize, int lowres)
static void shift_output(MJpegDecodeContext *s, uint8_t *ptr, int linesize)
static int mjpeg_decode_scan(MJpegDecodeContext *s, int nb_components, int Ah,
int Al, const uint8_t *mb_bitmask,
int mb_bitmask_size,
const AVFrame *reference)
static int mjpeg_decode_scan_progressive_ac(MJpegDecodeContext *s, int ss,
int se, int Ah, int Al)
static void mjpeg_idct_scan_progressive_ac(MJpegDecodeContext *s)
int ff_mjpeg_decode_sos(MJpegDecodeContext *s, const uint8_t *mb_bitmask,
int mb_bitmask_size, const AVFrame *reference)
static int mjpeg_decode_dri(MJpegDecodeContext *s)
static int mjpeg_decode_app(MJpegDecodeContext *s)
static int mjpeg_decode_com(MJpegDecodeContext *s)
static int find_marker(const uint8_t **pbuf_ptr, const uint8_t *buf_end)
int ff_mjpeg_find_marker(MJpegDecodeContext *s,
const uint8_t **buf_ptr, const uint8_t *buf_end,
const uint8_t **unescaped_buf_ptr,
int *unescaped_buf_size)
int ff_mjpeg_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
av_cold int ff_mjpeg_decode_end(AVCodecContext *avctx)
static void decode_flush(AVCodecContext *avctx)
#if CONFIG_MJPEG_DECODER
#define OFFSET(x) offsetof(MJpegDecodeContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass mjpegdec_class = ;
AVCodec ff_mjpeg_decoder = ;
#if CONFIG_THP_DECODER
AVCodec ff_thp_decoder = ;
