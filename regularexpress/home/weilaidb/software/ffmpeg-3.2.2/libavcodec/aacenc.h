#define AVCODEC_AACENC_H
typedef enum AACCoder AACCoder;
typedef struct AACEncOptions  AACEncOptions;
struct AACEncContext;
typedef struct AACCoefficientsEncoder  AACCoefficientsEncoder;
extern AACCoefficientsEncoder ff_aac_coders[];
typedef struct AACQuantizeBandCostCacheEntry  AACQuantizeBandCostCacheEntry;
typedef struct AACEncContext  AACEncContext;
ff_aac_dsp_init_x86;
ff_aac_coder_init_mips;
ff_quantize_band_cost_cache_init;
