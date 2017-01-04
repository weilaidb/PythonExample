#define X264_AARCH64_PREDICT_H
void x264_predict_4x4_h_aarch64( uint8_t *src );
void x264_predict_4x4_v_aarch64( uint8_t *src );
void x264_predict_8x8c_v_aarch64( uint8_t *src );
#define x264_predict_4x4_h_neon x264_predict_4x4_h_aarch64
#define x264_predict_4x4_v_neon x264_predict_4x4_v_aarch64
#define x264_predict_8x8c_v_neon x264_predict_8x8c_v_aarch64
void x264_predict_4x4_dc_neon( uint8_t *src );
void x264_predict_8x8_v_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_8x8_h_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_8x8_dc_neon( uint8_t *src, uint8_t edge[36] );
void x264_predict_8x8c_dc_neon( uint8_t *src );
void x264_predict_8x8c_h_neon( uint8_t *src );
void x264_predict_8x16c_v_neon( uint8_t *src );
void x264_predict_8x16c_h_neon( uint8_t *src );
void x264_predict_8x16c_dc_neon( uint8_t *src );
void x264_predict_16x16_v_neon( uint8_t *src );
void x264_predict_16x16_h_neon( uint8_t *src );
void x264_predict_16x16_dc_neon( uint8_t *src );
void x264_predict_4x4_init_aarch64( int cpu, x264_predict_t pf[12] );
void x264_predict_8x8_init_aarch64( int cpu, x264_predict8x8_t pf[12], x264_predict_8x8_filter_t *predict_filter );
void x264_predict_8x8c_init_aarch64( int cpu, x264_predict_t pf[7] );
void x264_predict_8x16c_init_aarch64( int cpu, x264_predict_t pf[7] );
void x264_predict_16x16_init_aarch64( int cpu, x264_predict_t pf[7] );
