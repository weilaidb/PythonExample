#if defined(IA64_MCA_DEBUG_INFO)
# define IA64_MCA_DEBUG(fmt...)	printk(fmt)
# define IA64_MCA_DEBUG(fmt...)
#define NOTIFY_INIT(event, regs, arg, spin)				\
do  while (0)
#define NOTIFY_MCA(event, regs, arg, spin)				\
do  while (0)
DEFINE_PER_CPU(u64, ia64_mca_data);
DEFINE_PER_CPU(u64, ia64_mca_per_cpu_pte);
DEFINE_PER_CPU(u64, ia64_mca_pal_pte);
DEFINE_PER_CPU(u64, ia64_mca_pal_base);
DEFINE_PER_CPU(u64, ia64_mca_tr_reload);
unsigned long __per_cpu_mca[NR_CPUS];
extern void			ia64_os_init_dispatch_monarch (void);
extern void			ia64_os_init_dispatch_slave (void);
static int monarch_cpu = -1;
static ia64_mc_info_t		ia64_mc_info;
#define MAX_CPE_POLL_INTERVAL (15*60*HZ)
#define MIN_CPE_POLL_INTERVAL (2*60*HZ)
#define CMC_POLL_INTERVAL     (1*60*HZ)
#define CPE_HISTORY_LENGTH    5
#define CMC_HISTORY_LENGTH    5
static struct timer_list cpe_poll_timer;
static struct timer_list cmc_poll_timer;
static int cmc_polling_enabled = 1;
static int cpe_poll_enabled = 1;
extern void salinfo_log_wakeup(int type, u8 *buffer, u64 size, int irqsafe);
static int mca_init __initdata;
#define mprintk(fmt...) ia64_mca_printk(fmt)
#define MLOGBUF_SIZE (512+256*NR_CPUS)
#define MLOGBUF_MSGMAX 256
static char mlogbuf[MLOGBUF_SIZE];
static DEFINE_SPINLOCK(mlogbuf_wlock);
static DEFINE_SPINLOCK(mlogbuf_rlock);
static unsigned long mlogbuf_start;
static unsigned long mlogbuf_end;
static unsigned int mlogbuf_finished = 0;
static unsigned long mlogbuf_timestamp = 0;
static int loglevel_save = -1;
#define BREAK_LOGLEVEL(__console_loglevel)		\
oops_in_progress = 1;				\
if (loglevel_save < 0)				\
loglevel_save = __console_loglevel;	\
__console_loglevel = 15;
#define RESTORE_LOGLEVEL(__console_loglevel)		\
if (loglevel_save >= 0) 						\
mlogbuf_finished = 0;				\
oops_in_progress = 0;
void ia64_mca_printk(const char *fmt, ...)
EXPORT_SYMBOL(ia64_mca_printk);
void ia64_mlogbuf_dump(void)
EXPORT_SYMBOL(ia64_mlogbuf_dump);
static void ia64_mlogbuf_finish(int wait)
static void ia64_mlogbuf_dump_from_init(void)
static void inline
ia64_mca_spin(const char *func)
#define IA64_MAX_LOGS		2
#define IA64_MAX_LOG_TYPES      4
typedef struct ia64_state_log_s
ia64_state_log_t;
static ia64_state_log_t ia64_state_log[IA64_MAX_LOG_TYPES];
#define IA64_LOG_ALLOCATE(it, size) \
#define IA64_LOG_LOCK_INIT(it) spin_lock_init(&ia64_state_log[it].isl_lock)
#define IA64_LOG_LOCK(it)      spin_lock_irqsave(&ia64_state_log[it].isl_lock, s)
#define IA64_LOG_UNLOCK(it)    spin_unlock_irqrestore(&ia64_state_log[it].isl_lock,s)
#define IA64_LOG_NEXT_INDEX(it)    ia64_state_log[it].isl_index
#define IA64_LOG_CURR_INDEX(it)    1 - ia64_state_log[it].isl_index
#define IA64_LOG_INDEX_INC(it) \
#define IA64_LOG_INDEX_DEC(it) \
ia64_state_log[it].isl_index = 1 - ia64_state_log[it].isl_index
#define IA64_LOG_NEXT_BUFFER(it)   (void *)((ia64_state_log[it].isl_log[IA64_LOG_NEXT_INDEX(it)]))
#define IA64_LOG_CURR_BUFFER(it)   (void *)((ia64_state_log[it].isl_log[IA64_LOG_CURR_INDEX(it)]))
#define IA64_LOG_COUNT(it)         ia64_state_log[it].isl_count
static void __init
ia64_log_init(int sal_info_type)
static u64
ia64_log_get(int sal_info_type, u8 **buffer, int irq_safe)
static void
ia64_mca_log_sal_error_record(int sal_info_type)
int
search_mca_table (const struct mca_table_entry *first,
const struct mca_table_entry *last,
unsigned long ip)
int mca_recover_range(unsigned long addr)
EXPORT_SYMBOL_GPL(mca_recover_range);
int cpe_vector = -1;
int ia64_cpe_irq = -1;
static irqreturn_t
ia64_mca_cpe_int_handler (int cpe_irq, void *arg)
void
ia64_mca_register_cpev (int cpev)
void __cpuinit
ia64_mca_cmc_vector_setup (void)
static void
ia64_mca_cmc_vector_disable (void *dummy)
static void
ia64_mca_cmc_vector_enable (void *dummy)
static void
ia64_mca_cmc_vector_disable_keventd(struct work_struct *unused)
static void
ia64_mca_cmc_vector_enable_keventd(struct work_struct *unused)
static void
ia64_mca_wakeup(int cpu)
static void
ia64_mca_wakeup_all(void)
static irqreturn_t
ia64_mca_rendez_int_handler(int rendez_irq, void *arg)
static irqreturn_t
ia64_mca_wakeup_int_handler(int wakeup_irq, void *arg)
int (*ia64_mca_ucmc_extension)
(void*,struct ia64_sal_os_state*)
= NULL;
int
ia64_reg_MCA_extension(int (*fn)(void *, struct ia64_sal_os_state *))
void
ia64_unreg_MCA_extension(void)
EXPORT_SYMBOL(ia64_reg_MCA_extension);
EXPORT_SYMBOL(ia64_unreg_MCA_extension);
static inline void
copy_reg(const u64 *fr, u64 fnat, unsigned long *tr, unsigned long *tnat)
static void
ia64_mca_modify_comm(const struct task_struct *previous_current)
static void
finish_pt_regs(struct pt_regs *regs, struct ia64_sal_os_state *sos,
unsigned long *nat)
static struct task_struct *
ia64_mca_modify_original_stack(struct pt_regs *regs,
const struct switch_stack *sw,
struct ia64_sal_os_state *sos,
const char *type)
static void
ia64_wait_for_slaves(int monarch, const char *type)
static void mca_insert_tr(u64 iord)
void
ia64_mca_handler(struct pt_regs *regs, struct switch_stack *sw,
struct ia64_sal_os_state *sos)
static DECLARE_WORK(cmc_disable_work, ia64_mca_cmc_vector_disable_keventd);
static DECLARE_WORK(cmc_enable_work, ia64_mca_cmc_vector_enable_keventd);
static irqreturn_t
ia64_mca_cmc_int_handler(int cmc_irq, void *arg)
static irqreturn_t
ia64_mca_cmc_int_caller(int cmc_irq, void *arg)
static void
ia64_mca_cmc_poll (unsigned long dummy)
static irqreturn_t
ia64_mca_cpe_int_caller(int cpe_irq, void *arg)
static void
ia64_mca_cpe_poll (unsigned long dummy)
static int
default_monarch_init_process(struct notifier_block *self, unsigned long val, void *data)
void
ia64_init_handler(struct pt_regs *regs, struct switch_stack *sw,
struct ia64_sal_os_state *sos)
static int __init
ia64_mca_disable_cpe_polling(char *str)
__setup("disable_cpe_poll", ia64_mca_disable_cpe_polling);
static struct irqaction cmci_irqaction = ;
static struct irqaction cmcp_irqaction = ;
static struct irqaction mca_rdzv_irqaction = ;
static struct irqaction mca_wkup_irqaction = ;
static struct irqaction mca_cpe_irqaction = ;
static struct irqaction mca_cpep_irqaction = ;
static void __cpuinit
format_mca_init_stack(void *mca_data, unsigned long offset,
const char *type, int cpu)
static void * __init_refok mca_bootmem(void)
void __cpuinit
ia64_mca_cpu_init(void *cpu_data)
static void __cpuinit ia64_mca_cmc_vector_adjust(void *dummy)
static int __cpuinit mca_cpu_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static struct notifier_block mca_cpu_notifier __cpuinitdata = ;
void __init
ia64_mca_init(void)
static int __init
ia64_mca_late_init(void)
device_initcall(ia64_mca_late_init);
