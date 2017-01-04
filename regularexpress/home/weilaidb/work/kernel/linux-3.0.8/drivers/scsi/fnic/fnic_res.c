int fnic_get_vnic_config(struct fnic *fnic)
int fnic_set_nic_config(struct fnic *fnic, u8 rss_default_cpu,
u8 rss_hash_type,
u8 rss_hash_bits, u8 rss_base_cpu, u8 rss_enable,
u8 tso_ipid_split_en, u8 ig_vlan_strip_en)
void fnic_get_res_counts(struct fnic *fnic)
void fnic_free_vnic_resources(struct fnic *fnic)
int fnic_alloc_vnic_resources(struct fnic *fnic)
