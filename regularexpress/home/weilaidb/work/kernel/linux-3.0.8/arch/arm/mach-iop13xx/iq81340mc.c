extern int init_atu;
static int __init
iq81340mc_pcix_map_irq(struct pci_dev *dev, u8 idsel, u8 pin)
static struct hw_pci iq81340mc_pci __initdata = ;
static int __init iq81340mc_pci_init(void)
static void __init iq81340mc_init(void)
static void __init iq81340mc_timer_init(void)
static struct sys_timer iq81340mc_timer = ;
MACHINE_START(IQ81340MC, "Intel IQ81340MC")
.boot_params    = 0x00000100,
.map_io         = iop13xx_map_io,
.init_irq       = iop13xx_init_irq,
.timer          = &iq81340mc_timer,
.init_machine   = iq81340mc_init,
MACHINE_END
