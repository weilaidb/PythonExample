#undef DEBUG
#define DBG (fmt...) do  while (0)
#define DBG (fmt...) do  while (0)
void __iomem *sbc610_regs;
static void __init gef_sbc610_init_irq(void)
static void __init gef_sbc610_setup_arch(void)
static unsigned int gef_sbc610_get_pcb_rev(void)
static unsigned int gef_sbc610_get_board_rev(void)
static unsigned int gef_sbc610_get_fpga_rev(void)
static void gef_sbc610_show_cpuinfo(struct seq_file *m)
static void __init gef_sbc610_nec_fixup(struct pci_dev *pdev)
DECLARE_PCI_FIXUP_HEADER(PCI_VENDOR_ID_NEC, PCI_DEVICE_ID_NEC_USB,
gef_sbc610_nec_fixup);
static int __init gef_sbc610_probe(void)
static long __init mpc86xx_time_init(void)
static __initdata struct of_device_id of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(gef_sbc610, declare_of_platform_devices);
define_machine(gef_sbc610) ;
