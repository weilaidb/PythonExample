static void sim_notify_exec(const char *binary_name)
static int notify_exec(void)
static void sim_notify_interp(unsigned long load_addr)
static void *vdso_page;
static struct page *vdso_pages[1];
static int __init vdso_setup(void)
device_initcall(vdso_setup);
const char *arch_vma_name(struct vm_area_struct *vma)
int arch_setup_additional_pages(struct linux_binprm *bprm,
int executable_stack)
void elf_plat_init(struct pt_regs *regs, unsigned long load_addr)
