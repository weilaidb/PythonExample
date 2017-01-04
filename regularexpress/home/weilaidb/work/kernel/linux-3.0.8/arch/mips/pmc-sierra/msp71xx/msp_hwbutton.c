#define HWBUTTON_HI	0x1
#define HWBUTTON_LO	0x2
struct hwbutton_interrupt ;
extern void msp_restart(char *);
static void softreset_push(void *data)
static void softreset_release(void *data)
static void standby_on(void *data)
static void standby_off(void *data)
static struct hwbutton_interrupt softreset_sw = ;
static struct hwbutton_interrupt standby_sw = ;
static irqreturn_t hwbutton_handler(int irq, void *data)
static int msp_hwbutton_register(struct hwbutton_interrupt *hirq)
static int __init msp_hwbutton_setup(void)
subsys_initcall(msp_hwbutton_setup);
