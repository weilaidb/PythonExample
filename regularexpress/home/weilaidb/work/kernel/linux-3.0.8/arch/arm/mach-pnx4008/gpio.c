#define PIO_VA_BASE	IO_ADDRESS(PNX4008_PIO_BASE)
#define PIO_INP_STATE	(0x00U)
#define PIO_OUTP_SET	(0x04U)
#define PIO_OUTP_CLR	(0x08U)
#define PIO_OUTP_STATE	(0x0CU)
#define PIO_DRV_SET	(0x10U)
#define PIO_DRV_CLR	(0x14U)
#define PIO_DRV_STATE	(0x18U)
#define PIO_SDINP_STATE	(0x1CU)
#define PIO_SDOUTP_SET	(0x20U)
#define PIO_SDOUTP_CLR	(0x24U)
#define PIO_MUX_SET	(0x28U)
#define PIO_MUX_CLR	(0x2CU)
#define PIO_MUX_STATE	(0x30U)
static inline void gpio_lock(void)
static inline void gpio_unlock(void)
static inline int gpio_read_bit(u32 reg, int gpio)
static inline int gpio_set_bit(u32 reg, int gpio)
static unsigned long access_map[4];
#define INP_INDEX	0
#define OUTP_INDEX	1
#define GPIO_INDEX	2
#define MUX_INDEX	3
static short gpio_to_inp_map[32] = ;
static short gpio_to_mux_map[32] = ;
static short outp_to_mux_map[32] = ;
int pnx4008_gpio_register_pin(unsigned short pin)
EXPORT_SYMBOL(pnx4008_gpio_register_pin);
int pnx4008_gpio_unregister_pin(unsigned short pin)
EXPORT_SYMBOL(pnx4008_gpio_unregister_pin);
unsigned long pnx4008_gpio_read_pin(unsigned short pin)
EXPORT_SYMBOL(pnx4008_gpio_read_pin);
int pnx4008_gpio_write_pin(unsigned short pin, int output)
EXPORT_SYMBOL(pnx4008_gpio_write_pin);
int pnx4008_gpio_set_pin_direction(unsigned short pin, int output)
EXPORT_SYMBOL(pnx4008_gpio_set_pin_direction);
int pnx4008_gpio_read_pin_direction(unsigned short pin)
EXPORT_SYMBOL(pnx4008_gpio_read_pin_direction);
int pnx4008_gpio_set_pin_mux(unsigned short pin, int output)
EXPORT_SYMBOL(pnx4008_gpio_set_pin_mux);
int pnx4008_gpio_read_pin_mux(unsigned short pin)
EXPORT_SYMBOL(pnx4008_gpio_read_pin_mux);
