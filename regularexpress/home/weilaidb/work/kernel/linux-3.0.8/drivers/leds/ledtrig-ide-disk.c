static void ledtrig_ide_timerfunc(unsigned long data);
DEFINE_LED_TRIGGER(ledtrig_ide);
static DEFINE_TIMER(ledtrig_ide_timer, ledtrig_ide_timerfunc, 0, 0);
static int ide_activity;
static int ide_lastactivity;
void ledtrig_ide_activity(void)
EXPORT_SYMBOL(ledtrig_ide_activity);
static void ledtrig_ide_timerfunc(unsigned long data)
static int __init ledtrig_ide_init(void)
static void __exit ledtrig_ide_exit(void)
module_init(ledtrig_ide_init);
module_exit(ledtrig_ide_exit);
MODULE_AUTHOR("Richard Purdie <rpurdie@openedhand.com>");
MODULE_DESCRIPTION("LED IDE Disk Activity Trigger");
MODULE_LICENSE("GPL");
