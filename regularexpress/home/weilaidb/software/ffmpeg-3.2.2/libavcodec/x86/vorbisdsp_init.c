void ff_vorbis_inverse_coupling_3dnow(float *mag, float *ang,
intptr_t blocksize);
void ff_vorbis_inverse_coupling_sse(float *mag, float *ang,
intptr_t blocksize);
av_cold void ff_vorbisdsp_init_x86(VorbisDSPContext *dsp)
