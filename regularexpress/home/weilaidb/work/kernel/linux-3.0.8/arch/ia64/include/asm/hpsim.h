#define _ASMIA64_HPSIM_H
static inline int simcons_register(void)
int simcons_register(void);
struct tty_driver;
extern struct tty_driver *hp_simserial_driver;
void ia64_ssc_connect_irq(long intr, long irq);
void ia64_ctl_trace(long on);
