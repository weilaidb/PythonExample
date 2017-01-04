#define _PSERIES_PLPAR_WRAPPERS_H
int smp_query_cpu_stopped(unsigned int pcpu);
#define QCSS_STOPPED 0
#define QCSS_STOPPING 1
#define QCSS_NOT_STOPPED 2
#define QCSS_HARDWARE_ERROR -1
#define QCSS_HARDWARE_BUSY -2
static inline long poll_pending(void)
static inline u8 get_cede_latency_hint(void)
static inline void set_cede_latency_hint(u8 latency_hint)
static inline long cede_processor(void)
static inline long extended_cede_processor(unsigned long latency_hint)
static inline long vpa_call(unsigned long flags, unsigned long cpu,
unsigned long vpa)
static inline long unregister_vpa(unsigned long cpu, unsigned long vpa)
static inline long register_vpa(unsigned long cpu, unsigned long vpa)
static inline long unregister_slb_shadow(unsigned long cpu, unsigned long vpa)
static inline long register_slb_shadow(unsigned long cpu, unsigned long vpa)
static inline long unregister_dtl(unsigned long cpu)
static inline long register_dtl(unsigned long cpu, unsigned long vpa)
static inline long plpar_page_set_loaned(unsigned long vpa)
static inline long plpar_page_set_active(unsigned long vpa)
extern void vpa_init(int cpu);
static inline long plpar_pte_enter(unsigned long flags,
unsigned long hpte_group, unsigned long hpte_v,
unsigned long hpte_r, unsigned long *slot)
static inline long plpar_pte_remove(unsigned long flags, unsigned long ptex,
unsigned long avpn, unsigned long *old_pteh_ret,
unsigned long *old_ptel_ret)
static inline long plpar_pte_remove_raw(unsigned long flags, unsigned long ptex,
unsigned long avpn, unsigned long *old_pteh_ret,
unsigned long *old_ptel_ret)
static inline long plpar_pte_read(unsigned long flags, unsigned long ptex,
unsigned long *old_pteh_ret, unsigned long *old_ptel_ret)
static inline long plpar_pte_read_raw(unsigned long flags, unsigned long ptex,
unsigned long *old_pteh_ret, unsigned long *old_ptel_ret)
static inline long plpar_pte_read_4_raw(unsigned long flags, unsigned long ptex,
unsigned long *ptes)
static inline long plpar_pte_protect(unsigned long flags, unsigned long ptex,
unsigned long avpn)
static inline long plpar_tce_get(unsigned long liobn, unsigned long ioba,
unsigned long *tce_ret)
static inline long plpar_tce_put(unsigned long liobn, unsigned long ioba,
unsigned long tceval)
static inline long plpar_tce_put_indirect(unsigned long liobn,
unsigned long ioba, unsigned long page, unsigned long count)
static inline long plpar_tce_stuff(unsigned long liobn, unsigned long ioba,
unsigned long tceval, unsigned long count)
static inline long plpar_get_term_char(unsigned long termno,
unsigned long *len_ret, char *buf_ret)
static inline long plpar_put_term_char(unsigned long termno, unsigned long len,
const char *buffer)
