#define ldq_u(x,y) \
__asm__ __volatile__("ldq_u %0,%1":"=r" (x):"m" (*(const unsigned long *)(y)))
#define stq_u(x,y) \
__asm__ __volatile__("stq_u %1,%0":"=m" (*(unsigned long *)(y)):"r" (x))
#define extql(x,y,z) \
__asm__ __volatile__("extql %1,%2,%0":"=r" (z):"r" (x),"r" (y))
#define extqh(x,y,z) \
__asm__ __volatile__("extqh %1,%2,%0":"=r" (z):"r" (x),"r" (y))
#define mskql(x,y,z) \
__asm__ __volatile__("mskql %1,%2,%0":"=r" (z):"r" (x),"r" (y))
#define mskqh(x,y,z) \
__asm__ __volatile__("mskqh %1,%2,%0":"=r" (z):"r" (x),"r" (y))
#define insql(x,y,z) \
__asm__ __volatile__("insql %1,%2,%0":"=r" (z):"r" (x),"r" (y))
#define insqh(x,y,z) \
__asm__ __volatile__("insqh %1,%2,%0":"=r" (z):"r" (x),"r" (y))
#define __get_user_u(x,ptr)				\
()
#define __put_user_u(x,ptr)				\
()
static inline unsigned short from64to16(unsigned long x)
static inline unsigned long
csum_partial_cfu_aligned(const unsigned long __user *src, unsigned long *dst,
long len, unsigned long checksum,
int *errp)
static inline unsigned long
csum_partial_cfu_dest_aligned(const unsigned long __user *src,
unsigned long *dst,
unsigned long soff,
long len, unsigned long checksum,
int *errp)
static inline unsigned long
csum_partial_cfu_src_aligned(const unsigned long __user *src,
unsigned long *dst,
unsigned long doff,
long len, unsigned long checksum,
unsigned long partial_dest,
int *errp)
static inline unsigned long
csum_partial_cfu_unaligned(const unsigned long __user * src,
unsigned long * dst,
unsigned long soff, unsigned long doff,
long len, unsigned long checksum,
unsigned long partial_dest,
int *errp)
__wsum
csum_partial_copy_from_user(const void __user *src, void *dst, int len,
__wsum sum, int *errp)
__wsum
csum_partial_copy_nocheck(const void *src, void *dst, int len, __wsum sum)
