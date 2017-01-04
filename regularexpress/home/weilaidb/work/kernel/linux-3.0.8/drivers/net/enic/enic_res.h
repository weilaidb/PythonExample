#define _ENIC_RES_H_
#define ENIC_MIN_WQ_DESCS		64
#define ENIC_MAX_WQ_DESCS		4096
#define ENIC_MIN_RQ_DESCS		64
#define ENIC_MAX_RQ_DESCS		4096
#define ENIC_MIN_MTU			68
#define ENIC_MAX_MTU			9000
#define ENIC_MULTICAST_PERFECT_FILTERS	32
#define ENIC_UNICAST_PERFECT_FILTERS	32
#define ENIC_NON_TSO_MAX_DESC		16
#define ENIC_SETTING(enic, f) ((enic->config.flags & VENETF_##f) ? 1 : 0)
static inline void enic_queue_wq_desc_ex(struct vnic_wq *wq,
void *os_buf, dma_addr_t dma_addr, unsigned int len,
unsigned int mss_or_csum_offset, unsigned int hdr_len,
int vlan_tag_insert, unsigned int vlan_tag,
int offload_mode, int cq_entry, int sop, int eop, int loopback)
static inline void enic_queue_wq_desc_cont(struct vnic_wq *wq,
void *os_buf, dma_addr_t dma_addr, unsigned int len,
int eop, int loopback)
static inline void enic_queue_wq_desc(struct vnic_wq *wq, void *os_buf,
dma_addr_t dma_addr, unsigned int len, int vlan_tag_insert,
unsigned int vlan_tag, int eop, int loopback)
static inline void enic_queue_wq_desc_csum(struct vnic_wq *wq,
void *os_buf, dma_addr_t dma_addr, unsigned int len,
int ip_csum, int tcpudp_csum, int vlan_tag_insert,
unsigned int vlan_tag, int eop, int loopback)
static inline void enic_queue_wq_desc_csum_l4(struct vnic_wq *wq,
void *os_buf, dma_addr_t dma_addr, unsigned int len,
unsigned int csum_offset, unsigned int hdr_len,
int vlan_tag_insert, unsigned int vlan_tag, int eop, int loopback)
static inline void enic_queue_wq_desc_tso(struct vnic_wq *wq,
void *os_buf, dma_addr_t dma_addr, unsigned int len,
unsigned int mss, unsigned int hdr_len, int vlan_tag_insert,
unsigned int vlan_tag, int eop, int loopback)
static inline void enic_queue_rq_desc(struct vnic_rq *rq,
void *os_buf, unsigned int os_buf_index,
dma_addr_t dma_addr, unsigned int len)
struct enic;
int enic_get_vnic_config(struct enic *);
int enic_add_vlan(struct enic *enic, u16 vlanid);
int enic_del_vlan(struct enic *enic, u16 vlanid);
int enic_set_nic_cfg(struct enic *enic, u8 rss_default_cpu, u8 rss_hash_type,
u8 rss_hash_bits, u8 rss_base_cpu, u8 rss_enable, u8 tso_ipid_split_en,
u8 ig_vlan_strip_en);
int enic_set_rss_key(struct enic *enic, dma_addr_t key_pa, u64 len);
int enic_set_rss_cpu(struct enic *enic, dma_addr_t cpu_pa, u64 len);
void enic_get_res_counts(struct enic *enic);
void enic_init_vnic_resources(struct enic *enic);
int enic_alloc_vnic_resources(struct enic *);
void enic_free_vnic_resources(struct enic *);
