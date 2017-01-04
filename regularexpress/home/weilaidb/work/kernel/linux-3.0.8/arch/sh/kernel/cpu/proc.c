static const char *cpu_name[] = ;
const char *get_cpu_subtype(struct sh_cpuinfo *c)
EXPORT_SYMBOL(get_cpu_subtype);
static const char *cpu_flags[] = ;
static void show_cpuflags(struct seq_file *m, struct sh_cpuinfo *c)
static void show_cacheinfo(struct seq_file *m, const char *type,
struct cache_info info)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
