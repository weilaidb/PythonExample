#define NMI_MAX_COUNTER_BITS 66
static DECLARE_BITMAP(perfctr_nmi_owner, NMI_MAX_COUNTER_BITS);
static DECLARE_BITMAP(evntsel_nmi_owner, NMI_MAX_COUNTER_BITS);
static inline unsigned int nmi_perfctr_msr_to_bit(unsigned int msr)
static inline unsigned int nmi_evntsel_msr_to_bit(unsigned int msr)
int avail_to_resrv_perfctr_nmi_bit(unsigned int counter)
EXPORT_SYMBOL(avail_to_resrv_perfctr_nmi_bit);
int reserve_perfctr_nmi(unsigned int msr)
EXPORT_SYMBOL(reserve_perfctr_nmi);
void release_perfctr_nmi(unsigned int msr)
EXPORT_SYMBOL(release_perfctr_nmi);
int reserve_evntsel_nmi(unsigned int msr)
EXPORT_SYMBOL(reserve_evntsel_nmi);
void release_evntsel_nmi(unsigned int msr)
EXPORT_SYMBOL(release_evntsel_nmi);
