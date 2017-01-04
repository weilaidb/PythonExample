int __init pcmcia_collie_init(struct device *dev);
static int (*sa11x0_pcmcia_hw_init[])(struct device *dev) __devinitdata = ;
static int __devinit sa11x0_drv_pcmcia_probe(struct platform_device *dev)
static int sa11x0_drv_pcmcia_remove(struct platform_device *dev)
static struct platform_driver sa11x0_pcmcia_driver = ;
static int __init sa11x0_pcmcia_init(void)
static void __exit sa11x0_pcmcia_exit(void)
MODULE_AUTHOR("John Dorsey <john+@cs.cmu.edu>");
MODULE_DESCRIPTION("Linux PCMCIA Card Services: SA-11x0 Socket Controller");
MODULE_LICENSE("Dual MPL/GPL");
fs_initcall(sa11x0_pcmcia_init);
module_exit(sa11x0_pcmcia_exit);
