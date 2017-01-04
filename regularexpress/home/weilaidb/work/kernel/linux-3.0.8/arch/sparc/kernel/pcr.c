#define PCR_SUN4U_ENABLE	(PCR_PIC_PRIV | PCR_STRACE | PCR_UTRACE)
#define PCR_N2_ENABLE		(PCR_PIC_PRIV | PCR_STRACE | PCR_UTRACE | \
PCR_N2_TOE_OV1 | \
(2 << PCR_N2_SL1_SHIFT) | \
(0xff << PCR_N2_MASK1_SHIFT))
u64 pcr_enable;
unsigned int picl_shift;
void __irq_entry deferred_pcr_work_irq(int irq, struct pt_regs *regs)
void arch_irq_work_raise(void)
const struct pcr_ops *pcr_ops;
EXPORT_SYMBOL_GPL(pcr_ops);
static u64 direct_pcr_read(void)
static void direct_pcr_write(u64 val)
static const struct pcr_ops direct_pcr_ops = ;
static void n2_pcr_write(u64 val)
static const struct pcr_ops n2_pcr_ops = ;
static unsigned long perf_hsvc_group;
static unsigned long perf_hsvc_major;
static unsigned long perf_hsvc_minor;
static int __init register_perf_hsvc(void)
static void __init unregister_perf_hsvc(void)
int __init pcr_arch_init(void)
