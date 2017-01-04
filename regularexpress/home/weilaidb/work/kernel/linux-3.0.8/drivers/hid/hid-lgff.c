#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
struct dev_type ;
static const signed short ff_rumble[] = ;
static const signed short ff_joystick[] = ;
static const signed short ff_joystick_ac[] = ;
static const signed short ff_wheel[] = ;
static const struct dev_type devices[] = ;
static int hid_lgff_play(struct input_dev *dev, void *data, struct ff_effect *effect)
static void hid_lgff_set_autocenter(struct input_dev *dev, u16 magnitude)
int lgff_init(struct hid_device* hid)
