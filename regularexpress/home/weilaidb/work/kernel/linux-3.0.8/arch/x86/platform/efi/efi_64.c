static pgd_t save_pgd __initdata;
static unsigned long efi_flags __initdata;
static void __init early_code_mapping_set_exec(int executable)
void __init efi_call_phys_prelog(void)
void __init efi_call_phys_epilog(void)
void __iomem *__init efi_ioremap(unsigned long phys_addr, unsigned long size,
u32 type)
