#define __memcpy memcpy
#define word_t uint64_t
#if CHIP_L2_LINE_SIZE() != 64 && CHIP_L2_LINE_SIZE() != 128
#error "Assumes 64 or 128 byte line size"
#define PREFETCH_LINES_AHEAD 3
#define ST(p, v) (*(p) = (v))
#define LD(p) (*(p))
#define ST1 ST
#define ST2 ST
#define ST4 ST
#define ST8 ST
#define LD1 LD
#define LD2 LD
#define LD4 LD
#define LD8 LD
#define RETVAL dstv
void *memcpy(void *__restrict dstv, const void *__restrict srcv, size_t n)
#define RETVAL 0
int USERCOPY_FUNC(void *__restrict dstv, const void *__restrict srcv, size_t n)
#undef ST1
#undef ST2
#undef ST4
#undef ST8
#undef LD1
#undef LD2
#undef LD4
#undef LD8
#undef USERCOPY_FUNC
