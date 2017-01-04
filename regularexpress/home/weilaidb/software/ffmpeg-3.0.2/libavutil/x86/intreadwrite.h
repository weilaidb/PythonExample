#define AVUTIL_X86_INTREADWRITE_H
#if HAVE_MMX
#if !HAVE_FAST_64BIT && defined(__MMX__)
#define AV_COPY64 AV_COPY64
static av_always_inline void AV_COPY64(void *d, const void *s)
#define AV_SWAP64 AV_SWAP64
static av_always_inline void AV_SWAP64(void *a, void *b)
#define AV_ZERO64 AV_ZERO64
static av_always_inline void AV_ZERO64(void *d)
#define AV_COPY128 AV_COPY128
static av_always_inline void AV_COPY128(void *d, const void *s)
#define AV_ZERO128 AV_ZERO128
static av_always_inline void AV_ZERO128(void *d)
