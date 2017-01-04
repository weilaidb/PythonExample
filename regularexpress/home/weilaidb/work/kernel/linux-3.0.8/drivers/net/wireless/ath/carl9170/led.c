int carl9170_led_set_state(struct ar9170 *ar, const u32 led_state)
int carl9170_led_init(struct ar9170 *ar)
static void carl9170_led_update(struct work_struct *work)
static void carl9170_led_set_brightness(struct led_classdev *led,
enum led_brightness brightness)
static int carl9170_led_register_led(struct ar9170 *ar, int i, char *name,
char *trigger)
void carl9170_led_unregister(struct ar9170 *ar)
int carl9170_led_register(struct ar9170 *ar)
