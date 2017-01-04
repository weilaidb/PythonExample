void __init plat_mem_setup(void)
static int __init
lantiq_setup(void)
arch_initcall(lantiq_setup);
static void __init
lantiq_generic_init(void)
MIPS_MACHINE(LTQ_MACH_GENERIC,
"Generic",
"Generic Lantiq based board",
lantiq_generic_init);
