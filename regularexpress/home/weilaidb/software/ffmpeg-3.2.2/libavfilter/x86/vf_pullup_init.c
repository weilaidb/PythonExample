int ff_pullup_filter_diff_mmx(const uint8_t *a, const uint8_t *b, ptrdiff_t s);
int ff_pullup_filter_comb_mmx(const uint8_t *a, const uint8_t *b, ptrdiff_t s);
int ff_pullup_filter_var_mmx (const uint8_t *a, const uint8_t *b, ptrdiff_t s);
av_cold void ff_pullup_init_x86(PullupContext *s)
