static int resumeline = 898;
module_param(resumeline, int, 0444);
static int noinit;
module_param(noinit, int, 0444);
static int useaa = 1;
module_param(useaa, int, 0444);
static struct dcon_platform_data *pdata;
static struct platform_device *dcon_device;
static DECLARE_WAIT_QUEUE_HEAD(dcon_wait_queue);
static unsigned short normal_i2c[] = ;
static s32 dcon_write(struct dcon_priv *dcon, u8 reg, u16 val)
static s32 dcon_read(struct dcon_priv *dcon, u8 reg)
static int dcon_hw_init(struct dcon_priv *dcon, int is_init)
static int dcon_bus_stabilize(struct dcon_priv *dcon, int is_powered_down)
static void dcon_set_backlight(struct dcon_priv *dcon, u8 level)
static int dcon_set_mono_mode(struct dcon_priv *dcon, bool enable_mono)
static void dcon_sleep(struct dcon_priv *dcon, bool sleep)
static void dcon_load_holdoff(struct dcon_priv *dcon)
static bool dcon_blank_fb(struct dcon_priv *dcon, bool blank)
static void dcon_source_switch(struct work_struct *work)
static void dcon_set_source(struct dcon_priv *dcon, int arg)
static void dcon_set_source_sync(struct dcon_priv *dcon, int arg)
static ssize_t dcon_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t dcon_sleep_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t dcon_freeze_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t dcon_mono_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t dcon_resumeline_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t dcon_mono_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t dcon_freeze_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t dcon_resumeline_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t dcon_sleep_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static struct device_attribute dcon_device_files[] = ;
static int dcon_bl_update(struct backlight_device *dev)
static int dcon_bl_get(struct backlight_device *dev)
static const struct backlight_ops dcon_bl_ops = ;
static struct backlight_properties dcon_bl_props = ;
static int dcon_reboot_notify(struct notifier_block *nb,
unsigned long foo, void *bar)
static int unfreeze_on_panic(struct notifier_block *nb,
unsigned long e, void *p)
static struct notifier_block dcon_panic_nb = ;
static int dcon_fb_notifier(struct notifier_block *self,
unsigned long event, void *data)
static int dcon_detect(struct i2c_client *client, struct i2c_board_info *info)
static int dcon_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int dcon_remove(struct i2c_client *client)
static int dcon_suspend(struct i2c_client *client, pm_message_t state)
static int dcon_resume(struct i2c_client *client)
irqreturn_t dcon_interrupt(int irq, void *id)
static const struct i2c_device_id dcon_idtable[] = ;
MODULE_DEVICE_TABLE(i2c, dcon_idtable);
struct i2c_driver dcon_driver = ;
static int __init olpc_dcon_init(void)
static void __exit olpc_dcon_exit(void)
module_init(olpc_dcon_init);
module_exit(olpc_dcon_exit);
MODULE_LICENSE("GPL");
