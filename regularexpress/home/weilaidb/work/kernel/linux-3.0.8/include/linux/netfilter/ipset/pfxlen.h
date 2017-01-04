#define _PFXLEN_H
extern const union nf_inet_addr ip_set_netmask_map[];
extern const union nf_inet_addr ip_set_hostmask_map[];
static inline __be32
ip_set_netmask(u8 pfxlen)
static inline const __be32 *
ip_set_netmask6(u8 pfxlen)
static inline u32
ip_set_hostmask(u8 pfxlen)
static inline const __be32 *
ip_set_hostmask6(u8 pfxlen)
