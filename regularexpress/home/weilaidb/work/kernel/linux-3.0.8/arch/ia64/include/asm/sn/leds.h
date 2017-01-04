#define _ASM_IA64_SN_LEDS_H
#define LED0		(LOCAL_MMR_ADDR(SH_REAL_JUNK_BUS_LED0))
#define LED_CPU_SHIFT	16
#define LED_CPU_HEARTBEAT	0x01
#define LED_CPU_ACTIVITY	0x02
#define LED_ALWAYS_SET		0x00
static __inline__ void
set_led_bits(u8 value, u8 mask)
