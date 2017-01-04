#define DEBUG
static unsigned int power_state[2];
static void
usb_simtec_powercontrol(int port, int to)
static irqreturn_t
usb_simtec_ocirq(int irq, void *pw)
static void usb_simtec_enableoc(struct s3c2410_hcd_info *info, int on)
static struct s3c2410_hcd_info usb_simtec_info __initdata = ;
int usb_simtec_init(void)
