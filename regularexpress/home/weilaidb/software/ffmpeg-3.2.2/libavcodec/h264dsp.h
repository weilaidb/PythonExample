#define AVCODEC_H264DSP_H
typedef void (*h264_weight_func)(uint8_t *block, ptrdiff_t stride, int height,
int log2_denom, int weight, int offset);
typedef void (*h264_biweight_func)(uint8_t *dst, uint8_t *src,
ptrdiff_t stride, int height, int log2_denom,
int weightd, int weights, int offset);
typedef struct H264DSPContext  H264DSPContext;
ff_h264dsp_init;
ff_h264dsp_init_aarch64;
ff_h264dsp_init_arm;
ff_h264dsp_init_ppc;
ff_h264dsp_init_x86;
ff_h264dsp_init_mips;
