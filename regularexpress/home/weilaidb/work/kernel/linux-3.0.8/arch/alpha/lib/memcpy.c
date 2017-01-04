#define ALIGN_DEST_TO8_UP(d,s,n) \
while (d & 7)
#define ALIGN_DEST_TO8_DN(d,s,n) \
while (d & 7)
#define DO_REST_UP(d,s,n) \
while (n > 0)
#define DO_REST_DN(d,s,n) \
while (n > 0)
#define DO_REST_ALIGNED_UP(d,s,n) DO_REST_UP(d,s,n)
#define DO_REST_ALIGNED_DN(d,s,n) DO_REST_DN(d,s,n)
static inline void __memcpy_unaligned_up (unsigned long d, unsigned long s,
long n)
static inline void __memcpy_unaligned_dn (unsigned long d, unsigned long s,
long n)
static inline void __memcpy_aligned_up (unsigned long d, unsigned long s,
long n)
static inline void __memcpy_aligned_dn (unsigned long d, unsigned long s,
long n)
void * memcpy(void * dest, const void *src, size_t n)
asm("__memcpy = memcpy; .globl __memcpy");
