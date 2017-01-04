#define _ASM_WBFLUSH_H
extern void (*__wbflush)(void);
extern void wbflush_setup(void);
#define wbflush()			\
do  while (0)
#define wbflush_setup() do  while (0)
#define wbflush() fast_iob()
