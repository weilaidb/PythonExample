struct oldabi_stat64  __attribute__ ((packed,aligned(4)));
static long cp_oldabi_stat64(struct kstat *stat,
struct oldabi_stat64 __user *statbuf)
asmlinkage long sys_oabi_stat64(const char __user * filename,
struct oldabi_stat64 __user * statbuf)
asmlinkage long sys_oabi_lstat64(const char __user * filename,
struct oldabi_stat64 __user * statbuf)
asmlinkage long sys_oabi_fstat64(unsigned long fd,
struct oldabi_stat64 __user * statbuf)
asmlinkage long sys_oabi_fstatat64(int dfd,
const char __user *filename,
struct oldabi_stat64  __user *statbuf,
int flag)
struct oabi_flock64  __attribute__ ((packed,aligned(4)));
asmlinkage long sys_oabi_fcntl64(unsigned int fd, unsigned int cmd,
unsigned long arg)
struct oabi_epoll_event  __attribute__ ((packed,aligned(4)));
asmlinkage long sys_oabi_epoll_ctl(int epfd, int op, int fd,
struct oabi_epoll_event __user *event)
asmlinkage long sys_oabi_epoll_wait(int epfd,
struct oabi_epoll_event __user *events,
int maxevents, int timeout)
struct oabi_sembuf ;
asmlinkage long sys_oabi_semtimedop(int semid,
struct oabi_sembuf __user *tsops,
unsigned nsops,
const struct timespec __user *timeout)
asmlinkage long sys_oabi_semop(int semid, struct oabi_sembuf __user *tsops,
unsigned nsops)
asmlinkage int sys_oabi_ipc(uint call, int first, int second, int third,
void __user *ptr, long fifth)
asmlinkage long sys_oabi_bind(int fd, struct sockaddr __user *addr, int addrlen)
asmlinkage long sys_oabi_connect(int fd, struct sockaddr __user *addr, int addrlen)
asmlinkage long sys_oabi_sendto(int fd, void __user *buff,
size_t len, unsigned flags,
struct sockaddr __user *addr,
int addrlen)
asmlinkage long sys_oabi_sendmsg(int fd, struct msghdr __user *msg, unsigned flags)
asmlinkage long sys_oabi_socketcall(int call, unsigned long __user *args)
