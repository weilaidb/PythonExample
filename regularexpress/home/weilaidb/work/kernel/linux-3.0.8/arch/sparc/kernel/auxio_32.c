void __iomem *auxio_register = NULL;
static DEFINE_SPINLOCK(auxio_lock);
void __init auxio_probe(void)
unsigned char get_auxio(void)
EXPORT_SYMBOL(get_auxio);
void set_auxio(unsigned char bits_on, unsigned char bits_off)
EXPORT_SYMBOL(set_auxio);
volatile unsigned char * auxio_power_register = NULL;
void __init auxio_power_probe(void)
