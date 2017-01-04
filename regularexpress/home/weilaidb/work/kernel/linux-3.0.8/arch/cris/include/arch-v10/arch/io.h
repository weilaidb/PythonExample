#define _ASM_ARCH_CRIS_IO_H
extern unsigned long gen_config_ii_shadow;
extern unsigned long port_g_data_shadow;
extern unsigned char port_pa_dir_shadow;
extern unsigned char port_pa_data_shadow;
extern unsigned char port_pb_i2c_shadow;
extern unsigned char port_pb_config_shadow;
extern unsigned char port_pb_dir_shadow;
extern unsigned char port_pb_data_shadow;
extern unsigned long r_timer_ctrl_shadow;
extern unsigned long port_cse1_shadow;
extern unsigned long port_csp0_shadow;
extern unsigned long port_csp4_shadow;
extern volatile unsigned long *port_cse1_addr;
extern volatile unsigned long *port_csp0_addr;
extern volatile unsigned long *port_csp4_addr;
#define REG_SHADOW_SET(r,s,b,v) *r = s = (s & ~(1 << (b))) | ((v) << (b))
#if defined(CONFIG_ETRAX_NO_LEDS) || defined(CONFIG_SVINTO_SIM)
#undef CONFIG_ETRAX_PA_LEDS
#undef CONFIG_ETRAX_PB_LEDS
#undef CONFIG_ETRAX_CSP0_LEDS
#define CRIS_LED_NETWORK_SET_G(x)
#define CRIS_LED_NETWORK_SET_R(x)
#define CRIS_LED_ACTIVE_SET_G(x)
#define CRIS_LED_ACTIVE_SET_R(x)
#define CRIS_LED_DISK_WRITE(x)
#define CRIS_LED_DISK_READ(x)
#if !defined(CONFIG_ETRAX_CSP0_LEDS)
#define CRIS_LED_BIT_SET(x)
#define CRIS_LED_BIT_CLR(x)
#define CRIS_LED_OFF    0x00
#define CRIS_LED_GREEN  0x01
#define CRIS_LED_RED    0x02
#define CRIS_LED_ORANGE (CRIS_LED_GREEN | CRIS_LED_RED)
#if defined(CONFIG_ETRAX_NO_LEDS)
#define CRIS_LED_NETWORK_SET(x)
#if CONFIG_ETRAX_LED1G == CONFIG_ETRAX_LED1R
#define CRIS_LED_NETWORK_SET(x)                          \
do  while (0)
#define CRIS_LED_NETWORK_SET(x)                          \
do  while (0)
#if CONFIG_ETRAX_LED2G == CONFIG_ETRAX_LED2R
#define CRIS_LED_ACTIVE_SET(x)                           \
do  while (0)
#define CRIS_LED_ACTIVE_SET(x)                           \
do  while (0)
#define CRIS_LED_NETWORK_SET_G(x) \
REG_SHADOW_SET(R_PORT_PA_DATA, port_pa_data_shadow, CONFIG_ETRAX_LED1G, !(x))
#define CRIS_LED_NETWORK_SET_R(x) \
REG_SHADOW_SET(R_PORT_PA_DATA, port_pa_data_shadow, CONFIG_ETRAX_LED1R, !(x))
#define CRIS_LED_ACTIVE_SET_G(x) \
REG_SHADOW_SET(R_PORT_PA_DATA, port_pa_data_shadow, CONFIG_ETRAX_LED2G, !(x))
#define CRIS_LED_ACTIVE_SET_R(x) \
REG_SHADOW_SET(R_PORT_PA_DATA, port_pa_data_shadow, CONFIG_ETRAX_LED2R, !(x))
#define CRIS_LED_DISK_WRITE(x) \
dowhile(0)
#define CRIS_LED_DISK_READ(x) \
REG_SHADOW_SET(R_PORT_PA_DATA, port_pa_data_shadow, \
CONFIG_ETRAX_LED3G, !(x))
#define CRIS_LED_NETWORK_SET_G(x) \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, CONFIG_ETRAX_LED1G, !(x))
#define CRIS_LED_NETWORK_SET_R(x) \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, CONFIG_ETRAX_LED1R, !(x))
#define CRIS_LED_ACTIVE_SET_G(x) \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, CONFIG_ETRAX_LED2G, !(x))
#define CRIS_LED_ACTIVE_SET_R(x) \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, CONFIG_ETRAX_LED2R, !(x))
#define CRIS_LED_DISK_WRITE(x) \
dowhile(0)
#define CRIS_LED_DISK_READ(x) \
REG_SHADOW_SET(R_PORT_PB_DATA, port_pb_data_shadow, \
CONFIG_ETRAX_LED3G, !(x))
#define CONFIGURABLE_LEDS\
((1 << CONFIG_ETRAX_LED1G ) | (1 << CONFIG_ETRAX_LED1R ) |\
(1 << CONFIG_ETRAX_LED2G ) | (1 << CONFIG_ETRAX_LED2R ) |\
(1 << CONFIG_ETRAX_LED3G ) | (1 << CONFIG_ETRAX_LED3R ) |\
(1 << CONFIG_ETRAX_LED4G ) | (1 << CONFIG_ETRAX_LED4R ) |\
(1 << CONFIG_ETRAX_LED5G ) | (1 << CONFIG_ETRAX_LED5R ) |\
(1 << CONFIG_ETRAX_LED6G ) | (1 << CONFIG_ETRAX_LED6R ) |\
(1 << CONFIG_ETRAX_LED7G ) | (1 << CONFIG_ETRAX_LED7R ) |\
(1 << CONFIG_ETRAX_LED8Y ) | (1 << CONFIG_ETRAX_LED9Y ) |\
(1 << CONFIG_ETRAX_LED10Y ) |(1 << CONFIG_ETRAX_LED11Y )|\
(1 << CONFIG_ETRAX_LED12R ))
#define CRIS_LED_NETWORK_SET_G(x) \
REG_SHADOW_SET(port_csp0_addr, port_csp0_shadow, CONFIG_ETRAX_LED1G, !(x))
#define CRIS_LED_NETWORK_SET_R(x) \
REG_SHADOW_SET(port_csp0_addr, port_csp0_shadow, CONFIG_ETRAX_LED1R, !(x))
#define CRIS_LED_ACTIVE_SET_G(x) \
REG_SHADOW_SET(port_csp0_addr, port_csp0_shadow, CONFIG_ETRAX_LED2G, !(x))
#define CRIS_LED_ACTIVE_SET_R(x) \
REG_SHADOW_SET(port_csp0_addr, port_csp0_shadow, CONFIG_ETRAX_LED2R, !(x))
#define CRIS_LED_DISK_WRITE(x) \
dowhile(0)
#define CRIS_LED_DISK_READ(x) \
REG_SHADOW_SET(port_csp0_addr, port_csp0_shadow, CONFIG_ETRAX_LED3G, !(x))
#define CRIS_LED_BIT_SET(x)\
dowhile(0)
#define CRIS_LED_BIT_CLR(x)\
dowhile(0)
#
#define SOFT_SHUTDOWN() \
REG_SHADOW_SET(port_csp0_addr, port_csp0_shadow, CONFIG_ETRAX_SHUTDOWN_BIT, 1)
#define SOFT_SHUTDOWN()
#define SIMCOUT(s,len)							\
asm ("moveq 4,$r9	\n\t"						\
"moveq 2,$r10	\n\t"						\
"move.d %0,$r11	\n\t"						\
"move.d %1,$r12	\n\t"						\
"push $irp	\n\t"						\
"move 0f,$irp	\n\t"						\
"jump -6809	\n"						\
"0:		\n\t"						\
"pop $irp"							\
: : "rm" (s), "rm" (len) : "r9","r10","r11","r12","memory")
#define TRACE_ON() __extension__ \
()
#define TRACE_OFF() do  while (0)
#define SIM_END() do  while (0)
#define CRIS_CYCLES() __extension__ \
()
