static void show_cpuinfo_core(struct seq_file *m, struct cpuinfo_x86 *c,
unsigned int cpu)
static void show_cpuinfo_misc(struct seq_file *m, struct cpuinfo_x86 *c)
static void show_cpuinfo_misc(struct seq_file *m, struct cpuinfo_x86 *c)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
