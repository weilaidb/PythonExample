#define DRIVER_DESCRIPTION "Intel(R) IWMC 3200 Top Driver"
#define DRIVER_COPYRIGHT "Copyright (c) 2008 Intel Corporation."
#define DRIVER_VERSION  "0.1.62"
MODULE_DESCRIPTION(DRIVER_DESCRIPTION);
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_COPYRIGHT);
MODULE_FIRMWARE(FW_NAME(FW_API_VER));
static inline int __iwmct_tx(struct iwmct_priv *priv, void *src, int count)
int iwmct_tx(struct iwmct_priv *priv, void *src, int count)
static void iwmct_rescan_worker(struct work_struct *ws)
static void op_top_message(struct iwmct_priv *priv, struct top_msg *msg)
static void handle_top_message(struct iwmct_priv *priv, u8 *buf, int len)
int iwmct_send_hcmd(struct iwmct_priv *priv, u8 *cmd, u16 len)
static void iwmct_irq_read_worker(struct work_struct *ws)
static void iwmct_irq(struct sdio_func *func)
static int blocks;
module_param(blocks, int, 0604);
MODULE_PARM_DESC(blocks, "max_blocks_to_send");
static int dump;
module_param(dump, bool, 0604);
MODULE_PARM_DESC(dump, "dump_hex_content");
static int jump = 1;
module_param(jump, bool, 0604);
static int direct = 1;
module_param(direct, bool, 0604);
static int checksum = 1;
module_param(checksum, bool, 0604);
static int fw_download = 1;
module_param(fw_download, bool, 0604);
static int block_size = IWMC_SDIO_BLK_SIZE;
module_param(block_size, int, 0404);
static int download_trans_blks = IWMC_DEFAULT_TR_BLK;
module_param(download_trans_blks, int, 0604);
static int rubbish_barker;
module_param(rubbish_barker, bool, 0604);
static int log_level[LOG_SRC_MAX];
static unsigned int log_level_argc;
module_param_array(log_level, int, &log_level_argc, 0604);
MODULE_PARM_DESC(log_level, "log_level");
static int log_level_fw[FW_LOG_SRC_MAX];
static unsigned int log_level_fw_argc;
module_param_array(log_level_fw, int, &log_level_fw_argc, 0604);
MODULE_PARM_DESC(log_level_fw, "log_level_fw");
void iwmct_dbg_init_params(struct iwmct_priv *priv)
static ssize_t show_iwmct_fw_version(struct device *d,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cc_label_fw, S_IRUGO, show_iwmct_fw_version, NULL);
static DEVICE_ATTR(log_level, S_IWUSR | S_IRUGO,
show_iwmct_log_level, store_iwmct_log_level);
static DEVICE_ATTR(log_level_fw, S_IWUSR | S_IRUGO,
show_iwmct_log_level_fw, store_iwmct_log_level_fw);
static struct attribute *iwmct_sysfs_entries[] = ;
static struct attribute_group iwmct_attribute_group = ;
static int iwmct_probe(struct sdio_func *func,
const struct sdio_device_id *id)
static void iwmct_remove(struct sdio_func *func)
static const struct sdio_device_id iwmct_ids[] = ;
MODULE_DEVICE_TABLE(sdio, iwmct_ids);
static struct sdio_driver iwmct_driver = ;
static int __init iwmct_init(void)
static void __exit iwmct_exit(void)
module_init(iwmct_init);
module_exit(iwmct_exit);
