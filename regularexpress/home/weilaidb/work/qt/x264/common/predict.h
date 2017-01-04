#define X264_PREDICT_H
typedef void (*x264_predict_t)( pixel *src );
typedef void (*x264_predict8x8_t)( pixel *src, pixel edge[36] );
typedef void (*x264_predict_8x8_filter_t)( pixel *src, pixel edge[36], int i_neighbor, int i_filters );
enum intra_chroma_pred_e
;
static const uint8_t x264_mb_chroma_pred_mode_fix[7] =
;
enum intra16x16_pred_e
;
static const uint8_t x264_mb_pred_mode16x16_fix[7] =
;
enum intra4x4_pred_e
;
static const int8_t x264_mb_pred_mode4x4_fix[13] =
;
#define x264_mb_pred_mode4x4_fix(t) x264_mb_pred_mode4x4_fix[(t)+1]
enum intra8x8_pred_e
;
void x264_predict_8x8_dc_c  ( pixel *src, pixel edge[36] );
void x264_predict_8x8_h_c   ( pixel *src, pixel edge[36] );
void x264_predict_8x8_v_c   ( pixel *src, pixel edge[36] );
void x264_predict_4x4_dc_c  ( pixel *src );
void x264_predict_4x4_h_c   ( pixel *src );
void x264_predict_4x4_v_c   ( pixel *src );
void x264_predict_16x16_dc_c( pixel *src );
void x264_predict_16x16_h_c ( pixel *src );
void x264_predict_16x16_v_c ( pixel *src );
void x264_predict_16x16_p_c ( pixel *src );
void x264_predict_8x8c_dc_c ( pixel *src );
void x264_predict_8x8c_h_c  ( pixel *src );
void x264_predict_8x8c_v_c  ( pixel *src );
void x264_predict_8x8c_p_c  ( pixel *src );
void x264_predict_8x16c_dc_c( pixel *src );
void x264_predict_8x16c_h_c ( pixel *src );
void x264_predict_8x16c_v_c ( pixel *src );
void x264_predict_8x16c_p_c ( pixel *src );
void x264_predict_16x16_init ( int cpu, x264_predict_t pf[7] );
void x264_predict_8x8c_init  ( int cpu, x264_predict_t pf[7] );
void x264_predict_8x16c_init ( int cpu, x264_predict_t pf[7] );
void x264_predict_4x4_init   ( int cpu, x264_predict_t pf[12] );
void x264_predict_8x8_init   ( int cpu, x264_predict8x8_t pf[12], x264_predict_8x8_filter_t *predict_filter );
