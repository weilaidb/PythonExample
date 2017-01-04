static unsigned long msc[2];
static unsigned long sxcnfg, memclkcfg;
static unsigned long csadrcfg[4];
static int pxa3xx_smemc_suspend(void)
static void pxa3xx_smemc_resume(void)
static struct syscore_ops smemc_syscore_ops = ;
static int __init smemc_init(void)
subsys_initcall(smemc_init);
