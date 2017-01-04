#undef WARN_OLD
#undef CORE_DUMP
static int load_aout_binary(struct linux_binprm *, struct pt_regs *regs);
static int load_aout_library(struct file *);
static int aout_core_dump(long signr, struct pt_regs *regs, struct file *file,
unsigned long limit);
static void dump_thread32(struct pt_regs *regs, struct user32 *dump)
static struct linux_binfmt aout_format = ;
static void set_brk(unsigned long start, unsigned long end)
#define DUMP_WRITE(addr, nr)			     \
if (!dump_write(file, (void *)(addr), (nr))) \
goto end_coredump;
#define DUMP_SEEK(offset)		\
if (!dump_seek(file, offset))	\
goto end_coredump;
#define START_DATA()	(u.u_tsize << PAGE_SHIFT)
#define START_STACK(u)	(u.start_stack)
static int aout_core_dump(long signr, struct pt_regs *regs, struct file *file,
unsigned long limit)
static u32 __user *create_aout_tables(char __user *p, struct linux_binprm *bprm)
static int load_aout_binary(struct linux_binprm *bprm, struct pt_regs *regs)
static int load_aout_library(struct file *file)
static int __init init_aout_binfmt(void)
static void __exit exit_aout_binfmt(void)
module_init(init_aout_binfmt);
module_exit(exit_aout_binfmt);
MODULE_LICENSE("GPL");
