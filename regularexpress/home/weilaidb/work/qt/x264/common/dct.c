#if HAVE_MMX
#   include "x86/dct.h"
#if ARCH_PPC
#   include "ppc/dct.h"
#if ARCH_ARM
#   include "arm/dct.h"
#if ARCH_AARCH64
#   include "aarch64/dct.h"
#if ARCH_MIPS
#   include "mips/dct.h"
#define W(i) (i==0 ? FIX8(1.0000) :\
i==1 ? FIX8(0.8859) :\
i==2 ? FIX8(1.6000) :\
i==3 ? FIX8(0.9415) :\
i==4 ? FIX8(1.2651) :\
i==5 ? FIX8(1.1910) :0)
const uint32_t x264_dct8_weight_tab[64] = ;
#undef W
#define W(i) (i==0 ? FIX8(1.76777) :\
i==1 ? FIX8(1.11803) :\
i==2 ? FIX8(0.70711) :0)
const uint32_t x264_dct4_weight_tab[16] = ;
#undef W
#define W(i) (i==0 ? FIX8(3.125) :\
i==1 ? FIX8(1.25) :\
i==2 ? FIX8(0.5) :0)
const uint32_t x264_dct4_weight2_tab[16] = ;
#undef W
#define W(i) (i==0 ? FIX8(1.00000) :\
i==1 ? FIX8(0.78487) :\
i==2 ? FIX8(2.56132) :\
i==3 ? FIX8(0.88637) :\
i==4 ? FIX8(1.60040) :\
i==5 ? FIX8(1.41850) :0)
const uint32_t x264_dct8_weight2_tab[64] = ;
#undef W
static void dct4x4dc( dctcoef d[16] )
static void idct4x4dc( dctcoef d[16] )
static void dct2x4dc( dctcoef dct[8], dctcoef dct4x4[8][16] )
static inline void pixel_sub_wxh( dctcoef *diff, int i_size,
pixel *pix1, int i_pix1, pixel *pix2, int i_pix2 )
static void sub4x4_dct( dctcoef dct[16], pixel *pix1, pixel *pix2 )
static void sub8x8_dct( dctcoef dct[4][16], pixel *pix1, pixel *pix2 )
static void sub16x16_dct( dctcoef dct[16][16], pixel *pix1, pixel *pix2 )
static int sub4x4_dct_dc( pixel *pix1, pixel *pix2 )
static void sub8x8_dct_dc( dctcoef dct[4], pixel *pix1, pixel *pix2 )
static void sub8x16_dct_dc( dctcoef dct[8], pixel *pix1, pixel *pix2 )
static void add4x4_idct( pixel *p_dst, dctcoef dct[16] )
static void add8x8_idct( pixel *p_dst, dctcoef dct[4][16] )
static void add16x16_idct( pixel *p_dst, dctcoef dct[16][16] )
#define DCT8_1D
static void sub8x8_dct8( dctcoef dct[64], pixel *pix1, pixel *pix2 )
static void sub16x16_dct8( dctcoef dct[4][64], pixel *pix1, pixel *pix2 )
#define IDCT8_1D
static void add8x8_idct8( pixel *dst, dctcoef dct[64] )
static void add16x16_idct8( pixel *dst, dctcoef dct[4][64] )
static void inline add4x4_idct_dc( pixel *p_dst, dctcoef dc )
static void add8x8_idct_dc( pixel *p_dst, dctcoef dct[4] )
static void add16x16_idct_dc( pixel *p_dst, dctcoef dct[16] )
void x264_dct_init( int cpu, x264_dct_function_t *dctf )
#define ZIG(i,y,x) level[i] = dct[x*8+y];
#define ZIGZAG8_FRAME\
ZIG( 0,0,0) ZIG( 1,0,1) ZIG( 2,1,0) ZIG( 3,2,0)\
ZIG( 4,1,1) ZIG( 5,0,2) ZIG( 6,0,3) ZIG( 7,1,2)\
ZIG( 8,2,1) ZIG( 9,3,0) ZIG(10,4,0) ZIG(11,3,1)\
ZIG(12,2,2) ZIG(13,1,3) ZIG(14,0,4) ZIG(15,0,5)\
ZIG(16,1,4) ZIG(17,2,3) ZIG(18,3,2) ZIG(19,4,1)\
ZIG(20,5,0) ZIG(21,6,0) ZIG(22,5,1) ZIG(23,4,2)\
ZIG(24,3,3) ZIG(25,2,4) ZIG(26,1,5) ZIG(27,0,6)\
ZIG(28,0,7) ZIG(29,1,6) ZIG(30,2,5) ZIG(31,3,4)\
ZIG(32,4,3) ZIG(33,5,2) ZIG(34,6,1) ZIG(35,7,0)\
ZIG(36,7,1) ZIG(37,6,2) ZIG(38,5,3) ZIG(39,4,4)\
ZIG(40,3,5) ZIG(41,2,6) ZIG(42,1,7) ZIG(43,2,7)\
ZIG(44,3,6) ZIG(45,4,5) ZIG(46,5,4) ZIG(47,6,3)\
ZIG(48,7,2) ZIG(49,7,3) ZIG(50,6,4) ZIG(51,5,5)\
ZIG(52,4,6) ZIG(53,3,7) ZIG(54,4,7) ZIG(55,5,6)\
ZIG(56,6,5) ZIG(57,7,4) ZIG(58,7,5) ZIG(59,6,6)\
ZIG(60,5,7) ZIG(61,6,7) ZIG(62,7,6) ZIG(63,7,7)\
#define ZIGZAG8_FIELD\
ZIG( 0,0,0) ZIG( 1,1,0) ZIG( 2,2,0) ZIG( 3,0,1)\
ZIG( 4,1,1) ZIG( 5,3,0) ZIG( 6,4,0) ZIG( 7,2,1)\
ZIG( 8,0,2) ZIG( 9,3,1) ZIG(10,5,0) ZIG(11,6,0)\
ZIG(12,7,0) ZIG(13,4,1) ZIG(14,1,2) ZIG(15,0,3)\
ZIG(16,2,2) ZIG(17,5,1) ZIG(18,6,1) ZIG(19,7,1)\
ZIG(20,3,2) ZIG(21,1,3) ZIG(22,0,4) ZIG(23,2,3)\
ZIG(24,4,2) ZIG(25,5,2) ZIG(26,6,2) ZIG(27,7,2)\
ZIG(28,3,3) ZIG(29,1,4) ZIG(30,0,5) ZIG(31,2,4)\
ZIG(32,4,3) ZIG(33,5,3) ZIG(34,6,3) ZIG(35,7,3)\
ZIG(36,3,4) ZIG(37,1,5) ZIG(38,0,6) ZIG(39,2,5)\
ZIG(40,4,4) ZIG(41,5,4) ZIG(42,6,4) ZIG(43,7,4)\
ZIG(44,3,5) ZIG(45,1,6) ZIG(46,2,6) ZIG(47,4,5)\
ZIG(48,5,5) ZIG(49,6,5) ZIG(50,7,5) ZIG(51,3,6)\
ZIG(52,0,7) ZIG(53,1,7) ZIG(54,4,6) ZIG(55,5,6)\
ZIG(56,6,6) ZIG(57,7,6) ZIG(58,2,7) ZIG(59,3,7)\
ZIG(60,4,7) ZIG(61,5,7) ZIG(62,6,7) ZIG(63,7,7)
#define ZIGZAG4_FRAME\
ZIGDC( 0,0,0) ZIG( 1,0,1) ZIG( 2,1,0) ZIG( 3,2,0)\
ZIG( 4,1,1) ZIG( 5,0,2) ZIG( 6,0,3) ZIG( 7,1,2)\
ZIG( 8,2,1) ZIG( 9,3,0) ZIG(10,3,1) ZIG(11,2,2)\
ZIG(12,1,3) ZIG(13,2,3) ZIG(14,3,2) ZIG(15,3,3)
#define ZIGZAG4_FIELD\
ZIGDC( 0,0,0) ZIG( 1,1,0) ZIG( 2,0,1) ZIG( 3,2,0)\
ZIG( 4,3,0) ZIG( 5,1,1) ZIG( 6,2,1) ZIG( 7,3,1)\
ZIG( 8,0,2) ZIG( 9,1,2) ZIG(10,2,2) ZIG(11,3,2)\
ZIG(12,0,3) ZIG(13,1,3) ZIG(14,2,3) ZIG(15,3,3)
static void zigzag_scan_8x8_frame( dctcoef level[64], dctcoef dct[64] )
static void zigzag_scan_8x8_field( dctcoef level[64], dctcoef dct[64] )
#undef ZIG
#define ZIG(i,y,x) level[i] = dct[x*4+y];
#define ZIGDC(i,y,x) ZIG(i,y,x)
static void zigzag_scan_4x4_frame( dctcoef level[16], dctcoef dct[16] )
static void zigzag_scan_4x4_field( dctcoef level[16], dctcoef dct[16] )
#undef ZIG
#define ZIG(i,y,x)
#define COPY4x4\
CPPIXEL_X4( p_dst+0*FDEC_STRIDE, p_src+0*FENC_STRIDE );\
CPPIXEL_X4( p_dst+1*FDEC_STRIDE, p_src+1*FENC_STRIDE );\
CPPIXEL_X4( p_dst+2*FDEC_STRIDE, p_src+2*FENC_STRIDE );\
CPPIXEL_X4( p_dst+3*FDEC_STRIDE, p_src+3*FENC_STRIDE );
#define CPPIXEL_X8(dst,src) ( CPPIXEL_X4(dst,src), CPPIXEL_X4(dst+4,src+4) )
#define COPY8x8\
CPPIXEL_X8( p_dst+0*FDEC_STRIDE, p_src+0*FENC_STRIDE );\
CPPIXEL_X8( p_dst+1*FDEC_STRIDE, p_src+1*FENC_STRIDE );\
CPPIXEL_X8( p_dst+2*FDEC_STRIDE, p_src+2*FENC_STRIDE );\
CPPIXEL_X8( p_dst+3*FDEC_STRIDE, p_src+3*FENC_STRIDE );\
CPPIXEL_X8( p_dst+4*FDEC_STRIDE, p_src+4*FENC_STRIDE );\
CPPIXEL_X8( p_dst+5*FDEC_STRIDE, p_src+5*FENC_STRIDE );\
CPPIXEL_X8( p_dst+6*FDEC_STRIDE, p_src+6*FENC_STRIDE );\
CPPIXEL_X8( p_dst+7*FDEC_STRIDE, p_src+7*FENC_STRIDE );
static int zigzag_sub_4x4_frame( dctcoef level[16], const pixel *p_src, pixel *p_dst )
static int zigzag_sub_4x4_field( dctcoef level[16], const pixel *p_src, pixel *p_dst )
#undef ZIGDC
#define ZIGDC(i,y,x)
static int zigzag_sub_4x4ac_frame( dctcoef level[16], const pixel *p_src, pixel *p_dst, dctcoef *dc )
static int zigzag_sub_4x4ac_field( dctcoef level[16], const pixel *p_src, pixel *p_dst, dctcoef *dc )
static int zigzag_sub_8x8_frame( dctcoef level[64], const pixel *p_src, pixel *p_dst )
static int zigzag_sub_8x8_field( dctcoef level[64], const pixel *p_src, pixel *p_dst )
#undef ZIG
#undef COPY4x4
static void zigzag_interleave_8x8_cavlc( dctcoef *dst, dctcoef *src, uint8_t *nnz )
void x264_zigzag_init( int cpu, x264_zigzag_function_t *pf_progressive, x264_zigzag_function_t *pf_interlaced )
