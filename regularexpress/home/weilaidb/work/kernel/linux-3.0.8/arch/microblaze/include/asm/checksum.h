#define _ASM_MICROBLAZE_CHECKSUM_H
#define csum_tcpudp_nofold	csum_tcpudp_nofold
static inline __wsum
csum_tcpudp_nofold(__be32 saddr, __be32 daddr, unsigned short len,
unsigned short proto, __wsum sum)
