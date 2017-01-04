#define __HCP_PHYP_H__
struct h_galpa ;
struct h_galpas ;
static inline u64 hipz_galpa_load(struct h_galpa galpa, u32 offset)
static inline void hipz_galpa_store(struct h_galpa galpa, u32 offset, u64 value)
int hcp_galpas_ctor(struct h_galpas *galpas, int is_user,
u64 paddr_kernel, u64 paddr_user);
int hcp_galpas_dtor(struct h_galpas *galpas);
u64 hcall_map_page(u64 physaddr);
int hcall_unmap_page(u64 mapaddr);
