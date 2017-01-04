#define for_each_test(i, test)	\
for (i = 0; i < sizeof(test) / sizeof(test[0]); i++)
struct test_fail ;
#define DEFINE_TEST_FAIL(test)	\
const struct test_fail test[] __initdata
#define DECLARE_TEST_OK(type, test_type)	\
test_type
#define DEFINE_TEST_OK(type, test)	\
const type test[] __initdata
#define TEST_FAIL(fn, type, fmt, test)					\
#define TEST_OK(fn, type, fmt, test)					\
static void __init test_kstrtoull_ok(void)
static void __init test_kstrtoull_fail(void)
static void __init test_kstrtoll_ok(void)
static void __init test_kstrtoll_fail(void)
static void __init test_kstrtou64_ok(void)
static void __init test_kstrtou64_fail(void)
static void __init test_kstrtos64_ok(void)
static void __init test_kstrtos64_fail(void)
static void __init test_kstrtou32_ok(void)
static void __init test_kstrtou32_fail(void)
static void __init test_kstrtos32_ok(void)
static void __init test_kstrtos32_fail(void)
static void __init test_kstrtou16_ok(void)
static void __init test_kstrtou16_fail(void)
static void __init test_kstrtos16_ok(void)
static void __init test_kstrtos16_fail(void)
static void __init test_kstrtou8_ok(void)
static void __init test_kstrtou8_fail(void)
static void __init test_kstrtos8_ok(void)
static void __init test_kstrtos8_fail(void)
static int __init test_kstrtox_init(void)
module_init(test_kstrtox_init);
MODULE_LICENSE("Dual BSD/GPL");
