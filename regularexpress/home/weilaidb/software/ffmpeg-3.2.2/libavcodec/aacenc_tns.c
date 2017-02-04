#define TNS_Q_BITS 4
#define TNS_Q_BITS_IS8 4
#define TNS_ENABLE_COEF_COMPRESSION
#define TNS_GAIN_THRESHOLD_LOW      1.4f
#define TNS_GAIN_THRESHOLD_HIGH     1.16f*TNS_GAIN_THRESHOLD_LOW
compress_coeffs
ff_aac_encode_tns_info
ff_aac_apply_tns
quantize_coefs
ff_aac_search_for_tns
