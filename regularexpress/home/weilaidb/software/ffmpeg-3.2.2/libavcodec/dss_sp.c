#define SUBFRAMES 4
#define PULSE_MAX 8
#define DSS_SP_FRAME_SIZE        42
#define DSS_SP_SAMPLE_COUNT     (66 * SUBFRAMES)
#define DSS_SP_FORMULA(a, b, c) (((((a) << 15) + (b) * (c)) + 0x4000) >> 15)
typedef struct DssSpSubframe  DssSpSubframe;
typedef struct DssSpFrame  DssSpFrame;
typedef struct DssSpContext  DssSpContext;
static const uint32_t dss_sp_combinatorial_table[PULSE_MAX][72] = ;
static const int16_t dss_sp_filter_cb[14][32] = ;
static const uint16_t  dss_sp_fixed_cb_gain[64] = ;
static const int16_t  dss_sp_pulse_val[8] = ;
static const uint16_t binary_decreasing_array[] = ;
static const uint16_t dss_sp_unc_decreasing_array[] = ;
static const uint16_t dss_sp_adaptive_gain[] = ;
static const int32_t dss_sp_sinc[67] = ;
static av_cold int dss_sp_decode_init(AVCodecContext *avctx)
static void dss_sp_unpack_coeffs(DssSpContext *p, const uint8_t *src)
static void dss_sp_unpack_filter(DssSpContext *p)
static void dss_sp_convert_coeffs(int32_t *lpc_filter, int32_t *coeffs)
static void dss_sp_add_pulses(int32_t *vector_buf,
const struct DssSpSubframe *sf)
static void dss_sp_gen_exc(int32_t *vector, int32_t *prev_exc,
int pitch_lag, int gain)
static void dss_sp_scale_vector(int32_t *vec, int bits, int size)
static void dss_sp_update_buf(int32_t *hist, int32_t *vector)
static void dss_sp_shift_sq_sub(const int32_t *filter_buf,
int32_t *error_buf, int32_t *dst)
static void dss_sp_shift_sq_add(const int32_t *filter_buf, int32_t *audio_buf,
int32_t *dst)
static void dss_sp_vec_mult(const int32_t *src, int32_t *dst,
const int16_t *mult)
static int dss_sp_get_normalize_bits(int32_t *vector_buf, int16_t size)
static int dss_sp_vector_sum(DssSpContext *p, int size)
static void dss_sp_sf_synthesis(DssSpContext *p, int32_t lpc_filter,
int32_t *dst, int size)
static void dss_sp_update_state(DssSpContext *p, int32_t *dst)
static void dss_sp_32to16bit(int16_t *dst, int32_t *src, int size)
static int dss_sp_decode_one_frame(DssSpContext *p,
int16_t *abuf_dst, const uint8_t *abuf_src)
static int dss_sp_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_dss_sp_decoder = ;
