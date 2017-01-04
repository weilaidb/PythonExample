static int old_belkin_open(struct sir_dev *dev);
static int old_belkin_close(struct sir_dev *dev);
static int old_belkin_change_speed(struct sir_dev *dev, unsigned speed);
static int old_belkin_reset(struct sir_dev *dev);
static struct dongle_driver old_belkin = ;
static int __init old_belkin_sir_init(void)
static void __exit old_belkin_sir_cleanup(void)
static int old_belkin_open(struct sir_dev *dev)
static int old_belkin_close(struct sir_dev *dev)
static int old_belkin_change_speed(struct sir_dev *dev, unsigned speed)
static int old_belkin_reset(struct sir_dev *dev)
MODULE_AUTHOR("Jean Tourrilhes <jt@hpl.hp.com>");
MODULE_DESCRIPTION("Belkin (old) SmartBeam dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-7");
module_init(old_belkin_sir_init);
module_exit(old_belkin_sir_cleanup);
