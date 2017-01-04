#undef DEBUG
#define DBG(x)	printk x
#define DBG(x)
asmlinkage int sys32_execve(struct pt_regs *regs)
asmlinkage long sys32_unimplemented(int r26, int r25, int r24, int r23,
int r22, int r21, int r20)
asmlinkage long sys32_sched_rr_get_interval(pid_t pid,
struct compat_timespec __user *interval)
struct msgbuf32 ;
asmlinkage long sys32_msgsnd(int msqid,
struct msgbuf32 __user *umsgp32,
size_t msgsz, int msgflg)
asmlinkage long sys32_msgrcv(int msqid,
struct msgbuf32 __user *umsgp32,
size_t msgsz, long msgtyp, int msgflg)
asmlinkage int sys32_sendfile(int out_fd, int in_fd, compat_off_t __user *offset, s32 count)
asmlinkage int sys32_sendfile64(int out_fd, int in_fd, compat_loff_t __user *offset, s32 count)
asmlinkage int sys32_lseek(unsigned int fd, int offset, unsigned int origin)
asmlinkage long sys32_semctl(int semid, int semnum, int cmd, union semun arg)
long sys32_lookup_dcookie(u32 cookie_high, u32 cookie_low, char __user *buf,
size_t len)
asmlinkage long compat_sys_fallocate(int fd, int mode, u32 offhi, u32 offlo,
u32 lenhi, u32 lenlo)
asmlinkage long compat_sys_fanotify_mark(int fan_fd, int flags, u32 mask_hi,
u32 mask_lo, int fd,
const char __user *pathname)
