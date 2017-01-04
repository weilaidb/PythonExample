#define __BFA_CEE_H__
typedef void (*bfa_cee_get_attr_cbfn_t) (void *dev, enum bfa_status status);
typedef void (*bfa_cee_get_stats_cbfn_t) (void *dev, enum bfa_status status);
typedef void (*bfa_cee_reset_stats_cbfn_t) (void *dev, enum bfa_status status);
typedef void (*bfa_cee_hbfail_cbfn_t) (void *dev, enum bfa_status status);
struct bfa_cee_cbfn ;
struct bfa_cee ;
u32 bfa_nw_cee_meminfo(void);
void bfa_nw_cee_mem_claim(struct bfa_cee *cee, u8 *dma_kva,
u64 dma_pa);
void bfa_nw_cee_attach(struct bfa_cee *cee, struct bfa_ioc *ioc, void *dev);
