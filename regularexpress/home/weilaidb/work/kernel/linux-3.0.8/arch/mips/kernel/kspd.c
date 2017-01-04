static struct workqueue_struct *workqueue;
static struct work_struct work;
extern unsigned long cpu_khz;
struct mtsp_syscall ;
struct mtsp_syscall_ret ;
struct mtsp_syscall_generic ;
static struct list_head kspd_notifylist;
static int sp_stopping;
#define MTSP_SYSCALL_BASE	0
#define MTSP_SYSCALL_EXIT	(MTSP_SYSCALL_BASE + 0)
#define MTSP_SYSCALL_OPEN	(MTSP_SYSCALL_BASE + 1)
#define MTSP_SYSCALL_READ	(MTSP_SYSCALL_BASE + 2)
#define MTSP_SYSCALL_WRITE	(MTSP_SYSCALL_BASE + 3)
#define MTSP_SYSCALL_CLOSE	(MTSP_SYSCALL_BASE + 4)
#define MTSP_SYSCALL_LSEEK32	(MTSP_SYSCALL_BASE + 5)
#define MTSP_SYSCALL_ISATTY	(MTSP_SYSCALL_BASE + 6)
#define MTSP_SYSCALL_GETTIME	(MTSP_SYSCALL_BASE + 7)
#define MTSP_SYSCALL_PIPEFREQ	(MTSP_SYSCALL_BASE + 8)
#define MTSP_SYSCALL_GETTOD	(MTSP_SYSCALL_BASE + 9)
#define MTSP_SYSCALL_IOCTL     (MTSP_SYSCALL_BASE + 10)
#define MTSP_O_RDONLY		0x0000
#define MTSP_O_WRONLY		0x0001
#define MTSP_O_RDWR		0x0002
#define MTSP_O_NONBLOCK		0x0004
#define MTSP_O_APPEND		0x0008
#define MTSP_O_SHLOCK		0x0010
#define MTSP_O_EXLOCK		0x0020
#define MTSP_O_ASYNC		0x0040
#define MTSP_O_FSYNC		O_SYNC
#define MTSP_O_NOFOLLOW		0x0100
#define MTSP_O_SYNC		0x0080
#define MTSP_O_CREAT		0x0200
#define MTSP_O_TRUNC		0x0400
#define MTSP_O_EXCL		0x0800
#define MTSP_O_BINARY		0x8000
extern int tclimit;
struct apsp_table  ;
struct apsp_table open_flags_table[] = ;
struct apsp_table syscall_command_table[] = ;
static int sp_syscall(int num, int arg0, int arg1, int arg2, int arg3)
static int translate_syscall_command(int cmd)
static unsigned int translate_open_flags(int flags)
static int sp_setfsuidgid(uid_t uid, gid_t gid)
void sp_work_handle_request(void)
static void sp_cleanup(void)
static int channel_open;
static void sp_work(struct work_struct *unused)
static void startwork(int vpe)
static void stopwork(int vpe)
void kspd_notify(struct kspd_notifications *notify)
static struct vpe_notifications notify;
static int kspd_module_init(void)
static void kspd_module_exit(void)
module_init(kspd_module_init);
module_exit(kspd_module_exit);
MODULE_DESCRIPTION("MIPS KSPD");
MODULE_AUTHOR("Elizabeth Oldham, MIPS Technologies, Inc.");
MODULE_LICENSE("GPL");
