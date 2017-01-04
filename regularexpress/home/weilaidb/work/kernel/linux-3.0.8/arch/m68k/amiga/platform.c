static const struct resource zorro_resources[] __initconst = ;
static int __init amiga_init_bus(void)
subsys_initcall(amiga_init_bus);
static int z_dev_present(zorro_id id)
static inline int z_dev_present(zorro_id id)
static const struct resource a3000_scsi_resource __initconst = ;
static const struct resource a4000t_scsi_resource __initconst = ;
static const struct resource a1200_ide_resource __initconst = ;
static const struct gayle_ide_platform_data a1200_ide_pdata __initconst = ;
static const struct resource a4000_ide_resource __initconst = ;
static const struct gayle_ide_platform_data a4000_ide_pdata __initconst = ;
static const struct resource amiga_rtc_resource __initconst = ;
static int __init amiga_init_devices(void)
device_initcall(amiga_init_devices);
