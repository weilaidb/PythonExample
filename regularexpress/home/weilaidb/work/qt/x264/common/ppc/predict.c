#if !HIGH_BIT_DEPTH
static void predict_8x8c_p_altivec( uint8_t *src )
static void predict_16x16_p_altivec( uint8_t *src )
#define PREDICT_16x16_DC_ALTIVEC(v) \
for( int i = 0; i < 16; i += 2)     \
static void predict_16x16_dc_altivec( uint8_t *src )
static void predict_16x16_dc_left_altivec( uint8_t *src )
static void predict_16x16_dc_top_altivec( uint8_t *src )
static void predict_16x16_dc_128_altivec( uint8_t *src )
static void predict_16x16_h_altivec( uint8_t *src )
static void predict_16x16_v_altivec( uint8_t *src )
void x264_predict_16x16_init_altivec( x264_predict_t pf[7] )
void x264_predict_8x8c_init_altivec( x264_predict_t pf[7] )
