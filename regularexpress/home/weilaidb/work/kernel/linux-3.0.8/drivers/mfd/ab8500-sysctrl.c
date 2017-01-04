static struct device *sysctrl_dev;
static inline bool valid_bank(u8 bank)
int ab8500_sysctrl_read(u16 reg, u8 *value)
int ab8500_sysctrl_write(u16 reg, u8 mask, u8 value)
static int __devinit ab8500_sysctrl_probe(struct platform_device *pdev)
static int __devexit ab8500_sysctrl_remove(struct platform_device *pdev)
static struct platform_driver ab8500_sysctrl_driver = ;
static int __init ab8500_sysctrl_init(void)
subsys_initcall(ab8500_sysctrl_init);
MODULE_AUTHOR("Mattias Nilsson <mattias.i.nilsson@stericsson.com");
MODULE_DESCRIPTION("AB8500 system control driver");
MODULE_LICENSE("GPL v2");
