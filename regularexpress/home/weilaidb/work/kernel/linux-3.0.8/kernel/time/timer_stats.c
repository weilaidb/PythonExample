struct entry  ____cacheline_aligned_in_smp;
static DEFINE_SPINLOCK(table_lock);
static DEFINE_PER_CPU(raw_spinlock_t, tstats_lookup_lock);
static DEFINE_MUTEX(show_mutex);
int __read_mostly timer_stats_active;
static ktime_t time_start, time_stop;
#define MAX_ENTRIES_BITS	10
#define MAX_ENTRIES		(1UL << MAX_ENTRIES_BITS)
static unsigned long nr_entries;
static struct entry entries[MAX_ENTRIES];
static atomic_t overflow_count;
#define TSTAT_HASH_BITS		(MAX_ENTRIES_BITS - 1)
#define TSTAT_HASH_SIZE		(1UL << TSTAT_HASH_BITS)
#define TSTAT_HASH_MASK		(TSTAT_HASH_SIZE - 1)
#define __tstat_hashfn(entry)						\
(((unsigned long)(entry)->timer       ^				\
(unsigned long)(entry)->start_func  ^				\
(unsigned long)(entry)->expire_func ^				\
(unsigned long)(entry)->pid		) & TSTAT_HASH_MASK)
#define tstat_hashentry(entry)	(tstat_hash_table + __tstat_hashfn(entry))
static struct entry *tstat_hash_table[TSTAT_HASH_SIZE] __read_mostly;
static void reset_entries(void)
static struct entry *alloc_entry(void)
static int match_entries(struct entry *entry1, struct entry *entry2)
static struct entry *tstat_lookup(struct entry *entry, char *comm)
void timer_stats_update_stats(void *timer, pid_t pid, void *startf,
void *timerf, char *comm,
unsigned int timer_flag)
static void print_name_offset(struct seq_file *m, unsigned long addr)
static int tstats_show(struct seq_file *m, void *v)
static void sync_access(void)
static ssize_t tstats_write(struct file *file, const char __user *buf,
size_t count, loff_t *offs)
static int tstats_open(struct inode *inode, struct file *filp)
static const struct file_operations tstats_fops = ;
void __init init_timer_stats(void)
static int __init init_tstats_procfs(void)
__initcall(init_tstats_procfs);
