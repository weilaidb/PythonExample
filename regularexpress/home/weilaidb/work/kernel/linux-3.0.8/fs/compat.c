int compat_log = 1;
int compat_printk(const char *fmt, ...)
asmlinkage long compat_sys_utime(const char __user *filename,
struct compat_utimbuf __user *t)
asmlinkage long compat_sys_utimensat(unsigned int dfd, const char __user *filename, struct compat_timespec __user *t, int flags)
asmlinkage long compat_sys_futimesat(unsigned int dfd, const char __user *filename, struct compat_timeval __user *t)
asmlinkage long compat_sys_utimes(const char __user *filename, struct compat_timeval __user *t)
static int cp_compat_stat(struct kstat *stat, struct compat_stat __user *ubuf)
asmlinkage long compat_sys_newstat(const char __user * filename,
struct compat_stat __user *statbuf)
asmlinkage long compat_sys_newlstat(const char __user * filename,
struct compat_stat __user *statbuf)
asmlinkage long compat_sys_newfstatat(unsigned int dfd,
const char __user *filename,
struct compat_stat __user *statbuf, int flag)
asmlinkage long compat_sys_newfstat(unsigned int fd,
struct compat_stat __user * statbuf)
static int put_compat_statfs(struct compat_statfs __user *ubuf, struct kstatfs *kbuf)
asmlinkage long compat_sys_statfs(const char __user *pathname, struct compat_statfs __user *buf)
asmlinkage long compat_sys_fstatfs(unsigned int fd, struct compat_statfs __user *buf)
static int put_compat_statfs64(struct compat_statfs64 __user *ubuf, struct kstatfs *kbuf)
asmlinkage long compat_sys_statfs64(const char __user *pathname, compat_size_t sz, struct compat_statfs64 __user *buf)
asmlinkage long compat_sys_fstatfs64(unsigned int fd, compat_size_t sz, struct compat_statfs64 __user *buf)
asmlinkage long compat_sys_ustat(unsigned dev, struct compat_ustat __user *u)
static int get_compat_flock(struct flock *kfl, struct compat_flock __user *ufl)
static int put_compat_flock(struct flock *kfl, struct compat_flock __user *ufl)
static int get_compat_flock64(struct flock *kfl, struct compat_flock64 __user *ufl)
static int put_compat_flock64(struct flock *kfl, struct compat_flock64 __user *ufl)
asmlinkage long compat_sys_fcntl64(unsigned int fd, unsigned int cmd,
unsigned long arg)
asmlinkage long compat_sys_fcntl(unsigned int fd, unsigned int cmd,
unsigned long arg)
asmlinkage long
compat_sys_io_setup(unsigned nr_reqs, u32 __user *ctx32p)
asmlinkage long
compat_sys_io_getevents(aio_context_t ctx_id,
unsigned long min_nr,
unsigned long nr,
struct io_event __user *events,
struct compat_timespec __user *timeout)
#define vrfy_dir(type) ((type) == READ ? VERIFY_WRITE : VERIFY_READ)
ssize_t compat_rw_copy_check_uvector(int type,
const struct compat_iovec __user *uvector, unsigned long nr_segs,
unsigned long fast_segs, struct iovec *fast_pointer,
struct iovec **ret_pointer)
static inline long
copy_iocb(long nr, u32 __user *ptr32, struct iocb __user * __user *ptr64)
#define MAX_AIO_SUBMITS 	(PAGE_SIZE/sizeof(struct iocb *))
asmlinkage long
compat_sys_io_submit(aio_context_t ctx_id, int nr, u32 __user *iocb)
struct compat_ncp_mount_data ;
struct compat_ncp_mount_data_v4 ;
static void *do_ncp_super_data_conv(void *raw_data)
struct compat_nfs_string ;
static inline void compat_nfs_string(struct nfs_string *dst,
struct compat_nfs_string *src)
struct compat_nfs4_mount_data_v1 ;
static int do_nfs4_super_data_conv(void *raw_data)
#define NCPFS_NAME      "ncpfs"
#define NFS4_NAME	"nfs4"
asmlinkage long compat_sys_mount(const char __user * dev_name,
const char __user * dir_name,
const char __user * type, unsigned long flags,
const void __user * data)
struct compat_old_linux_dirent ;
struct compat_readdir_callback ;
static int compat_fillonedir(void *__buf, const char *name, int namlen,
loff_t offset, u64 ino, unsigned int d_type)
asmlinkage long compat_sys_old_readdir(unsigned int fd,
struct compat_old_linux_dirent __user *dirent, unsigned int count)
struct compat_linux_dirent ;
struct compat_getdents_callback ;
static int compat_filldir(void *__buf, const char *name, int namlen,
loff_t offset, u64 ino, unsigned int d_type)
asmlinkage long compat_sys_getdents(unsigned int fd,
struct compat_linux_dirent __user *dirent, unsigned int count)
struct compat_getdents_callback64 ;
static int compat_filldir64(void * __buf, const char * name, int namlen, loff_t offset,
u64 ino, unsigned int d_type)
asmlinkage long compat_sys_getdents64(unsigned int fd,
struct linux_dirent64 __user * dirent, unsigned int count)
static ssize_t compat_do_readv_writev(int type, struct file *file,
const struct compat_iovec __user *uvector,
unsigned long nr_segs, loff_t *pos)
static size_t compat_readv(struct file *file,
const struct compat_iovec __user *vec,
unsigned long vlen, loff_t *pos)
asmlinkage ssize_t
compat_sys_readv(unsigned long fd, const struct compat_iovec __user *vec,
unsigned long vlen)
asmlinkage ssize_t
compat_sys_preadv(unsigned long fd, const struct compat_iovec __user *vec,
unsigned long vlen, u32 pos_low, u32 pos_high)
static size_t compat_writev(struct file *file,
const struct compat_iovec __user *vec,
unsigned long vlen, loff_t *pos)
asmlinkage ssize_t
compat_sys_writev(unsigned long fd, const struct compat_iovec __user *vec,
unsigned long vlen)
asmlinkage ssize_t
compat_sys_pwritev(unsigned long fd, const struct compat_iovec __user *vec,
unsigned long vlen, u32 pos_low, u32 pos_high)
asmlinkage long
compat_sys_vmsplice(int fd, const struct compat_iovec __user *iov32,
unsigned int nr_segs, unsigned int flags)
asmlinkage long
compat_sys_open(const char __user *filename, int flags, int mode)
asmlinkage long
compat_sys_openat(unsigned int dfd, const char __user *filename, int flags, int mode)
#define __COMPAT_NFDBITS       (8 * sizeof(compat_ulong_t))
static int poll_select_copy_remaining(struct timespec *end_time, void __user *p,
int timeval, int ret)
static
int compat_get_fd_set(unsigned long nr, compat_ulong_t __user *ufdset,
unsigned long *fdset)
static
int compat_set_fd_set(unsigned long nr, compat_ulong_t __user *ufdset,
unsigned long *fdset)
int compat_core_sys_select(int n, compat_ulong_t __user *inp,
compat_ulong_t __user *outp, compat_ulong_t __user *exp,
struct timespec *end_time)
asmlinkage long compat_sys_select(int n, compat_ulong_t __user *inp,
compat_ulong_t __user *outp, compat_ulong_t __user *exp,
struct compat_timeval __user *tvp)
struct compat_sel_arg_struct ;
asmlinkage long compat_sys_old_select(struct compat_sel_arg_struct __user *arg)
static long do_compat_pselect(int n, compat_ulong_t __user *inp,
compat_ulong_t __user *outp, compat_ulong_t __user *exp,
struct compat_timespec __user *tsp, compat_sigset_t __user *sigmask,
compat_size_t sigsetsize)
asmlinkage long compat_sys_pselect6(int n, compat_ulong_t __user *inp,
compat_ulong_t __user *outp, compat_ulong_t __user *exp,
struct compat_timespec __user *tsp, void __user *sig)
asmlinkage long compat_sys_ppoll(struct pollfd __user *ufds,
unsigned int nfds, struct compat_timespec __user *tsp,
const compat_sigset_t __user *sigmask, compat_size_t sigsetsize)
#if (defined(CONFIG_NFSD) || defined(CONFIG_NFSD_MODULE)) && !defined(CONFIG_NFSD_DEPRECATED)
struct compat_nfsctl_svc ;
struct compat_nfsctl_client ;
struct compat_nfsctl_export ;
struct compat_nfsctl_fdparm ;
struct compat_nfsctl_fsparm ;
struct compat_nfsctl_arg ;
union compat_nfsctl_res ;
static int compat_nfs_svc_trans(struct nfsctl_arg *karg,
struct compat_nfsctl_arg __user *arg)
static int compat_nfs_clnt_trans(struct nfsctl_arg *karg,
struct compat_nfsctl_arg __user *arg)
static int compat_nfs_exp_trans(struct nfsctl_arg *karg,
struct compat_nfsctl_arg __user *arg)
static int compat_nfs_getfd_trans(struct nfsctl_arg *karg,
struct compat_nfsctl_arg __user *arg)
static int compat_nfs_getfs_trans(struct nfsctl_arg *karg,
struct compat_nfsctl_arg __user *arg)
static int compat_nfs_getfh_res_trans(union nfsctl_res *kres,
union compat_nfsctl_res __user *res)
asmlinkage long compat_sys_nfsservctl(int cmd,
struct compat_nfsctl_arg __user *arg,
union compat_nfsctl_res __user *res)
long asmlinkage compat_sys_nfsservctl(int cmd, void *notused, void *notused2)
asmlinkage long compat_sys_epoll_pwait(int epfd,
struct compat_epoll_event __user *events,
int maxevents, int timeout,
const compat_sigset_t __user *sigmask,
compat_size_t sigsetsize)
asmlinkage long compat_sys_signalfd4(int ufd,
const compat_sigset_t __user *sigmask,
compat_size_t sigsetsize, int flags)
asmlinkage long compat_sys_signalfd(int ufd,
const compat_sigset_t __user *sigmask,
compat_size_t sigsetsize)
asmlinkage long compat_sys_timerfd_settime(int ufd, int flags,
const struct compat_itimerspec __user *utmr,
struct compat_itimerspec __user *otmr)
asmlinkage long compat_sys_timerfd_gettime(int ufd,
struct compat_itimerspec __user *otmr)
asmlinkage long
compat_sys_open_by_handle_at(int mountdirfd,
struct file_handle __user *handle, int flags)
