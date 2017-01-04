#define __ARCH_BLACKFIN_GPIO_H__
#define gpio_bank(x)	((x) >> 4)
#define gpio_bit(x)	(1<<((x) & 0xF))
#define gpio_sub_n(x)	((x) & 0xF)
#define GPIO_BANKSIZE	16
#define GPIO_BANK_NUM	DIV_ROUND_UP(MAX_BLACKFIN_GPIOS, GPIO_BANKSIZE)
#define GPIO_0	0
#define GPIO_1	1
#define GPIO_2	2
#define GPIO_3	3
#define GPIO_4	4
#define GPIO_5	5
#define GPIO_6	6
#define GPIO_7	7
#define GPIO_8	8
#define GPIO_9	9
#define GPIO_10	10
#define GPIO_11	11
#define GPIO_12	12
#define GPIO_13	13
#define GPIO_14	14
#define GPIO_15	15
#define GPIO_16	16
#define GPIO_17	17
#define GPIO_18	18
#define GPIO_19	19
#define GPIO_20	20
#define GPIO_21	21
#define GPIO_22	22
#define GPIO_23	23
#define GPIO_24	24
#define GPIO_25	25
#define GPIO_26	26
#define GPIO_27	27
#define GPIO_28	28
#define GPIO_29	29
#define GPIO_30	30
#define GPIO_31	31
#define GPIO_32	32
#define GPIO_33	33
#define GPIO_34	34
#define GPIO_35	35
#define GPIO_36	36
#define GPIO_37	37
#define GPIO_38	38
#define GPIO_39	39
#define GPIO_40	40
#define GPIO_41	41
#define GPIO_42	42
#define GPIO_43	43
#define GPIO_44	44
#define GPIO_45	45
#define GPIO_46	46
#define GPIO_47	47
#define PERIPHERAL_USAGE 1
#define GPIO_USAGE 0
void set_gpio_dir(unsigned, unsigned short);
void set_gpio_inen(unsigned, unsigned short);
void set_gpio_polar(unsigned, unsigned short);
void set_gpio_edge(unsigned, unsigned short);
void set_gpio_both(unsigned, unsigned short);
void set_gpio_data(unsigned, unsigned short);
void set_gpio_maska(unsigned, unsigned short);
void set_gpio_maskb(unsigned, unsigned short);
void set_gpio_toggle(unsigned);
void set_gpiop_dir(unsigned, unsigned short);
void set_gpiop_inen(unsigned, unsigned short);
void set_gpiop_polar(unsigned, unsigned short);
void set_gpiop_edge(unsigned, unsigned short);
void set_gpiop_both(unsigned, unsigned short);
void set_gpiop_data(unsigned, unsigned short);
void set_gpiop_maska(unsigned, unsigned short);
void set_gpiop_maskb(unsigned, unsigned short);
unsigned short get_gpio_dir(unsigned);
unsigned short get_gpio_inen(unsigned);
unsigned short get_gpio_polar(unsigned);
unsigned short get_gpio_edge(unsigned);
unsigned short get_gpio_both(unsigned);
unsigned short get_gpio_maska(unsigned);
unsigned short get_gpio_maskb(unsigned);
unsigned short get_gpio_data(unsigned);
unsigned short get_gpiop_dir(unsigned);
unsigned short get_gpiop_inen(unsigned);
unsigned short get_gpiop_polar(unsigned);
unsigned short get_gpiop_edge(unsigned);
unsigned short get_gpiop_both(unsigned);
unsigned short get_gpiop_maska(unsigned);
unsigned short get_gpiop_maskb(unsigned);
unsigned short get_gpiop_data(unsigned);
struct gpio_port_t ;
void bfin_special_gpio_free(unsigned gpio);
int bfin_special_gpio_request(unsigned gpio, const char *label);
int bfin_pm_standby_ctrl(unsigned ctrl);
static inline int bfin_pm_standby_setup(void)
static inline void bfin_pm_standby_restore(void)
void bfin_gpio_pm_hibernate_restore(void);
void bfin_gpio_pm_hibernate_suspend(void);
int gpio_pm_wakeup_ctrl(unsigned gpio, unsigned ctrl);
struct gpio_port_s ;
int bfin_gpio_request(unsigned gpio, const char *label);
void bfin_gpio_free(unsigned gpio);
int bfin_gpio_irq_request(unsigned gpio, const char *label);
void bfin_gpio_irq_free(unsigned gpio);
int bfin_gpio_direction_input(unsigned gpio);
int bfin_gpio_direction_output(unsigned gpio, int value);
int bfin_gpio_get_value(unsigned gpio);
void bfin_gpio_set_value(unsigned gpio, int value);
static inline int gpio_get_value(unsigned int gpio)
static inline void gpio_set_value(unsigned int gpio, int value)
static inline int gpio_cansleep(unsigned int gpio)
static inline int gpio_to_irq(unsigned gpio)
static inline int gpio_request(unsigned gpio, const char *label)
static inline void gpio_free(unsigned gpio)
static inline int gpio_direction_input(unsigned gpio)
static inline int gpio_direction_output(unsigned gpio, int value)
static inline int gpio_set_debounce(unsigned gpio, unsigned debounce)
static inline int gpio_get_value(unsigned gpio)
static inline void gpio_set_value(unsigned gpio, int value)
static inline int gpio_to_irq(unsigned gpio)
static inline int irq_to_gpio(unsigned irq)
