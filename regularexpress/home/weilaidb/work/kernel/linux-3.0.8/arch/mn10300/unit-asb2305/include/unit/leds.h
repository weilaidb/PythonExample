#define _ASM_UNIT_LEDS_H
#define ASB2305_7SEGLEDS	__SYSREG(0xA6F90000, u32)
#define mn10300_unit_hard_reset()		\
do  while (0)
#define mn10300_set_dbfleds			\
mov	0x43077f1d,d0		;	\
mov	d0,(ASB2305_7SEGLEDS)
#define mn10300_set_gdbleds(ONOFF)				\
do  while (0)
extern void peripheral_leds_display_exception(enum exception_code);
extern void peripheral_leds_led_chase(void);
extern void peripheral_leds7x4_display_dec(unsigned int, unsigned int);
extern void peripheral_leds7x4_display_hex(unsigned int, unsigned int);
extern void peripheral_leds7x4_display_minssecs(unsigned int, unsigned int);
extern void peripheral_leds7x4_display_rtc(void);
