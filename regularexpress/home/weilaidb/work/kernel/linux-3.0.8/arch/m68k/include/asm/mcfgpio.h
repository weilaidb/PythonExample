#define mcfgpio_h
struct mcf_gpio_chip ;
int mcf_gpio_direction_input(struct gpio_chip *, unsigned);
int mcf_gpio_get_value(struct gpio_chip *, unsigned);
int mcf_gpio_direction_output(struct gpio_chip *, unsigned, int);
void mcf_gpio_set_value(struct gpio_chip *, unsigned, int);
void mcf_gpio_set_value_fast(struct gpio_chip *, unsigned, int);
int mcf_gpio_request(struct gpio_chip *, unsigned);
void mcf_gpio_free(struct gpio_chip *, unsigned);
