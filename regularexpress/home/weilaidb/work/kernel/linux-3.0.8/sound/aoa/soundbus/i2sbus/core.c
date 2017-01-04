MODULE_LICENSE("GPL");
MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_DESCRIPTION("Apple Soundbus: I2S support");
static int force;
module_param(force, int, 0444);
MODULE_PARM_DESC(force, "Force loading i2sbus even when"
" no layout-id property is present");
static struct of_device_id i2sbus_match[] = ;
MODULE_DEVICE_TABLE(of, i2sbus_match);
static int alloc_dbdma_descriptor_ring(struct i2sbus_dev *i2sdev,
struct dbdma_command_mem *r,
int numcmds)
static void free_dbdma_descriptor_ring(struct i2sbus_dev *i2sdev,
struct dbdma_command_mem *r)
static void i2sbus_release_dev(struct device *dev)
static irqreturn_t i2sbus_bus_intr(int irq, void *devid)
static int i2sbus_get_and_fixup_rsrc(struct device_node *np, int index,
int layout, struct resource *res)
static int i2sbus_add_dev(struct macio_dev *macio,
struct i2sbus_control *control,
struct device_node *np)
static int i2sbus_probe(struct macio_dev* dev, const struct of_device_id *match)
static int i2sbus_remove(struct macio_dev* dev)
static int i2sbus_suspend(struct macio_dev* dev, pm_message_t state)
static int i2sbus_resume(struct macio_dev* dev)
static int i2sbus_shutdown(struct macio_dev* dev)
static struct macio_driver i2sbus_drv = ;
static int __init soundbus_i2sbus_init(void)
static void __exit soundbus_i2sbus_exit(void)
module_init(soundbus_i2sbus_init);
module_exit(soundbus_i2sbus_exit);
