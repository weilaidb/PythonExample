#define GDB_REG		0
#define GDB_PC		32
#define GDB_MSR		33
#define GDB_EAR		34
#define GDB_ESR		35
#define GDB_FSR		36
#define GDB_BTR		37
#define GDB_PVR		38
#define GDB_REDR	50
#define GDB_RPID	51
#define GDB_RZPR	52
#define GDB_RTLBX	53
#define GDB_RTLBSX	54
#define GDB_RTLBLO	55
#define GDB_RTLBHI	56
struct pvr_s pvr;
void pt_regs_to_gdb_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void gdb_regs_to_pt_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void microblaze_kgdb_break(struct pt_regs *regs)
void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
void kgdb_arch_set_pc(struct pt_regs *regs, unsigned long ip)
int kgdb_arch_handle_exception(int vector, int signo, int err_code,
char *remcom_in_buffer, char *remcom_out_buffer,
struct pt_regs *regs)
int kgdb_arch_init(void)
void kgdb_arch_exit(void)
struct kgdb_arch arch_kgdb_ops = ;
