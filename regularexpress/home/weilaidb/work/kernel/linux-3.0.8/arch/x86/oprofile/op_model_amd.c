#define NUM_COUNTERS		4
#define NUM_COUNTERS_F15H	6
#define NUM_VIRT_COUNTERS	32
#define NUM_VIRT_COUNTERS	0
#define OP_EVENT_MASK			0x0FFF
#define OP_CTR_OVERFLOW			(1ULL<<31)
#define MSR_AMD_EVENTSEL_RESERVED	((0xFFFFFCF0ULL<<32)|(1ULL<<21))
static int num_counters;
static unsigned long reset_value[OP_MAX_COUNTER];
#define IBS_FETCH_SIZE			6
#define IBS_OP_SIZE			12
static u32 ibs_caps;
struct ibs_config ;
struct ibs_state ;
static struct ibs_config ibs_config;
static struct ibs_state ibs_state;
#define IBS_CPUID_FEATURES		0x8000001b
#define IBS_CAPS_AVAIL			(1U<<0)
#define IBS_CAPS_FETCHSAM		(1U<<1)
#define IBS_CAPS_OPSAM			(1U<<2)
#define IBS_CAPS_RDWROPCNT		(1U<<3)
#define IBS_CAPS_OPCNT			(1U<<4)
#define IBS_CAPS_BRNTRGT		(1U<<5)
#define IBS_CAPS_OPCNTEXT		(1U<<6)
#define IBS_CAPS_DEFAULT		(IBS_CAPS_AVAIL		\
| IBS_CAPS_FETCHSAM	\
| IBS_CAPS_OPSAM)
#define IBSCTL				0x1cc
#define IBSCTL_LVT_OFFSET_VALID		(1ULL<<8)
#define IBSCTL_LVT_OFFSET_MASK		0x0F
#define IBS_RANDOM_BITS			12
#define IBS_RANDOM_MASK			((1ULL << IBS_RANDOM_BITS) - 1)
#define IBS_RANDOM_MAXCNT_OFFSET	(1ULL << (IBS_RANDOM_BITS - 5))
static u32 get_ibs_caps(void)
static unsigned int lfsr_random(void)
static inline u64 op_amd_randomize_ibs_op(u64 val)
static inline void
op_amd_handle_ibs(struct pt_regs * const regs,
struct op_msrs const * const msrs)
static inline void op_amd_start_ibs(void)
static void op_amd_stop_ibs(void)
static inline int get_eilvt(int offset)
static inline int put_eilvt(int offset)
static inline int ibs_eilvt_valid(void)
static inline int get_ibs_offset(void)
static void setup_APIC_ibs(void)
static void clear_APIC_ibs(void)
static void op_mux_switch_ctrl(struct op_x86_model_spec const *model,
struct op_msrs const * const msrs)
static void op_amd_shutdown(struct op_msrs const * const msrs)
static int op_amd_fill_in_addresses(struct op_msrs * const msrs)
static void op_amd_setup_ctrs(struct op_x86_model_spec const *model,
struct op_msrs const * const msrs)
static void op_amd_cpu_shutdown(void)
static int op_amd_check_ctrs(struct pt_regs * const regs,
struct op_msrs const * const msrs)
static void op_amd_start(struct op_msrs const * const msrs)
static void op_amd_stop(struct op_msrs const * const msrs)
static int setup_ibs_ctl(int ibs_eilvt_off)
static int force_ibs_eilvt_setup(void)
static void init_ibs(void)
static int (*create_arch_files)(struct super_block *sb, struct dentry *root);
static int setup_ibs_files(struct super_block *sb, struct dentry *root)
struct op_x86_model_spec op_amd_spec;
static int op_amd_init(struct oprofile_operations *ops)
struct op_x86_model_spec op_amd_spec = ;
