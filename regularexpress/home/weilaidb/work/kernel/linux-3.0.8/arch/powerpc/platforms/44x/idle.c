static int mode_spin;
static void ppc44x_idle(void)
int __init ppc44x_idle_init(void)
arch_initcall(ppc44x_idle_init);
static int __init idle_param(char *p)
early_param("idle", idle_param);
