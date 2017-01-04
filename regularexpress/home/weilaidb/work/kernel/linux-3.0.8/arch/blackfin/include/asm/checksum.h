#define _BFIN_CHECKSUM_H
static inline __wsum
__csum_tcpudp_nofold(__be32 saddr, __be32 daddr, unsigned short len,
unsigned short proto, __wsum sum)
#define csum_tcpudp_nofold __csum_tcpudp_nofold
