u64 hcall_map_page(u64 physaddr)
int hcall_unmap_page(u64 mapaddr)
int hcp_galpas_ctor(struct h_galpas *galpas, int is_user,
u64 paddr_kernel, u64 paddr_user)
int hcp_galpas_dtor(struct h_galpas *galpas)
