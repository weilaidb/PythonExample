void ff_yadif_filter_line_mmxext(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_sse2(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_ssse3(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_16bit_mmxext(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_16bit_sse2(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_16bit_ssse3(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_16bit_sse4(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_10bit_mmxext(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_10bit_sse2(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
void ff_yadif_filter_line_10bit_ssse3(void *dst, void *prev, void *cur,
void *next, int w, int prefs,
int mrefs, int parity, int mode);
av_cold void ff_yadif_init_x86(YADIFContext *yadif)
