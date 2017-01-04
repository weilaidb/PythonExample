#define DRIVER_NAME		"xilinx_ps2"
#define XPS2_SRST_OFFSET	0x00000000
#define XPS2_STATUS_OFFSET	0x00000004
#define XPS2_RX_DATA_OFFSET	0x00000008
#define XPS2_TX_DATA_OFFSET	0x0000000C
#define XPS2_GIER_OFFSET	0x0000002C
#define XPS2_IPISR_OFFSET	0x00000030
#define XPS2_IPIER_OFFSET	0x00000038
#define XPS2_SRST_RESET		0x0000000A
#define XPS2_STATUS_RX_FULL	0x00000001
#define XPS2_STATUS_TX_FULL	0x00000002
#define XPS2_IPIXR_WDT_TOUT	0x00000001
#define XPS2_IPIXR_TX_NOACK	0x00000002
#define XPS2_IPIXR_TX_ACK	0x00000004
#define XPS2_IPIXR_RX_OVF	0x00000008
#define XPS2_IPIXR_RX_ERR	0x00000010
#define XPS2_IPIXR_RX_FULL	0x00000020
#define XPS2_IPIXR_TX_ALL	(XPS2_IPIXR_TX_NOACK | XPS2_IPIXR_TX_ACK)
#define XPS2_IPIXR_RX_ALL	(XPS2_IPIXR_RX_OVF | XPS2_IPIXR_RX_ERR |  \
XPS2_IPIXR_RX_FULL)
#define XPS2_IPIXR_ALL		(XPS2_IPIXR_TX_ALL | XPS2_IPIXR_RX_ALL |  \
XPS2_IPIXR_WDT_TOUT)
#define XPS2_GIER_GIE_MASK	0x80000000
struct xps2data ;
static int xps2_recv(struct xps2data *drvdata, u8 *byte)
static irqreturn_t xps2_interrupt(int irq, void *dev_id)
static int sxps2_write(struct serio *pserio, unsigned char c)
static int sxps2_open(struct serio *pserio)
static void sxps2_close(struct serio *pserio)
static int __devinit xps2_of_probe(struct platform_device *ofdev)
static int __devexit xps2_of_remove(struct platform_device *of_dev)
static const struct of_device_id xps2_of_match[] __devinitconst = ;
MODULE_DEVICE_TABLE(of, xps2_of_match);
static struct platform_driver xps2_of_driver = ;
static int __init xps2_init(void)
static void __exit xps2_cleanup(void)
module_init(xps2_init);
module_exit(xps2_cleanup);
MODULE_AUTHOR("Xilinx, Inc.");
MODULE_DESCRIPTION("Xilinx XPS PS/2 driver");
MODULE_LICENSE("GPL");
