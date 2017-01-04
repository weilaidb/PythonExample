static void instruction_dump(unsigned long *pc)
#define __SAVE __asm__ __volatile__("save %sp, -0x40, %sp\n\t")
#define __RESTORE __asm__ __volatile__("restore %g0, %g0, %g0\n\t")
void die_if_kernel(char *str, struct pt_regs *regs)
void do_hw_interrupt(struct pt_regs *regs, unsigned long type)
void do_illegal_instruction(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
void do_priv_instruction(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
void do_memaccess_unaligned(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
static unsigned long init_fsr = 0x0UL;
static unsigned long init_fregs[32] __attribute__ ((aligned (8))) =
;
void do_fpd_trap(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
static unsigned long fake_regs[32] __attribute__ ((aligned (8)));
static unsigned long fake_fsr;
static unsigned long fake_queue[32] __attribute__ ((aligned (8)));
static unsigned long fake_depth;
extern int do_mathemu(struct pt_regs *, struct task_struct *);
void do_fpe_trap(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
{
static int calls;
siginfo_t info;
unsigned long fsr;
int ret = 0;
struct task_struct *fpt = last_task_used_math;
struct task_struct *fpt = current;
put_psr(get_psr() | PSR_EF);
if(!fpt)
void handle_tag_overflow(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
void handle_watchpoint(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
void handle_reg_access(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
void handle_cp_disabled(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
void handle_cp_exception(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
void handle_hw_divzero(struct pt_regs *regs, unsigned long pc, unsigned long npc,
unsigned long psr)
void do_BUG(const char *file, int line)
EXPORT_SYMBOL(do_BUG);
void trap_init(void)
