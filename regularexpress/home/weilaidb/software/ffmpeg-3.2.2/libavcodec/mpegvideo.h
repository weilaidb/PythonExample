#define AVCODEC_MPEGVIDEO_H
#define MAX_THREADS 32
#define MAX_B_FRAMES 16
#define SEQ_END_CODE            0x000001b7
#define SEQ_START_CODE          0x000001b3
#define GOP_START_CODE          0x000001b8
#define PICTURE_START_CODE      0x00000100
#define SLICE_MIN_START_CODE    0x00000101
#define SLICE_MAX_START_CODE    0x000001af
#define EXT_START_CODE          0x000001b5
#define USER_START_CODE         0x000001b2
typedef struct MpegEncContext  MpegEncContext;
#define FF_MPV_FLAG_SKIP_RD      0x0001
#define FF_MPV_FLAG_STRICT_GOP   0x0002
#define FF_MPV_FLAG_QP_RD        0x0004
#define FF_MPV_FLAG_CBP_RD       0x0008
#define FF_MPV_FLAG_NAQ          0x0010
#define FF_MPV_FLAG_MV0          0x0020
enum rc_strategy ;
#define FF_MPV_OPT_CMP_FUNC \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
#define FF_MPV_OFFSET(x) offsetof(MpegEncContext, x)
#define FF_MPV_OPT_FLAGS (AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM)
#define FF_MPV_COMMON_OPTS \
FF_MPV_OPT_CMP_FUNC, \
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,\
,                        \
,           \
,             \
,            \
,       \
, \
,    \
,            \
,            \
,   \
,   \
,   \
, \
, \
,   \
, \
, \
, \
,   \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
extern const AVOption ff_mpv_generic_options[];
void ff_mpv_common_defaults(MpegEncContext *s);
void ff_dct_encode_init_x86(MpegEncContext *s);
int ff_mpv_common_init(MpegEncContext *s);
void ff_mpv_common_init_arm(MpegEncContext *s);
void ff_mpv_common_init_axp(MpegEncContext *s);
void ff_mpv_common_init_neon(MpegEncContext *s);
void ff_mpv_common_init_ppc(MpegEncContext *s);
void ff_mpv_common_init_x86(MpegEncContext *s);
void ff_mpv_common_init_mips(MpegEncContext *s);
int ff_mpv_common_frame_size_change(MpegEncContext *s);
void ff_mpv_common_end(MpegEncContext *s);
void ff_mpv_decode_defaults(MpegEncContext *s);
void ff_mpv_decode_init(MpegEncContext *s, AVCodecContext *avctx);
void ff_mpv_decode_mb(MpegEncContext *s, int16_t block[12][64]);
void ff_mpv_report_decode_progress(MpegEncContext *s);
int ff_mpv_frame_start(MpegEncContext *s, AVCodecContext *avctx);
void ff_mpv_frame_end(MpegEncContext *s);
int ff_mpv_encode_init(AVCodecContext *avctx);
void ff_mpv_encode_init_x86(MpegEncContext *s);
int ff_mpv_encode_end(AVCodecContext *avctx);
int ff_mpv_encode_picture(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet);
int ff_mpv_reallocate_putbitbuffer(MpegEncContext *s, size_t threshold, size_t size_increase);
void ff_clean_intra_table_entries(MpegEncContext *s);
void ff_mpeg_draw_horiz_band(MpegEncContext *s, int y, int h);
void ff_mpeg_flush(AVCodecContext *avctx);
void ff_print_debug_info(MpegEncContext *s, Picture *p, AVFrame *pict);
void ff_print_debug_info2(AVCodecContext *avctx, AVFrame *pict, uint8_t *mbskip_table,
uint32_t *mbtype_table, int8_t *qscale_table, int16_t (*motion_val[2])[2],
int *low_delay,
int mb_width, int mb_height, int mb_stride, int quarter_sample);
int ff_mpv_export_qp_table(MpegEncContext *s, AVFrame *f, Picture *p, int qp_type);
void ff_write_quant_matrix(PutBitContext *pb, uint16_t *matrix);
int ff_update_duplicate_context(MpegEncContext *dst, MpegEncContext *src);
int ff_mpeg_update_thread_context(AVCodecContext *dst, const AVCodecContext *src);
void ff_set_qscale(MpegEncContext * s, int qscale);
void ff_mpv_idct_init(MpegEncContext *s);
int ff_dct_encode_init(MpegEncContext *s);
void ff_convert_matrix(MpegEncContext *s, int (*qmat)[64], uint16_t (*qmat16)[2][64],
const uint16_t *quant_matrix, int bias, int qmin, int qmax, int intra);
int ff_dct_quantize_c(MpegEncContext *s, int16_t *block, int n, int qscale, int *overflow);
void ff_block_permute(int16_t *block, uint8_t *permutation,
const uint8_t *scantable, int last);
void ff_init_block_index(MpegEncContext *s);
void ff_mpv_motion(MpegEncContext *s,
uint8_t *dest_y, uint8_t *dest_cb,
uint8_t *dest_cr, int dir,
uint8_t **ref_picture,
op_pixels_func (*pix_op)[4],
qpel_mc_func (*qpix_op)[16]);
static inline void ff_update_block_index(MpegEncContext *s)
static inline int get_bits_diff(MpegEncContext *s)
