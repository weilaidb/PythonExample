DEFINE_PER_CPU(struct uv_hub_info_s, __uv_hub_info);
EXPORT_PER_CPU_SYMBOL_GPL(__uv_hub_info);
int sn_prom_type;
long sn_partition_id;
EXPORT_SYMBOL(sn_partition_id);
long sn_coherency_id;
EXPORT_SYMBOL_GPL(sn_coherency_id);
long sn_region_size;
EXPORT_SYMBOL(sn_region_size);
struct redir_addr ;
#define DEST_SHIFT UVH_RH_GAM_ALIAS210_REDIRECT_CONFIG_0_MMR_DEST_BASE_SHFT
static __initdata struct redir_addr redir_addrs[] = ;
static __init void get_lowmem_redirect(unsigned long *base, unsigned long *size)
void __init uv_setup(char **cmdline_p)
