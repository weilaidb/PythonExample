extern void __init board_setup(void);
extern void set_cpuspec(void);
void __init plat_mem_setup(void)
#if defined(CONFIG_64BIT_PHYS_ADDR) && defined(CONFIG_PCI)
phys_t __fixup_bigphys_addr(phys_t phys_addr, phys_t size)
EXPORT_SYMBOL(__fixup_bigphys_addr);
