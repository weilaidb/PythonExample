#define DNX10BIT_QMAT_SHIFT 18
#define RC_VARIANCE 1
#define LAMBDA_FRAC_BITS 10
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass dnxhd_class = ;
static void dnxhd_8bit_get_pixels_8x4_sym(int16_t *av_restrict block,
const uint8_t *pixels,
ptrdiff_t line_size)
static av_always_inline
void dnxhd_10bit_get_pixels_8x4_sym(int16_t *av_restrict block,
const uint8_t *pixels,
ptrdiff_t line_size)
static int dnxhd_10bit_dct_quantize(MpegEncContext *ctx, int16_t *block,
int n, int qscale, int *overflow)
static av_cold int dnxhd_init_vlc(DNXHDEncContext *ctx)
static av_cold int dnxhd_init_qmat(DNXHDEncContext *ctx, int lbias, int cbias)
static av_cold int dnxhd_init_rc(DNXHDEncContext *ctx)
static int dnxhd_get_hr_frame_size(const CIDEntry* profile, int mb_num)
static av_cold int dnxhd_encode_init(AVCodecContext *avctx)
static int dnxhd_write_header(AVCodecContext *avctx, uint8_t *buf)
static av_always_inline void dnxhd_encode_dc(DNXHDEncContext *ctx, int diff)
static av_always_inline
void dnxhd_encode_block(DNXHDEncContext *ctx, int16_t *block,
int last_index, int n)
static av_always_inline
void dnxhd_unquantize_c(DNXHDEncContext *ctx, int16_t *block, int n,
int qscale, int last_index)
static av_always_inline int dnxhd_ssd_block(int16_t *qblock, int16_t *block)
static av_always_inline
int dnxhd_calc_ac_bits(DNXHDEncContext *ctx, int16_t *block, int last_index)
static av_always_inline
void dnxhd_get_blocks(DNXHDEncContext *ctx, int mb_x, int mb_y)
static av_always_inline
int dnxhd_switch_matrix(DNXHDEncContext *ctx, int i)
static int dnxhd_calc_bits_thread(AVCodecContext *avctx, void *arg,
int jobnr, int threadnr)
static int dnxhd_encode_thread(AVCodecContext *avctx, void *arg,
int jobnr, int threadnr)
static void dnxhd_setup_threads_slices(DNXHDEncContext *ctx)
static int dnxhd_mb_var_thread(AVCodecContext *avctx, void *arg,
int jobnr, int threadnr)
static int dnxhd_encode_rdo(AVCodecContext *avctx, DNXHDEncContext *ctx)
static int dnxhd_find_qscale(DNXHDEncContext *ctx)
#define BUCKET_BITS 8
#define RADIX_PASSES 4
#define NBUCKETS (1 << BUCKET_BITS)
static inline int get_bucket(int value, int shift)
static void radix_count(const RCCMPEntry *data, int size,
int buckets[RADIX_PASSES][NBUCKETS])
static void radix_sort_pass(RCCMPEntry *dst, const RCCMPEntry *data,
int size, int buckets[NBUCKETS], int pass)
static void radix_sort(RCCMPEntry *data, RCCMPEntry *tmp, int size)
static int dnxhd_encode_fast(AVCodecContext *avctx, DNXHDEncContext *ctx)
static void dnxhd_load_picture(DNXHDEncContext *ctx, const AVFrame *frame)
static int dnxhd_encode_picture(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int dnxhd_encode_end(AVCodecContext *avctx)
static const AVCodecDefault dnxhd_defaults[] = ;
AVCodec ff_dnxhd_encoder = ;
