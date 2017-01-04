#define NUM_EVENTS 39
#define NUM_COUNTERS_NON_HT 8
#define NUM_ESCRS_NON_HT 45
#define NUM_CCCRS_NON_HT 18
#define NUM_CONTROLS_NON_HT (NUM_ESCRS_NON_HT + NUM_CCCRS_NON_HT)
#define NUM_COUNTERS_HT2 4
#define NUM_ESCRS_HT2 23
#define NUM_CCCRS_HT2 9
#define NUM_CONTROLS_HT2 (NUM_ESCRS_HT2 + NUM_CCCRS_HT2)
#define OP_CTR_OVERFLOW			(1ULL<<31)
static unsigned int num_counters = NUM_COUNTERS_NON_HT;
static unsigned int num_controls = NUM_CONTROLS_NON_HT;
static inline void setup_num_counters(void)
static inline int addr_increment(void)
struct p4_counter_binding ;
struct p4_event_binding ;
#define CTR_BPU_0      (1 << 0)
#define CTR_MS_0       (1 << 1)
#define CTR_FLAME_0    (1 << 2)
#define CTR_IQ_4       (1 << 3)
#define CTR_BPU_2      (1 << 4)
#define CTR_MS_2       (1 << 5)
#define CTR_FLAME_2    (1 << 6)
#define CTR_IQ_5       (1 << 7)
static struct p4_counter_binding p4_counters[NUM_COUNTERS_NON_HT] = ;
#define NUM_UNUSED_CCCRS (NUM_CCCRS_NON_HT - NUM_COUNTERS_NON_HT)
static struct p4_event_binding p4_events[NUM_EVENTS] = ;
#define MISC_PMC_ENABLED_P(x) ((x) & 1 << 7)
#define ESCR_RESERVED_BITS 0x80000003
#define ESCR_CLEAR(escr) ((escr) &= ESCR_RESERVED_BITS)
#define ESCR_SET_USR_0(escr, usr) ((escr) |= (((usr) & 1) << 2))
#define ESCR_SET_OS_0(escr, os) ((escr) |= (((os) & 1) << 3))
#define ESCR_SET_USR_1(escr, usr) ((escr) |= (((usr) & 1)))
#define ESCR_SET_OS_1(escr, os) ((escr) |= (((os) & 1) << 1))
#define ESCR_SET_EVENT_SELECT(escr, sel) ((escr) |= (((sel) & 0x3f) << 25))
#define ESCR_SET_EVENT_MASK(escr, mask) ((escr) |= (((mask) & 0xffff) << 9))
#define CCCR_RESERVED_BITS 0x38030FFF
#define CCCR_CLEAR(cccr) ((cccr) &= CCCR_RESERVED_BITS)
#define CCCR_SET_REQUIRED_BITS(cccr) ((cccr) |= 0x00030000)
#define CCCR_SET_ESCR_SELECT(cccr, sel) ((cccr) |= (((sel) & 0x07) << 13))
#define CCCR_SET_PMI_OVF_0(cccr) ((cccr) |= (1<<26))
#define CCCR_SET_PMI_OVF_1(cccr) ((cccr) |= (1<<27))
#define CCCR_SET_ENABLE(cccr) ((cccr) |= (1<<12))
#define CCCR_SET_DISABLE(cccr) ((cccr) &= ~(1<<12))
#define CCCR_OVF_P(cccr) ((cccr) & (1U<<31))
#define CCCR_CLEAR_OVF(cccr) ((cccr) &= (~(1U<<31)))
static unsigned int get_stagger(void)
#define VIRT_CTR(stagger, i) ((i) + ((num_counters) * (stagger)))
static unsigned long reset_value[NUM_COUNTERS_NON_HT];
static void p4_shutdown(struct op_msrs const * const msrs)
static int p4_fill_in_addresses(struct op_msrs * const msrs)
static void pmc_setup_one_p4_counter(unsigned int ctr)
static void p4_setup_ctrs(struct op_x86_model_spec const *model,
struct op_msrs const * const msrs)
static int p4_check_ctrs(struct pt_regs * const regs,
struct op_msrs const * const msrs)
static void p4_start(struct op_msrs const * const msrs)
static void p4_stop(struct op_msrs const * const msrs)
struct op_x86_model_spec op_p4_ht2_spec = ;
struct op_x86_model_spec op_p4_spec = ;
