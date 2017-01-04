static struct resource sgiwd93_0_resources[] = ;
static struct sgiwd93_platform_data sgiwd93_0_pd = ;
static struct platform_device sgiwd93_0_device = ;
static struct resource sgiwd93_1_resources[] = ;
static struct sgiwd93_platform_data sgiwd93_1_pd = ;
static struct platform_device sgiwd93_1_device = ;
static int __init sgiwd93_devinit(void)
device_initcall(sgiwd93_devinit);
static struct resource sgiseeq_0_resources[] = ;
static struct sgiseeq_platform_data eth0_pd;
static struct platform_device eth0_device = ;
static struct resource sgiseeq_1_resources[] = ;
static struct sgiseeq_platform_data eth1_pd;
static struct platform_device eth1_device = ;
static int __init sgiseeq_devinit(void)
device_initcall(sgiseeq_devinit);
static int __init sgi_hal2_devinit(void)
device_initcall(sgi_hal2_devinit);
static int __init sgi_button_devinit(void)
device_initcall(sgi_button_devinit);
static int __init sgi_ds1286_devinit(void)
device_initcall(sgi_ds1286_devinit);
