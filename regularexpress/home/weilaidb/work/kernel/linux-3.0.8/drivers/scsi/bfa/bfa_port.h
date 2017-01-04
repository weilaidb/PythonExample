#define __BFA_PORT_H__
typedef void (*bfa_port_stats_cbfn_t) (void *dev, bfa_status_t status);
typedef void (*bfa_port_endis_cbfn_t) (void *dev, bfa_status_t status);
struct bfa_port_s ;
void	     bfa_port_attach(struct bfa_port_s *port, struct bfa_ioc_s *ioc,
void *dev, struct bfa_trc_mod_s *trcmod);
void	     bfa_port_hbfail(void *arg);
bfa_status_t bfa_port_get_stats(struct bfa_port_s *port,
union bfa_port_stats_u *stats,
bfa_port_stats_cbfn_t cbfn, void *cbarg);
bfa_status_t bfa_port_clear_stats(struct bfa_port_s *port,
bfa_port_stats_cbfn_t cbfn, void *cbarg);
bfa_status_t bfa_port_enable(struct bfa_port_s *port,
bfa_port_endis_cbfn_t cbfn, void *cbarg);
bfa_status_t bfa_port_disable(struct bfa_port_s *port,
bfa_port_endis_cbfn_t cbfn, void *cbarg);
u32     bfa_port_meminfo(void);
void	     bfa_port_mem_claim(struct bfa_port_s *port,
u8 *dma_kva, u64 dma_pa);
