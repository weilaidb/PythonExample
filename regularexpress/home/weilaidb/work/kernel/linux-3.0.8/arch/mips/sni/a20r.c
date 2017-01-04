#define PORT(_base,_irq)				\
static struct plat_serial8250_port a20r_data[] = ;
static struct platform_device a20r_serial8250_device = ;
static struct resource a20r_ds1216_rsrc[] = ;
static struct platform_device a20r_ds1216_device = ;
static struct resource snirm_82596_rsrc[] = ;
static struct platform_device snirm_82596_pdev = ;
static struct resource snirm_53c710_rsrc[] = ;
static struct platform_device snirm_53c710_pdev = ;
static struct resource sc26xx_rsrc[] = ;
static unsigned int sc26xx_data[2] = ;
static struct platform_device sc26xx_pdev = ;
static u32 a20r_ack_hwint(void)
static inline void unmask_a20r_irq(struct irq_data *d)
static inline void mask_a20r_irq(struct irq_data *d)
static struct irq_chip a20r_irq_type = ;
static void a20r_hwint(void)
void __init sni_a20r_irq_init(void)
void sni_a20r_init(void)
static int __init snirm_a20r_setup_devinit(void)
device_initcall(snirm_a20r_setup_devinit);
