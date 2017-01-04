DEFINE_PER_CPU(struct ptc_stats, ptcstats);
DECLARE_PER_CPU(struct ptc_stats, ptcstats);
static  __cacheline_aligned DEFINE_SPINLOCK(sn2_global_ptc_lock);
static int sn2_flush_opt = 0;
extern unsigned long
sn2_ptc_deadlock_recovery_core(volatile unsigned long *, unsigned long,
volatile unsigned long *, unsigned long,
volatile unsigned long *, unsigned long);
void
sn2_ptc_deadlock_recovery(short *, short, short, int,
volatile unsigned long *, unsigned long,
volatile unsigned long *, unsigned long);
#define sn2_ptctest	0
#define local_node_uses_ptc_ga(sh1)	((sh1) ? 1 : 0)
#define max_active_pio(sh1)		((sh1) ? 32 : 7)
#define reset_max_active_on_deadlock()	1
#define PTC_LOCK(sh1)			((sh1) ? &sn2_global_ptc_lock : &sn_nodepda->ptc_lock)
struct ptc_stats ;
#define sn2_ptctest	0
static inline unsigned long wait_piowc(void)
void sn_migrate(struct task_struct *task)
void sn_tlb_migrate_finish(struct mm_struct *mm)
static void
sn2_ipi_flush_all_tlb(struct mm_struct *mm)
void
sn2_global_tlb_purge(struct mm_struct *mm, unsigned long start,
unsigned long end, unsigned long nbits)
void
sn2_ptc_deadlock_recovery(short *nasids, short ib, short ie, int mynasid,
volatile unsigned long *ptc0, unsigned long data0,
volatile unsigned long *ptc1, unsigned long data1)
void sn_send_IPI_phys(int nasid, long physid, int vector, int delivery_mode)
EXPORT_SYMBOL(sn_send_IPI_phys);
void sn2_send_IPI(int cpuid, int vector, int delivery_mode, int redirect)
bool sn_cpu_disable_allowed(int cpu)
#define PTC_BASENAME	"sgi_sn/ptc_statistics"
static void *sn2_ptc_seq_start(struct seq_file *file, loff_t * offset)
static void *sn2_ptc_seq_next(struct seq_file *file, void *data, loff_t * offset)
static void sn2_ptc_seq_stop(struct seq_file *file, void *data)
static int sn2_ptc_seq_show(struct seq_file *file, void *data)
static ssize_t sn2_ptc_proc_write(struct file *file, const char __user *user, size_t count, loff_t *data)
static const struct seq_operations sn2_ptc_seq_ops = ;
static int sn2_ptc_proc_open(struct inode *inode, struct file *file)
static const struct file_operations proc_sn2_ptc_operations = ;
static struct proc_dir_entry *proc_sn2_ptc;
static int __init sn2_ptc_init(void)
static void __exit sn2_ptc_exit(void)
module_init(sn2_ptc_init);
module_exit(sn2_ptc_exit);
