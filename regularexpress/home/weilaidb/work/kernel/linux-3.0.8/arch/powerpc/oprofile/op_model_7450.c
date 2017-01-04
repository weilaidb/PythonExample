static unsigned long reset_value[OP_MAX_COUNTER];
static int oprofile_running;
static u32 mmcr0_val, mmcr1_val, mmcr2_val, num_pmcs;
#define MMCR0_PMC1_SHIFT	6
#define MMCR0_PMC2_SHIFT	0
#define MMCR1_PMC3_SHIFT	27
#define MMCR1_PMC4_SHIFT	22
#define MMCR1_PMC5_SHIFT	17
#define MMCR1_PMC6_SHIFT	11
#define mmcr0_event1(event) \
((event << MMCR0_PMC1_SHIFT) & MMCR0_PMC1SEL)
#define mmcr0_event2(event) \
((event << MMCR0_PMC2_SHIFT) & MMCR0_PMC2SEL)
#define mmcr1_event3(event) \
((event << MMCR1_PMC3_SHIFT) & MMCR1_PMC3SEL)
#define mmcr1_event4(event) \
((event << MMCR1_PMC4_SHIFT) & MMCR1_PMC4SEL)
#define mmcr1_event5(event) \
((event << MMCR1_PMC5_SHIFT) & MMCR1_PMC5SEL)
#define mmcr1_event6(event) \
((event << MMCR1_PMC6_SHIFT) & MMCR1_PMC6SEL)
#define MMCR0_INIT (MMCR0_FC | MMCR0_FCS | MMCR0_FCP | MMCR0_FCM1 | MMCR0_FCM0)
static void pmc_start_ctrs(void)
static void pmc_stop_ctrs(void)
static int fsl7450_cpu_setup(struct op_counter_config *ctr)
static int fsl7450_reg_setup(struct op_counter_config *ctr,
struct op_system_config *sys,
int num_ctrs)
static int fsl7450_start(struct op_counter_config *ctr)
static void fsl7450_stop(void)
static void fsl7450_handle_interrupt(struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_powerpc_model op_model_7450= ;
