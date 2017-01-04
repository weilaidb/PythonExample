#define OPCODE_BT(op)		(((op) & 0xff00) == 0x8900)
#define OPCODE_BF(op)		(((op) & 0xff00) == 0x8b00)
#define OPCODE_BTF_DISP(op)	(((op) & 0x80) ? (((op) | 0xffffff80) << 1) : \
(((op) & 0x7f ) << 1))
#define OPCODE_BFS(op)		(((op) & 0xff00) == 0x8f00)
#define OPCODE_BTS(op)		(((op) & 0xff00) == 0x8d00)
#define OPCODE_BRA(op)		(((op) & 0xf000) == 0xa000)
#define OPCODE_BRA_DISP(op)	(((op) & 0x800) ? (((op) | 0xfffff800) << 1) : \
(((op) & 0x7ff) << 1))
#define OPCODE_BRAF(op)		(((op) & 0xf0ff) == 0x0023)
#define OPCODE_BRAF_REG(op)	(((op) & 0x0f00) >> 8)
#define OPCODE_BSR(op)		(((op) & 0xf000) == 0xb000)
#define OPCODE_BSR_DISP(op)	(((op) & 0x800) ? (((op) | 0xfffff800) << 1) : \
(((op) & 0x7ff) << 1))
#define OPCODE_BSRF(op)		(((op) & 0xf0ff) == 0x0003)
#define OPCODE_BSRF_REG(op)	(((op) >> 8) & 0xf)
#define OPCODE_JMP(op)		(((op) & 0xf0ff) == 0x402b)
#define OPCODE_JMP_REG(op)	(((op) >> 8) & 0xf)
#define OPCODE_JSR(op)		(((op) & 0xf0ff) == 0x400b)
#define OPCODE_JSR_REG(op)	(((op) >> 8) & 0xf)
#define OPCODE_RTS(op)		((op) == 0xb)
#define OPCODE_RTE(op)		((op) == 0x2b)
#define SR_T_BIT_MASK           0x1
#define STEP_OPCODE             0xc33d
static short *get_step_address(struct pt_regs *linux_regs)
static unsigned long stepped_address;
static insn_size_t stepped_opcode;
static void do_single_step(struct pt_regs *linux_regs)
static void undo_single_step(struct pt_regs *linux_regs)
void pt_regs_to_gdb_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void gdb_regs_to_pt_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
int kgdb_arch_handle_exception(int e_vector, int signo, int err_code,
char *remcomInBuffer, char *remcomOutBuffer,
struct pt_regs *linux_regs)
unsigned long kgdb_arch_pc(int exception, struct pt_regs *regs)
void kgdb_arch_set_pc(struct pt_regs *regs, unsigned long ip)
BUILD_TRAP_HANDLER(singlestep)
static int __kgdb_notify(struct die_args *args, unsigned long cmd)
static int
kgdb_notify(struct notifier_block *self, unsigned long cmd, void *ptr)
static struct notifier_block kgdb_notifier = ;
int kgdb_arch_init(void)
void kgdb_arch_exit(void)
struct kgdb_arch arch_kgdb_ops = ;
