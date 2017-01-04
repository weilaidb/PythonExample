u32 scx200_gpio_configure(unsigned index, u32 set, u32 clear);
extern unsigned scx200_gpio_base;
extern unsigned long scx200_gpio_shadow[2];
extern struct nsc_gpio_ops scx200_gpio_ops;
#define scx200_gpio_present() (scx200_gpio_base!=0)
#define __SCx200_GPIO_BANK unsigned bank = index>>5
#define __SCx200_GPIO_IOADDR unsigned short ioaddr = scx200_gpio_base+0x10*bank
#define __SCx200_GPIO_SHADOW unsigned long *shadow = scx200_gpio_shadow+bank
#define __SCx200_GPIO_INDEX index &= 31
#define __SCx200_GPIO_OUT __asm__ __volatile__("outsl":"=mS" (shadow):"d" (ioaddr), "0" (shadow))
static inline int scx200_gpio_get(unsigned index)
static inline int scx200_gpio_current(unsigned index)
static inline void scx200_gpio_set_high(unsigned index)
static inline void scx200_gpio_set_low(unsigned index)
static inline void scx200_gpio_set(unsigned index, int state)
static inline void scx200_gpio_change(unsigned index)
#undef __SCx200_GPIO_BANK
#undef __SCx200_GPIO_IOADDR
#undef __SCx200_GPIO_SHADOW
#undef __SCx200_GPIO_INDEX
#undef __SCx200_GPIO_OUT
