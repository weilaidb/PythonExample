#define PPU_PROFILING            0
#define SPU_PROFILING_CYCLES     1
#define SPU_PROFILING_EVENTS     2
#define SPU_EVENT_NUM_START      4100
#define SPU_EVENT_NUM_STOP       4399
#define SPU_PROFILE_EVENT_ADDR          4363
#define SPU_PROFILE_EVENT_ADDR_MASK_A   0x146
#define SPU_PROFILE_EVENT_ADDR_MASK_B   0x186
#define NUM_SPUS_PER_NODE    8
#define SPU_CYCLES_EVENT_NUM 2
#define PPU_CYCLES_EVENT_NUM 1
#define PPU_CYCLES_GRP_NUM   1
#define CBE_COUNT_ALL_CYCLES 0x42800000
#define NUM_THREADS 2
#define NUM_DEBUG_BUS_WORDS 4
#define NUM_INPUT_BUS_WORDS 2
#define MAX_SPU_COUNT 0xFFFFFF
#define NUM_INTERVAL_CYC  0xFFFFFFFF - 10
static unsigned int spu_cycle_reset;
static unsigned int profiling_mode;
static int spu_evnt_phys_spu_indx;
struct pmc_cntrl_data ;
struct pm_signal ;
enum ;
struct pm_cntrl ;
static struct  pm_regs;
#define GET_SUB_UNIT(x) ((x & 0x0000f000) >> 12)
#define GET_BUS_WORD(x) ((x & 0x000000f0) >> 4)
#define GET_BUS_TYPE(x) ((x & 0x00000300) >> 8)
#define GET_POLARITY(x) ((x & 0x00000002) >> 1)
#define GET_COUNT_CYCLES(x) (x & 0x00000001)
#define GET_INPUT_CONTROL(x) ((x & 0x00000004) >> 2)
static DEFINE_PER_CPU(unsigned long[NR_PHYS_CTRS], pmc_values);
static unsigned long spu_pm_cnt[MAX_NUMNODES * NUM_SPUS_PER_NODE];
static struct pmc_cntrl_data pmc_cntrl[NUM_THREADS][NR_PHYS_CTRS];
static u32 hdw_thread;
static u32 virt_cntr_inter_mask;
static struct timer_list timer_virt_cntr;
static struct timer_list timer_spu_event_swap;
static struct pm_signal pm_signal[NR_PHYS_CTRS];
static int pm_rtas_token;
static int spu_rtas_token;
static u32 reset_value[NR_PHYS_CTRS];
static int num_counters;
static int oprofile_running;
static DEFINE_SPINLOCK(cntr_lock);
static u32 ctr_enabled;
static unsigned char input_bus[NUM_INPUT_BUS_WORDS];
static int
rtas_ibm_cbe_perftools(int subfunc, int passthru,
void *address, unsigned long length)
static void pm_rtas_reset_signals(u32 node)
static int pm_rtas_activate_signals(u32 node, u32 count)
static void set_pm_event(u32 ctr, int event, u32 unit_mask)
static void write_pm_cntrl(int cpu)
static inline void
set_count_mode(u32 kernel, u32 user)
static inline void enable_ctr(u32 cpu, u32 ctr, u32 *pm07_cntrl)
static void cell_virtual_cntr(unsigned long data)
static void start_virt_cntrs(void)
static int cell_reg_setup_spu_cycles(struct op_counter_config *ctr,
struct op_system_config *sys, int num_ctrs)
static void spu_evnt_swap(unsigned long data)
static void start_spu_event_swap(void)
static int cell_reg_setup_spu_events(struct op_counter_config *ctr,
struct op_system_config *sys, int num_ctrs)
static int cell_reg_setup_ppu(struct op_counter_config *ctr,
struct op_system_config *sys, int num_ctrs)
static int cell_reg_setup(struct op_counter_config *ctr,
struct op_system_config *sys, int num_ctrs)
static int cell_cpu_setup(struct op_counter_config *cntr)
#define ENTRIES	 303
#define MAXLFSR	 0xFFFFFF
static int initial_lfsr[] = ;
#define V2_16  (0x1 << 16)
#define V2_19  (0x1 << 19)
#define V2_22  (0x1 << 22)
static int calculate_lfsr(int n)
static int pm_rtas_activate_spu_profiling(u32 node)
static int
oprof_cpufreq_notify(struct notifier_block *nb, unsigned long val, void *data)
static struct notifier_block cpu_freq_notifier_block = ;
static void cell_global_stop_spu_cycles(void)
static void cell_global_stop_spu_events(void)
static void cell_global_stop_ppu(void)
static void cell_global_stop(void)
static int cell_global_start_spu_cycles(struct op_counter_config *ctr)
static int cell_global_start_spu_events(struct op_counter_config *ctr)
static int cell_global_start_ppu(struct op_counter_config *ctr)
static int cell_global_start(struct op_counter_config *ctr)
static void cell_handle_interrupt_spu(struct pt_regs *regs,
struct op_counter_config *ctr)
static void cell_handle_interrupt_ppu(struct pt_regs *regs,
struct op_counter_config *ctr)
static void cell_handle_interrupt(struct pt_regs *regs,
struct op_counter_config *ctr)
static int cell_sync_start(void)
static int cell_sync_stop(void)
struct op_powerpc_model op_model_cell = ;
