#define _ASM_UNIT_TIMEX_H
#define	TMJCBR_MAX		0xffff
#define	TMJCIRQ			TM1IRQ
#define	TMJCICR			TM1ICR
#define MN10300_SRC_IOCLK	MN10300_IOCLK
# error HZ undeclared.
#if (MN10300_SRC_IOCLK + HZ / 2) / HZ - 1 <= TMJCBR_MAX
# define IOCLK_PRESCALE		1
# define JC_TIMER_CLKSRC	TM0MD_SRC_IOCLK
# define TSC_TIMER_CLKSRC	TM4MD_SRC_IOCLK
#elif (MN10300_SRC_IOCLK / 8 + HZ / 2) / HZ - 1 <= TMJCBR_MAX
# define IOCLK_PRESCALE		8
# define JC_TIMER_CLKSRC	TM0MD_SRC_IOCLK_8
# define TSC_TIMER_CLKSRC	TM4MD_SRC_IOCLK_8
#elif (MN10300_SRC_IOCLK / 32 + HZ / 2) / HZ - 1 <= TMJCBR_MAX
# define IOCLK_PRESCALE		32
# define JC_TIMER_CLKSRC	TM0MD_SRC_IOCLK_32
# define TSC_TIMER_CLKSRC	TM4MD_SRC_IOCLK_32
# error You lose.
#define MN10300_JCCLK		(MN10300_SRC_IOCLK / IOCLK_PRESCALE)
#define MN10300_TSCCLK		(MN10300_SRC_IOCLK / IOCLK_PRESCALE)
#define MN10300_JC_PER_HZ	((MN10300_JCCLK + HZ / 2) / HZ)
#define MN10300_TSC_PER_HZ	((MN10300_TSCCLK + HZ / 2) / HZ)
static inline void stop_jiffies_counter(void)
static inline void reload_jiffies_counter(u32 cnt)
#define	TMTSCBR_MAX		0xffffffff
#define	TMTSCBC			TM45BC
static inline void startup_timestamp_counter(void)
static inline void shutdown_timestamp_counter(void)
typedef unsigned long cycles_t;
static inline cycles_t read_timestamp_counter(void)
