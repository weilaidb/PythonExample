#undef MMREG_WIDTH
#undef MM
#undef MOVQ
#undef SPREADW
#undef PMAXW
#undef PMAX
#undef SAVE_SIGN
#undef RESTORE_SIGN
#if COMPILE_TEMPLATE_SSE2
#define MMREG_WIDTH "16"
#define MM "%%xmm"
#define MOVQ "movdqa"
#define SPREADW(a) \
"pshuflw $0, "a", "a"       \n\t"\
"punpcklwd "a", "a"         \n\t"
#define PMAXW(a,b) "pmaxsw "a", "b"     \n\t"
#define PMAX(a,b) \
"movhlps "a", "b"           \n\t"\
PMAXW(b, a)\
"pshuflw $0x0E, "a", "b"    \n\t"\
PMAXW(b, a)\
"pshuflw $0x01, "a", "b"    \n\t"\
PMAXW(b, a)
#define MMREG_WIDTH "8"
#define MM "%%mm"
#define MOVQ "movq"
#if COMPILE_TEMPLATE_MMXEXT
#define SPREADW(a) "pshufw $0, "a", "a" \n\t"
#define PMAXW(a,b) "pmaxsw "a", "b"     \n\t"
#define PMAX(a,b) \
"pshufw $0x0E, "a", "b"     \n\t"\
PMAXW(b, a)\
"pshufw $0x01, "a", "b"     \n\t"\
PMAXW(b, a)
#define SPREADW(a) \
"punpcklwd "a", "a"         \n\t"\
"punpcklwd "a", "a"         \n\t"
#define PMAXW(a,b) \
"psubusw "a", "b"           \n\t"\
"paddw "a", "b"             \n\t"
#define PMAX(a,b)  \
"movq "a", "b"              \n\t"\
"psrlq $32, "a"             \n\t"\
PMAXW(b, a)\
"movq "a", "b"              \n\t"\
"psrlq $16, "a"             \n\t"\
PMAXW(b, a)
#if COMPILE_TEMPLATE_SSSE3
#define SAVE_SIGN(a,b) \
"movdqa "b", "a"            \n\t"\
"pabsw  "b", "b"            \n\t"
#define RESTORE_SIGN(a,b) \
"psignw "a", "b"            \n\t"
#define SAVE_SIGN(a,b) \
"pxor "a", "a"              \n\t"\
"pcmpgtw "b", "a"           \n\t"\
"pxor "a", "b"              \n\t"\
"psubw "a", "b"             \n\t"
#define RESTORE_SIGN(a,b) \
"pxor "a", "b"              \n\t"\
"psubw "a", "b"             \n\t"
static int RENAME(dct_quantize)(MpegEncContext *s,
int16_t *block, int n,
int qscale, int *overflow)
