struct ctx_list *ctx_list_pool;
struct ctx_list ctx_free;
struct ctx_list ctx_used;
extern void ld_mmu_sun4c(void);
extern void ld_mmu_srmmu(void);
void __init load_mmu(void)
