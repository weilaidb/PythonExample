#define cpu_to_ptr(n) ((void *)((long)(n)+1))
#define ptr_to_cpu(p) ((long)(p) - 1)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
static int __init proc_tile_init(void)
arch_initcall(proc_tile_init);
static ctl_table unaligned_subtable[] = ;
static ctl_table unaligned_table[] = ;
static struct ctl_path tile_path[] = ;
static int __init proc_sys_tile_init(void)
arch_initcall(proc_sys_tile_init);
