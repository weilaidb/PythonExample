static void solo_gpio_mode(struct solo_dev *solo_dev,
unsigned int port_mask, unsigned int mode)
static void solo_gpio_set(struct solo_dev *solo_dev, unsigned int value)
static void solo_gpio_clear(struct solo_dev *solo_dev, unsigned int value)
static void solo_gpio_config(struct solo_dev *solo_dev)
int solo_gpio_init(struct solo_dev *solo_dev)
void solo_gpio_exit(struct solo_dev *solo_dev)
