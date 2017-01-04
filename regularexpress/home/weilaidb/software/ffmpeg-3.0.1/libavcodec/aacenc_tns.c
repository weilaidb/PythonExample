#define TNS_Q_BITS 4
#define TNS_Q_BITS_IS8 4
#define TNS_ENABLE_COEF_COMPRESSION
#define TNS_GAIN_THRESHOLD_LOW      1.4f
#define TNS_GAIN_THRESHOLD_HIGH     1.16f*TNS_GAIN_THRESHOLD_LOW
static inline int compress_coeffs(int *coef, int order, int c_bits)
void ff_aac_encode_tns_info(AACEncContext *s, SingleChannelElement *sce)
void ff_aac_apply_tns(AACEncContext *s, SingleChannelElement *sce)
static inline void quantize_coefs(double *coef, int *idx, float *lpc, int order,
int c_bits)
void ff_aac_search_for_tns(AACEncContext *s, SingleChannelElement *sce)
