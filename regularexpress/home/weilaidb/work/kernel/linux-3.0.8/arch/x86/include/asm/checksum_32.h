#define _ASM_X86_CHECKSUM_32_H
asmlinkage __wsum csum_partial(const void *buff, int len, __wsum sum);
asmlinkage __wsum csum_partial_copy_generic(const void *src, void *dst,
int len, __wsum sum,
int *src_err_ptr, int *dst_err_ptr);
static inline __wsum csum_partial_copy_nocheck(const void *src, void *dst,
int len, __wsum sum)
static inline __wsum csum_partial_copy_from_user(const void __user *src,
void *dst,
int len, __wsum sum,
int *err_ptr)
static inline __sum16 ip_fast_csum(const void *iph, unsigned int ihl)
static inline __sum16 csum_fold(__wsum sum)
static inline __wsum csum_tcpudp_nofold(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
static inline __sum16 csum_tcpudp_magic(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
static inline __sum16 ip_compute_csum(const void *buff, int len)
#define _HAVE_ARCH_IPV6_CSUM
static inline __sum16 csum_ipv6_magic(const struct in6_addr *saddr,
const struct in6_addr *daddr,
__u32 len, unsigned short proto,
__wsum sum)
#define HAVE_CSUM_COPY_USER
static inline __wsum csum_and_copy_to_user(const void *src,
void __user *dst,
int len, __wsum sum,
int *err_ptr)
