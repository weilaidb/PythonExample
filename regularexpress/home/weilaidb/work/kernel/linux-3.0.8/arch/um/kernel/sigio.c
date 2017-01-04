static int sigio_irq_fd = -1;
static irqreturn_t sigio_interrupt(int irq, void *data)
int write_sigio_irq(int fd)
static DEFINE_SPINLOCK(sigio_spinlock);
void sigio_lock(void)
void sigio_unlock(void)
