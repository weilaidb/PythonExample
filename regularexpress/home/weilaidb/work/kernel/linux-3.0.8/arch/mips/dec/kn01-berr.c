#define BARRIER				\
__asm__ __volatile__(		\
".set	push\n\t"	\
".set	noreorder\n\t"	\
"nop\n\t"		\
".set	pop\n\t")
u16 cached_kn01_csr;
static DEFINE_RAW_SPINLOCK(kn01_lock);
static inline void dec_kn01_be_ack(void)
static int dec_kn01_be_backend(struct pt_regs *regs, int is_fixup, int invoker)
int dec_kn01_be_handler(struct pt_regs *regs, int is_fixup)
irqreturn_t dec_kn01_be_interrupt(int irq, void *dev_id)
void __init dec_kn01_be_init(void)
