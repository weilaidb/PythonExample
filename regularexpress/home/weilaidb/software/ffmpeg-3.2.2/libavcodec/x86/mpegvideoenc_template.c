#undef MMREG_WIDTH
#undef MM
#undef MOVQ
#undef SPREADW
#undef PMAXW
#undef PMAX
#undef SAVE_SIGN
#undef RESTORE_SIGN
#if COMPILE_TEMPLATE_SSE2
#define MMREG_WIDTH
#define MM
#define MOVQ
SPREADW \
\
PMAXW
PMAX \
\
PMAXW(b, a)\
\
PMAXW(b, a)\
\
PMAXW(b, a)
#define MMREG_WIDTH
#define MM
#define MOVQ
#if COMPILE_TEMPLATE_MMXEXT
SPREADW
PMAXW
PMAX \
\
PMAXW(b, a)\
\
PMAXW(b, a)
SPREADW \
\
PMAXW \
\
PMAX  \
\
\
PMAXW(b, a)\
\
\
PMAXW(b, a)
#if COMPILE_TEMPLATE_SSSE3
SAVE_SIGN \
\
RESTORE_SIGN \
SAVE_SIGN \
\
\
\
RESTORE_SIGN \
\
RENAME(MpegEncContext *s,
int16_t *block, int n,
int qscale, int *overflow)
