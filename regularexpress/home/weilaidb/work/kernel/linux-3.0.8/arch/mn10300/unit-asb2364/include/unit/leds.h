#define _ASM_UNIT_LEDS_H
#define MN10300_USE_7SEGLEDS	0
#define ASB2364_7SEGLEDS	__SYSREG(0xA9001630, u32)
#if MN10300_USE_7SEGLEDS
#define mn10300_set_gdbleds(ONOFF)					\
do  while (0)
#define mn10300_set_gdbleds(ONOFF) do  while (0)
#if MN10300_USE_7SEGLEDS
#define mn10300_set_dbfleds			\
mov	0x43077f1d,d0		;	\
mov	d0,(ASB2364_7SEGLEDS)
#define mn10300_set_dbfleds
extern void peripheral_leds_display_exception(enum exception_code);
extern void peripheral_leds_led_chase(void);
extern void peripheral_leds7x4_display_dec(unsigned int, unsigned int);
extern void peripheral_leds7x4_display_hex(unsigned int, unsigned int);
extern void debug_to_serial(const char *, int);
