static __be32 __iomem *restart_reg_base;
static int __init mpc83xx_restart_init(void)
arch_initcall(mpc83xx_restart_init);
void mpc83xx_restart(char *cmd)
long __init mpc83xx_time_init(void)
