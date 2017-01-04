static cpumask_t ktext_repmask;
void __init setup_replication_mask(void)
static __init void set_ktext_source(nasid_t client_nasid, nasid_t server_nasid)
static __init void copy_kernel(nasid_t dest_nasid)
void __init replicate_kernel_text()
pfn_t node_getfirstfree(cnodeid_t cnode)
