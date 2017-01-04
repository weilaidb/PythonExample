#define _CHECKSUM_IPV6_H
static __inline__ __sum16 csum_ipv6_magic(const struct in6_addr *saddr,
const struct in6_addr *daddr,
__u32 len, unsigned short proto,
__wsum csum)
