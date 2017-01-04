#define __MACH_TEGRA_GPIO_H
#define TEGRA_NR_GPIOS		INT_GPIO_NR
#define gpio_get_value		__gpio_get_value
#define gpio_set_value		__gpio_set_value
#define gpio_cansleep		__gpio_cansleep
#define TEGRA_GPIO_TO_IRQ(gpio) (INT_GPIO_BASE + (gpio))
#define TEGRA_IRQ_TO_GPIO(irq) ((irq) - INT_GPIO_BASE)
static inline int gpio_to_irq(unsigned int gpio)
static inline int irq_to_gpio(unsigned int irq)
struct tegra_gpio_table ;
void tegra_gpio_config(struct tegra_gpio_table *table, int num);
void tegra_gpio_enable(int gpio);
void tegra_gpio_disable(int gpio);
