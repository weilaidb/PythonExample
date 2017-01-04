#define DRIVER_NAME "airport"
#define PFX DRIVER_NAME ": "
#define AIRPORT_IO_LEN	(0x1000)
struct airport ;
static int
airport_suspend(struct macio_dev *mdev, pm_message_t state)
static int
airport_resume(struct macio_dev *mdev)
static int
airport_detach(struct macio_dev *mdev)
static int airport_hard_reset(struct orinoco_private *priv)
static int
airport_attach(struct macio_dev *mdev, const struct of_device_id *match)
static char version[] __initdata = DRIVER_NAME " " DRIVER_VERSION
" (Benjamin Herrenschmidt <benh@kernel.crashing.org>)";
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("Driver for the Apple Airport wireless card.");
MODULE_LICENSE("Dual MPL/GPL");
static struct of_device_id airport_match[] =
;
MODULE_DEVICE_TABLE(of, airport_match);
static struct macio_driver airport_driver = ;
static int __init
init_airport(void)
static void __exit
exit_airport(void)
module_init(init_airport);
module_exit(exit_airport);
