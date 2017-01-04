#define AVCODEC_DIRAC_VLC_H
typedef uint64_t residual;
#define LUT_BITS 8
typedef struct DiracGolombLUT  DiracGolombLUT;
av_cold int ff_dirac_golomb_reader_init(DiracGolombLUT **lut_ctx);
int ff_dirac_golomb_read_32bit(DiracGolombLUT *lut_ctx, const uint8_t *buf,
int bytes, uint8_t *dst, int coeffs);
int ff_dirac_golomb_read_16bit(DiracGolombLUT *lut_ctx, const uint8_t *buf,
int bytes, uint8_t *_dst, int coeffs);
av_cold void ff_dirac_golomb_reader_end(DiracGolombLUT **lut_ctx);
