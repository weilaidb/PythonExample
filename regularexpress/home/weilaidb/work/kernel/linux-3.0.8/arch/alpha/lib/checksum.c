static inline unsigned short from64to16(unsigned long x)
__sum16 csum_tcpudp_magic(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
__wsum csum_tcpudp_nofold(__be32 saddr, __be32 daddr,
unsigned short len,
unsigned short proto,
__wsum sum)
EXPORT_SYMBOL(csum_tcpudp_nofold);
static inline unsigned long do_csum(const unsigned char * buff, int len)
__sum16 ip_fast_csum(const void *iph, unsigned int ihl)
__wsum csum_partial(const void *buff, int len, __wsum sum)
EXPORT_SYMBOL(csum_partial);
__sum16 ip_compute_csum(const void *buff, int len)
