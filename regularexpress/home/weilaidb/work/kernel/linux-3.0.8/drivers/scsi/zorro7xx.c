MODULE_AUTHOR("Alan Hourihane <alanh@fairlite.demon.co.uk> / Kars de Jong <jongk@linux-m68k.org>");
MODULE_DESCRIPTION("Amiga Zorro NCR53C710 driver");
MODULE_LICENSE("GPL");
static struct scsi_host_template zorro7xx_scsi_driver_template = ;
static struct zorro_driver_data  zorro7xx_driver_data[] __devinitdata = ;
static struct zorro_device_id zorro7xx_zorro_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(zorro, zorro7xx_zorro_tbl);
static int __devinit zorro7xx_init_one(struct zorro_dev *z,
const struct zorro_device_id *ent)
static __devexit void zorro7xx_remove_one(struct zorro_dev *z)
static struct zorro_driver zorro7xx_driver = ;
static int __init zorro7xx_scsi_init(void)
static void __exit zorro7xx_scsi_exit(void)
module_init(zorro7xx_scsi_init);
module_exit(zorro7xx_scsi_exit);
