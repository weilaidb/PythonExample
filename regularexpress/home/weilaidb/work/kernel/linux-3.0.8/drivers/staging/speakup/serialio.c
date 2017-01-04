static void start_serial_interrupt(int irq);
static struct serial_state rs_table[] = ;
static struct serial_state *serstate;
static int timeouts;
struct serial_state *spk_serial_init(int index)
static irqreturn_t synth_readbuf_handler(int irq, void *dev_id)
static void start_serial_interrupt(int irq)
void stop_serial_interrupt(void)
int wait_for_xmitr(void)
unsigned char spk_serial_in(void)
EXPORT_SYMBOL_GPL(spk_serial_in);
unsigned char spk_serial_in_nowait(void)
EXPORT_SYMBOL_GPL(spk_serial_in_nowait);
int spk_serial_out(const char ch)
EXPORT_SYMBOL_GPL(spk_serial_out);
void spk_serial_release(void)
EXPORT_SYMBOL_GPL(spk_serial_release);
