#define _LINUX_DELAY_H
extern unsigned long loops_per_jiffy;
#define MAX_UDELAY_MS	5
#define mdelay(n) (\
(__builtin_constant_p(n) && (n)<=MAX_UDELAY_MS) ? udelay((n)*1000) : \
())
static inline void ndelay(unsigned long x)
#define ndelay(x) ndelay(x)
extern unsigned long lpj_fine;
void calibrate_delay(void);
void msleep(unsigned int msecs);
unsigned long msleep_interruptible(unsigned int msecs);
void usleep_range(unsigned long min, unsigned long max);
static inline void ssleep(unsigned int seconds)
