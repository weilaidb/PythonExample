#define bfa_ioc_portid(__ioc) ((__ioc)->port_id)
#define bfa_lpuid(__arg) bfa_ioc_portid(&(__arg)->ioc)
static void bfa_cee_format_lldp_cfg(struct bfa_cee_lldp_cfg *lldp_cfg);
static void bfa_cee_format_cee_cfg(void *buffer);
static void
bfa_cee_format_cee_cfg(void *buffer)
static void
bfa_cee_stats_swap(struct bfa_cee_stats *stats)
static void
bfa_cee_format_lldp_cfg(struct bfa_cee_lldp_cfg *lldp_cfg)
static u32
bfa_cee_attr_meminfo(void)
static u32
bfa_cee_stats_meminfo(void)
static void
bfa_cee_get_attr_isr(struct bfa_cee *cee, enum bfa_status status)
static void
bfa_cee_get_stats_isr(struct bfa_cee *cee, enum bfa_status status)
static void
bfa_cee_reset_stats_isr(struct bfa_cee *cee, enum bfa_status status)
u32
bfa_nw_cee_meminfo(void)
void
bfa_nw_cee_mem_claim(struct bfa_cee *cee, u8 *dma_kva, u64 dma_pa)
static void
bfa_cee_isr(void *cbarg, struct bfi_mbmsg *m)
static void
bfa_cee_hbfail(void *arg)
void
bfa_nw_cee_attach(struct bfa_cee *cee, struct bfa_ioc *ioc,
void *dev)
