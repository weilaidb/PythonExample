static inline unsigned short from32to16(unsigned int x)
static unsigned int do_csum(const unsigned char *buff, int len)
__sum16 ip_fast_csum(const void *iph, unsigned int ihl)
EXPORT_SYMBOL(ip_fast_csum);
__wsum csum_partial(const void *buff, int len, __wsum wsum)
EXPORT_SYMBOL(csum_partial);
__sum16 ip_compute_csum(const void *buff, int len)
EXPORT_SYMBOL(ip_compute_csum);
__wsum
csum_partial_copy_from_user(const void __user *src, void *dst, int len,
__wsum sum, int *csum_err)
EXPORT_SYMBOL(csum_partial_copy_from_user);
__wsum
csum_partial_copy(const void *src, void *dst, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial_copy);
__wsum csum_tcpudp_nofold(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
EXPORT_SYMBOL(csum_tcpudp_nofold);
