int hpux_execve(struct pt_regs *regs)
struct hpux_dirent ;
struct getdents_callback ;
#define NAME_OFFSET(de) ((int) ((de)->d_name - (char __user *) (de)))
static int filldir(void * __buf, const char * name, int namlen, loff_t offset,
u64 ino, unsigned d_type)
#undef NAME_OFFSET
int hpux_getdents(unsigned int fd, struct hpux_dirent __user *dirent, unsigned int count)
int hpux_mount(const char *fs, const char *path, int mflag,
const char *fstype, const char *dataptr, int datalen)
static int cp_hpux_stat(struct kstat *stat, struct hpux_stat64 __user *statbuf)
long hpux_stat64(const char __user *filename, struct hpux_stat64 __user *statbuf)
long hpux_fstat64(unsigned int fd, struct hpux_stat64 __user *statbuf)
long hpux_lstat64(const char __user *filename,
struct hpux_stat64 __user *statbuf)
