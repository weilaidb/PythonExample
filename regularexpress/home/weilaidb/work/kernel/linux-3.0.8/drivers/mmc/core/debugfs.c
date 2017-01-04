static int mmc_ios_show(struct seq_file *s, void *data)
static int mmc_ios_open(struct inode *inode, struct file *file)
static const struct file_operations mmc_ios_fops = ;
static int mmc_clock_opt_get(void *data, u64 *val)
static int mmc_clock_opt_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(mmc_clock_fops, mmc_clock_opt_get, mmc_clock_opt_set,
"%llu\n");
void mmc_add_host_debugfs(struct mmc_host *host)
void mmc_remove_host_debugfs(struct mmc_host *host)
static int mmc_dbg_card_status_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(mmc_dbg_card_status_fops, mmc_dbg_card_status_get,
NULL, "%08llx\n");
#define EXT_CSD_STR_LEN 1025
static int mmc_ext_csd_open(struct inode *inode, struct file *filp)
static ssize_t mmc_ext_csd_read(struct file *filp, char __user *ubuf,
size_t cnt, loff_t *ppos)
static int mmc_ext_csd_release(struct inode *inode, struct file *file)
static const struct file_operations mmc_dbg_ext_csd_fops = ;
void mmc_add_card_debugfs(struct mmc_card *card)
void mmc_remove_card_debugfs(struct mmc_card *card)
