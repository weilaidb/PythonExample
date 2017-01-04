extern int rodata_test_data;
static void fudze_exception_table(void *marker, void *new)
void foo_label(void);
static noinline int test_address(void *address)
static unsigned char test_data = 0xC3;
static int test_NX(void)
static void test_exit(void)
module_init(test_NX);
module_exit(test_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Testcase for the NX infrastructure");
MODULE_AUTHOR("Arjan van de Ven <arjan@linux.intel.com>");
