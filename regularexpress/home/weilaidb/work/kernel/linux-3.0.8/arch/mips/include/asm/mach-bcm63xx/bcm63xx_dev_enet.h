#define BCM63XX_DEV_ENET_H_
struct bcm63xx_enet_platform_data ;
int __init bcm63xx_enet_register(int unit,
const struct bcm63xx_enet_platform_data *pd);
