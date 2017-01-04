unsigned long selfipis[NR_CPUS];
struct smtc_cpu_proc smtc_cpu_stats[NR_CPUS];
static struct proc_dir_entry *smtc_stats;
atomic_t smtc_fpu_recoveries;
static int proc_read_smtc(char *page, char **start, off_t off,
int count, int *eof, void *data)
void init_smtc_stats(void)
