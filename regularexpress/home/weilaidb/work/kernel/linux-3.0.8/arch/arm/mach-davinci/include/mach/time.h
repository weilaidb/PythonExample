#define __ARCH_ARM_MACH_DAVINCI_TIME_H
#define DAVINCI_TIMER0_BASE		(IO_PHYS + 0x21400)
#define DAVINCI_TIMER1_BASE		(IO_PHYS + 0x21800)
#define DAVINCI_WDOG_BASE		(IO_PHYS + 0x21C00)
enum ;
#define IS_TIMER1(id)		(id & 0x2)
#define IS_TIMER0(id)		(!IS_TIMER1(id))
#define IS_TIMER_TOP(id)	((id & 0x1))
#define IS_TIMER_BOT(id)	(!IS_TIMER_TOP(id))
#define ID_TO_TIMER(id)		(IS_TIMER1(id) != 0)
extern struct davinci_timer_instance davinci_timer_instance[];
