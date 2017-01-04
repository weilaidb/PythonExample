static u64 tcc8k_dmamask = DMA_BIT_MASK(32);
static struct resource tcc_nand_resources[] = ;
struct platform_device tcc_nand_device = ;
static struct resource tcc8k_mmc0_resource[] = ;
static struct resource tcc8k_mmc1_resource[] = ;
struct platform_device tcc8k_mmc0_device = ;
struct platform_device tcc8k_mmc1_device = ;
static inline void tcc8k_init_mmc(void)
static inline void tcc8k_init_mmc(void)
static int tcc8k_ohci_init(struct device *dev)
static struct resource tcc8k_ohci0_resources[] = ;
static struct resource tcc8k_ohci1_resources[] = ;
static struct tccohci_platform_data tcc8k_ohci0_platform_data = ;
static struct tccohci_platform_data tcc8k_ohci1_platform_data = ;
static struct platform_device ohci0_device = ;
static struct platform_device ohci1_device = ;
static void __init tcc8k_init_usbhost(void)
static void __init tcc8k_init_usbhost(void)
static struct resource udc_resources[] = ;
static struct platform_device tcc8k_udc_device = ;
static void __init tcc8k_init_usb_gadget(void)
static void __init tcc8k_init_usb_gadget(void)
static int __init tcc8k_init_devices(void)
arch_initcall(tcc8k_init_devices);
