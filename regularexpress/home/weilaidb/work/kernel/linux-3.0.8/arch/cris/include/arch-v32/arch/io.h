#define _ASM_ARCH_CRIS_IO_H
enum crisv32_io_dir
;
struct crisv32_ioport
;
struct crisv32_iopin
;
extern struct crisv32_ioport crisv32_ioports[];
extern struct crisv32_iopin crisv32_led1_green;
extern struct crisv32_iopin crisv32_led1_red;
extern struct crisv32_iopin crisv32_led2_green;
extern struct crisv32_iopin crisv32_led2_red;
extern struct crisv32_iopin crisv32_led3_green;
extern struct crisv32_iopin crisv32_led3_red;
extern struct crisv32_iopin crisv32_led_net0_green;
extern struct crisv32_iopin crisv32_led_net0_red;
extern struct crisv32_iopin crisv32_led_net1_green;
extern struct crisv32_iopin crisv32_led_net1_red;
static inline void crisv32_io_set(struct crisv32_iopin *iopin, int val)
static inline void crisv32_io_set_dir(struct crisv32_iopin* iopin,
enum crisv32_io_dir dir)
static inline int crisv32_io_rd(struct crisv32_iopin* iopin)
int crisv32_io_get(struct crisv32_iopin* iopin,
unsigned int port, unsigned int pin);
int crisv32_io_get_name(struct crisv32_iopin* iopin,
const char *name);
#define CRIS_LED_OFF    0x00
#define CRIS_LED_GREEN  0x01
#define CRIS_LED_RED    0x02
#define CRIS_LED_ORANGE (CRIS_LED_GREEN | CRIS_LED_RED)
#if (defined(CONFIG_ETRAX_NBR_LED_GRP_ONE) || defined(CONFIG_ETRAX_NBR_LED_GRP_TWO))
#define CRIS_LED_NETWORK_GRP0_SET(x)                          \
do  while (0)
#define CRIS_LED_NETWORK_GRP0_SET(x) while (0)
#define CRIS_LED_NETWORK_GRP0_SET_G(x) \
crisv32_io_set(&crisv32_led_net0_green, !(x));
#define CRIS_LED_NETWORK_GRP0_SET_R(x) \
crisv32_io_set(&crisv32_led_net0_red, !(x));
#if defined(CONFIG_ETRAX_NBR_LED_GRP_TWO)
#define CRIS_LED_NETWORK_GRP1_SET(x)                          \
do  while (0)
#define CRIS_LED_NETWORK_GRP1_SET(x) while (0)
#define CRIS_LED_NETWORK_GRP1_SET_G(x) \
crisv32_io_set(&crisv32_led_net1_green, !(x));
#define CRIS_LED_NETWORK_GRP1_SET_R(x) \
crisv32_io_set(&crisv32_led_net1_red, !(x));
#define CRIS_LED_ACTIVE_SET(x)                           \
do  while (0)
#define CRIS_LED_ACTIVE_SET_G(x) \
crisv32_io_set(&crisv32_led2_green, !(x));
#define CRIS_LED_ACTIVE_SET_R(x) \
crisv32_io_set(&crisv32_led2_red, !(x));
#define CRIS_LED_DISK_WRITE(x) \
dowhile(0)
#define CRIS_LED_DISK_READ(x) \
crisv32_io_set(&crisv32_led3_green, !(x));
