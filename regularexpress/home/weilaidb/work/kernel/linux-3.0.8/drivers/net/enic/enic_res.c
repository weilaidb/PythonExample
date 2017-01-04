int enic_get_vnic_config(struct enic *enic)
int enic_add_vlan(struct enic *enic, u16 vlanid)
int enic_del_vlan(struct enic *enic, u16 vlanid)
int enic_set_nic_cfg(struct enic *enic, u8 rss_default_cpu, u8 rss_hash_type,
u8 rss_hash_bits, u8 rss_base_cpu, u8 rss_enable, u8 tso_ipid_split_en,
u8 ig_vlan_strip_en)
int enic_set_rss_key(struct enic *enic, dma_addr_t key_pa, u64 len)
int enic_set_rss_cpu(struct enic *enic, dma_addr_t cpu_pa, u64 len)
void enic_free_vnic_resources(struct enic *enic)
void enic_get_res_counts(struct enic *enic)
void enic_init_vnic_resources(struct enic *enic)
int enic_alloc_vnic_resources(struct enic *enic)
