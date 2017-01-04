#define AVFILTER_COLORSPACEDSP_H
typedef void (*yuv2rgb_fn)(int16_t *rgb[3], ptrdiff_t rgb_stride,
uint8_t *yuv[3], const ptrdiff_t yuv_stride[3],
int w, int h, const int16_t yuv2rgb_coeffs[3][3][8],
const int16_t yuv_offset[8]);
typedef void (*rgb2yuv_fn)(uint8_t *yuv[3], const ptrdiff_t yuv_stride[3],
int16_t *rgb[3], ptrdiff_t rgb_stride,
int w, int h, const int16_t rgb2yuv_coeffs[3][3][8],
const int16_t yuv_offset[8]);
typedef void (*rgb2yuv_fsb_fn)(uint8_t *yuv[3], const ptrdiff_t yuv_stride[3],
int16_t *rgb[3], ptrdiff_t rgb_stride,
int w, int h, const int16_t rgb2yuv_coeffs[3][3][8],
const int16_t yuv_offset[8],
int *rnd[3][2]);
typedef void (*yuv2yuv_fn)(uint8_t *yuv_out[3], const ptrdiff_t yuv_out_stride[3],
uint8_t *yuv_in[3], const ptrdiff_t yuv_in_stride[3],
int w, int h, const int16_t yuv2yuv_coeffs[3][3][8],
const int16_t yuv_offset[2][8]);
enum BitDepthIndex ;
enum ChromaSubsamplingIndex ;
typedef struct ColorSpaceDSPContext  ColorSpaceDSPContext;
void ff_colorspacedsp_init(ColorSpaceDSPContext *dsp);
void ff_colorspacedsp_x86_init(ColorSpaceDSPContext *dsp);
