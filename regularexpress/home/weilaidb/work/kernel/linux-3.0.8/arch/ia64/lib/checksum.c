static inline unsigned short
from64to16 (unsigned long x)
__sum16
csum_tcpudp_magic (__be32 saddr, __be32 daddr, unsigned short len,
unsigned short proto, __wsum sum)
EXPORT_SYMBOL(csum_tcpudp_magic);
__wsum
csum_tcpudp_nofold (__be32 saddr, __be32 daddr, unsigned short len,
unsigned short proto, __wsum sum)
EXPORT_SYMBOL(csum_tcpudp_nofold);
extern unsigned long do_csum (const unsigned char *, long);
__wsum csum_partial(const void *buff, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial);
__sum16 ip_compute_csum (const void *buff, int len)
EXPORT_SYMBOL(ip_compute_csum);
