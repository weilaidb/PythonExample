#define __UNICORE_CHECKSUM_H__
static inline __wsum
csum_tcpudp_nofold(__be32 saddr, __be32 daddr, unsigned short len,
unsigned short proto, __wsum sum)
#define csum_tcpudp_nofold	csum_tcpudp_nofold
