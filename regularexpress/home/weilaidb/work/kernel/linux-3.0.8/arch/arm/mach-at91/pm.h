static inline u32 sdram_selfrefresh_enable(void)
#define sdram_selfrefresh_disable(saved_lpr)	at91_sys_write(AT91_SDRAMC_LPR, saved_lpr)
#define wait_for_interrupt_enable()		asm volatile ("mcr p15, 0, %0, c7, c0, 4" \
: : "r" (0))
#elif defined(CONFIG_ARCH_AT91CAP9)
static inline u32 sdram_selfrefresh_enable(void)
#define sdram_selfrefresh_disable(saved_lpr)	at91_ramc_write(0, AT91_DDRSDRC_LPR, saved_lpr)
#define wait_for_interrupt_enable()		cpu_do_idle()
#elif defined(CONFIG_ARCH_AT91SAM9G45)
static u32 saved_lpr1;
static inline u32 sdram_selfrefresh_enable(void)
#define sdram_selfrefresh_disable(saved_lpr0)	\
do  while (0)
#define wait_for_interrupt_enable()		cpu_do_idle()
#warning Assuming EB1 SDRAM controller is *NOT* used
static inline u32 sdram_selfrefresh_enable(void)
#define sdram_selfrefresh_disable(saved_lpr)	at91_ramc_write(0, AT91_SDRAMC_LPR, saved_lpr)
#define wait_for_interrupt_enable()		cpu_do_idle()
