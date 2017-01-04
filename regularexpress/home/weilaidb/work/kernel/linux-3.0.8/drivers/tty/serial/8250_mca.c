#define MCA_FLAGS	UPF_BOOT_AUTOCONF | UPF_SKIP_TEST | UPF_AUTO_IRQ
#define MCA_FLAGS	UPF_BOOT_AUTOCONF | UPF_SKIP_TEST
#define PORT(_base,_irq)			\
static struct plat_serial8250_port mca_data[] = ;
static struct platform_device mca_device = ;
static int __init mca_init(void)
module_init(mca_init);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("8250 serial probe module for MCA ports");
MODULE_LICENSE("GPL");
