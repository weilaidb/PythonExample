#undef DEBUG
#define DBG(fmt, args...) printk(KERN_ERR "%s: " fmt, __func__, ## args)
#define DBG(fmt, args...)
static void mpc85xx_8259_cascade(unsigned int irq, struct irq_desc *desc)
void __init mpc85xx_ds_pic_init(void)
static int primary_phb_addr;
extern int uli_exclude_device(struct pci_controller *hose,
u_char bus, u_char devfn);
static int mpc85xx_exclude_device(struct pci_controller *hose,
u_char bus, u_char devfn)
extern void __init mpc85xx_smp_init(void);
static void __init mpc85xx_ds_setup_arch(void)
static int __init mpc8544_ds_probe(void)
static struct of_device_id __initdata mpc85xxds_ids[] = ;
static int __init mpc85xxds_publish_devices(void)
machine_device_initcall(mpc8544_ds, mpc85xxds_publish_devices);
machine_device_initcall(mpc8572_ds, mpc85xxds_publish_devices);
machine_device_initcall(p2020_ds, mpc85xxds_publish_devices);
machine_arch_initcall(mpc8544_ds, swiotlb_setup_bus_notifier);
machine_arch_initcall(mpc8572_ds, swiotlb_setup_bus_notifier);
machine_arch_initcall(p2020_ds, swiotlb_setup_bus_notifier);
static int __init mpc8572_ds_probe(void)
static int __init p2020_ds_probe(void)
define_machine(mpc8544_ds) ;
define_machine(mpc8572_ds) ;
define_machine(p2020_ds) ;
