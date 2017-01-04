#if !defined (__ARM_EABI__)
#warning Your compiler does not have EABI support.
#warning    ARM unwind is known to compile only with EABI compilers.
#warning    Change compiler or disable ARM_UNWIND option.
#elif (__GNUC__ == 4 && __GNUC_MINOR__ <= 2)
#warning Your compiler is too buggy; it is known to not compile ARM unwind support.
#warning    Change compiler or disable ARM_UNWIND option.
void __aeabi_unwind_cpp_pr0(void)
;
EXPORT_SYMBOL(__aeabi_unwind_cpp_pr0);
void __aeabi_unwind_cpp_pr1(void)
;
EXPORT_SYMBOL(__aeabi_unwind_cpp_pr1);
void __aeabi_unwind_cpp_pr2(void)
;
EXPORT_SYMBOL(__aeabi_unwind_cpp_pr2);
struct unwind_ctrl_block ;
enum regs ;
extern struct unwind_idx __start_unwind_idx[];
extern struct unwind_idx __stop_unwind_idx[];
static DEFINE_SPINLOCK(unwind_lock);
static LIST_HEAD(unwind_tables);
#define prel31_to_addr(ptr)				\
()
static struct unwind_idx *search_index(unsigned long addr,
struct unwind_idx *first,
struct unwind_idx *last)
static struct unwind_idx *unwind_find_idx(unsigned long addr)
static unsigned long unwind_get_byte(struct unwind_ctrl_block *ctrl)
static int unwind_exec_insn(struct unwind_ctrl_block *ctrl)
int unwind_frame(struct stackframe *frame)
void unwind_backtrace(struct pt_regs *regs, struct task_struct *tsk)
struct unwind_table *unwind_table_add(unsigned long start, unsigned long size,
unsigned long text_addr,
unsigned long text_size)
void unwind_table_del(struct unwind_table *tab)
int __init unwind_init(void)
