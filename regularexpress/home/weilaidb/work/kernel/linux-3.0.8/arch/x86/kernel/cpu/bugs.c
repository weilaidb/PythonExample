static int __init no_halt(char *s)
__setup("no-hlt", no_halt);
static int __init no_387(char *s)
__setup("no387", no_387);
static double __initdata x = 4195835.0;
static double __initdata y = 3145727.0;
static void __init check_fpu(void)
static void __init check_hlt(void)
static void __init check_popad(void)
static void __init check_config(void)
void __init check_bugs(void)
