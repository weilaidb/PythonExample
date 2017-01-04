#define to_mcp(d)		container_of(d, struct mcp, attached_device)
#define to_mcp_driver(d)	container_of(d, struct mcp_driver, drv)
static int mcp_bus_match(struct device *dev, struct device_driver *drv)
static int mcp_bus_probe(struct device *dev)
static int mcp_bus_remove(struct device *dev)
static int mcp_bus_suspend(struct device *dev, pm_message_t state)
static int mcp_bus_resume(struct device *dev)
static struct bus_type mcp_bus_type = ;
void mcp_set_telecom_divisor(struct mcp *mcp, unsigned int div)
EXPORT_SYMBOL(mcp_set_telecom_divisor);
void mcp_set_audio_divisor(struct mcp *mcp, unsigned int div)
EXPORT_SYMBOL(mcp_set_audio_divisor);
void mcp_reg_write(struct mcp *mcp, unsigned int reg, unsigned int val)
EXPORT_SYMBOL(mcp_reg_write);
unsigned int mcp_reg_read(struct mcp *mcp, unsigned int reg)
EXPORT_SYMBOL(mcp_reg_read);
void mcp_enable(struct mcp *mcp)
EXPORT_SYMBOL(mcp_enable);
void mcp_disable(struct mcp *mcp)
EXPORT_SYMBOL(mcp_disable);
static void mcp_release(struct device *dev)
struct mcp *mcp_host_alloc(struct device *parent, size_t size)
EXPORT_SYMBOL(mcp_host_alloc);
int mcp_host_register(struct mcp *mcp)
EXPORT_SYMBOL(mcp_host_register);
void mcp_host_unregister(struct mcp *mcp)
EXPORT_SYMBOL(mcp_host_unregister);
int mcp_driver_register(struct mcp_driver *mcpdrv)
EXPORT_SYMBOL(mcp_driver_register);
void mcp_driver_unregister(struct mcp_driver *mcpdrv)
EXPORT_SYMBOL(mcp_driver_unregister);
static int __init mcp_init(void)
static void __exit mcp_exit(void)
module_init(mcp_init);
module_exit(mcp_exit);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("Core multimedia communications port driver");
MODULE_LICENSE("GPL");
