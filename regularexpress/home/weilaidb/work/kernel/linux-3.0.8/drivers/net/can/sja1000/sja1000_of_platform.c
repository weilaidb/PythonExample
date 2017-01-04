#define DRV_NAME "sja1000_of_platform"
MODULE_AUTHOR("Wolfgang Grandegger <wg@grandegger.com>");
MODULE_DESCRIPTION("Socket-CAN driver for SJA1000 on the OF platform bus");
MODULE_LICENSE("GPL v2");
#define SJA1000_OFP_CAN_CLOCK  (16000000 / 2)
#define SJA1000_OFP_OCR        OCR_TX0_PULLDOWN
#define SJA1000_OFP_CDR        (CDR_CBP | CDR_CLK_OFF)
static u8 sja1000_ofp_read_reg(const struct sja1000_priv *priv, int reg)
static void sja1000_ofp_write_reg(const struct sja1000_priv *priv,
int reg, u8 val)
static int __devexit sja1000_ofp_remove(struct platform_device *ofdev)
static int __devinit sja1000_ofp_probe(struct platform_device *ofdev)
static struct of_device_id __devinitdata sja1000_ofp_table[] = ;
MODULE_DEVICE_TABLE(of, sja1000_ofp_table);
static struct platform_driver sja1000_ofp_driver = ;
static int __init sja1000_ofp_init(void)
module_init(sja1000_ofp_init);
static void __exit sja1000_ofp_exit(void)
;
module_exit(sja1000_ofp_exit);
