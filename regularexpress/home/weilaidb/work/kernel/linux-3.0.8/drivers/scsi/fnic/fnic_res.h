#define _FNIC_RES_H_
static inline void fnic_queue_wq_desc(struct vnic_wq *wq,
void *os_buf, dma_addr_t dma_addr,
unsigned int len, unsigned int fc_eof,
int vlan_tag_insert,
unsigned int vlan_tag,
int cq_entry, int sop, int eop)
static inline void fnic_queue_wq_eth_desc(struct vnic_wq *wq,
void *os_buf, dma_addr_t dma_addr,
unsigned int len,
int vlan_tag_insert,
unsigned int vlan_tag,
int cq_entry)
static inline void fnic_queue_wq_copy_desc_icmnd_16(struct vnic_wq_copy *wq,
u32 req_id,
u32 lunmap_id, u8 spl_flags,
u32 sgl_cnt, u32 sense_len,
u64 sgl_addr, u64 sns_addr,
u8 crn, u8 pri_ta,
u8 flags, u8 *scsi_cdb,
u8 cdb_len,
u32 data_len, u8 *lun,
u32 d_id, u16 mss,
u32 ratov, u32 edtov)
static inline void fnic_queue_wq_copy_desc_itmf(struct vnic_wq_copy *wq,
u32 req_id, u32 lunmap_id,
u32 tm_req, u32 tm_id, u8 *lun,
u32 d_id, u32 r_a_tov,
u32 e_d_tov)
static inline void fnic_queue_wq_copy_desc_flogi_reg(struct vnic_wq_copy *wq,
u32 req_id, u8 format,
u32 s_id, u8 *gw_mac)
static inline void fnic_queue_wq_copy_desc_fip_reg(struct vnic_wq_copy *wq,
u32 req_id, u32 s_id,
u8 *fcf_mac, u8 *ha_mac,
u32 r_a_tov, u32 e_d_tov)
static inline void fnic_queue_wq_copy_desc_fw_reset(struct vnic_wq_copy *wq,
u32 req_id)
static inline void fnic_queue_wq_copy_desc_lunmap(struct vnic_wq_copy *wq,
u32 req_id, u64 lunmap_addr,
u32 lunmap_len)
static inline void fnic_queue_rq_desc(struct vnic_rq *rq,
void *os_buf, dma_addr_t dma_addr,
u16 len)
struct fnic;
int fnic_get_vnic_config(struct fnic *);
int fnic_alloc_vnic_resources(struct fnic *);
void fnic_free_vnic_resources(struct fnic *);
void fnic_get_res_counts(struct fnic *);
int fnic_set_nic_config(struct fnic *fnic, u8 rss_default_cpu,
u8 rss_hash_type, u8 rss_hash_bits, u8 rss_base_cpu,
u8 rss_enable, u8 tso_ipid_split_en,
u8 ig_vlan_strip_en);
