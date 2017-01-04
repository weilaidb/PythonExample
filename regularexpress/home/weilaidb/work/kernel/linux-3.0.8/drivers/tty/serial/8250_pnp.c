#define UNKNOWN_DEV 0x3000
static const struct pnp_device_id pnp_dev_table[] = ;
MODULE_DEVICE_TABLE(pnp, pnp_dev_table);
static char *modem_names[] __devinitdata = ;
static int __devinit check_name(char *name)
static int __devinit check_resources(struct pnp_dev *dev)
static int __devinit serial_pnp_guess_board(struct pnp_dev *dev, int *flags)
static int __devinit
serial_pnp_probe(struct pnp_dev *dev, const struct pnp_device_id *dev_id)
static void __devexit serial_pnp_remove(struct pnp_dev *dev)
static int serial_pnp_suspend(struct pnp_dev *dev, pm_message_t state)
static int serial_pnp_resume(struct pnp_dev *dev)
#define serial_pnp_suspend NULL
#define serial_pnp_resume NULL
static struct pnp_driver serial_pnp_driver = ;
static int __init serial8250_pnp_init(void)
static void __exit serial8250_pnp_exit(void)
module_init(serial8250_pnp_init);
module_exit(serial8250_pnp_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic 8250/16x50 PnP serial driver");
