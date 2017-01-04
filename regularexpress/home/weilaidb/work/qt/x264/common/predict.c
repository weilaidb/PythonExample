#if HAVE_MMX
#   include "x86/predict.h"
#if ARCH_PPC
#   include "ppc/predict.h"
#if ARCH_ARM
#   include "arm/predict.h"
#if ARCH_AARCH64
#   include "aarch64/predict.h"
#if ARCH_MIPS
#   include "mips/predict.h"
#define PREDICT_16x16_DC(v)\
for( int i = 0; i < 16; i++ )\
void x264_predict_16x16_dc_c( pixel *src )
static void x264_predict_16x16_dc_left_c( pixel *src )
static void x264_predict_16x16_dc_top_c( pixel *src )
static void x264_predict_16x16_dc_128_c( pixel *src )
void x264_predict_16x16_h_c( pixel *src )
void x264_predict_16x16_v_c( pixel *src )
void x264_predict_16x16_p_c( pixel *src )
static void x264_predict_8x8c_dc_128_c( pixel *src )
static void x264_predict_8x8c_dc_left_c( pixel *src )
static void x264_predict_8x8c_dc_top_c( pixel *src )
void x264_predict_8x8c_dc_c( pixel *src )
void x264_predict_8x8c_h_c( pixel *src )
void x264_predict_8x8c_v_c( pixel *src )
void x264_predict_8x8c_p_c( pixel *src )
static void x264_predict_8x16c_dc_128_c( pixel *src )
static void x264_predict_8x16c_dc_left_c( pixel *src )
static void x264_predict_8x16c_dc_top_c( pixel *src )
void x264_predict_8x16c_dc_c( pixel *src )
void x264_predict_8x16c_h_c( pixel *src )
void x264_predict_8x16c_v_c( pixel *src )
void x264_predict_8x16c_p_c( pixel *src )
#define SRC(x,y) src[(x)+(y)*FDEC_STRIDE]
#define SRC_X4(x,y) MPIXEL_X4( &SRC(x,y) )
#define PREDICT_4x4_DC(v)\
SRC_X4(0,0) = SRC_X4(0,1) = SRC_X4(0,2) = SRC_X4(0,3) = v;
static void x264_predict_4x4_dc_128_c( pixel *src )
static void x264_predict_4x4_dc_left_c( pixel *src )
static void x264_predict_4x4_dc_top_c( pixel *src )
void x264_predict_4x4_dc_c( pixel *src )
void x264_predict_4x4_h_c( pixel *src )
void x264_predict_4x4_v_c( pixel *src )
#define PREDICT_4x4_LOAD_LEFT\
int l0 = SRC(-1,0);\
int l1 = SRC(-1,1);\
int l2 = SRC(-1,2);\
UNUSED int l3 = SRC(-1,3);
#define PREDICT_4x4_LOAD_TOP\
int t0 = SRC(0,-1);\
int t1 = SRC(1,-1);\
int t2 = SRC(2,-1);\
UNUSED int t3 = SRC(3,-1);
#define PREDICT_4x4_LOAD_TOP_RIGHT\
int t4 = SRC(4,-1);\
int t5 = SRC(5,-1);\
int t6 = SRC(6,-1);\
UNUSED int t7 = SRC(7,-1);
#define F1(a,b)   (((a)+(b)+1)>>1)
#define F2(a,b,c) (((a)+2*(b)+(c)+2)>>2)
static void x264_predict_4x4_ddl_c( pixel *src )
static void x264_predict_4x4_ddr_c( pixel *src )
static void x264_predict_4x4_vr_c( pixel *src )
static void x264_predict_4x4_hd_c( pixel *src )
static void x264_predict_4x4_vl_c( pixel *src )
static void x264_predict_4x4_hu_c( pixel *src )
#define PL(y) \
edge[14-y] = F2(SRC(-1,y-1), SRC(-1,y), SRC(-1,y+1));
#define PT(x) \
edge[16+x] = F2(SRC(x-1,-1), SRC(x,-1), SRC(x+1,-1));
static void x264_predict_8x8_filter_c( pixel *src, pixel edge[36], int i_neighbor, int i_filters )
#undef PL
#undef PT
#define PL(y) \
UNUSED int l##y = edge[14-y];
#define PT(x) \
UNUSED int t##x = edge[16+x];
#define PREDICT_8x8_LOAD_TOPLEFT \
int lt = edge[15];
#define PREDICT_8x8_LOAD_LEFT \
PL(0) PL(1) PL(2) PL(3) PL(4) PL(5) PL(6) PL(7)
#define PREDICT_8x8_LOAD_TOP \
PT(0) PT(1) PT(2) PT(3) PT(4) PT(5) PT(6) PT(7)
#define PREDICT_8x8_LOAD_TOPRIGHT \
PT(8) PT(9) PT(10) PT(11) PT(12) PT(13) PT(14) PT(15)
#define PREDICT_8x8_DC(v) \
for( int y = 0; y < 8; y++ )
static void x264_predict_8x8_dc_128_c( pixel *src, pixel edge[36] )
static void x264_predict_8x8_dc_left_c( pixel *src, pixel edge[36] )
static void x264_predict_8x8_dc_top_c( pixel *src, pixel edge[36] )
void x264_predict_8x8_dc_c( pixel *src, pixel edge[36] )
void x264_predict_8x8_h_c( pixel *src, pixel edge[36] )
void x264_predict_8x8_v_c( pixel *src, pixel edge[36] )
static void x264_predict_8x8_ddl_c( pixel *src, pixel edge[36] )
static void x264_predict_8x8_ddr_c( pixel *src, pixel edge[36] )
static void x264_predict_8x8_vr_c( pixel *src, pixel edge[36] )
static void x264_predict_8x8_hd_c( pixel *src, pixel edge[36] )
static void x264_predict_8x8_vl_c( pixel *src, pixel edge[36] )
static void x264_predict_8x8_hu_c( pixel *src, pixel edge[36] )
void x264_predict_16x16_init( int cpu, x264_predict_t pf[7] )
void x264_predict_8x8c_init( int cpu, x264_predict_t pf[7] )
void x264_predict_8x16c_init( int cpu, x264_predict_t pf[7] )
void x264_predict_8x8_init( int cpu, x264_predict8x8_t pf[12], x264_predict_8x8_filter_t *predict_filter )
void x264_predict_4x4_init( int cpu, x264_predict_t pf[12] )
