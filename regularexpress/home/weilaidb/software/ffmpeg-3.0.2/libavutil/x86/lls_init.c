void ff_update_lls_sse2(LLSModel *m, const double *var);
void ff_update_lls_avx(LLSModel *m, const double *var);
void ff_update_lls_fma3(LLSModel *m, const double *var);
double ff_evaluate_lls_sse2(LLSModel *m, const double *var, int order);
av_cold void ff_init_lls_x86(LLSModel *m)
