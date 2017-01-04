unsigned long memory_start;
unsigned long memory_end;
EXPORT_SYMBOL(memory_start);
EXPORT_SYMBOL(memory_end);
char __initdata command_line[COMMAND_LINE_SIZE];
void (*mach_gettod)(int*, int*, int*, int*, int*, int*);
int (*mach_set_clock_mmss)(unsigned long);
void (*mach_reset)(void);
void (*mach_halt)(void);
void (*mach_power_off)(void);
#define CPU_NAME	"MC68328"
#define CPU_NAME	"MC68EZ328"
#define CPU_NAME	"MC68VZ328"
#define CPU_NAME	"MC68360"
#define	CPU_NAME	"UNKNOWN"
#define	CPU_INSTR_PER_JIFFY	16
extern int _stext, _etext, _sdata, _edata, _sbss, _ebss, _end;
extern int _ramstart, _ramend;
#if defined(CONFIG_UBOOT)
void parse_uboot_commandline(char *commandp, int size)
void __init setup_arch(char **cmdline_p)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
