MODULE_AUTHOR("Vivien Chappelier <vivien.chappelier@linux-mips.org");
MODULE_DESCRIPTION("SGI O2 MACE PS2 controller driver");
MODULE_LICENSE("GPL");
#define MACE_PS2_TIMEOUT 10000
#define PS2_STATUS_CLOCK_SIGNAL  BIT(0)
#define PS2_STATUS_CLOCK_INHIBIT BIT(1)
#define PS2_STATUS_TX_INPROGRESS BIT(2)
#define PS2_STATUS_TX_EMPTY      BIT(3)
#define PS2_STATUS_RX_FULL       BIT(4)
#define PS2_STATUS_RX_INPROGRESS BIT(5)
#define PS2_STATUS_ERROR_PARITY  BIT(6)
#define PS2_STATUS_ERROR_FRAMING BIT(7)
#define PS2_CONTROL_TX_CLOCK_DISABLE BIT(0)
#define PS2_CONTROL_TX_ENABLE        BIT(1)
#define PS2_CONTROL_TX_INT_ENABLE    BIT(2)
#define PS2_CONTROL_RX_INT_ENABLE    BIT(3)
#define PS2_CONTROL_RX_CLOCK_ENABLE  BIT(4)
#define PS2_CONTROL_RESET            BIT(5)
struct maceps2_data ;
static struct maceps2_data port_data[2];
static struct serio *maceps2_port[2];
static struct platform_device *maceps2_device;
static int maceps2_write(struct serio *dev, unsigned char val)
static irqreturn_t maceps2_interrupt(int irq, void *dev_id)
static int maceps2_open(struct serio *dev)
static void maceps2_close(struct serio *dev)
static struct serio * __devinit maceps2_allocate_port(int idx)
static int __devinit maceps2_probe(struct platform_device *dev)
static int __devexit maceps2_remove(struct platform_device *dev)
static struct platform_driver maceps2_driver = ;
static int __init maceps2_init(void)
static void __exit maceps2_exit(void)
module_init(maceps2_init);
module_exit(maceps2_exit);
