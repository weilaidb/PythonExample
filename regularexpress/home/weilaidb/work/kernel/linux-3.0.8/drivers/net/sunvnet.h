#define _SUNVNET_H
#define DESC_NCOOKIES(entry_size)	\
((entry_size) - sizeof(struct vio_net_desc))
#define VNET_TX_TIMEOUT			(5 * HZ)
#define VNET_TX_RING_SIZE		512
#define VNET_TX_WAKEUP_THRESH(dr)	((dr)->pending / 4)
#define VNET_PACKET_SKIP		6
struct vnet_tx_entry ;
struct vnet;
struct vnet_port ;
static inline struct vnet_port *to_vnet_port(struct vio_driver_state *vio)
#define VNET_PORT_HASH_SIZE	16
#define VNET_PORT_HASH_MASK	(VNET_PORT_HASH_SIZE - 1)
static inline unsigned int vnet_hashfn(u8 *mac)
struct vnet_mcast_entry ;
struct vnet ;
