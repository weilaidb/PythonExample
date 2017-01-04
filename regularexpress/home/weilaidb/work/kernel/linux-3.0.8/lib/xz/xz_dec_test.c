#define DICT_MAX (1 << 20)
#define DEVICE_NAME "xz_dec_test"
static int device_major;
static bool device_is_open;
static struct xz_dec *state;
static enum xz_ret ret;
static uint8_t buffer_in[1024];
static uint8_t buffer_out[1024];
static struct xz_buf buffers = ;
static uint32_t crc;
static int xz_dec_test_open(struct inode *i, struct file *f)
static int xz_dec_test_release(struct inode *i, struct file *f)
static ssize_t xz_dec_test_write(struct file *file, const char __user *buf,
size_t size, loff_t *pos)
static int __init xz_dec_test_init(void)
static void __exit xz_dec_test_exit(void)
module_init(xz_dec_test_init);
module_exit(xz_dec_test_exit);
MODULE_DESCRIPTION("XZ decompressor tester");
MODULE_VERSION("1.0");
MODULE_AUTHOR("Lasse Collin <lasse.collin@tukaani.org>");
MODULE_LICENSE("GPL");
