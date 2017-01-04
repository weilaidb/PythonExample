static DECLARE_RWSEM(triggers_list_lock);
static LIST_HEAD(trigger_list);
ssize_t led_trigger_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
EXPORT_SYMBOL_GPL(led_trigger_store);
ssize_t led_trigger_show(struct device *dev, struct device_attribute *attr,
char *buf)
EXPORT_SYMBOL_GPL(led_trigger_show);
void led_trigger_set(struct led_classdev *led_cdev, struct led_trigger *trigger)
EXPORT_SYMBOL_GPL(led_trigger_set);
void led_trigger_remove(struct led_classdev *led_cdev)
EXPORT_SYMBOL_GPL(led_trigger_remove);
void led_trigger_set_default(struct led_classdev *led_cdev)
EXPORT_SYMBOL_GPL(led_trigger_set_default);
int led_trigger_register(struct led_trigger *trigger)
EXPORT_SYMBOL_GPL(led_trigger_register);
void led_trigger_unregister(struct led_trigger *trigger)
EXPORT_SYMBOL_GPL(led_trigger_unregister);
void led_trigger_event(struct led_trigger *trigger,
enum led_brightness brightness)
EXPORT_SYMBOL_GPL(led_trigger_event);
void led_trigger_blink(struct led_trigger *trigger,
unsigned long *delay_on,
unsigned long *delay_off)
EXPORT_SYMBOL_GPL(led_trigger_blink);
void led_trigger_register_simple(const char *name, struct led_trigger **tp)
EXPORT_SYMBOL_GPL(led_trigger_register_simple);
void led_trigger_unregister_simple(struct led_trigger *trigger)
EXPORT_SYMBOL_GPL(led_trigger_unregister_simple);
MODULE_AUTHOR("Richard Purdie");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("LED Triggers Core");
