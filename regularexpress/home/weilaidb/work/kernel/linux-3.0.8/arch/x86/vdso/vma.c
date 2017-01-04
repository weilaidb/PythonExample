unsigned int __read_mostly vdso_enabled = 1;
extern char vdso_start[], vdso_end[];
extern unsigned short vdso_sync_cpuid;
static struct page **vdso_pages;
static unsigned vdso_size;
static int __init init_vdso_vars(void)
subsys_initcall(init_vdso_vars);
struct linux_binprm;
static unsigned long vdso_addr(unsigned long start, unsigned len)
int arch_setup_additional_pages(struct linux_binprm *bprm, int uses_interp)
static __init int vdso_setup(char *s)
__setup("vdso=", vdso_setup);
