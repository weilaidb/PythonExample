#define _ASM_UNIT_LEDS_H
#define ASB2303_GPIO0DEF	__SYSREG(0xDB000000, u32)
#define ASB2303_7SEGLEDS	__SYSREG(0xDB000008, u32)
#define mn10300_set_gdbleds(ONOFF)			\
do  while (0)
#define mn10300_set_dbfleds			\
mov	0x43,d0			;	\
movbu	d0,(ASB2303_7SEGLEDS)
extern void peripheral_leds_display_exception(enum exception_code code);
extern void peripheral_leds_led_chase(void);
extern void debug_to_serial(const char *p, int n);
