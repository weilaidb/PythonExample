asmlinkage void system_call(void);
asmlinkage void buserr(void);
asmlinkage void trap(void);
asmlinkage void nmihandler(void);
asmlinkage void fpu_emu(void);
e_vector vectors[256];
asm(".text\n"
__ALIGN_STR "\n"
"nmihandler: rte");
void __init base_trap_init(void)
void __init trap_init (void)
static const char *vec_names[] = ;
static const char *space_names[] = ;
void die_if_kernel(char *,struct pt_regs *,int);
asmlinkage int do_page_fault(struct pt_regs *regs, unsigned long address,
unsigned long error_code);
int send_fault_sig(struct pt_regs *regs);
asmlinkage void trap_c(struct frame *fp);
#if defined (CONFIG_M68060)
static inline void access_error060 (struct frame *fp)
#if defined (CONFIG_M68040)
static inline unsigned long probe040(int iswrite, unsigned long addr, int wbs)
static inline int do_040writeback1(unsigned short wbs, unsigned long wba,
unsigned long wbd)
static inline void fix_xframe040(struct frame *fp, unsigned long wba, unsigned short wbs)
static inline void do_040writebacks(struct frame *fp)
asmlinkage void berr_040cleanup(struct frame *fp)
static inline void access_error040(struct frame *fp)
#if defined(CONFIG_SUN3)
extern int mmu_emu_handle_fault (unsigned long, int, int);
static inline void bus_error030 (struct frame *fp)
#if defined(CPU_M68020_OR_M68030)
static inline void bus_error030 (struct frame *fp)
asmlinkage void buserr_c(struct frame *fp)
static int kstack_depth_to_print = 48;
void show_trace(unsigned long *stack)
void show_registers(struct pt_regs *regs)
void show_stack(struct task_struct *task, unsigned long *stack)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
void bad_super_trap (struct frame *fp)
asmlinkage void trap_c(struct frame *fp)
void die_if_kernel (char *str, struct pt_regs *fp, int nr)
asmlinkage void fpsp040_die(void)
asmlinkage void fpemu_signal(int signal, int code, void *addr)
