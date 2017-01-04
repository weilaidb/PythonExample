#define AVCODEC_H264DSP_H
typedef void (*h264_weight_func)(uint8_t *block, int stride, int height,
int log2_denom, int weight, int offset);
typedef void (*h264_biweight_func)(uint8_t *dst, uint8_t *src,
int stride, int height, int log2_denom,
int weightd, int weights, int offset);
typedef struct H264DSPContext  H264DSPContext;
void ff_h264dsp_init(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc);
void ff_h264dsp_init_aarch64(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc);
void ff_h264dsp_init_arm(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc);
void ff_h264dsp_init_ppc(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc);
void ff_h264dsp_init_x86(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc);
void ff_h264dsp_init_mips(H264DSPContext *c, const int bit_depth,
const int chroma_format_idc);
