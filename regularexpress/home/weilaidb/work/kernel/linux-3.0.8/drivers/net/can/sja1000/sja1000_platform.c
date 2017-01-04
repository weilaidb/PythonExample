#define DRV_NAME "sja1000_platform"
MODULE_AUTHOR("Sascha Hauer <s.hauer@pengutronix.de>");
MODULE_DESCRIPTION("Socket-CAN driver for SJA1000 on the platform bus");
MODULE_LICENSE("GPL v2");
static u8 sp_read_reg8(const struct sja1000_priv *priv, int reg)
static void sp_write_reg8(const struct sja1000_priv *priv, int reg, u8 val)
static u8 sp_read_reg16(const struct sja1000_priv *priv, int reg)
static void sp_write_reg16(const struct sja1000_priv *priv, int reg, u8 val)
static u8 sp_read_reg32(const struct sja1000_priv *priv, int reg)
static void sp_write_reg32(const struct sja1000_priv *priv, int reg, u8 val)
static int sp_probe(struct platform_device *pdev)
static int sp_remove(struct platform_device *pdev)
static struct platform_driver sp_driver = ;
static int __init sp_init(void)
static void __exit sp_exit(void)
module_init(sp_init);
module_exit(sp_exit);
