void CI_handle(struct av7110 *av7110, u8 *data, u16 len)
void ci_get_data(struct dvb_ringbuffer *cibuf, u8 *data, int len)
static int ci_ll_init(struct dvb_ringbuffer *cirbuf, struct dvb_ringbuffer *ciwbuf, int size)
static void ci_ll_flush(struct dvb_ringbuffer *cirbuf, struct dvb_ringbuffer *ciwbuf)
static void ci_ll_release(struct dvb_ringbuffer *cirbuf, struct dvb_ringbuffer *ciwbuf)
static int ci_ll_reset(struct dvb_ringbuffer *cibuf, struct file *file,
int slots, ca_slot_info_t *slot)
static ssize_t ci_ll_write(struct dvb_ringbuffer *cibuf, struct file *file,
const char __user *buf, size_t count, loff_t *ppos)
static ssize_t ci_ll_read(struct dvb_ringbuffer *cibuf, struct file *file,
char __user *buf, size_t count, loff_t *ppos)
static int dvb_ca_open(struct inode *inode, struct file *file)
static unsigned int dvb_ca_poll (struct file *file, poll_table *wait)
static int dvb_ca_ioctl(struct file *file, unsigned int cmd, void *parg)
static ssize_t dvb_ca_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t dvb_ca_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations dvb_ca_fops = ;
static struct dvb_device dvbdev_ca = ;
int av7110_ca_register(struct av7110 *av7110)
void av7110_ca_unregister(struct av7110 *av7110)
int av7110_ca_init(struct av7110* av7110)
void av7110_ca_exit(struct av7110* av7110)
