#define _ASM_X86_MC146818RTC_H
#define RTC_PORT(x)	(0x70 + (x))
#define RTC_ALWAYS_BCD	1
#if defined(CONFIG_X86_32) && defined(__HAVE_ARCH_CMPXCHG)
extern volatile unsigned long cmos_lock;
static inline void lock_cmos(unsigned char reg)
static inline void unlock_cmos(void)
static inline int do_i_have_lock_cmos(void)
static inline unsigned char current_lock_cmos_reg(void)
#define lock_cmos_prefix(reg)			\
do  while (0)
#define lock_cmos_prefix(reg) do  while (0)
#define lock_cmos_suffix(reg) do  while (0)
#define lock_cmos(reg)
#define unlock_cmos()
#define do_i_have_lock_cmos() 0
#define current_lock_cmos_reg() 0
#define CMOS_READ(addr) rtc_cmos_read(addr)
#define CMOS_WRITE(val, addr) rtc_cmos_write(val, addr)
unsigned char rtc_cmos_read(unsigned char addr);
void rtc_cmos_write(unsigned char val, unsigned char addr);
extern int mach_set_rtc_mmss(unsigned long nowtime);
extern unsigned long mach_get_cmos_time(void);
#define RTC_IRQ 8