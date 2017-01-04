struct sys_device;
extern __init int s3c_pm_init(void);
static inline int s3c_pm_init(void)
extern unsigned long s3c_irqwake_intmask;
extern unsigned long s3c_irqwake_eintmask;
extern unsigned long s3c_irqwake_intallow;
extern unsigned long s3c_irqwake_eintallow;
extern void (*pm_cpu_prep)(void);
extern void (*pm_cpu_sleep)(void);
extern unsigned long s3c_pm_flags;
extern unsigned char pm_uart_udivslot;
extern int  s3c_cpu_save(unsigned long *saveblk, long);
extern void s3c_cpu_resume(void);
extern void s3c2410_cpu_suspend(void);
struct sleep_save ;
#define SAVE_ITEM(x) \
struct pm_uart_save ;
extern void s3c_pm_do_save(struct sleep_save *ptr, int count);
extern void s3c_pm_do_restore(struct sleep_save *ptr, int count);
extern void s3c_pm_do_restore_core(struct sleep_save *ptr, int count);
extern int s3c_irqext_wake(struct irq_data *data, unsigned int state);
extern int s3c24xx_irq_suspend(void);
extern void s3c24xx_irq_resume(void);
#define s3c_irqext_wake NULL
#define s3c24xx_irq_suspend NULL
#define s3c24xx_irq_resume  NULL
extern struct syscore_ops s3c24xx_irq_syscore_ops;
extern void s3c_pm_dbg(const char *msg, ...);
#define S3C_PMDBG(fmt...) s3c_pm_dbg(fmt)
#define S3C_PMDBG(fmt...) printk(KERN_DEBUG fmt)
extern void s3c_pm_debug_smdkled(u32 set, u32 clear);
static inline void s3c_pm_debug_smdkled(u32 set, u32 clear)
extern void s3c_pm_check_prepare(void);
extern void s3c_pm_check_restore(void);
extern void s3c_pm_check_cleanup(void);
extern void s3c_pm_check_store(void);
#define s3c_pm_check_prepare() do  while(0)
#define s3c_pm_check_restore() do  while(0)
#define s3c_pm_check_cleanup() do  while(0)
#define s3c_pm_check_store()   do  while(0)
extern void s3c_pm_configure_extint(void);
extern void s3c_pm_restore_gpios(void);
extern void s3c_pm_save_gpios(void);
extern void s3c_pm_save_core(void);
extern void s3c_pm_restore_core(void);
