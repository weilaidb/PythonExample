static u64 patterns[] __initdata = ;
static void __init reserve_bad_mem(u64 pattern, u64 start_bad, u64 end_bad)
static void __init memtest(u64 pattern, u64 start_phys, u64 size)
static void __init do_one_pass(u64 pattern, u64 start, u64 end)
static int memtest_pattern __initdata;
static int __init parse_memtest(char *arg)
early_param("memtest", parse_memtest);
void __init early_memtest(unsigned long start, unsigned long end)
