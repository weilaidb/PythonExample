static struct pata_platform_info bast_ide_platdata = ;
#define IDE_CS	S3C2410_CS5
static struct resource bast_ide0_resource[] = ;
static struct platform_device bast_device_ide0 = ;
static struct resource bast_ide1_resource[] = ;
static struct platform_device bast_device_ide1 = ;
static struct platform_device *bast_ide_devices[] __initdata = ;
static __init int bast_ide_init(void)
fs_initcall(bast_ide_init);
