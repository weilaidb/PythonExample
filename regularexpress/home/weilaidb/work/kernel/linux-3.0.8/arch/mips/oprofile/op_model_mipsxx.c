#define M_PERFCTL_EXL			(1UL      <<  0)
#define M_PERFCTL_KERNEL		(1UL      <<  1)
#define M_PERFCTL_SUPERVISOR		(1UL      <<  2)
#define M_PERFCTL_USER			(1UL      <<  3)
#define M_PERFCTL_INTERRUPT_ENABLE	(1UL      <<  4)
#define M_PERFCTL_EVENT(event)		(((event) & 0x3ff)  << 5)
#define M_PERFCTL_VPEID(vpe)		((vpe)    << 16)
#define M_PERFCTL_MT_EN(filter)		((filter) << 20)
#define    M_TC_EN_ALL			M_PERFCTL_MT_EN(0)
#define    M_TC_EN_VPE			M_PERFCTL_MT_EN(1)
#define    M_TC_EN_TC			M_PERFCTL_MT_EN(2)
#define M_PERFCTL_TCID(tcid)		((tcid)   << 22)
#define M_PERFCTL_WIDE			(1UL      << 30)
#define M_PERFCTL_MORE			(1UL      << 31)
#define M_COUNTER_OVERFLOW		(1UL      << 31)
static int (*save_perf_irq)(void);
static int cpu_has_mipsmt_pertccounters;
#define WHAT		(M_TC_EN_VPE | \
M_PERFCTL_VPEID(cpu_data[smp_processor_id()].vpe_id))
#define vpe_id()	(cpu_has_mipsmt_pertccounters ? \
0 : cpu_data[smp_processor_id()].vpe_id)
static inline unsigned int vpe_shift(void)
#define WHAT		0
#define vpe_id()	0
static inline unsigned int vpe_shift(void)
static inline unsigned int counters_total_to_per_cpu(unsigned int counters)
static inline unsigned int counters_per_cpu_to_total(unsigned int counters)
#define __define_perf_accessors(r, n, np)				\
\
static inline unsigned int r_c0_ ## r ## n(void)			\
\
\
static inline void w_c0_ ## r ## n(unsigned int value)			\
\
__define_perf_accessors(perfcntr, 0, 2)
__define_perf_accessors(perfcntr, 1, 3)
__define_perf_accessors(perfcntr, 2, 0)
__define_perf_accessors(perfcntr, 3, 1)
__define_perf_accessors(perfctrl, 0, 2)
__define_perf_accessors(perfctrl, 1, 3)
__define_perf_accessors(perfctrl, 2, 0)
__define_perf_accessors(perfctrl, 3, 1)
struct op_mips_model op_model_mipsxx_ops;
static struct mipsxx_register_config  reg;
static void mipsxx_reg_setup(struct op_counter_config *ctr)
static void mipsxx_cpu_setup(void *args)
static void mipsxx_cpu_start(void *args)
static void mipsxx_cpu_stop(void *args)
static int mipsxx_perfcount_handler(void)
#define M_CONFIG1_PC	(1 << 4)
static inline int __n_counters(void)
static inline int n_counters(void)
static void reset_counters(void *arg)
static int __init mipsxx_init(void)
static void mipsxx_exit(void)
struct op_mips_model op_model_mipsxx_ops = ;
