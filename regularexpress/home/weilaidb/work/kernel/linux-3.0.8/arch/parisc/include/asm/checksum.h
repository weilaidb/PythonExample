#define _PARISC_CHECKSUM_H
extern __wsum csum_partial(const void *, int, __wsum);
extern __wsum csum_partial_copy_nocheck(const void *, void *, int, __wsum);
extern __wsum csum_partial_copy_from_user(const void __user *src,
void *dst, int len, __wsum sum, int *errp);
static inline __sum16 ip_fast_csum(const void *iph, unsigned int ihl)
static inline __sum16 csum_fold(__wsum csum)
static inline __wsum csum_tcpudp_nofold(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
static inline __sum16 csum_tcpudp_magic(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
static inline __sum16 ip_compute_csum(const void *buf, int len)
#define _HAVE_ARCH_IPV6_CSUM
static __inline__ __sum16 csum_ipv6_magic(const struct in6_addr *saddr,
const struct in6_addr *daddr,
__u32 len, unsigned short proto,
__wsum sum)
#define HAVE_CSUM_COPY_USER
static __inline__ __wsum csum_and_copy_to_user(const void *src,
void __user *dst,
int len, __wsum sum,
int *err_ptr)
