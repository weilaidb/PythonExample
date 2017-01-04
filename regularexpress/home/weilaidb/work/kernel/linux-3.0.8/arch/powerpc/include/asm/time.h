#define __POWERPC_TIME_H
extern unsigned long tb_ticks_per_jiffy;
extern unsigned long tb_ticks_per_usec;
extern unsigned long tb_ticks_per_sec;
struct rtc_time;
extern void to_tm(int tim, struct rtc_time * tm);
extern void GregorianDay(struct rtc_time *tm);
extern void generic_calibrate_decr(void);
extern void set_dec_cpu6(unsigned int val);
extern unsigned long ppc_proc_freq;
#define DEFAULT_PROC_FREQ	(DEFAULT_TB_FREQ * 8)
extern unsigned long ppc_tb_freq;
#define DEFAULT_TB_FREQ		125000000UL
struct div_result ;
#define __USE_RTC()	(!cpu_has_feature(CPU_FTR_USE_TB))
#define __USE_RTC()	0
#define get_tbl		get_tb
static inline unsigned long get_tbl(void)
static inline unsigned int get_tbu(void)
static inline unsigned int get_rtcl(void)
static inline u64 get_rtc(void)
static inline u64 get_tb(void)
static inline u64 get_tb(void)
static inline u64 get_tb_or_rtc(void)
static inline void set_tb(unsigned int upper, unsigned int lower)
static inline unsigned int get_dec(void)
static inline void set_dec(int val)
static inline unsigned long tb_ticks_since(unsigned long tstamp)
#define mulhwu(x,y) \
()
#define mulhdu(x,y) \
()
extern u64 mulhdu(u64, u64);
extern void div128_by_32(u64 dividend_high, u64 dividend_low,
unsigned divisor, struct div_result *dr);
struct cpu_usage ;
DECLARE_PER_CPU(struct cpu_usage, cpu_usage_array);
#if defined(CONFIG_VIRT_CPU_ACCOUNTING)
#define account_process_vtime(tsk)		account_process_tick(tsk, 0)
#define account_process_vtime(tsk)		do  while (0)
extern void secondary_cpu_time_init(void);
extern void iSeries_time_init_early(void);
