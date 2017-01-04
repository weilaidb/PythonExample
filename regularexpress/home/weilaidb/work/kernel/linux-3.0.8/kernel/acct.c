int acct_parm[3] = ;
#define RESUME		(acct_parm[0])
#define SUSPEND		(acct_parm[1])
#define ACCT_TIMEOUT	(acct_parm[2])
static void do_acct_process(struct bsd_acct_struct *acct,
struct pid_namespace *ns, struct file *);
struct bsd_acct_struct ;
static DEFINE_SPINLOCK(acct_lock);
static LIST_HEAD(acct_list);
static void acct_timeout(unsigned long x)
static int check_free_space(struct bsd_acct_struct *acct, struct file *file)
static void acct_file_reopen(struct bsd_acct_struct *acct, struct file *file,
struct pid_namespace *ns)
static int acct_on(char *name)
SYSCALL_DEFINE1(acct, const char __user *, name)
void acct_auto_close_mnt(struct vfsmount *m)
void acct_auto_close(struct super_block *sb)
void acct_exit_ns(struct pid_namespace *ns)
#define	MANTSIZE	13
#define	EXPSIZE		3
#define	MAXFRACT	((1 << MANTSIZE) - 1)
static comp_t encode_comp_t(unsigned long value)
#if ACCT_VERSION==1 || ACCT_VERSION==2
#define MANTSIZE2       20
#define EXPSIZE2        5
#define MAXFRACT2       ((1ul << MANTSIZE2) - 1)
#define MAXEXP2         ((1 <<EXPSIZE2) - 1)
static comp2_t encode_comp2_t(u64 value)
#if ACCT_VERSION==3
static u32 encode_float(u64 value)
static void do_acct_process(struct bsd_acct_struct *acct,
struct pid_namespace *ns, struct file *file)
void acct_collect(long exitcode, int group_dead)
static void acct_process_in_ns(struct pid_namespace *ns)
void acct_process(void)
