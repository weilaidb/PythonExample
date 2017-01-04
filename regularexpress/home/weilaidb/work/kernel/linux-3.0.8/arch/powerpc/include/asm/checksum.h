#define _ASM_POWERPC_CHECKSUM_H
extern __sum16 ip_fast_csum(const void *iph, unsigned int ihl);
extern __sum16 csum_tcpudp_magic(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum);
extern __wsum csum_partial(const void *buff, int len, __wsum sum);
extern __wsum csum_partial_copy_generic(const void *src, void *dst,
int len, __wsum sum,
int *src_err, int *dst_err);
#define _HAVE_ARCH_COPY_AND_CSUM_FROM_USER
extern __wsum csum_and_copy_from_user(const void __user *src, void *dst,
int len, __wsum sum, int *err_ptr);
#define HAVE_CSUM_COPY_USER
extern __wsum csum_and_copy_to_user(const void *src, void __user *dst,
int len, __wsum sum, int *err_ptr);
#define csum_partial_copy_from_user(src, dst, len, sum, errp)   \
csum_partial_copy_generic((__force const void *)(src), (dst), (len), (sum), (errp), NULL)
#define csum_partial_copy_nocheck(src, dst, len, sum)   \
csum_partial_copy_generic((src), (dst), (len), (sum), NULL, NULL)
static inline __sum16 csum_fold(__wsum sum)
static inline __sum16 ip_compute_csum(const void *buff, int len)
static inline __wsum csum_tcpudp_nofold(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
