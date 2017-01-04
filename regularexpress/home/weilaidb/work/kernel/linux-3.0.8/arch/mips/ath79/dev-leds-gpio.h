#define _ATH79_DEV_LEDS_GPIO_H
void ath79_register_leds_gpio(int id,
unsigned num_leds,
struct gpio_led *leds);
