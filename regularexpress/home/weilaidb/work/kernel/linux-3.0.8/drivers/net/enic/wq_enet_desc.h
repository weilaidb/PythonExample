#define _WQ_ENET_DESC_H_
struct wq_enet_desc ;
#define WQ_ENET_ADDR_BITS		64
#define WQ_ENET_LEN_BITS		14
#define WQ_ENET_LEN_MASK		((1 << WQ_ENET_LEN_BITS) - 1)
#define WQ_ENET_MSS_BITS		14
#define WQ_ENET_MSS_MASK		((1 << WQ_ENET_MSS_BITS) - 1)
#define WQ_ENET_MSS_SHIFT		2
#define WQ_ENET_LOOPBACK_SHIFT		1
#define WQ_ENET_HDRLEN_BITS		10
#define WQ_ENET_HDRLEN_MASK		((1 << WQ_ENET_HDRLEN_BITS) - 1)
#define WQ_ENET_FLAGS_OM_BITS		2
#define WQ_ENET_FLAGS_OM_MASK		((1 << WQ_ENET_FLAGS_OM_BITS) - 1)
#define WQ_ENET_FLAGS_EOP_SHIFT		12
#define WQ_ENET_FLAGS_CQ_ENTRY_SHIFT	13
#define WQ_ENET_FLAGS_FCOE_ENCAP_SHIFT	14
#define WQ_ENET_FLAGS_VLAN_TAG_INSERT_SHIFT	15
#define WQ_ENET_OFFLOAD_MODE_CSUM	0
#define WQ_ENET_OFFLOAD_MODE_RESERVED	1
#define WQ_ENET_OFFLOAD_MODE_CSUM_L4	2
#define WQ_ENET_OFFLOAD_MODE_TSO	3
static inline void wq_enet_desc_enc(struct wq_enet_desc *desc,
u64 address, u16 length, u16 mss, u16 header_length,
u8 offload_mode, u8 eop, u8 cq_entry, u8 fcoe_encap,
u8 vlan_tag_insert, u16 vlan_tag, u8 loopback)
static inline void wq_enet_desc_dec(struct wq_enet_desc *desc,
u64 *address, u16 *length, u16 *mss, u16 *header_length,
u8 *offload_mode, u8 *eop, u8 *cq_entry, u8 *fcoe_encap,
u8 *vlan_tag_insert, u16 *vlan_tag, u8 *loopback)
