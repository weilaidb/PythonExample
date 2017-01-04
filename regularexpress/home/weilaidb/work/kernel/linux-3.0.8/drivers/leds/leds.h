#define __LEDS_H_INCLUDED
static inline void led_set_brightness(struct led_classdev *led_cdev,
enum led_brightness value)
static inline int led_get_brightness(struct led_classdev *led_cdev)
extern struct rw_semaphore leds_list_lock;
extern struct list_head leds_list;
void led_trigger_set_default(struct led_classdev *led_cdev);
void led_trigger_set(struct led_classdev *led_cdev,
struct led_trigger *trigger);
void led_trigger_remove(struct led_classdev *led_cdev);
static inline void *led_get_trigger_data(struct led_classdev *led_cdev)
#define led_trigger_set_default(x) do  while (0)
#define led_trigger_set(x, y) do  while (0)
#define led_trigger_remove(x) do  while (0)
#define led_get_trigger_data(x) (NULL)
ssize_t led_trigger_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count);
ssize_t led_trigger_show(struct device *dev, struct device_attribute *attr,
char *buf);
