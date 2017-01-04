static volatile u32 *kn0x_erraddr;
static volatile u32 *kn0x_chksyn;
static inline void dec_ecc_be_ack(void)
static int dec_ecc_be_backend(struct pt_regs *regs, int is_fixup, int invoker)
int dec_ecc_be_handler(struct pt_regs *regs, int is_fixup)
irqreturn_t dec_ecc_be_interrupt(int irq, void *dev_id)
static inline void dec_kn02_be_init(void)
static inline void dec_kn03_be_init(void)
void __init dec_ecc_be_init(void)
