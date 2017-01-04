#define MCP_TYPE_S08	0
#define MCP_TYPE_S17	1
#define MCP_IODIR	0x00
#define MCP_IPOL	0x01
#define MCP_GPINTEN	0x02
#define MCP_DEFVAL	0x03
#define MCP_INTCON	0x04
#define MCP_IOCON	0x05
#	define IOCON_SEQOP	(1 << 5)
#	define IOCON_HAEN	(1 << 3)
#	define IOCON_ODR	(1 << 2)
#	define IOCON_INTPOL	(1 << 1)
#define MCP_GPPU	0x06
#define MCP_INTF	0x07
#define MCP_INTCAP	0x08
#define MCP_GPIO	0x09
#define MCP_OLAT	0x0a
struct mcp23s08;
struct mcp23s08_ops ;
struct mcp23s08 ;
struct mcp23s08_driver_data ;
static int mcp23s08_read(struct mcp23s08 *mcp, unsigned reg)
static int mcp23s08_write(struct mcp23s08 *mcp, unsigned reg, unsigned val)
static int
mcp23s08_read_regs(struct mcp23s08 *mcp, unsigned reg, u16 *vals, unsigned n)
static int mcp23s17_read(struct mcp23s08 *mcp, unsigned reg)
static int mcp23s17_write(struct mcp23s08 *mcp, unsigned reg, unsigned val)
static int
mcp23s17_read_regs(struct mcp23s08 *mcp, unsigned reg, u16 *vals, unsigned n)
static const struct mcp23s08_ops mcp23s08_ops = ;
static const struct mcp23s08_ops mcp23s17_ops = ;
static int mcp23s08_direction_input(struct gpio_chip *chip, unsigned offset)
static int mcp23s08_get(struct gpio_chip *chip, unsigned offset)
static int __mcp23s08_set(struct mcp23s08 *mcp, unsigned mask, int value)
static void mcp23s08_set(struct gpio_chip *chip, unsigned offset, int value)
static int
mcp23s08_direction_output(struct gpio_chip *chip, unsigned offset, int value)
static void mcp23s08_dbg_show(struct seq_file *s, struct gpio_chip *chip)
#define mcp23s08_dbg_show	NULL
static int mcp23s08_probe_one(struct spi_device *spi, unsigned addr,
unsigned type, unsigned base, unsigned pullups)
static int mcp23s08_probe(struct spi_device *spi)
static int mcp23s08_remove(struct spi_device *spi)
static const struct spi_device_id mcp23s08_ids[] = ;
MODULE_DEVICE_TABLE(spi, mcp23s08_ids);
static struct spi_driver mcp23s08_driver = ;
static int __init mcp23s08_init(void)
subsys_initcall(mcp23s08_init);
static void __exit mcp23s08_exit(void)
module_exit(mcp23s08_exit);
MODULE_LICENSE("GPL");
