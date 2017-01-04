static unsigned long se_user;
static unsigned long se_sys;
static unsigned long se_half;
static unsigned long se_word;
static unsigned long se_dword;
static unsigned long se_multi;
static int se_usermode = UM_WARN | UM_FIXUP;
static int se_kernmode_warn;
core_param(alignment, se_usermode, int, 0600);
void inc_unaligned_byte_access(void)
void inc_unaligned_word_access(void)
void inc_unaligned_dword_access(void)
void inc_unaligned_multi_access(void)
void inc_unaligned_user_access(void)
void inc_unaligned_kernel_access(void)
unsigned int unaligned_user_action(void)
int get_unalign_ctl(struct task_struct *tsk, unsigned long addr)
int set_unalign_ctl(struct task_struct *tsk, unsigned int val)
void unaligned_fixups_notify(struct task_struct *tsk, insn_size_t insn,
struct pt_regs *regs)
static const char *se_usermode_action[] = ;
static int alignment_proc_show(struct seq_file *m, void *v)
static int alignment_proc_open(struct inode *inode, struct file *file)
static ssize_t alignment_proc_write(struct file *file,
const char __user *buffer, size_t count, loff_t *pos)
static const struct file_operations alignment_proc_fops = ;
static int __init alignment_init(void)
fs_initcall(alignment_init);
