#if !defined(IB_FMR_POOL_H)
#define IB_FMR_POOL_H
struct ib_fmr_pool;
struct ib_fmr_pool_param ;
struct ib_pool_fmr ;
struct ib_fmr_pool *ib_create_fmr_pool(struct ib_pd             *pd,
struct ib_fmr_pool_param *params);
void ib_destroy_fmr_pool(struct ib_fmr_pool *pool);
int ib_flush_fmr_pool(struct ib_fmr_pool *pool);
struct ib_pool_fmr *ib_fmr_pool_map_phys(struct ib_fmr_pool *pool_handle,
u64                *page_list,
int                 list_len,
u64                 io_virtual_address);
int ib_fmr_pool_unmap(struct ib_pool_fmr *fmr);
