#define UNCHECKED_BITSTREAM_READER 1
typedef struct Mpeg1Context  Mpeg1Context;
#define MB_TYPE_ZERO_MV   0x20000000
static const uint32_t ptype2mb_type[7] = ;
static const uint32_t btype2mb_type[11] = ;
static int mpeg_decode_motion(MpegEncContext *s, int fcode, int pred)
#define check_scantable_index(ctx, x)                                         \
do  while (0)
static inline int mpeg1_decode_block_intra(MpegEncContext *s,
int16_t *block, int n)
int ff_mpeg1_decode_block_intra(MpegEncContext *s, int16_t *block, int n)
static inline int mpeg1_decode_block_inter(MpegEncContext *s,
int16_t *block, int n)
static inline int mpeg1_fast_decode_block_inter(MpegEncContext *s,
int16_t *block, int n)
static inline int mpeg2_decode_block_non_intra(MpegEncContext *s,
int16_t *block, int n)
static inline int mpeg2_fast_decode_block_non_intra(MpegEncContext *s,
int16_t *block, int n)
static inline int mpeg2_decode_block_intra(MpegEncContext *s,
int16_t *block, int n)
static inline int mpeg2_fast_decode_block_intra(MpegEncContext *s,
int16_t *block, int n)
static inline int get_dmv(MpegEncContext *s)
static inline int get_qscale(MpegEncContext *s)
#define MT_FIELD 1
#define MT_FRAME 2
#define MT_16X8  2
#define MT_DMV   3
static int mpeg_decode_mb(MpegEncContext *s, int16_t block[12][64])
static av_cold int mpeg_decode_init(AVCodecContext *avctx)
#if HAVE_THREADS
static int mpeg_decode_update_thread_context(AVCodecContext *avctx,
const AVCodecContext *avctx_from)
static void quant_matrix_rebuild(uint16_t *matrix, const uint8_t *old_perm,
const uint8_t *new_perm)
static const enum AVPixelFormat mpeg1_hwaccel_pixfmt_list_420[] = ;
static const enum AVPixelFormat mpeg2_hwaccel_pixfmt_list_420[] = ;
static const enum AVPixelFormat mpeg12_pixfmt_list_422[] = ;
static const enum AVPixelFormat mpeg12_pixfmt_list_444[] = ;
#if FF_API_VDPAU
static inline int uses_vdpau(AVCodecContext *avctx)
static enum AVPixelFormat mpeg_get_pixelformat(AVCodecContext *avctx)
static void setup_hwaccel_for_pixfmt(AVCodecContext *avctx)
static int mpeg_decode_postinit(AVCodecContext *avctx)
static int mpeg1_decode_picture(AVCodecContext *avctx, const uint8_t *buf,
int buf_size)
static void mpeg_decode_sequence_extension(Mpeg1Context *s1)
static void mpeg_decode_sequence_display_extension(Mpeg1Context *s1)
static void mpeg_decode_picture_display_extension(Mpeg1Context *s1)
static int load_matrix(MpegEncContext *s, uint16_t matrix0[64],
uint16_t matrix1[64], int intra)
static void mpeg_decode_quant_matrix_extension(MpegEncContext *s)
static void mpeg_decode_picture_coding_extension(Mpeg1Context *s1)
static int mpeg_field_start(MpegEncContext *s, const uint8_t *buf, int buf_size)
#define DECODE_SLICE_ERROR -1
#define DECODE_SLICE_OK     0
static int mpeg_decode_slice(MpegEncContext *s, int mb_y,
const uint8_t **buf, int buf_size)
static int slice_decode_thread(AVCodecContext *c, void *arg)
static int slice_end(AVCodecContext *avctx, AVFrame *pict)
static int mpeg1_decode_sequence(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int vcr2_init_sequence(AVCodecContext *avctx)
static int mpeg_decode_a53_cc(AVCodecContext *avctx,
const uint8_t *p, int buf_size)
static void mpeg_decode_user_data(AVCodecContext *avctx,
const uint8_t *p, int buf_size)
static void mpeg_decode_gop(AVCodecContext *avctx,
const uint8_t *buf, int buf_size)
static int decode_chunks(AVCodecContext *avctx, AVFrame *picture,
int *got_output, const uint8_t *buf, int buf_size)
static int mpeg_decode_frame(AVCodecContext *avctx, void *data,
int *got_output, AVPacket *avpkt)
static void flush(AVCodecContext *avctx)
static av_cold int mpeg_decode_end(AVCodecContext *avctx)
AVCodec ff_mpeg1video_decoder = ;
AVCodec ff_mpeg2video_decoder = ;
AVCodec ff_mpegvideo_decoder = ;
#if FF_API_XVMC
#if CONFIG_MPEG_XVMC_DECODER
FF_DISABLE_DEPRECATION_WARNINGS
static av_cold int mpeg_mc_decode_init(AVCodecContext *avctx)
AVCodec ff_mpeg_xvmc_decoder = ;
FF_ENABLE_DEPRECATION_WARNINGS
#if CONFIG_MPEG_VDPAU_DECODER && FF_API_VDPAU
AVCodec ff_mpeg_vdpau_decoder = ;
#if CONFIG_MPEG1_VDPAU_DECODER && FF_API_VDPAU
AVCodec ff_mpeg1_vdpau_decoder = ;
