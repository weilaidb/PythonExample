#undef DEBUG
#define DBG(fmt...) do  while(0)
#define DBG(fmt...) do  while(0)
static phys_addr_t tsi108_csr_base = -1;
phys_addr_t get_csrbase(void)
u32 get_vir_csrbase(void)
EXPORT_SYMBOL(get_csrbase);
EXPORT_SYMBOL(get_vir_csrbase);
static int __init tsi108_eth_of_init(void)
arch_initcall(tsi108_eth_of_init);
