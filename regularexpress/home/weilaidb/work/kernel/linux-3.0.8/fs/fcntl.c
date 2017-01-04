void set_close_on_exec(unsigned int fd, int flag)
static int get_close_on_exec(unsigned int fd)
SYSCALL_DEFINE3(dup3, unsigned int, oldfd, unsigned int, newfd, int, flags)
SYSCALL_DEFINE2(dup2, unsigned int, oldfd, unsigned int, newfd)
SYSCALL_DEFINE1(dup, unsigned int, fildes)
#define SETFL_MASK (O_APPEND | O_NONBLOCK | O_NDELAY | O_DIRECT | O_NOATIME)
static int setfl(int fd, struct file * filp, unsigned long arg)
static void f_modown(struct file *filp, struct pid *pid, enum pid_type type,
int force)
int __f_setown(struct file *filp, struct pid *pid, enum pid_type type,
int force)
EXPORT_SYMBOL(__f_setown);
int f_setown(struct file *filp, unsigned long arg, int force)
EXPORT_SYMBOL(f_setown);
void f_delown(struct file *filp)
pid_t f_getown(struct file *filp)
static int f_setown_ex(struct file *filp, unsigned long arg)
static int f_getown_ex(struct file *filp, unsigned long arg)
static long do_fcntl(int fd, unsigned int cmd, unsigned long arg,
struct file *filp)
static int check_fcntl_cmd(unsigned cmd)
SYSCALL_DEFINE3(fcntl, unsigned int, fd, unsigned int, cmd, unsigned long, arg)
#if BITS_PER_LONG == 32
SYSCALL_DEFINE3(fcntl64, unsigned int, fd, unsigned int, cmd,
unsigned long, arg)
static const long band_table[NSIGPOLL] = ;
static inline int sigio_perm(struct task_struct *p,
struct fown_struct *fown, int sig)
static void send_sigio_to_task(struct task_struct *p,
struct fown_struct *fown,
int fd, int reason, int group)
void send_sigio(struct fown_struct *fown, int fd, int band)
static void send_sigurg_to_task(struct task_struct *p,
struct fown_struct *fown, int group)
int send_sigurg(struct fown_struct *fown)
static DEFINE_SPINLOCK(fasync_lock);
static struct kmem_cache *fasync_cache __read_mostly;
static void fasync_free_rcu(struct rcu_head *head)
int fasync_remove_entry(struct file *filp, struct fasync_struct **fapp)
struct fasync_struct *fasync_alloc(void)
void fasync_free(struct fasync_struct *new)
struct fasync_struct *fasync_insert_entry(int fd, struct file *filp, struct fasync_struct **fapp, struct fasync_struct *new)
static int fasync_add_entry(int fd, struct file *filp, struct fasync_struct **fapp)
int fasync_helper(int fd, struct file * filp, int on, struct fasync_struct **fapp)
EXPORT_SYMBOL(fasync_helper);
static void kill_fasync_rcu(struct fasync_struct *fa, int sig, int band)
void kill_fasync(struct fasync_struct **fp, int sig, int band)
EXPORT_SYMBOL(kill_fasync);
static int __init fcntl_init(void)
module_init(fcntl_init)
