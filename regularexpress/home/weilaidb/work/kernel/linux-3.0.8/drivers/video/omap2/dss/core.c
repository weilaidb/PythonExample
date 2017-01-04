#define DSS_SUBSYS_NAME "CORE"
static struct  core;
static char *def_disp_name;
module_param_named(def_disp, def_disp_name, charp, 0);
MODULE_PARM_DESC(def_disp, "default display name");
unsigned int dss_debug;
module_param_named(debug, dss_debug, bool, 0644);
static int omap_dss_register_device(struct omap_dss_device *);
static void omap_dss_unregister_device(struct omap_dss_device *);
struct regulator *dss_get_vdds_dsi(void)
struct regulator *dss_get_vdds_sdi(void)
#if defined(CONFIG_DEBUG_FS) && defined(CONFIG_OMAP2_DSS_DEBUG_SUPPORT)
static int dss_debug_show(struct seq_file *s, void *unused)
static int dss_debug_open(struct inode *inode, struct file *file)
static const struct file_operations dss_debug_fops = ;
static struct dentry *dss_debugfs_dir;
static int dss_initialize_debugfs(void)
static void dss_uninitialize_debugfs(void)
static inline int dss_initialize_debugfs(void)
static inline void dss_uninitialize_debugfs(void)
static int omap_dss_probe(struct platform_device *pdev)
static int omap_dss_remove(struct platform_device *pdev)
static void omap_dss_shutdown(struct platform_device *pdev)
static int omap_dss_suspend(struct platform_device *pdev, pm_message_t state)
static int omap_dss_resume(struct platform_device *pdev)
static struct platform_driver omap_dss_driver = ;
static int dss_bus_match(struct device *dev, struct device_driver *driver)
static ssize_t device_name_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute default_dev_attrs[] = ;
static ssize_t driver_name_show(struct device_driver *drv, char *buf)
static struct driver_attribute default_drv_attrs[] = ;
static struct bus_type dss_bus_type = ;
static void dss_bus_release(struct device *dev)
static struct device dss_bus = ;
struct bus_type *dss_get_bus(void)
static int dss_driver_probe(struct device *dev)
static int dss_driver_remove(struct device *dev)
int omap_dss_register_driver(struct omap_dss_driver *dssdriver)
EXPORT_SYMBOL(omap_dss_register_driver);
void omap_dss_unregister_driver(struct omap_dss_driver *dssdriver)
EXPORT_SYMBOL(omap_dss_unregister_driver);
static void reset_device(struct device *dev, int check)
static void omap_dss_dev_release(struct device *dev)
static int omap_dss_register_device(struct omap_dss_device *dssdev)
static void omap_dss_unregister_device(struct omap_dss_device *dssdev)
static int omap_dss_bus_register(void)
static void omap_dss_bus_unregister(void)
static int __init omap_dss_init(void)
static void __exit omap_dss_exit(void)
module_init(omap_dss_init);
module_exit(omap_dss_exit);
static int __init omap_dss_init(void)
static int __init omap_dss_init2(void)
core_initcall(omap_dss_init);
device_initcall(omap_dss_init2);
MODULE_AUTHOR("Tomi Valkeinen <tomi.valkeinen@nokia.com>");
MODULE_DESCRIPTION("OMAP2/3 Display Subsystem");
MODULE_LICENSE("GPL v2");
