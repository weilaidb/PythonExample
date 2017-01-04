#define GAYLE_CONTROL	0x101a
#define GAYLE_IRQ_4000	0xdd3020
#define GAYLE_IRQ_1200	0xda9000
#define GAYLE_NEXT_PORT	0x1000
#define GAYLE_NUM_HWIFS		2
#define GAYLE_NUM_PROBE_HWIFS	(ide_doubler ? GAYLE_NUM_HWIFS : \
GAYLE_NUM_HWIFS-1)
#define GAYLE_HAS_CONTROL_REG	(!ide_doubler)
static int ide_doubler;
module_param_named(doubler, ide_doubler, bool, 0);
MODULE_PARM_DESC(doubler, "enable support for IDE doublers");
static int gayle_test_irq(ide_hwif_t *hwif)
static void gayle_a1200_clear_irq(ide_drive_t *drive)
static void __init gayle_setup_ports(struct ide_hw *hw, unsigned long base,
unsigned long ctl, unsigned long irq_port)
static const struct ide_port_ops gayle_a4000_port_ops = ;
static const struct ide_port_ops gayle_a1200_port_ops = ;
static const struct ide_port_info gayle_port_info = ;
static int __init amiga_gayle_ide_probe(struct platform_device *pdev)
static int __exit amiga_gayle_ide_remove(struct platform_device *pdev)
static struct platform_driver amiga_gayle_ide_driver = ;
static int __init amiga_gayle_ide_init(void)
module_init(amiga_gayle_ide_init);
static void __exit amiga_gayle_ide_exit(void)
module_exit(amiga_gayle_ide_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:amiga-gayle-ide");
