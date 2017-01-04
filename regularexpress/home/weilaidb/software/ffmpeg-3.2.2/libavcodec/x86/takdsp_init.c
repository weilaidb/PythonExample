void ff_tak_decorrelate_ls_sse2(int32_t *p1, int32_t *p2, int length);
void ff_tak_decorrelate_sr_sse2(int32_t *p1, int32_t *p2, int length);
void ff_tak_decorrelate_sm_sse2(int32_t *p1, int32_t *p2, int length);
void ff_tak_decorrelate_sf_sse4(int32_t *p1, int32_t *p2, int length, int dshift, int dfactor);
av_cold void ff_takdsp_init_x86(TAKDSPContext *c)
