#define _ATH79_DEV_GPIO_BUTTONS_H
void ath79_register_gpio_keys_polled(int id,
unsigned poll_interval,
unsigned nbuttons,
struct gpio_keys_button *buttons);
