static u32 dcrbase_l2c;
static inline u32 l2c_diag(u32 addr)
static irqreturn_t l2c_error_handler(int irq, void *dev)
static int __init ppc4xx_l2c_probe(void)
arch_initcall(ppc4xx_l2c_probe);
void ppc4xx_reset_system(char *cmd)
