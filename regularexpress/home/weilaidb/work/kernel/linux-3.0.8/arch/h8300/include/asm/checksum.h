#define _H8300_CHECKSUM_H
__wsum csum_partial(const void *buff, int len, __wsum sum);
__wsum csum_partial_copy_nocheck(const void *src, void *dst, int len, __wsum sum);
extern __wsum csum_partial_copy_from_user(const void __user *src, void *dst,
int len, __wsum sum, int *csum_err);
__sum16 ip_fast_csum(const void *iph, unsigned int ihl);
static inline __sum16 csum_fold(__wsum sum)
static inline __wsum
csum_tcpudp_nofold(__be32 saddr, __be32 daddr, unsigned short len,
unsigned short proto, __wsum sum)
static inline __sum16
csum_tcpudp_magic(__be32 saddr, __be32 daddr, unsigned short len,
unsigned short proto, __wsum sum)
extern __sum16 ip_compute_csum(const void *buff, int len);
