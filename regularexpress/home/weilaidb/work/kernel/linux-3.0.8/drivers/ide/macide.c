#define IDE_BASE 0x50F1A000
#define IDE_CONTROL	0x38
#define IDE_IFR		0x101
volatile unsigned char *ide_ifr = (unsigned char *) (IDE_BASE + IDE_IFR);
int macide_test_irq(ide_hwif_t *hwif)
static void macide_clear_irq(ide_drive_t *drive)
static void __init macide_setup_ports(struct ide_hw *hw, unsigned long base,
int irq)
static const struct ide_port_ops macide_port_ops = ;
static const struct ide_port_info macide_port_info = ;
static const char *mac_ide_name[] =
;
static int __init macide_init(void)
module_init(macide_init);
MODULE_LICENSE("GPL");
