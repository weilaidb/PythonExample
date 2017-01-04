struct mdio_gpio_info ;
static void mdio_dir(struct mdiobb_ctrl *ctrl, int dir)
static int mdio_get(struct mdiobb_ctrl *ctrl)
static void mdio_set(struct mdiobb_ctrl *ctrl, int what)
static void mdc_set(struct mdiobb_ctrl *ctrl, int what)
static struct mdiobb_ops mdio_gpio_ops = ;
static struct mii_bus * __devinit mdio_gpio_bus_init(struct device *dev,
struct mdio_gpio_platform_data *pdata,
int bus_id)
static void mdio_gpio_bus_deinit(struct device *dev)
static void __devexit mdio_gpio_bus_destroy(struct device *dev)
static int __devinit mdio_gpio_probe(struct platform_device *pdev)
static int __devexit mdio_gpio_remove(struct platform_device *pdev)
static int __devinit mdio_ofgpio_probe(struct platform_device *ofdev)
static int __devexit mdio_ofgpio_remove(struct platform_device *ofdev)
static struct of_device_id mdio_ofgpio_match[] = ;
MODULE_DEVICE_TABLE(of, mdio_ofgpio_match);
static struct platform_driver mdio_ofgpio_driver = ;
static inline int __init mdio_ofgpio_init(void)
static inline void __exit mdio_ofgpio_exit(void)
static inline int __init mdio_ofgpio_init(void)
static inline void __exit mdio_ofgpio_exit(void)
static struct platform_driver mdio_gpio_driver = ;
static int __init mdio_gpio_init(void)
module_init(mdio_gpio_init);
static void __exit mdio_gpio_exit(void)
module_exit(mdio_gpio_exit);
MODULE_ALIAS("platform:mdio-gpio");
MODULE_AUTHOR("Laurent Pinchart, Paulius Zaleckas");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic driver for MDIO bus emulation using GPIO");
