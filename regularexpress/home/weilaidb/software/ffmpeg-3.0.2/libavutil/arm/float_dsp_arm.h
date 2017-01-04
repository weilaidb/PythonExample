#define AVUTIL_ARM_FLOAT_DSP_ARM_H
void ff_float_dsp_init_vfp(AVFloatDSPContext *fdsp, int cpu_flags);
void ff_float_dsp_init_neon(AVFloatDSPContext *fdsp);
