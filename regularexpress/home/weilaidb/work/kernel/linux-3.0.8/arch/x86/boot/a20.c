#define MAX_8042_LOOPS	100000
#define MAX_8042_FF	32
static int empty_8042(void)
#define A20_TEST_ADDR	(4*0x80)
#define A20_TEST_SHORT  32
#define A20_TEST_LONG	2097152
static int a20_test(int loops)
static int a20_test_short(void)
static int a20_test_long(void)
static void enable_a20_bios(void)
static void enable_a20_kbc(void)
static void enable_a20_fast(void)
#define A20_ENABLE_LOOPS 255
int enable_a20(void)
