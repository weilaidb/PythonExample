unsigned long s3c_irqwake_intallow	= 1L << (IRQ_RTC - IRQ_EINT0) | 0xfL;
unsigned long s3c_irqwake_eintallow	= 0x0000fff0L;
int s3c_irq_wake(struct irq_data *data, unsigned int state)
static struct sleep_save irq_save[] = ;
static unsigned long save_extint[3];
static unsigned long save_eintflt[4];
static unsigned long save_eintmask;
int s3c24xx_irq_suspend(void)
void s3c24xx_irq_resume(void)
