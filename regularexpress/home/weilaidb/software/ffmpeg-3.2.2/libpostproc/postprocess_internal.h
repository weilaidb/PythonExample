#define POSTPROC_POSTPROCESS_INTERNAL_H
#define V_DEBLOCK       0x01
#define H_DEBLOCK       0x02
#define DERING          0x04
#define LEVEL_FIX       0x08
#define LUM_V_DEBLOCK   V_DEBLOCK
#define LUM_H_DEBLOCK   H_DEBLOCK
#define CHROM_V_DEBLOCK (V_DEBLOCK<<4)
#define CHROM_H_DEBLOCK (H_DEBLOCK<<4)
#define LUM_DERING      DERING
#define CHROM_DERING    (DERING<<4)
#define LUM_LEVEL_FIX   LEVEL_FIX
#define CHROM_LEVEL_FIX (LEVEL_FIX<<4)
#define V_X1_FILTER     0x0200
#define V_A_DEBLOCK     0x0400
#define H_X1_FILTER     0x2000
#define H_A_DEBLOCK     0x4000
#define FULL_Y_RANGE    0x8000
#define LINEAR_IPOL_DEINT_FILTER        0x10000
#define LINEAR_BLEND_DEINT_FILTER       0x20000
#define CUBIC_BLEND_DEINT_FILTER        0x8000
#define CUBIC_IPOL_DEINT_FILTER         0x40000
#define MEDIAN_DEINT_FILTER             0x80000
#define FFMPEG_DEINT_FILTER             0x400000
#define LOWPASS5_DEINT_FILTER           0x800000
#define TEMP_NOISE_FILTER               0x100000
#define FORCE_QUANT                     0x200000
#define BITEXACT                        0x1000000
#define VISUALIZE                       0x2000000
struct PPFilter;
typedef struct PPMode PPMode;
typedef struct PPContext PPContext;
linecpy
