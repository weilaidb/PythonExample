void machine_kexec_mask_interrupts(void)
void machine_crash_shutdown(struct pt_regs *regs)
int machine_kexec_prepare(struct kimage *image)
void machine_kexec_cleanup(struct kimage *image)
void arch_crash_save_vmcoreinfo(void)
void machine_kexec(struct kimage *image)
void __init reserve_crashkernel(void)
int overlaps_crashkernel(unsigned long start, unsigned long size)
static phys_addr_t kernel_end;
static phys_addr_t crashk_size;
static struct property kernel_end_prop = ;
static struct property crashk_base_prop = ;
static struct property crashk_size_prop = ;
static void __init export_crashk_values(struct device_node *node)
static int __init kexec_setup(void)
late_initcall(kexec_setup);
