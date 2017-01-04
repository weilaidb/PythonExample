#define __NR_O32_sigreturn		4119
#define __NR_O32_rt_sigreturn		4193
#define __NR_N32_rt_sigreturn		6211
static struct page *vdso_page;
static void __init install_trampoline(u32 *tramp, unsigned int sigreturn)
static int __init init_vdso(void)
subsys_initcall(init_vdso);
static unsigned long vdso_addr(unsigned long start)
int arch_setup_additional_pages(struct linux_binprm *bprm, int uses_interp)
const char *arch_vma_name(struct vm_area_struct *vma)
