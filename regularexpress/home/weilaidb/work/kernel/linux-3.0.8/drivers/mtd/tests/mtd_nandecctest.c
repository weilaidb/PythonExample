#if defined(CONFIG_MTD_NAND) || defined(CONFIG_MTD_NAND_MODULE)
static void inject_single_bit_error(void *data, size_t size)
static unsigned char data[512];
static unsigned char error_data[512];
static int nand_ecc_test(const size_t size)
static int nand_ecc_test(const size_t size)
static int __init ecc_test_init(void)
static void __exit ecc_test_exit(void)
module_init(ecc_test_init);
module_exit(ecc_test_exit);
MODULE_DESCRIPTION("NAND ECC function test module");
MODULE_AUTHOR("Akinobu Mita");
MODULE_LICENSE("GPL");
