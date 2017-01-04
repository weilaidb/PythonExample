DEF_NATIVE(pv_irq_ops, irq_disable, "cli");
DEF_NATIVE(pv_irq_ops, irq_enable, "sti");
DEF_NATIVE(pv_irq_ops, restore_fl, "push %eax; popf");
DEF_NATIVE(pv_irq_ops, save_fl, "pushf; pop %eax");
DEF_NATIVE(pv_cpu_ops, iret, "iret");
DEF_NATIVE(pv_cpu_ops, irq_enable_sysexit, "sti; sysexit");
DEF_NATIVE(pv_mmu_ops, read_cr2, "mov %cr2, %eax");
DEF_NATIVE(pv_mmu_ops, write_cr3, "mov %eax, %cr3");
DEF_NATIVE(pv_mmu_ops, read_cr3, "mov %cr3, %eax");
DEF_NATIVE(pv_cpu_ops, clts, "clts");
DEF_NATIVE(pv_cpu_ops, read_tsc, "rdtsc");
unsigned paravirt_patch_ident_32(void *insnbuf, unsigned len)
unsigned paravirt_patch_ident_64(void *insnbuf, unsigned len)
unsigned native_patch(u8 type, u16 clobbers, void *ibuf,
unsigned long addr, unsigned len)
