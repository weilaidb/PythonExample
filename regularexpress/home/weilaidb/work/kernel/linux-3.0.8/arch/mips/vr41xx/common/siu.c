static unsigned int siu_type1_ports[SIU_PORTS_MAX] __initdata = ;
static struct resource siu_type1_resource[] __initdata = ;
static unsigned int siu_type2_ports[SIU_PORTS_MAX] __initdata = ;
static struct resource siu_type2_resource[] __initdata = ;
static int __init vr41xx_siu_add(void)
device_initcall(vr41xx_siu_add);
void __init vr41xx_siu_setup(void)
