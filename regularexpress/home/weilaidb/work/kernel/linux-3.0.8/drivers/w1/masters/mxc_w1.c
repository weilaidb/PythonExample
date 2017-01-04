#define MXC_W1_RESET_TIMEOUT 500
#define MXC_W1_CONTROL          0x00
#define MXC_W1_TIME_DIVIDER     0x02
#define MXC_W1_RESET            0x04
#define MXC_W1_COMMAND          0x06
#define MXC_W1_TXRX             0x08
#define MXC_W1_INTERRUPT        0x0A
#define MXC_W1_INTERRUPT_EN     0x0C
struct mxc_w1_device ;
static u8 mxc_w1_ds2_reset_bus(void *data)
static u8 mxc_w1_ds2_touch_bit(void *data, u8 bit)
static int __devinit mxc_w1_probe(struct platform_device *pdev)
static int __devexit mxc_w1_remove(struct platform_device *pdev)
static struct platform_driver mxc_w1_driver = ;
static int __init mxc_w1_init(void)
static void mxc_w1_exit(void)
module_init(mxc_w1_init);
module_exit(mxc_w1_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Freescale Semiconductors Inc");
MODULE_DESCRIPTION("Driver for One-Wire on MXC");
