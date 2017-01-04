#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRVDESC "parallel port PPS client"
#define CLEAR_WAIT_MAX		100
#define CLEAR_WAIT_MAX_ERRORS	5
static unsigned int clear_wait = 100;
MODULE_PARM_DESC(clear_wait,
"Maximum number of port reads when polling for signal clear,"
" zero turns clear edge capture off entirely");
module_param(clear_wait, uint, 0);
struct pps_client_pp ;
static inline int signal_is_set(struct parport *port)
static void parport_irq(void *handle)
static void pps_echo(struct pps_device *pps, int event, void *data)
static void parport_attach(struct parport *port)
static void parport_detach(struct parport *port)
static struct parport_driver pps_parport_driver = ;
static int __init pps_parport_init(void)
static void __exit pps_parport_exit(void)
module_init(pps_parport_init);
module_exit(pps_parport_exit);
MODULE_AUTHOR("Alexander Gordeev <lasaine@lvk.cs.msu.su>");
MODULE_DESCRIPTION(DRVDESC);
MODULE_LICENSE("GPL");
