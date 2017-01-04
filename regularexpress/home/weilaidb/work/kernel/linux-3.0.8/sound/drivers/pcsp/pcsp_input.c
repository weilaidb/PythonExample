static void pcspkr_do_sound(unsigned int count)
void pcspkr_stop_sound(void)
static int pcspkr_input_event(struct input_dev *dev, unsigned int type,
unsigned int code, int value)
int __devinit pcspkr_input_init(struct input_dev **rdev, struct device *dev)
int pcspkr_input_remove(struct input_dev *dev)
