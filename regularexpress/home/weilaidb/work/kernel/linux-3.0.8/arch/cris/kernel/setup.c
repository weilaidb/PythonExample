struct screen_info screen_info;
extern int root_mountflags;
extern char _etext, _edata, _end;
char __initdata cris_command_line[COMMAND_LINE_SIZE] = ;
extern const unsigned long text_start, edata;
extern unsigned long dram_start, dram_end;
extern unsigned long romfs_start, romfs_length, romfs_in_flash;
static struct cpu cpu_devices[NR_CPUS];
extern void show_etrax_copyright(void);
void __init setup_arch(char **cmdline_p)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
extern int show_cpuinfo(struct seq_file *m, void *v);
const struct seq_operations cpuinfo_op = ;
static int __init topology_init(void)
subsys_initcall(topology_init);
