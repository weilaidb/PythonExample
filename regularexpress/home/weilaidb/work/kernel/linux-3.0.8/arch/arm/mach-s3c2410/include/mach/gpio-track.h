#define __ASM_ARCH_GPIO_CORE_H __FILE__
extern struct s3c_gpio_chip s3c24xx_gpios[];
static inline struct s3c_gpio_chip *s3c_gpiolib_getchip(unsigned int pin)
