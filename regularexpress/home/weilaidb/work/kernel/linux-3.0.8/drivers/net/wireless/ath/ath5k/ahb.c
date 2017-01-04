static void ath5k_ahb_read_cachesize(struct ath_common *common, int *csz)
static bool
ath5k_ahb_eeprom_read(struct ath_common *common, u32 off, u16 *data)
int ath5k_hw_read_srev(struct ath5k_hw *ah)
static int ath5k_ahb_eeprom_read_mac(struct ath5k_hw *ah, u8 *mac)
static const struct ath_bus_ops ath_ahb_bus_ops = ;
static int ath_ahb_probe(struct platform_device *pdev)
static int ath_ahb_remove(struct platform_device *pdev)
static struct platform_driver ath_ahb_driver = ;
static int __init
ath5k_ahb_init(void)
static void __exit
ath5k_ahb_exit(void)
module_init(ath5k_ahb_init);
module_exit(ath5k_ahb_exit);
