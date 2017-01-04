static struct resource ltq_nor_resource = ;
static struct platform_device ltq_nor = ;
void __init ltq_register_nor(struct physmap_flash_data *data)
static struct resource ltq_wdt_resource = ;
void __init ltq_register_wdt(void)
static struct resource ltq_asc0_resources[] = ;
static struct resource ltq_asc1_resources[] = ;
void __init ltq_register_asc(int port)
static struct platform_device ltq_pci = ;
void __init ltq_register_pci(struct ltq_pci_data *data)
void __init ltq_register_pci(struct ltq_pci_data *data)
