#define CRC16_VALID	0xb001
#define CRC16_INIT	0
#define COUNTER_COUNT 4
#define READ_BYTE_COUNT 42
static ssize_t w1_counter_read(struct device *device,
struct device_attribute *attr, char *buf);
static struct device_attribute w1_counter_attr =
__ATTR(w1_slave, S_IRUGO, w1_counter_read, NULL);
static ssize_t w1_counter_read(struct device *device,
struct device_attribute *attr, char *out_buf)
static int w1_f1d_add_slave(struct w1_slave *sl)
static void w1_f1d_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_f1d_fops = ;
static struct w1_family w1_family_1d = ;
static int __init w1_f1d_init(void)
static void __exit w1_f1d_exit(void)
module_init(w1_f1d_init);
module_exit(w1_f1d_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mika Laitio <lamikr@pilppa.org>");
MODULE_DESCRIPTION("w1 family 1d driver for DS2423, 4 counters and 4kb ram");
