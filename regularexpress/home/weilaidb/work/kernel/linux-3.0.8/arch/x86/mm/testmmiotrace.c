#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static unsigned long mmio_address;
module_param(mmio_address, ulong, 0);
MODULE_PARM_DESC(mmio_address, " Start address of the mapping of 16 kB "
"(or 8 MB if read_far is non-zero).");
static unsigned long read_far = 0x400100;
module_param(read_far, ulong, 0);
MODULE_PARM_DESC(read_far, " Offset of a 32-bit read within 8 MB "
"(default: 0x400100).");
static unsigned v16(unsigned i)
static unsigned v32(unsigned i)
static void do_write_test(void __iomem *p)
static void do_read_test(void __iomem *p)
static void do_read_far_test(void __iomem *p)
static void do_test(unsigned long size)
static void do_test_bulk_ioremapping(void)
static int __init init(void)
static void __exit cleanup(void)
module_init(init);
module_exit(cleanup);
MODULE_LICENSE("GPL");
