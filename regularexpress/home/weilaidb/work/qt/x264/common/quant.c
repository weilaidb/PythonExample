#if HAVE_MMX
#if ARCH_PPC
#   include "ppc/quant.h"
#if ARCH_ARM
#   include "arm/quant.h"
#if ARCH_AARCH64
#   include "aarch64/quant.h"
#if ARCH_MIPS
#   include "mips/quant.h"
#define QUANT_ONE( coef, mf, f ) \
static int quant_8x8( dctcoef dct[64], udctcoef mf[64], udctcoef bias[64] )
static int quant_4x4( dctcoef dct[16], udctcoef mf[16], udctcoef bias[16] )
static int quant_4x4x4( dctcoef dct[4][16], udctcoef mf[16], udctcoef bias[16] )
static int quant_4x4_dc( dctcoef dct[16], int mf, int bias )
static int quant_2x2_dc( dctcoef dct[4], int mf, int bias )
#define DEQUANT_SHL( x ) \
dct[x] = ( dct[x] * dequant_mf[i_mf][x] ) << i_qbits
#define DEQUANT_SHR( x ) \
dct[x] = ( dct[x] * dequant_mf[i_mf][x] + f ) >> (-i_qbits)
static void dequant_4x4( dctcoef dct[16], int dequant_mf[6][16], int i_qp )
static void dequant_8x8( dctcoef dct[64], int dequant_mf[6][64], int i_qp )
static void dequant_4x4_dc( dctcoef dct[16], int dequant_mf[6][16], int i_qp )
#define IDCT_DEQUANT_2X4_START \
int a0 = dct[0] + dct[1]; \
int a1 = dct[2] + dct[3]; \
int a2 = dct[4] + dct[5]; \
int a3 = dct[6] + dct[7]; \
int a4 = dct[0] - dct[1]; \
int a5 = dct[2] - dct[3]; \
int a6 = dct[4] - dct[5]; \
int a7 = dct[6] - dct[7]; \
int b0 = a0 + a1; \
int b1 = a2 + a3; \
int b2 = a4 + a5; \
int b3 = a6 + a7; \
int b4 = a0 - a1; \
int b5 = a2 - a3; \
int b6 = a4 - a5; \
int b7 = a6 - a7;
static void idct_dequant_2x4_dc( dctcoef dct[8], dctcoef dct4x4[8][16], int dequant_mf[6][16], int i_qp )
static void idct_dequant_2x4_dconly( dctcoef dct[8], int dequant_mf[6][16], int i_qp )
static ALWAYS_INLINE void optimize_chroma_idct_dequant_2x4( dctcoef out[8], dctcoef dct[8], int dmf )
#undef IDCT_DEQUANT_2X4_START
static ALWAYS_INLINE void optimize_chroma_idct_dequant_2x2( dctcoef out[4], dctcoef dct[4], int dmf )
static ALWAYS_INLINE int optimize_chroma_round( dctcoef *ref, dctcoef *dct, int dequant_mf, int chroma422 )
static ALWAYS_INLINE int optimize_chroma_dc_internal( dctcoef *dct, int dequant_mf, int chroma422 )
static int optimize_chroma_2x2_dc( dctcoef dct[4], int dequant_mf )
static int optimize_chroma_2x4_dc( dctcoef dct[8], int dequant_mf )
static void x264_denoise_dct( dctcoef *dct, uint32_t *sum, udctcoef *offset, int size )
const uint8_t x264_decimate_table4[16] =
;
const uint8_t x264_decimate_table8[64] =
;
static int ALWAYS_INLINE x264_decimate_score_internal( dctcoef *dct, int i_max )
static int x264_decimate_score15( dctcoef *dct )
static int x264_decimate_score16( dctcoef *dct )
static int x264_decimate_score64( dctcoef *dct )
#define last(num)\
static int x264_coeff_last##num( dctcoef *l )\
last(4)
last(8)
last(15)
last(16)
last(64)
#define level_run(num)\
static int x264_coeff_level_run##num( dctcoef *dct, x264_run_level_t *runlevel )\
level_run(4)
level_run(8)
level_run(15)
level_run(16)
#if ARCH_X86_64
#define INIT_TRELLIS(cpu)\
pf->trellis_cabac_4x4 = x264_trellis_cabac_4x4_##cpu;\
pf->trellis_cabac_8x8 = x264_trellis_cabac_8x8_##cpu;\
pf->trellis_cabac_4x4_psy = x264_trellis_cabac_4x4_psy_##cpu;\
pf->trellis_cabac_8x8_psy = x264_trellis_cabac_8x8_psy_##cpu;\
pf->trellis_cabac_dc = x264_trellis_cabac_dc_##cpu;\
pf->trellis_cabac_chroma_422_dc = x264_trellis_cabac_chroma_422_dc_##cpu;
#define INIT_TRELLIS(...)
void x264_quant_init( x264_t *h, int cpu, x264_quant_function_t *pf )
