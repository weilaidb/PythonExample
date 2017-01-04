#if !defined(IB_ADDR_H)
#define IB_ADDR_H
struct rdma_addr_client ;
void rdma_addr_register_client(struct rdma_addr_client *client);
void rdma_addr_unregister_client(struct rdma_addr_client *client);
struct rdma_dev_addr ;
int rdma_translate_ip(struct sockaddr *addr, struct rdma_dev_addr *dev_addr);
int rdma_resolve_ip(struct rdma_addr_client *client,
struct sockaddr *src_addr, struct sockaddr *dst_addr,
struct rdma_dev_addr *addr, int timeout_ms,
void (*callback)(int status, struct sockaddr *src_addr,
struct rdma_dev_addr *addr, void *context),
void *context);
void rdma_addr_cancel(struct rdma_dev_addr *addr);
int rdma_copy_addr(struct rdma_dev_addr *dev_addr, struct net_device *dev,
const unsigned char *dst_dev_addr);
static inline int ip_addr_size(struct sockaddr *addr)
static inline u16 ib_addr_get_pkey(struct rdma_dev_addr *dev_addr)
static inline void ib_addr_set_pkey(struct rdma_dev_addr *dev_addr, u16 pkey)
static inline void ib_addr_get_mgid(struct rdma_dev_addr *dev_addr,
union ib_gid *gid)
static inline int rdma_addr_gid_offset(struct rdma_dev_addr *dev_addr)
static inline void iboe_mac_vlan_to_ll(union ib_gid *gid, u8 *mac, u16 vid)
static inline u16 rdma_vlan_dev_vlan_id(const struct net_device *dev)
static inline void iboe_addr_get_sgid(struct rdma_dev_addr *dev_addr,
union ib_gid *gid)
static inline void rdma_addr_get_sgid(struct rdma_dev_addr *dev_addr, union ib_gid *gid)
static inline void rdma_addr_set_sgid(struct rdma_dev_addr *dev_addr, union ib_gid *gid)
static inline void rdma_addr_get_dgid(struct rdma_dev_addr *dev_addr, union ib_gid *gid)
static inline void rdma_addr_set_dgid(struct rdma_dev_addr *dev_addr, union ib_gid *gid)
static inline enum ib_mtu iboe_get_mtu(int mtu)
static inline int iboe_get_rate(struct net_device *dev)
static inline int rdma_link_local_addr(struct in6_addr *addr)
static inline void rdma_get_ll_mac(struct in6_addr *addr, u8 *mac)
static inline int rdma_is_multicast_addr(struct in6_addr *addr)
static inline void rdma_get_mcast_mac(struct in6_addr *addr, u8 *mac)
static inline u16 rdma_get_vlan_id(union ib_gid *dgid)
static inline struct net_device *rdma_vlan_dev_real_dev(const struct net_device *dev)
