void ff_tta_filter_process_ssse3(int32_t *qm, int32_t *dx, int32_t *dl,
int32_t *error, int32_t *in, int32_t shift,
int32_t round);
void ff_tta_filter_process_sse4(int32_t *qm, int32_t *dx, int32_t *dl,
int32_t *error, int32_t *in, int32_t shift,
int32_t round);
av_cold void ff_ttadsp_init_x86(TTADSPContext *c)