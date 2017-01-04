#define MIN_DELAY 10
static int actisys_open(struct sir_dev *);
static int actisys_close(struct sir_dev *);
static int actisys_change_speed(struct sir_dev *, unsigned);
static int actisys_reset(struct sir_dev *);
static unsigned baud_rates[] = ;
#define MAX_SPEEDS ARRAY_SIZE(baud_rates)
static struct dongle_driver act220l = ;
static struct dongle_driver act220l_plus = ;
static int __init actisys_sir_init(void)
static void __exit actisys_sir_cleanup(void)
static int actisys_open(struct sir_dev *dev)
static int actisys_close(struct sir_dev *dev)
static int actisys_change_speed(struct sir_dev *dev, unsigned speed)
static int actisys_reset(struct sir_dev *dev)
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no> - Jean Tourrilhes <jt@hpl.hp.com>");
MODULE_DESCRIPTION("ACTiSYS IR-220L and IR-220L+ dongle driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("irda-dongle-2");
MODULE_ALIAS("irda-dongle-3");
module_init(actisys_sir_init);
module_exit(actisys_sir_cleanup);
