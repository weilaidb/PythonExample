#if defined(CONFIG_NEW_LEDS)
static struct gpio_led_platform_data led_data;
static struct platform_device at91_gpio_leds_device = ;
void __init at91_gpio_leds(struct gpio_led *leds, int nr)
void __init at91_gpio_leds(struct gpio_led *leds, int nr)
#if defined (CONFIG_LEDS_ATMEL_PWM)
static struct gpio_led_platform_data pwm_led_data;
static struct platform_device at91_pwm_leds_device = ;
void __init at91_pwm_leds(struct gpio_led *leds, int nr)
void __init at91_pwm_leds(struct gpio_led *leds, int nr)
#if defined(CONFIG_LEDS)
static u8 at91_leds_cpu;
static u8 at91_leds_timer;
static inline void at91_led_on(unsigned int led)
static inline void at91_led_off(unsigned int led)
static inline void at91_led_toggle(unsigned int led)
static void at91_leds_event(led_event_t evt)
static int __init leds_init(void)
__initcall(leds_init);
void __init at91_init_leds(u8 cpu_led, u8 timer_led)
void __init at91_init_leds(u8 cpu_led, u8 timer_led)
