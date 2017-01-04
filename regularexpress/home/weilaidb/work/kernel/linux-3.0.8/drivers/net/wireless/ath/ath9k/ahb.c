static const struct platform_device_id ath9k_platform_id_table[] = ;
static void ath_ahb_read_cachesize(struct ath_common *common, int *csz)
static bool ath_ahb_eeprom_read(struct ath_common *common, u32 off, u16 *data)
static struct ath_bus_ops ath_ahb_bus_ops  = ;
static int ath_ahb_probe(struct platform_device *pdev)
static int ath_ahb_remove(struct platform_device *pdev)
static struct platform_driver ath_ahb_driver = ;
MODULE_DEVICE_TABLE(platform, ath9k_platform_id_table);
int ath_ahb_init(void)
void ath_ahb_exit(void)
