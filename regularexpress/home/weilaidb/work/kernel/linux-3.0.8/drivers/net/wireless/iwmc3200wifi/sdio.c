static void iwm_sdio_isr_worker(struct work_struct *work)
static void iwm_sdio_isr(struct sdio_func *func)
static void iwm_sdio_rx_free(struct iwm_sdio_priv *hw)
static int if_sdio_enable(struct iwm_priv *iwm)
static int if_sdio_disable(struct iwm_priv *iwm)
static int if_sdio_send_chunk(struct iwm_priv *iwm, u8 *buf, int count)
static int iwm_debugfs_sdio_open(struct inode *inode, struct file *filp)
static ssize_t iwm_debugfs_sdio_read(struct file *filp, char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations iwm_debugfs_sdio_fops = ;
static void if_sdio_debugfs_init(struct iwm_priv *iwm, struct dentry *parent_dir)
static void if_sdio_debugfs_exit(struct iwm_priv *iwm)
static struct iwm_if_ops if_sdio_ops = ;
MODULE_FIRMWARE("iwmc3200wifi-umac-sdio.bin");
MODULE_FIRMWARE("iwmc3200wifi-calib-sdio.bin");
MODULE_FIRMWARE("iwmc3200wifi-lmac-sdio.bin");
static int iwm_sdio_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void iwm_sdio_remove(struct sdio_func *func)
static const struct sdio_device_id iwm_sdio_ids[] = ;
MODULE_DEVICE_TABLE(sdio, iwm_sdio_ids);
static struct sdio_driver iwm_sdio_driver = ;
static int __init iwm_sdio_init_module(void)
static void __exit iwm_sdio_exit_module(void)
module_init(iwm_sdio_init_module);
module_exit(iwm_sdio_exit_module);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(IWM_COPYRIGHT " " IWM_AUTHOR);
