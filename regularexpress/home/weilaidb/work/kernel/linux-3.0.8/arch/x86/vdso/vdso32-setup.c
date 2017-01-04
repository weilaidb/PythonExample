enum ;
#define VDSO_DEFAULT	VDSO_COMPAT
#define VDSO_DEFAULT	VDSO_ENABLED
#define vdso_enabled			sysctl_vsyscall32
#define arch_setup_additional_pages	syscall32_setup_pages
#define VDSO_ADDR_ADJUST	(VDSO_HIGH_BASE - (unsigned long)VDSO32_PRELINK)
unsigned int __read_mostly vdso_enabled = VDSO_DEFAULT;
static int __init vdso_setup(char *s)
__setup("vdso32=", vdso_setup);
__setup_param("vdso=", vdso32_setup, vdso_setup, 0);
EXPORT_SYMBOL_GPL(vdso_enabled);
static __init void reloc_symtab(Elf32_Ehdr *ehdr,
unsigned offset, unsigned size)
static __init void reloc_dyn(Elf32_Ehdr *ehdr, unsigned offset)
static __init void relocate_vdso(Elf32_Ehdr *ehdr)
static struct page *vdso32_pages[1];
#define	vdso32_sysenter()	(boot_cpu_has(X86_FEATURE_SYSENTER32))
#define	vdso32_syscall()	(boot_cpu_has(X86_FEATURE_SYSCALL32))
void syscall32_cpu_init(void)
#define compat_uses_vma		1
static inline void map_compat_vdso(int map)
#define vdso32_sysenter()	(boot_cpu_has(X86_FEATURE_SEP))
#define vdso32_syscall()	(0)
void enable_sep_cpu(void)
static struct vm_area_struct gate_vma;
static int __init gate_vma_init(void)
#define compat_uses_vma		0
static void map_compat_vdso(int map)
int __init sysenter_setup(void)
int arch_setup_additional_pages(struct linux_binprm *bprm, int uses_interp)
subsys_initcall(sysenter_setup);
static ctl_table abi_table2[] = ;
static ctl_table abi_root_table2[] = ;
static __init int ia32_binfmt_init(void)
__initcall(ia32_binfmt_init);
const char *arch_vma_name(struct vm_area_struct *vma)
struct vm_area_struct *get_gate_vma(struct mm_struct *mm)
int in_gate_area(struct mm_struct *mm, unsigned long addr)
int in_gate_area_no_mm(unsigned long addr)
