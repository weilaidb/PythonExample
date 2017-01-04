#define _ASM_CHECKSUM_H
extern __wsum csum_partial(const void *buff, int len, __wsum sum);
extern __wsum csum_partial_copy_nocheck(const void *src, void *dst,
int len, __wsum sum);
extern __wsum csum_partial_copy_from_user(const void *src, void *dst,
int len, __wsum sum,
int *err_ptr);
extern __sum16 ip_fast_csum(const void *iph, unsigned int ihl);
extern __wsum csum_partial(const void *buff, int len, __wsum sum);
extern __sum16 ip_compute_csum(const void *buff, int len);
#define csum_partial_copy_fromuser csum_partial_copy
extern __wsum csum_partial_copy(const void *src, void *dst, int len,
__wsum sum);
static inline __sum16 csum_fold(__wsum sum)
static inline __wsum csum_tcpudp_nofold(unsigned long saddr,
unsigned long daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
static inline __sum16 csum_tcpudp_magic(unsigned long saddr,
unsigned long daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
#undef _HAVE_ARCH_IPV6_CSUM
#define HAVE_CSUM_COPY_USER
extern __wsum csum_and_copy_to_user(const void *src, void *dst, int len,
__wsum sum, int *err_ptr);
