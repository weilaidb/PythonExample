#define ARTHUR_SIGABRT		1
#define ARTHUR_SIGFPE		2
#define ARTHUR_SIGILL		3
#define ARTHUR_SIGINT		4
#define ARTHUR_SIGSEGV		5
#define ARTHUR_SIGTERM		6
#define ARTHUR_SIGSTAK		7
#define ARTHUR_SIGUSR1		8
#define ARTHUR_SIGUSR2		9
#define ARTHUR_SIGOSERROR	10
static unsigned long arthur_to_linux_signals[32] = ;
static unsigned long linux_to_arthur_signals[32] = ;
static void arthur_lcall7(int nr, struct pt_regs *regs)
static struct exec_domain arthur_exec_domain = ;
static int __init arthur_init(void)
static void __exit arthur_exit(void)
module_init(arthur_init);
module_exit(arthur_exit);
MODULE_LICENSE("GPL");
