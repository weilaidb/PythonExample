static void *radio_log_base;
static size_t radio_log_size;
extern void *smem_item(unsigned id, unsigned *size);
static ssize_t last_radio_log_read(struct file *file, char __user *buf,
size_t len, loff_t *offset)
static struct file_operations last_radio_log_fops = ;
void msm_init_last_radio_log(struct module *owner)
EXPORT_SYMBOL(msm_init_last_radio_log);
