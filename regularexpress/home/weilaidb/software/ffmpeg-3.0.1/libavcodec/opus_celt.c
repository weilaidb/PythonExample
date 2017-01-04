enum CeltSpread ;
typedef struct CeltFrame  CeltFrame;
struct CeltContext ;
static const uint16_t celt_model_tapset[] = ;
static const uint16_t celt_model_spread[] = ;
static const uint16_t celt_model_alloc_trim[] = ;
static const uint16_t celt_model_energy_small[] = ;
static const uint8_t celt_freq_bands[] = ;
static const uint8_t celt_freq_range[] = ;
static const uint8_t celt_log_freq_range[] = ;
static const int8_t celt_tf_select[4][2][2][2] = ;
static const float celt_mean_energy[] = ;
static const float celt_alpha_coef[] = ;
static const float celt_beta_coef[] = ;
static const uint8_t celt_coarse_energy_dist[4][2][42] = ;
static const uint8_t celt_static_alloc[11][21] = ;
static const uint8_t celt_static_caps[4][2][21] = ;
static const uint8_t celt_cache_bits[392] = ;
static const int16_t celt_cache_index[105] = ;
static const uint8_t celt_log2_frac[] = ;
static const uint8_t celt_bit_interleave[] = ;
static const uint8_t celt_bit_deinterleave[] = ;
static const uint8_t celt_hadamard_ordery[] = ;
static const uint16_t celt_qn_exp2[] = ;
static const uint32_t celt_pvq_u[1272] = ;
DECLARE_ALIGNED(32, static const float, celt_window)[120] = ;
const float ff_celt_window2[120] = ;
static const uint32_t * const celt_pvq_u_row[15] = ;
static inline int16_t celt_cos(int16_t x)
static inline int celt_log2tan(int isin, int icos)
static inline uint32_t celt_rng(CeltContext *s)
static void celt_decode_coarse_energy(CeltContext *s, OpusRangeCoder *rc)
static void celt_decode_fine_energy(CeltContext *s, OpusRangeCoder *rc)
static void celt_decode_final_energy(CeltContext *s, OpusRangeCoder *rc,
int bits_left)
static void celt_decode_tf_changes(CeltContext *s, OpusRangeCoder *rc,
int transient)
static void celt_decode_allocation(CeltContext *s, OpusRangeCoder *rc)
static inline int celt_bits2pulses(const uint8_t *cache, int bits)
static inline int celt_pulses2bits(const uint8_t *cache, int pulses)
static inline void celt_normalize_residual(const int * av_restrict iy, float * av_restrict X,
int N, float g)
static void celt_exp_rotation1(float *X, unsigned int len, unsigned int stride,
float c, float s)
static inline void celt_exp_rotation(float *X, unsigned int len,
unsigned int stride, unsigned int K,
enum CeltSpread spread)
static inline unsigned int celt_extract_collapse_mask(const int *iy,
unsigned int N,
unsigned int B)
static inline void celt_renormalize_vector(float *X, int N, float gain)
static inline void celt_stereo_merge(float *X, float *Y, float mid, int N)
static void celt_interleave_hadamard(float *tmp, float *X, int N0,
int stride, int hadamard)
static void celt_deinterleave_hadamard(float *tmp, float *X, int N0,
int stride, int hadamard)
static void celt_haar1(float *X, int N0, int stride)
static inline int celt_compute_qn(int N, int b, int offset, int pulse_cap,
int dualstereo)
static inline uint64_t celt_cwrsi(unsigned int N, unsigned int K, unsigned int i, int *y)
static inline float celt_decode_pulses(OpusRangeCoder *rc, int *y, unsigned int N, unsigned int K)
static inline unsigned int celt_alg_unquant(OpusRangeCoder *rc, float *X,
unsigned int N, unsigned int K,
enum CeltSpread spread,
unsigned int blocks, float gain)
static unsigned int celt_decode_band(CeltContext *s, OpusRangeCoder *rc,
const int band, float *X, float *Y,
int N, int b, unsigned int blocks,
float *lowband, int duration,
float *lowband_out, int level,
float gain, float *lowband_scratch,
int fill)
static void celt_denormalize(CeltContext *s, CeltFrame *frame, float *data)
static void celt_postfilter_apply_transition(CeltFrame *frame, float *data)
static void celt_postfilter_apply(CeltFrame *frame,
float *data, int len)
static void celt_postfilter(CeltContext *s, CeltFrame *frame)
static int parse_postfilter(CeltContext *s, OpusRangeCoder *rc, int consumed)
static void process_anticollapse(CeltContext *s, CeltFrame *frame, float *X)
static void celt_decode_bands(CeltContext *s, OpusRangeCoder *rc)
int ff_celt_decode_frame(CeltContext *s, OpusRangeCoder *rc,
float **output, int coded_channels, int frame_size,
int startband,  int endband)
void ff_celt_flush(CeltContext *s)
void ff_celt_free(CeltContext **ps)
int ff_celt_init(AVCodecContext *avctx, CeltContext **ps, int output_channels)
