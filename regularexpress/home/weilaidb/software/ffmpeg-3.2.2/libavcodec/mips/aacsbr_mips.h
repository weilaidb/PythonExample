#define AVCODEC_MIPS_AACSBR_MIPS_H
#if HAVE_INLINE_ASM
static void sbr_qmf_analysis_mips(AVFloatDSPContext *fdsp, FFTContext *mdct,
SBRDSPContext *sbrdsp, const float *in, float *x,
float z[320], float W[2][32][32][2], int buf_idx)
#if HAVE_MIPSFPU
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void sbr_qmf_synthesis_mips(FFTContext *mdct,
SBRDSPContext *sbrdsp, AVFloatDSPContext *fdsp,
float *out, float X[2][38][64],
float mdct_buf[2][64],
float *v0, int *v_off, const unsigned int div)
#define sbr_qmf_analysis sbr_qmf_analysis_mips
#define sbr_qmf_synthesis sbr_qmf_synthesis_mips
