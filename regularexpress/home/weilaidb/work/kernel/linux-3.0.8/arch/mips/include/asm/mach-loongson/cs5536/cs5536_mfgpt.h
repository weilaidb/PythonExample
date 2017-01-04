#define _CS5536_MFGPT_H
extern void setup_mfgpt0_timer(void);
extern void disable_mfgpt0_counter(void);
extern void enable_mfgpt0_counter(void);
static inline void __maybe_unused setup_mfgpt0_timer(void)
static inline void __maybe_unused disable_mfgpt0_counter(void)
static inline void __maybe_unused enable_mfgpt0_counter(void)
#define MFGPT_TICK_RATE 14318000
#define COMPARE  ((MFGPT_TICK_RATE + HZ/2) / HZ)
#define MFGPT_BASE	mfgpt_base
#define MFGPT0_CMP2	(MFGPT_BASE + 2)
#define MFGPT0_CNT	(MFGPT_BASE + 4)
#define MFGPT0_SETUP	(MFGPT_BASE + 6)
