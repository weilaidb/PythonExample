unsigned int __read_mostly vdso_enabled = 1;
EXPORT_SYMBOL_GPL(vdso_enabled);
static int __init vdso_setup(char *s)
__setup("vdso=", vdso_setup);
extern const char vsyscall_trapa_start, vsyscall_trapa_end;
static struct page *syscall_pages[1];
int __init vsyscall_init(void)
int arch_setup_additional_pages(struct linux_binprm *bprm, int uses_interp)
const char *arch_vma_name(struct vm_area_struct *vma)
struct vm_area_struct *get_gate_vma(struct mm_struct *mm)
int in_gate_area(struct mm_struct *mm, unsigned long address)
int in_gate_area_no_mm(unsigned long address)
