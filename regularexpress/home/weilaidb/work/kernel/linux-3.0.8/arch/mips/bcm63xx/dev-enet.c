static struct resource shared_res[] = ;
static struct platform_device bcm63xx_enet_shared_device = ;
static int shared_device_registered;
static struct resource enet0_res[] = ;
static struct bcm63xx_enet_platform_data enet0_pd;
static struct platform_device bcm63xx_enet0_device = ;
static struct resource enet1_res[] = ;
static struct bcm63xx_enet_platform_data enet1_pd;
static struct platform_device bcm63xx_enet1_device = ;
int __init bcm63xx_enet_register(int unit,
const struct bcm63xx_enet_platform_data *pd)
