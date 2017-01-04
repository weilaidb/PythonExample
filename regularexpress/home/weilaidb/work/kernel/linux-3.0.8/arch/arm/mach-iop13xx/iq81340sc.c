extern int init_atu;
static int __init
iq81340sc_atux_map_irq(struct pci_dev *dev, u8 idsel, u8 pin)
static struct hw_pci iq81340sc_pci __initdata = ;
static int __init iq81340sc_pci_init(void)
static void __init iq81340sc_init(void)
static void __init iq81340sc_timer_init(void)
static struct sys_timer iq81340sc_timer = ;
MACHINE_START(IQ81340SC, "Intel IQ81340SC")
.boot_params    = 0x00000100,
.map_io         = iop13xx_map_io,
.init_irq       = iop13xx_init_irq,
.timer          = &iq81340sc_timer,
.init_machine   = iq81340sc_init,
MACHINE_END
