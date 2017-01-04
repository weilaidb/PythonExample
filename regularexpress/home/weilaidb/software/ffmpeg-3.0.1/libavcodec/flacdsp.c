#define SAMPLE_SIZE 16
#define PLANAR 0
#undef  PLANAR
#define PLANAR 1
#undef  SAMPLE_SIZE
#undef  PLANAR
#define SAMPLE_SIZE 32
#define PLANAR 0
#undef  PLANAR
#define PLANAR 1
static void flac_lpc_16_c(int32_t *decoded, const int coeffs[32],
int pred_order, int qlevel, int len)
static void flac_lpc_32_c(int32_t *decoded, const int coeffs[32],
int pred_order, int qlevel, int len)
av_cold void ff_flacdsp_init(FLACDSPContext *c, enum AVSampleFormat fmt, int channels,
int bps)
