#if defined(__H8300H__)
#define CPU "H8/300H"
#if defined(__H8300S__)
#define CPU "H8S"
#define STUBSIZE 0xc000;
unsigned long rom_length;
unsigned long memory_start;
unsigned long memory_end;
char __initdata command_line[COMMAND_LINE_SIZE];
extern int _stext, _etext, _sdata, _edata, _sbss, _ebss, _end;
extern int _ramstart, _ramend;
extern char _target_name[];
extern void h8300_gpio_init(void);
#if (defined(CONFIG_H8300H_SIM) || defined(CONFIG_H8S_SIM)) \
&& defined(CONFIG_GDB_MAGICPRINT)
static void gdb_console_output(struct console *c, const char *msg, unsigned len)
static int __init gdb_console_setup(struct console *co, char *options)
static const struct console gdb_console = ;
void __init setup_arch(char **cmdline_p)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
