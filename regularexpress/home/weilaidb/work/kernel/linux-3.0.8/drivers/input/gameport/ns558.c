MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Classic gameport (ISA/PnP) driver");
MODULE_LICENSE("GPL");
static int ns558_isa_portlist[] = ;
struct ns558 ;
static LIST_HEAD(ns558_list);
static int ns558_isa_probe(int io)
static const struct pnp_device_id pnp_devids[] = ;
MODULE_DEVICE_TABLE(pnp, pnp_devids);
static int ns558_pnp_probe(struct pnp_dev *dev, const struct pnp_device_id *did)
static struct pnp_driver ns558_pnp_driver = ;
static struct pnp_driver ns558_pnp_driver;
static int __init ns558_init(void)
static void __exit ns558_exit(void)
module_init(ns558_init);
module_exit(ns558_exit);
