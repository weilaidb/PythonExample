#define __ASM_POWERPC_XMON_H
extern void xmon_setup(void);
extern void xmon_register_spus(struct list_head *list);
struct pt_regs;
extern int xmon(struct pt_regs *excp);
extern irqreturn_t xmon_irq(int, void *);
static inline void xmon_setup(void) ;
static inline void xmon_register_spus(struct list_head *list) ;
#if defined(CONFIG_XMON) && defined(CONFIG_SMP)
extern int cpus_are_in_xmon(void);
