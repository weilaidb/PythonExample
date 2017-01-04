void ff_bwdif_filter_line_mmxext(void *dst, void *prev, void *cur, void *next,
int w, int prefs, int mrefs, int prefs2,
int mrefs2, int prefs3, int mrefs3, int prefs4,
int mrefs4, int parity, int clip_max);
void ff_bwdif_filter_line_sse2(void *dst, void *prev, void *cur, void *next,
int w, int prefs, int mrefs, int prefs2,
int mrefs2, int prefs3, int mrefs3, int prefs4,
int mrefs4, int parity, int clip_max);
void ff_bwdif_filter_line_ssse3(void *dst, void *prev, void *cur, void *next,
int w, int prefs, int mrefs, int prefs2,
int mrefs2, int prefs3, int mrefs3, int prefs4,
int mrefs4, int parity, int clip_max);
void ff_bwdif_filter_line_12bit_mmxext(void *dst, void *prev, void *cur, void *next,
int w, int prefs, int mrefs, int prefs2,
int mrefs2, int prefs3, int mrefs3, int prefs4,
int mrefs4, int parity, int clip_max);
void ff_bwdif_filter_line_12bit_sse2(void *dst, void *prev, void *cur, void *next,
int w, int prefs, int mrefs, int prefs2,
int mrefs2, int prefs3, int mrefs3, int prefs4,
int mrefs4, int parity, int clip_max);
void ff_bwdif_filter_line_12bit_ssse3(void *dst, void *prev, void *cur, void *next,
int w, int prefs, int mrefs, int prefs2,
int mrefs2, int prefs3, int mrefs3, int prefs4,
int mrefs4, int parity, int clip_max);
av_cold void ff_bwdif_init_x86(BWDIFContext *bwdif)
