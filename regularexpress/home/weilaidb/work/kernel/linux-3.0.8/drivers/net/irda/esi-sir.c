static int esi_open(struct sir_dev *);
static int esi_close(struct sir_dev *);
static int esi_change_speed(struct sir_dev *, unsigned);
static int esi_reset(struct sir_dev *);
static struct dongle_driver esi = ;
static int __init esi_sir_init(void)
static void __exit esi_sir_cleanup(void)
static int esi_open(struct sir_dev *dev)
static int esi_close(struct sir_dev *dev)
static int esi_change_speed(struct sir_dev *dev, unsigned speed)
static int esi_reset(struct sir_dev *dev)
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("Extended Systems JetEye PC dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-1");
module_init(esi_sir_init);
module_exit(esi_sir_cleanup);
