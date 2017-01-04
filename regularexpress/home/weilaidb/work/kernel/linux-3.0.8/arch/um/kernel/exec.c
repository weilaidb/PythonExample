void flush_thread(void)
void start_thread(struct pt_regs *regs, unsigned long eip, unsigned long esp)
static long execve1(const char *file,
const char __user *const __user *argv,
const char __user *const __user *env)
long um_execve(const char *file, const char __user *const __user *argv, const char __user *const __user *env)
long sys_execve(const char __user *file, const char __user *const __user *argv,
const char __user *const __user *env)
