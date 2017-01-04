static inline void dec_kn02xa_be_ack(void)
static int dec_kn02xa_be_backend(struct pt_regs *regs, int is_fixup,
int invoker)
int dec_kn02xa_be_handler(struct pt_regs *regs, int is_fixup)
irqreturn_t dec_kn02xa_be_interrupt(int irq, void *dev_id)
void __init dec_kn02xa_be_init(void)
