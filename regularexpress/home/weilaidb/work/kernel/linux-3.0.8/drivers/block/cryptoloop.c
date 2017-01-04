MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("loop blockdevice transferfunction adaptor / CryptoAPI");
MODULE_AUTHOR("Herbert Valerio Riedel <hvr@gnu.org>");
#define LOOP_IV_SECTOR_BITS 9
#define LOOP_IV_SECTOR_SIZE (1 << LOOP_IV_SECTOR_BITS)
static int
cryptoloop_init(struct loop_device *lo, const struct loop_info64 *info)
typedef int (*encdec_cbc_t)(struct blkcipher_desc *desc,
struct scatterlist *sg_out,
struct scatterlist *sg_in,
unsigned int nsg);
static int
cryptoloop_transfer(struct loop_device *lo, int cmd,
struct page *raw_page, unsigned raw_off,
struct page *loop_page, unsigned loop_off,
int size, sector_t IV)
static int
cryptoloop_ioctl(struct loop_device *lo, int cmd, unsigned long arg)
static int
cryptoloop_release(struct loop_device *lo)
static struct loop_func_table cryptoloop_funcs = ;
static int __init
init_cryptoloop(void)
static void __exit
cleanup_cryptoloop(void)
module_init(init_cryptoloop);
module_exit(cleanup_cryptoloop);
