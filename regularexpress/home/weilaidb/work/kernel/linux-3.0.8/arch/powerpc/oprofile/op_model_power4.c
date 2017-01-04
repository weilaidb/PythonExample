#define dbg(args...)
static unsigned long reset_value[OP_MAX_COUNTER];
static int oprofile_running;
static int use_slot_nums;
static u32 mmcr0_val;
static u64 mmcr1_val;
static u64 mmcra_val;
static int power4_reg_setup(struct op_counter_config *ctr,
struct op_system_config *sys,
int num_ctrs)
extern void ppc_enable_pmcs(void);
static inline int mmcra_must_set_sample(void)
static int power4_cpu_setup(struct op_counter_config *ctr)
static int power4_start(struct op_counter_config *ctr)
static void power4_stop(void)
static void __used hypervisor_bucket(void)
static void __used rtas_bucket(void)
static void __used kernel_unknown_bucket(void)
static unsigned long get_pc(struct pt_regs *regs)
static int get_kernel(unsigned long pc, unsigned long mmcra)
static bool pmc_overflow(unsigned long val)
static void power4_handle_interrupt(struct pt_regs *regs,
struct op_counter_config *ctr)
struct op_powerpc_model op_model_power4 = ;
