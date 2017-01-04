#define _CQ_ENET_DESC_H_
struct cq_enet_wq_desc ;
static inline void cq_enet_wq_desc_dec(struct cq_enet_wq_desc *desc,
u8 *type, u8 *color, u16 *q_number, u16 *completed_index)
struct cq_enet_rq_desc ;
#define CQ_ENET_RQ_DESC_FLAGS_INGRESS_PORT          (0x1 << 12)
#define CQ_ENET_RQ_DESC_FLAGS_FCOE                  (0x1 << 13)
#define CQ_ENET_RQ_DESC_FLAGS_EOP                   (0x1 << 14)
#define CQ_ENET_RQ_DESC_FLAGS_SOP                   (0x1 << 15)
#define CQ_ENET_RQ_DESC_RSS_TYPE_BITS               4
#define CQ_ENET_RQ_DESC_RSS_TYPE_MASK \
((1 << CQ_ENET_RQ_DESC_RSS_TYPE_BITS) - 1)
#define CQ_ENET_RQ_DESC_RSS_TYPE_NONE               0
#define CQ_ENET_RQ_DESC_RSS_TYPE_IPv4               1
#define CQ_ENET_RQ_DESC_RSS_TYPE_TCP_IPv4           2
#define CQ_ENET_RQ_DESC_RSS_TYPE_IPv6               3
#define CQ_ENET_RQ_DESC_RSS_TYPE_TCP_IPv6           4
#define CQ_ENET_RQ_DESC_RSS_TYPE_IPv6_EX            5
#define CQ_ENET_RQ_DESC_RSS_TYPE_TCP_IPv6_EX        6
#define CQ_ENET_RQ_DESC_FLAGS_CSUM_NOT_CALC         (0x1 << 14)
#define CQ_ENET_RQ_DESC_BYTES_WRITTEN_BITS          14
#define CQ_ENET_RQ_DESC_BYTES_WRITTEN_MASK \
((1 << CQ_ENET_RQ_DESC_BYTES_WRITTEN_BITS) - 1)
#define CQ_ENET_RQ_DESC_FLAGS_TRUNCATED             (0x1 << 14)
#define CQ_ENET_RQ_DESC_FLAGS_VLAN_STRIPPED         (0x1 << 15)
#define CQ_ENET_RQ_DESC_FCOE_SOF_BITS               4
#define CQ_ENET_RQ_DESC_FCOE_SOF_MASK \
((1 << CQ_ENET_RQ_DESC_FCOE_SOF_BITS) - 1)
#define CQ_ENET_RQ_DESC_FCOE_EOF_BITS               8
#define CQ_ENET_RQ_DESC_FCOE_EOF_MASK \
((1 << CQ_ENET_RQ_DESC_FCOE_EOF_BITS) - 1)
#define CQ_ENET_RQ_DESC_FCOE_EOF_SHIFT              8
#define CQ_ENET_RQ_DESC_FLAGS_TCP_UDP_CSUM_OK       (0x1 << 0)
#define CQ_ENET_RQ_DESC_FCOE_FC_CRC_OK              (0x1 << 0)
#define CQ_ENET_RQ_DESC_FLAGS_UDP                   (0x1 << 1)
#define CQ_ENET_RQ_DESC_FCOE_ENC_ERROR              (0x1 << 1)
#define CQ_ENET_RQ_DESC_FLAGS_TCP                   (0x1 << 2)
#define CQ_ENET_RQ_DESC_FLAGS_IPV4_CSUM_OK          (0x1 << 3)
#define CQ_ENET_RQ_DESC_FLAGS_IPV6                  (0x1 << 4)
#define CQ_ENET_RQ_DESC_FLAGS_IPV4                  (0x1 << 5)
#define CQ_ENET_RQ_DESC_FLAGS_IPV4_FRAGMENT         (0x1 << 6)
#define CQ_ENET_RQ_DESC_FLAGS_FCS_OK                (0x1 << 7)
static inline void cq_enet_rq_desc_dec(struct cq_enet_rq_desc *desc,
u8 *type, u8 *color, u16 *q_number, u16 *completed_index,
u8 *ingress_port, u8 *fcoe, u8 *eop, u8 *sop, u8 *rss_type,
u8 *csum_not_calc, u32 *rss_hash, u16 *bytes_written, u8 *packet_error,
u8 *vlan_stripped, u16 *vlan, u16 *checksum, u8 *fcoe_sof,
u8 *fcoe_fc_crc_ok, u8 *fcoe_enc_error, u8 *fcoe_eof,
u8 *tcp_udp_csum_ok, u8 *udp, u8 *tcp, u8 *ipv4_csum_ok,
u8 *ipv6, u8 *ipv4, u8 *ipv4_fragment, u8 *fcs_ok)
