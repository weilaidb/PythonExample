#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct pps_device *pps;
static struct timer_list ktimer;
static void pps_ktimer_event(unsigned long ptr)
static void pps_ktimer_echo(struct pps_device *pps, int event, void *data)
static struct pps_source_info pps_ktimer_info = ;
static void __exit pps_ktimer_exit(void)
static int __init pps_ktimer_init(void)
module_init(pps_ktimer_init);
module_exit(pps_ktimer_exit);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("dummy PPS source by using a kernel timer (just for debug)");
MODULE_LICENSE("GPL");
