struct heartbeat_trig_data ;
static void led_heartbeat_function(unsigned long data)
static void heartbeat_trig_activate(struct led_classdev *led_cdev)
static void heartbeat_trig_deactivate(struct led_classdev *led_cdev)
static struct led_trigger heartbeat_led_trigger = ;
static int __init heartbeat_trig_init(void)
static void __exit heartbeat_trig_exit(void)
module_init(heartbeat_trig_init);
module_exit(heartbeat_trig_exit);
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_DESCRIPTION("Heartbeat LED trigger");
MODULE_LICENSE("GPL");
