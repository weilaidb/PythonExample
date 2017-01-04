static struct scsi_host_template a4000t_scsi_driver_template = ;
#define A4000T_SCSI_OFFSET	0x40
static int __init amiga_a4000t_scsi_probe(struct platform_device *pdev)
static int __exit amiga_a4000t_scsi_remove(struct platform_device *pdev)
static struct platform_driver amiga_a4000t_scsi_driver = ;
static int __init amiga_a4000t_scsi_init(void)
module_init(amiga_a4000t_scsi_init);
static void __exit amiga_a4000t_scsi_exit(void)
module_exit(amiga_a4000t_scsi_exit);
MODULE_AUTHOR("Alan Hourihane <alanh@fairlite.demon.co.uk> / "
"Kars de Jong <jongk@linux-m68k.org>");
MODULE_DESCRIPTION("Amiga A4000T NCR53C710 driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:amiga-a4000t-scsi");
