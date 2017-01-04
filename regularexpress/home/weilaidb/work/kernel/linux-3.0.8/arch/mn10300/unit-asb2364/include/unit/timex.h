#define _ASM_UNIT_TIMEX_H
#define	TMJCBR_MAX		0xffffff
#define	TMJCIRQ			TMTIRQ
#define MN10300_SRC_IOBCLK	MN10300_IOBCLK
# error HZ undeclared.
#define MN10300_JCCLK		(MN10300_SRC_IOBCLK)
#define MN10300_TSCCLK		(MN10300_SRC_IOBCLK)
#define MN10300_JC_PER_HZ	((MN10300_JCCLK + HZ / 2) / HZ)
#define MN10300_TSC_PER_HZ	((MN10300_TSCCLK + HZ / 2) / HZ)
#if (MN10300_JC_PER_HZ - 1) > TMJCBR_MAX
# error MTM tick timer interval value is overflow.
static inline void stop_jiffies_counter(void)
static inline void reload_jiffies_counter(u32 cnt)
#if defined(CONFIG_SMP) && defined(CONFIG_GENERIC_CLOCKEVENTS) && \
!defined(CONFIG_GENERIC_CLOCKEVENTS_BROADCAST)
#define	TMJC1IRQ		TM5IRQ
static inline void stop_jiffies_counter1(void)
static inline void reload_jiffies_counter1(u32 cnt)
#define	TMTSCBR_MAX	0xffffffff
#define	TMTSCMD		TMSMD
#define	TMTSCBR		TMSBR
#define	TMTSCBC		TMSBC
#define	TMTSCICR	TMSICR
static inline void startup_timestamp_counter(void)
static inline void shutdown_timestamp_counter(void)
typedef unsigned long cycles_t;
static inline cycles_t read_timestamp_counter(void)
