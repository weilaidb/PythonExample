#define __MSP_GPIO_MACROS_H__
#define MSP_NUM_GPIOS		20
#define MSP_NUM_GPIOS		28
enum msp_gpio_data ;
enum msp_gpio_mode ;
static volatile u32 * const MSP_GPIO_DATA_REGISTER[] = ;
static volatile u32 * const MSP_GPIO_MODE_REGISTER[] = ;
static int MSP_GPIO_OFFSET[] = ;
static unsigned int MSP_GPIO_MODE_ALLOWED[] = ;
#define OFFSET_GPIO_NUMBER(gpio)	(gpio - MSP_GPIO_OFFSET[gpio])
#define BASIC_DATA_REG_MASK(ogpio)		(1 << ogpio)
#define BASIC_MODE_REG_VALUE(mode, ogpio)	\
(mode << BASIC_MODE_REG_SHIFT(ogpio))
#define BASIC_MODE_REG_MASK(ogpio)		\
BASIC_MODE_REG_VALUE(0xf, ogpio)
#define BASIC_MODE_REG_SHIFT(ogpio)		(ogpio * 4)
#define BASIC_MODE_REG_FROM_REG(data, ogpio)	\
((data & BASIC_MODE_REG_MASK(ogpio)) >> BASIC_MODE_REG_SHIFT(ogpio))
#define BASIC_DATA_MASK(gpio)	\
BASIC_DATA_REG_MASK(OFFSET_GPIO_NUMBER(gpio))
#define BASIC_MODE_MASK(gpio)	\
BASIC_MODE_REG_MASK(OFFSET_GPIO_NUMBER(gpio))
#define BASIC_MODE(mode, gpio)	\
BASIC_MODE_REG_VALUE(mode, OFFSET_GPIO_NUMBER(gpio))
#define BASIC_MODE_SHIFT(gpio)	\
BASIC_MODE_REG_SHIFT(OFFSET_GPIO_NUMBER(gpio))
#define BASIC_MODE_FROM_REG(data, gpio)	\
BASIC_MODE_REG_FROM_REG(data, OFFSET_GPIO_NUMBER(gpio))
#define EXTENDED_OFFSET_GPIO(gpio)	(gpio < 24 ? gpio - 16 : gpio - 24)
#define EXTENDED_REG_DISABLE(ogpio)	(0x2 << ((ogpio * 2) + 16))
#define EXTENDED_REG_ENABLE(ogpio)	(0x1 << ((ogpio * 2) + 16))
#define EXTENDED_REG_SET(ogpio)		(0x2 << (ogpio * 2))
#define EXTENDED_REG_CLR(ogpio)		(0x1 << (ogpio * 2))
#define EXTENDED_DISABLE(gpio)	\
EXTENDED_REG_DISABLE(EXTENDED_OFFSET_GPIO(gpio))
#define EXTENDED_ENABLE(gpio)	\
EXTENDED_REG_ENABLE(EXTENDED_OFFSET_GPIO(gpio))
#define EXTENDED_SET(gpio)	\
EXTENDED_REG_SET(EXTENDED_OFFSET_GPIO(gpio))
#define EXTENDED_CLR(gpio)	\
EXTENDED_REG_CLR(EXTENDED_OFFSET_GPIO(gpio))
#define EXTENDED_FULL_MASK		(0xffffffff)
static inline enum msp_gpio_data msp_gpio_pin_get(unsigned int gpio)
static inline void msp_gpio_pin_set(enum msp_gpio_data data, unsigned int gpio)
static inline void msp_gpio_pin_hi(unsigned int gpio)
static inline void msp_gpio_pin_lo(unsigned int gpio)
static inline void msp_gpio_pin_toggle(unsigned int gpio)
static inline enum msp_gpio_mode msp_gpio_pin_get_mode(unsigned int gpio)
static inline int msp_gpio_pin_mode(enum msp_gpio_mode mode, unsigned int gpio)
