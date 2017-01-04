struct IR;
struct IR_rx ;
struct IR_tx ;
struct IR ;
static DEFINE_MUTEX(ir_devices_lock);
static LIST_HEAD(ir_devices_list);
#define TX_BLOCK_SIZE	99
struct tx_data_struct ;
static struct tx_data_struct *tx_data;
static struct mutex tx_data_lock;
#define zilog_notify(s, args...) printk(KERN_NOTICE KBUILD_MODNAME ": " s, \
## args)
#define zilog_error(s, args...) printk(KERN_ERR KBUILD_MODNAME ": " s, ## args)
#define zilog_info(s, args...) printk(KERN_INFO KBUILD_MODNAME ": " s, ## args)
static int debug;
static int tx_only;
static int minor = -1;
#define dprintk(fmt, args...)						\
do  while (0)
static struct IR *get_ir_device(struct IR *ir, bool ir_devices_lock_held)
static void release_ir_device(struct kref *ref)
static int put_ir_device(struct IR *ir, bool ir_devices_lock_held)
static struct IR_rx *get_ir_rx(struct IR *ir)
static void destroy_rx_kthread(struct IR_rx *rx, bool ir_devices_lock_held)
static void release_ir_rx(struct kref *ref)
static int put_ir_rx(struct IR_rx *rx, bool ir_devices_lock_held)
static struct IR_tx *get_ir_tx(struct IR *ir)
static void release_ir_tx(struct kref *ref)
static int put_ir_tx(struct IR_tx *tx, bool ir_devices_lock_held)
static int add_to_buf(struct IR *ir)
static int lirc_thread(void *arg)
static int set_use_inc(void *data)
static void set_use_dec(void *data)
static int read_uint32(unsigned char **data,
unsigned char *endp, unsigned int *val)
static int read_uint8(unsigned char **data,
unsigned char *endp, unsigned char *val)
static int skip(unsigned char **data,
unsigned char *endp, unsigned int distance)
static int get_key_data(unsigned char *buf,
unsigned int codeset, unsigned int key)
static int send_data_block(struct IR_tx *tx, unsigned char *data_block)
static int send_boot_data(struct IR_tx *tx)
static void fw_unload_locked(void)
static void fw_unload(void)
static int fw_load(struct IR_tx *tx)
static ssize_t read(struct file *filep, char *outbuf, size_t n, loff_t *ppos)
static int send_code(struct IR_tx *tx, unsigned int code, unsigned int key)
static ssize_t write(struct file *filep, const char *buf, size_t n,
loff_t *ppos)
static unsigned int poll(struct file *filep, poll_table *wait)
static long ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static struct IR *get_ir_device_by_minor(unsigned int minor)
static int open(struct inode *node, struct file *filep)
static int close(struct inode *node, struct file *filep)
static int ir_remove(struct i2c_client *client);
static int ir_probe(struct i2c_client *client, const struct i2c_device_id *id);
#define ID_FLAG_TX	0x01
#define ID_FLAG_HDPVR	0x02
static const struct i2c_device_id ir_transceiver_id[] = ;
static struct i2c_driver driver = ;
static const struct file_operations lirc_fops = ;
static struct lirc_driver lirc_template = ;
static int ir_remove(struct i2c_client *client)
static struct IR *get_ir_device_by_adapter(struct i2c_adapter *adapter)
static int ir_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int __init zilog_init(void)
static void __exit zilog_exit(void)
module_init(zilog_init);
module_exit(zilog_exit);
MODULE_DESCRIPTION("Zilog/Hauppauge infrared transmitter driver (i2c stack)");
MODULE_AUTHOR("Gerd Knorr, Michal Kochanowicz, Christoph Bartelmus, "
"Ulrich Mueller, Stefan Jahn, Jerome Brock, Mark Weaver, "
"Andy Walls");
MODULE_LICENSE("GPL");
MODULE_ALIAS("lirc_pvr150");
module_param(minor, int, 0444);
MODULE_PARM_DESC(minor, "Preferred minor device number");
module_param(debug, bool, 0644);
MODULE_PARM_DESC(debug, "Enable debugging messages");
module_param(tx_only, bool, 0644);
MODULE_PARM_DESC(tx_only, "Only handle the IR transmit function");
