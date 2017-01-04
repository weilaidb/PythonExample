enum x86_pf_error_code ;
static inline int __kprobes
kmmio_fault(struct pt_regs *regs, unsigned long addr)
static inline int __kprobes notify_page_fault(struct pt_regs *regs)
static inline int
check_prefetch_opcode(struct pt_regs *regs, unsigned char *instr,
unsigned char opcode, int *prefetch)
static int
is_prefetch(struct pt_regs *regs, unsigned long error_code, unsigned long addr)
static void
force_sig_info_fault(int si_signo, int si_code, unsigned long address,
struct task_struct *tsk, int fault)
DEFINE_SPINLOCK(pgd_lock);
LIST_HEAD(pgd_list);
static inline pmd_t *vmalloc_sync_one(pgd_t *pgd, unsigned long address)
void vmalloc_sync_all(void)
static noinline __kprobes int vmalloc_fault(unsigned long address)
static inline void
check_v8086_mode(struct pt_regs *regs, unsigned long address,
struct task_struct *tsk)
static bool low_pfn(unsigned long pfn)
static void dump_pagetable(unsigned long address)
void vmalloc_sync_all(void)
static noinline __kprobes int vmalloc_fault(unsigned long address)
static const char errata93_warning[] =
KERN_ERR
"******* Your BIOS seems to not contain a fix for K8 errata #93\n"
"******* Working around it, but it may cause SEGVs or burn power.\n"
"******* Please consider a BIOS update.\n"
"******* Disabling USB legacy in the BIOS may also help.\n";
static inline void
check_v8086_mode(struct pt_regs *regs, unsigned long address,
struct task_struct *tsk)
static int bad_address(void *p)
static void dump_pagetable(unsigned long address)
static int is_errata93(struct pt_regs *regs, unsigned long address)
static int is_errata100(struct pt_regs *regs, unsigned long address)
static int is_f00f_bug(struct pt_regs *regs, unsigned long address)
static const char nx_warning[] = KERN_CRIT
"kernel tried to execute NX-protected page - exploit attempt? (uid: %d)\n";
static void
show_fault_oops(struct pt_regs *regs, unsigned long error_code,
unsigned long address)
static noinline void
pgtable_bad(struct pt_regs *regs, unsigned long error_code,
unsigned long address)
static noinline void
no_context(struct pt_regs *regs, unsigned long error_code,
unsigned long address)
static inline void
show_signal_msg(struct pt_regs *regs, unsigned long error_code,
unsigned long address, struct task_struct *tsk)
static void
__bad_area_nosemaphore(struct pt_regs *regs, unsigned long error_code,
unsigned long address, int si_code)
static noinline void
bad_area_nosemaphore(struct pt_regs *regs, unsigned long error_code,
unsigned long address)
static void
__bad_area(struct pt_regs *regs, unsigned long error_code,
unsigned long address, int si_code)
static noinline void
bad_area(struct pt_regs *regs, unsigned long error_code, unsigned long address)
static noinline void
bad_area_access_error(struct pt_regs *regs, unsigned long error_code,
unsigned long address)
static void
out_of_memory(struct pt_regs *regs, unsigned long error_code,
unsigned long address)
static void
do_sigbus(struct pt_regs *regs, unsigned long error_code, unsigned long address,
unsigned int fault)
static noinline int
mm_fault_error(struct pt_regs *regs, unsigned long error_code,
unsigned long address, unsigned int fault)
static int spurious_fault_check(unsigned long error_code, pte_t *pte)
static noinline __kprobes int
spurious_fault(unsigned long error_code, unsigned long address)
int show_unhandled_signals = 1;
static inline int
access_error(unsigned long error_code, struct vm_area_struct *vma)
static int fault_in_kernel_space(unsigned long address)
dotraplinkage void __kprobes
do_page_fault(struct pt_regs *regs, unsigned long error_code)
