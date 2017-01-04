struct lg3ff_device ;
static int hid_lg3ff_play(struct input_dev *dev, void *data,
struct ff_effect *effect)
static void hid_lg3ff_set_autocenter(struct input_dev *dev, u16 magnitude)
static const signed short ff3_joystick_ac[] = ;
int lg3ff_init(struct hid_device *hid)
