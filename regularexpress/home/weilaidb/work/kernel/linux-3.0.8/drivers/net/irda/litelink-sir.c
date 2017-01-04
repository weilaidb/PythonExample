#define MIN_DELAY 25
#define MAX_DELAY 10000
static int litelink_open(struct sir_dev *dev);
static int litelink_close(struct sir_dev *dev);
static int litelink_change_speed(struct sir_dev *dev, unsigned speed);
static int litelink_reset(struct sir_dev *dev);
static unsigned baud_rates[] = ;
static struct dongle_driver litelink = ;
static int __init litelink_sir_init(void)
static void __exit litelink_sir_cleanup(void)
static int litelink_open(struct sir_dev *dev)
static int litelink_close(struct sir_dev *dev)
static int litelink_change_speed(struct sir_dev *dev, unsigned speed)
static int litelink_reset(struct sir_dev *dev)
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("Parallax Litelink dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-5");
module_init(litelink_sir_init);
module_exit(litelink_sir_cleanup);
