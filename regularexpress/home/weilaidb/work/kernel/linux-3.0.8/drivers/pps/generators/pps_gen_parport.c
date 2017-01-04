#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRVDESC "parallel port PPS signal generator"
#define SIGNAL		0
#define NO_SIGNAL	PARPORT_CONTROL_STROBE
#define SEND_DELAY_MAX		100000
static unsigned int send_delay = 30000;
MODULE_PARM_DESC(delay,
"Delay between setting and dropping the signal (ns)");
module_param_named(delay, send_delay, uint, 0);
#define SAFETY_INTERVAL	3000
struct pps_generator_pp ;
static struct pps_generator_pp device = ;
static int attached;
static long hrtimer_error = SAFETY_INTERVAL;
static enum hrtimer_restart hrtimer_event(struct hrtimer *timer)
#define PORT_NTESTS_SHIFT	5
static void calibrate_port(struct pps_generator_pp *dev)
static inline ktime_t next_intr_time(struct pps_generator_pp *dev)
static void parport_attach(struct parport *port)
static void parport_detach(struct parport *port)
static struct parport_driver pps_gen_parport_driver = ;
static int __init pps_gen_parport_init(void)
static void __exit pps_gen_parport_exit(void)
module_init(pps_gen_parport_init);
module_exit(pps_gen_parport_exit);
MODULE_AUTHOR("Alexander Gordeev <lasaine@lvk.cs.msu.su>");
MODULE_DESCRIPTION(DRVDESC);
MODULE_LICENSE("GPL");
