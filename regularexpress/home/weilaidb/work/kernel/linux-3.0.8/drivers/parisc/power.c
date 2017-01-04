#define DRIVER_NAME  "powersw"
#define KTHREAD_NAME "kpowerswd"
#define POWERSWITCH_POLL_PER_SEC 2
#define POWERSWITCH_DOWN_SEC 2
#define DIAG_CODE(code)		(0x14000000 + ((code)<<5))
#define MFCPU_X(rDiagReg, t_ch, t_th, code) \
(DIAG_CODE(code) + ((rDiagReg)<<21) + ((t_ch)<<16) + ((t_th)<<0) )
#define MTCPU(dr, gr)		MFCPU_X(dr, gr,  0, 0x12)
#define MFCPU_C(dr, gr)		MFCPU_X(dr, gr,  0, 0x30)
#define MFCPU_T(dr, gr)		MFCPU_X(dr,  0, gr, 0xa0)
#define __getDIAG(dr) (  )
static int shutdown_timer __read_mostly;
static void process_shutdown(void)
static struct task_struct *power_task;
#define SYSCTL_FILENAME	"sys/kernel/power"
int pwrsw_enabled __read_mostly = 1;
static int kpowerswd(void *param)
static int parisc_panic_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block parisc_panic_block = ;
static int __init power_init(void)
static void __exit power_exit(void)
arch_initcall(power_init);
module_exit(power_exit);
MODULE_AUTHOR("Helge Deller <deller@gmx.de>");
MODULE_DESCRIPTION("Soft power switch driver");
MODULE_LICENSE("Dual BSD/GPL");
