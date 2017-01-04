#define SYNTH_MINOR 25
static int misc_registered;
static int dev_opened;
static ssize_t speakup_file_write(struct file *fp, const char *buffer,
size_t nbytes, loff_t *ppos)
static ssize_t speakup_file_read(struct file *fp, char *buf, size_t nbytes,
loff_t *ppos)
static int speakup_file_open(struct inode *ip, struct file *fp)
static int speakup_file_release(struct inode *ip, struct file *fp)
static const struct file_operations synth_fops = ;
static struct miscdevice synth_device = ;
void speakup_register_devsynth(void)
void speakup_unregister_devsynth(void)
