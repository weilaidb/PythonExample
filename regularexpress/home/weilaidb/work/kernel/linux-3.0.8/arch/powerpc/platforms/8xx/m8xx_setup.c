struct mpc8xx_pcmcia_ops m8xx_pcmcia_ops;
extern int cpm_pic_init(void);
extern int cpm_get_irq(void);
static irqreturn_t timebase_interrupt(int irq, void *dev)
static struct irqaction tbint_irqaction = ;
void __init __attribute__ ((weak))
init_internal_rtc(void)
static int __init get_freq(char *name, unsigned long *val)
void __init mpc8xx_calibrate_decr(void)
int mpc8xx_set_rtc_time(struct rtc_time *tm)
void mpc8xx_get_rtc_time(struct rtc_time *tm)
void mpc8xx_restart(char *cmd)
static void cpm_cascade(unsigned int irq, struct irq_desc *desc)
void __init mpc8xx_pics_init(void)
