#define _SIBYTE_BOARD_H
#if defined(CONFIG_SIBYTE_SWARM) || defined(CONFIG_SIBYTE_CRHONE) || \
defined(CONFIG_SIBYTE_CRHINE) || defined(CONFIG_SIBYTE_LITTLESUR)
#if defined(CONFIG_SIBYTE_SENTOSA) || defined(CONFIG_SIBYTE_RHONE)
#define setleds(t0, t1, c0, c1, c2, c3) \
li	t0, (LEDS_PHYS|0xa0000000); \
li	t1, c0; \
sb	t1, 0x18(t0); \
li	t1, c1; \
sb	t1, 0x10(t0); \
li	t1, c2; \
sb	t1, 0x08(t0); \
li	t1, c3; \
sb	t1, 0x00(t0)
#define setleds(t0, t1, c0, c1, c2, c3)
void swarm_setup(void);
extern void setleds(char *str);
#define setleds(s) do  while (0)
