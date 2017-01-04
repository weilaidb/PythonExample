#define __NET_DSFIELD_H
static inline __u8 ipv4_get_dsfield(const struct iphdr *iph)
static inline __u8 ipv6_get_dsfield(const struct ipv6hdr *ipv6h)
static inline void ipv4_change_dsfield(struct iphdr *iph,__u8 mask,
__u8 value)
static inline void ipv6_change_dsfield(struct ipv6hdr *ipv6h,__u8 mask,
__u8 value)
