#define SUBFRAMES 4
#define PULSE_MAX 8
#define DSS_SP_FRAME_SIZE        42
#define DSS_SP_SAMPLE_COUNT     (66 * SUBFRAMES)
DSS_SP_FORMULA (((((a) << 15) + (b) * (c)) + 0x4000) >> 15)
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
dss_sp_decode_init
dss_sp_unpack_coeffs
dss_sp_unpack_filter
dss_sp_convert_coeffs
dss_sp_add_pulses
dss_sp_gen_exc
dss_sp_scale_vector
dss_sp_update_buf
dss_sp_shift_sq_sub
dss_sp_shift_sq_add
dss_sp_vec_mult
dss_sp_get_normalize_bits
dss_sp_vector_sum
dss_sp_sf_synthesis
dss_sp_update_state
dss_sp_32to16bit
dss_sp_decode_one_frame
dss_sp_decode_frame
AVCodec ff_dss_sp_decoder = ;
