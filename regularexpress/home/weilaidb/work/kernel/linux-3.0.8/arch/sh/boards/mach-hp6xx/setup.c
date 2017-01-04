#define	SCPCR	0xa4000116
#define	SCPDR	0xa4000136
static struct resource cf_ide_resources[] = ;
static struct platform_device cf_ide_device = ;
static struct platform_device jornadakbd_device = ;
static void dac_audio_start(struct dac_audio_pdata *pdata)
static void dac_audio_stop(struct dac_audio_pdata *pdata)
static struct dac_audio_pdata dac_audio_platform_data = ;
static struct platform_device dac_audio_device = ;
static struct platform_device *hp6xx_devices[] __initdata = ;
static void __init hp6xx_init_irq(void)
static int __init hp6xx_devices_setup(void)
static void __init hp6xx_setup(char **cmdline_p)
device_initcall(hp6xx_devices_setup);
static struct sh_machine_vector mv_hp6xx __initmv = ;
