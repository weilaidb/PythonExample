void elf_fdpic_arch_lay_out_mm(struct elf_fdpic_params *exec_params,
struct elf_fdpic_params *interp_params,
unsigned long *start_stack,
unsigned long *start_brk)
unsigned long arch_get_unmapped_area(struct file *filp, unsigned long addr, unsigned long len,
unsigned long pgoff, unsigned long flags)
