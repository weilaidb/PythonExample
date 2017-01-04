static void defon_trig_activate(struct led_classdev *led_cdev)
static struct led_trigger defon_led_trigger = ;
static int __init defon_trig_init(void)
static void __exit defon_trig_exit(void)
module_init(defon_trig_init);
module_exit(defon_trig_exit);
MODULE_AUTHOR("Nick Forbes <nick.forbes@incepta.com>");
MODULE_DESCRIPTION("Default-ON LED trigger");
MODULE_LICENSE("GPL");
