static unsigned char EC_DISABLE_EVENT_REPORTING[] =	;
static unsigned char EC_ENABLE_EVENT_REPORTING[] =	;
static unsigned char EC_GET_FIRMWARE_VERSION[] =	;
static struct nvec_chip *nvec_power_handle;
int nvec_register_notifier(struct nvec_chip *nvec, struct notifier_block *nb,
unsigned int events)
EXPORT_SYMBOL_GPL(nvec_register_notifier);
static int nvec_status_notifier(struct notifier_block *nb, unsigned long event_type,
void *data)
void nvec_write_async(struct nvec_chip *nvec, unsigned char *data, short size)
EXPORT_SYMBOL(nvec_write_async);
static void nvec_request_master(struct work_struct *work)
static int parse_msg(struct nvec_chip *nvec, struct nvec_msg *msg)
static struct nvec_msg *nvec_write_sync(struct nvec_chip *nvec, unsigned char *data, short size)
static void nvec_dispatch(struct work_struct *work)
static irqreturn_t i2c_interrupt(int irq, void *dev)
static int __devinit nvec_add_subdev(struct nvec_chip *nvec, struct nvec_subdev *subdev)
static void tegra_init_i2c_slave(struct nvec_platform_data *pdata, unsigned char *i2c_regs,
struct clk *i2c_clk)
static void nvec_power_off(void)
static int __devinit tegra_nvec_probe(struct platform_device *pdev)
static int __devexit tegra_nvec_remove(struct platform_device *pdev)
static int tegra_nvec_suspend(struct platform_device *pdev, pm_message_t state)
static int tegra_nvec_resume(struct platform_device *pdev)
#define tegra_nvec_suspend NULL
#define tegra_nvec_resume NULL
static struct platform_driver nvec_device_driver =
;
static int __init tegra_nvec_init(void)
module_init(tegra_nvec_init);
MODULE_ALIAS("platform:nvec");
