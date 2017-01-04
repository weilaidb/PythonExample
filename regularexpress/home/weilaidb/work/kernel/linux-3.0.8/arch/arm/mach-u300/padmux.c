static DEFINE_MUTEX(pmx_mutex);
const u32 pmx_registers[] = ;
static struct pmx mmc_setting = ;
static struct pmx spi_setting = ;
static struct pmx *pmx_settings[] = ;
static void update_registers(struct pmx *pmx, bool activate)
struct pmx *pmx_get(struct device *dev, enum pmx_settings setting)
EXPORT_SYMBOL(pmx_get);
int pmx_put(struct device *dev, struct pmx *pmx)
EXPORT_SYMBOL(pmx_put);
int pmx_activate(struct device *dev, struct pmx *pmx)
EXPORT_SYMBOL(pmx_activate);
int pmx_deactivate(struct device *dev, struct pmx *pmx)
EXPORT_SYMBOL(pmx_deactivate);
static int pmx_set_default(void)
#if (defined(CONFIG_DEBUG_FS) && defined(CONFIG_U300_DEBUG))
static int pmx_show(struct seq_file *s, void *data)
static int pmx_open(struct inode *inode, struct file *file)
static const struct file_operations pmx_operations = ;
static int __init init_pmx_read_debugfs(void)
module_init(init_pmx_read_debugfs);
static int __init pmx_init(void)
core_initcall(pmx_init);
