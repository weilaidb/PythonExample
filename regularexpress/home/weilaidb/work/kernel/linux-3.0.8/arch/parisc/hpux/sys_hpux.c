unsigned long hpux_brk(unsigned long addr)
int hpux_sbrk(void)
int hpux_nice(int priority_change)
int hpux_ptrace(void)
int hpux_wait(int __user *stat_loc)
int hpux_setpgrp(void)
int hpux_setpgrp3(void)
#define _SC_CPU_VERSION	10001
#define _SC_OPEN_MAX	4
#define CPU_PA_RISC1_1	0x210
int hpux_sysconf(int which)
#define HPUX_UTSLEN 9
#define HPUX_SNLEN 15
struct hpux_utsname  ;
struct hpux_ustat ;
static int hpux_ustat(dev_t dev, struct hpux_ustat __user *ubuf)
typedef int32_t hpux_fsid_t[2];
typedef uint16_t hpux_site_t;
struct hpux_statfs ;
static int do_statfs_hpux(struct kstatfs *st, struct hpux_statfs __user *p)
asmlinkage long hpux_statfs(const char __user *pathname,
struct hpux_statfs __user *buf)
asmlinkage long hpux_fstatfs(unsigned int fd, struct hpux_statfs __user * buf)
static int hpux_uname(struct hpux_utsname __user *name)
int hpux_utssys(char __user *ubuf, int n, int type)
int hpux_getdomainname(char __user *name, int len)
int hpux_pipe(int *kstack_fildes)
int hpux_lockf(int fildes, int function, off_t size)
int hpux_sysfs(int opcode, unsigned long arg1, unsigned long arg2)
static const char * const syscall_names[] = ;
static const int syscall_names_max = 453;
int
hpux_unimplemented(unsigned long arg1,unsigned long arg2,unsigned long arg3,
unsigned long arg4,unsigned long arg5,unsigned long arg6,
unsigned long arg7,unsigned long sc_num)
