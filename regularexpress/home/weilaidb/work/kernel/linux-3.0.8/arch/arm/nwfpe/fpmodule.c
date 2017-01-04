#define NWFPE_BITS "extended"
#define NWFPE_BITS "double"
void fp_send_sig(unsigned long sig, struct task_struct *p, int priv);
#define fp_send_sig	send_sig
#define kern_fp_enter	fp_enter
extern char fpe_type[];
static int nwfpe_notify(struct notifier_block *self, unsigned long cmd, void *v)
static struct notifier_block nwfpe_notifier_block = ;
void fp_setup(void);
extern void (*kern_fp_enter)(void);
static void (*orig_fp_enter)(void);
extern void nwfpe_enter(void);
static int __init fpe_init(void)
static void __exit fpe_exit(void)
static int debug = ~BIT_IXC;
void float_raise(signed char flags)
module_init(fpe_init);
module_exit(fpe_exit);
MODULE_AUTHOR("Scott Bambrough <scottb@rebel.com>");
MODULE_DESCRIPTION("NWFPE floating point emulator (" NWFPE_BITS " precision)");
MODULE_LICENSE("GPL");
module_param(debug, int, 0644);
