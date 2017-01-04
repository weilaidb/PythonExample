#define LIRCBUF_SIZE 256
static int ir_lirc_decode(struct rc_dev *dev, struct ir_raw_event ev)
static ssize_t ir_lirc_transmit_ir(struct file *file, const char *buf,
size_t n, loff_t *ppos)
static long ir_lirc_ioctl(struct file *filep, unsigned int cmd,
unsigned long __user arg)
static int ir_lirc_open(void *data)
static void ir_lirc_close(void *data)
static struct file_operations lirc_fops = ;
static int ir_lirc_register(struct rc_dev *dev)
static int ir_lirc_unregister(struct rc_dev *dev)
static struct ir_raw_handler lirc_handler = ;
static int __init ir_lirc_codec_init(void)
static void __exit ir_lirc_codec_exit(void)
module_init(ir_lirc_codec_init);
module_exit(ir_lirc_codec_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
MODULE_AUTHOR("Red Hat Inc. (http:
MODULE_DESCRIPTION("LIRC IR handler bridge");
