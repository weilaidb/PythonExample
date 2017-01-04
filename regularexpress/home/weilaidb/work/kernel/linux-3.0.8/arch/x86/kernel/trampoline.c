unsigned char *x86_trampoline_base;
void __init setup_trampolines(void)
static int __init configure_trampolines(void)
arch_initcall(configure_trampolines);
