static const struct ide_port_info rapide_port_info = ;
static void rapide_setup_ports(struct ide_hw *hw, void __iomem *base,
void __iomem *ctrl, unsigned int sz, int irq)
static int __devinit
rapide_probe(struct expansion_card *ec, const struct ecard_id *id)
static void __devexit rapide_remove(struct expansion_card *ec)
static struct ecard_id rapide_ids[] = ;
static struct ecard_driver rapide_driver = ;
static int __init rapide_init(void)
static void __exit rapide_exit(void)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Yellowstone RAPIDE driver");
module_init(rapide_init);
module_exit(rapide_exit);
