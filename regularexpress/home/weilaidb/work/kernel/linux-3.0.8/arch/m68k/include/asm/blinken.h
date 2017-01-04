#define _M68K_BLINKEN_H
#define HP300_LEDS		0xf001ffff
extern unsigned char ledstate;
static __inline__ void blinken_leds(int on, int off)
