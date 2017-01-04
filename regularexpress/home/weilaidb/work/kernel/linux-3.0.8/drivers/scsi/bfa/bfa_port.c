BFA_TRC_FILE(CNA, PORT);
#define bfa_ioc_portid(__ioc) ((__ioc)->port_id)
static void
bfa_port_stats_swap(struct bfa_port_s *port, union bfa_port_stats_u *stats)
static void
bfa_port_enable_isr(struct bfa_port_s *port, bfa_status_t status)
static void
bfa_port_disable_isr(struct bfa_port_s *port, bfa_status_t status)
static void
bfa_port_get_stats_isr(struct bfa_port_s *port, bfa_status_t status)
static void
bfa_port_clear_stats_isr(struct bfa_port_s *port, bfa_status_t status)
static void
bfa_port_isr(void *cbarg, struct bfi_mbmsg_s *m)
u32
bfa_port_meminfo(void)
void
bfa_port_mem_claim(struct bfa_port_s *port, u8 *dma_kva, u64 dma_pa)
bfa_status_t
bfa_port_enable(struct bfa_port_s *port, bfa_port_endis_cbfn_t cbfn,
void *cbarg)
bfa_status_t
bfa_port_disable(struct bfa_port_s *port, bfa_port_endis_cbfn_t cbfn,
void *cbarg)
bfa_status_t
bfa_port_get_stats(struct bfa_port_s *port, union bfa_port_stats_u *stats,
bfa_port_stats_cbfn_t cbfn, void *cbarg)
bfa_status_t
bfa_port_clear_stats(struct bfa_port_s *port, bfa_port_stats_cbfn_t cbfn,
void *cbarg)
void
bfa_port_hbfail(void *arg)
void
bfa_port_attach(struct bfa_port_s *port, struct bfa_ioc_s *ioc,
void *dev, struct bfa_trc_mod_s *trcmod)
