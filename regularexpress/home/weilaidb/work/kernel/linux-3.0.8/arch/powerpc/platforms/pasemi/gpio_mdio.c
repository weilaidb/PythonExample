#define DELAY 1
static void __iomem *gpio_regs;
struct gpio_priv ;
#define MDC_PIN(bus)	(((struct gpio_priv *)bus->priv)->mdc_pin)
#define MDIO_PIN(bus)	(((struct gpio_priv *)bus->priv)->mdio_pin)
static inline void mdio_lo(struct mii_bus *bus)
static inline void mdio_hi(struct mii_bus *bus)
static inline void mdc_lo(struct mii_bus *bus)
static inline void mdc_hi(struct mii_bus *bus)
static inline void mdio_active(struct mii_bus *bus)
static inline void mdio_tristate(struct mii_bus *bus)
static inline int mdio_read(struct mii_bus *bus)
static void clock_out(struct mii_bus *bus, int bit)
static void bitbang_pre(struct mii_bus *bus, int read, u8 addr, u8 reg)
static int gpio_mdio_read(struct mii_bus *bus, int phy_id, int location)
static int gpio_mdio_write(struct mii_bus *bus, int phy_id, int location, u16 val)
static int gpio_mdio_reset(struct mii_bus *bus)
static int __devinit gpio_mdio_probe(struct platform_device *ofdev)
static int gpio_mdio_remove(struct platform_device *dev)
static struct of_device_id gpio_mdio_match[] =
;
MODULE_DEVICE_TABLE(of, gpio_mdio_match);
static struct platform_driver gpio_mdio_driver =
;
int gpio_mdio_init(void)
module_init(gpio_mdio_init);
void gpio_mdio_exit(void)
module_exit(gpio_mdio_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Olof Johansson <olof@lixom.net>");
MODULE_DESCRIPTION("Driver for MDIO over GPIO on PA Semi PWRficient-based boards");
