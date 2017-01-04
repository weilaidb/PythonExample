#define MIN_DELAY 25
#define MAX_DELAY 10000
static int ep7211_open(struct sir_dev *dev);
static int ep7211_close(struct sir_dev *dev);
static int ep7211_change_speed(struct sir_dev *dev, unsigned speed);
static int ep7211_reset(struct sir_dev *dev);
static struct dongle_driver ep7211 = ;
static int __init ep7211_sir_init(void)
static void __exit ep7211_sir_cleanup(void)
static int ep7211_open(struct sir_dev *dev)
static int ep7211_close(struct sir_dev *dev)
static int ep7211_change_speed(struct sir_dev *dev, unsigned speed)
static int ep7211_reset(struct sir_dev *dev)
MODULE_AUTHOR("Samuel Ortiz <samuel@sortiz.org>");
MODULE_DESCRIPTION("EP7211 IR dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-13");
module_init(ep7211_sir_init);
module_exit(ep7211_sir_cleanup);
