static int mcp2120_reset(struct sir_dev *dev);
static int mcp2120_open(struct sir_dev *dev);
static int mcp2120_close(struct sir_dev *dev);
static int mcp2120_change_speed(struct sir_dev *dev, unsigned speed);
#define MCP2120_9600    0x87
#define MCP2120_19200   0x8B
#define MCP2120_38400   0x85
#define MCP2120_57600   0x83
#define MCP2120_115200  0x81
#define MCP2120_COMMIT  0x11
static struct dongle_driver mcp2120 = ;
static int __init mcp2120_sir_init(void)
static void __exit mcp2120_sir_cleanup(void)
static int mcp2120_open(struct sir_dev *dev)
static int mcp2120_close(struct sir_dev *dev)
#define MCP2120_STATE_WAIT_SPEED	(SIRDEV_STATE_DONGLE_SPEED+1)
static int mcp2120_change_speed(struct sir_dev *dev, unsigned speed)
#define MCP2120_STATE_WAIT1_RESET	(SIRDEV_STATE_DONGLE_RESET+1)
#define MCP2120_STATE_WAIT2_RESET	(SIRDEV_STATE_DONGLE_RESET+2)
static int mcp2120_reset(struct sir_dev *dev)
MODULE_AUTHOR("Felix Tang <tangf@eyetap.org>");
MODULE_DESCRIPTION("Microchip MCP2120");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-9");
module_init(mcp2120_sir_init);
module_exit(mcp2120_sir_cleanup);
