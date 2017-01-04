#define AVUTIL_FLOAT_DSP_H
typedef struct AVFloatDSPContext  AVFloatDSPContext;
float avpriv_scalarproduct_float_c(const float *v1, const float *v2, int len);
void ff_float_dsp_init_aarch64(AVFloatDSPContext *fdsp);
void ff_float_dsp_init_arm(AVFloatDSPContext *fdsp);
void ff_float_dsp_init_ppc(AVFloatDSPContext *fdsp, int strict);
void ff_float_dsp_init_x86(AVFloatDSPContext *fdsp);
void ff_float_dsp_init_mips(AVFloatDSPContext *fdsp);
AVFloatDSPContext *avpriv_float_dsp_alloc(int strict);
