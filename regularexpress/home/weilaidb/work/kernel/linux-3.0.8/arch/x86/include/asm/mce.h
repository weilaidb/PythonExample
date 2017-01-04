#define _ASM_X86_MCE_H
#define MCG_BANKCNT_MASK	0xff
#define MCG_CTL_P		(1ULL<<8)
#define MCG_EXT_P		(1ULL<<9)
#define MCG_CMCI_P		(1ULL<<10)
#define MCG_EXT_CNT_MASK	0xff0000
#define MCG_EXT_CNT_SHIFT	16
#define MCG_EXT_CNT(c)		(((c) & MCG_EXT_CNT_MASK) >> MCG_EXT_CNT_SHIFT)
#define MCG_SER_P	 	(1ULL<<24)
#define MCG_STATUS_RIPV  (1ULL<<0)
#define MCG_STATUS_EIPV  (1ULL<<1)
#define MCG_STATUS_MCIP  (1ULL<<2)
#define MCI_STATUS_VAL   (1ULL<<63)
#define MCI_STATUS_OVER  (1ULL<<62)
#define MCI_STATUS_UC    (1ULL<<61)
#define MCI_STATUS_EN    (1ULL<<60)
#define MCI_STATUS_MISCV (1ULL<<59)
#define MCI_STATUS_ADDRV (1ULL<<58)
#define MCI_STATUS_PCC   (1ULL<<57)
#define MCI_STATUS_S	 (1ULL<<56)
#define MCI_STATUS_AR	 (1ULL<<55)
#define MCM_ADDR_SEGOFF  0
#define MCM_ADDR_LINEAR  1
#define MCM_ADDR_PHYS	 2
#define MCM_ADDR_MEM	 3
#define MCM_ADDR_GENERIC 7
#define MCI_CTL2_CMCI_EN		(1ULL << 30)
#define MCI_CTL2_CMCI_THRESHOLD_MASK	0x7fffULL
#define MCJ_CTX_MASK		3
#define MCJ_CTX(flags)		((flags) & MCJ_CTX_MASK)
#define MCJ_CTX_RANDOM		0
#define MCJ_CTX_PROCESS		1
#define MCJ_CTX_IRQ		2
#define MCJ_NMI_BROADCAST	4
#define MCJ_EXCEPTION		8
struct mce ;
#define MCE_LOG_LEN 32
struct mce_log ;
#define MCE_OVERFLOW 0
#define MCE_LOG_SIGNATURE	"MACHINECHECK"
#define MCE_GET_RECORD_LEN   _IOR('M', 1, int)
#define MCE_GET_LOG_LEN      _IOR('M', 2, int)
#define MCE_GETCLEAR_FLAGS   _IOR('M', 3, int)
#define MCE_EXTENDED_BANK	128
#define MCE_THERMAL_BANK	MCE_EXTENDED_BANK + 0
#define K8_MCE_THRESHOLD_BASE      (MCE_EXTENDED_BANK + 1)
#define K8_MCE_THRESHOLD_BANK_0    (MCE_THRESHOLD_BASE + 0 * 9)
#define K8_MCE_THRESHOLD_BANK_1    (MCE_THRESHOLD_BASE + 1 * 9)
#define K8_MCE_THRESHOLD_BANK_2    (MCE_THRESHOLD_BASE + 2 * 9)
#define K8_MCE_THRESHOLD_BANK_3    (MCE_THRESHOLD_BASE + 3 * 9)
#define K8_MCE_THRESHOLD_BANK_4    (MCE_THRESHOLD_BASE + 4 * 9)
#define K8_MCE_THRESHOLD_BANK_5    (MCE_THRESHOLD_BASE + 5 * 9)
#define K8_MCE_THRESHOLD_DRAM_ECC  (MCE_THRESHOLD_BANK_4 + 0)
extern struct atomic_notifier_head x86_mce_decoder_chain;
extern int mce_disabled;
extern int mce_p5_enabled;
int mcheck_init(void);
void mcheck_cpu_init(struct cpuinfo_x86 *c);
static inline int mcheck_init(void)
static inline void mcheck_cpu_init(struct cpuinfo_x86 *c)
void intel_p5_mcheck_init(struct cpuinfo_x86 *c);
void winchip_mcheck_init(struct cpuinfo_x86 *c);
static inline void enable_p5_mce(void)
static inline void intel_p5_mcheck_init(struct cpuinfo_x86 *c)
static inline void winchip_mcheck_init(struct cpuinfo_x86 *c)
static inline void enable_p5_mce(void)
void mce_setup(struct mce *m);
void mce_log(struct mce *m);
DECLARE_PER_CPU(struct sys_device, mce_dev);
#define MAX_NR_BANKS 32
extern int mce_cmci_disabled;
extern int mce_ignore_ce;
void mce_intel_feature_init(struct cpuinfo_x86 *c);
void cmci_clear(void);
void cmci_reenable(void);
void cmci_rediscover(int dying);
void cmci_recheck(void);
static inline void mce_intel_feature_init(struct cpuinfo_x86 *c)
static inline void cmci_clear(void)
static inline void cmci_reenable(void)
static inline void cmci_rediscover(int dying)
static inline void cmci_recheck(void)
void mce_amd_feature_init(struct cpuinfo_x86 *c);
static inline void mce_amd_feature_init(struct cpuinfo_x86 *c)
int mce_available(struct cpuinfo_x86 *c);
DECLARE_PER_CPU(unsigned, mce_exception_count);
DECLARE_PER_CPU(unsigned, mce_poll_count);
extern atomic_t mce_entry;
typedef DECLARE_BITMAP(mce_banks_t, MAX_NR_BANKS);
DECLARE_PER_CPU(mce_banks_t, mce_poll_banks);
enum mcp_flags ;
void machine_check_poll(enum mcp_flags flags, mce_banks_t *b);
int mce_notify_irq(void);
void mce_notify_process(void);
DECLARE_PER_CPU(struct mce, injectm);
extern struct file_operations mce_chrdev_ops;
extern void (*machine_check_vector)(struct pt_regs *, long error_code);
void do_machine_check(struct pt_regs *, long);
extern void (*mce_threshold_vector)(void);
extern void (*threshold_cpu_callback)(unsigned long action, unsigned int cpu);
void intel_init_thermal(struct cpuinfo_x86 *c);
void mce_log_therm_throt_event(__u64 status);
extern int (*platform_thermal_notify)(__u64 msr_val);
extern void mcheck_intel_therm_init(void);
static inline void mcheck_intel_therm_init(void)
struct cper_sec_mem_err;
extern void apei_mce_report_mem_error(int corrected,
struct cper_sec_mem_err *mem_err);
