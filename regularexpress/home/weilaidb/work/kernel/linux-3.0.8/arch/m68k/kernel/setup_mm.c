#if !FPSTATESIZE || !NR_IRQS
#warning No CPU/platform type selected, your kernel will not work!
#warning Are you building an allnoconfig kernel?
unsigned long m68k_machtype;
EXPORT_SYMBOL(m68k_machtype);
unsigned long m68k_cputype;
EXPORT_SYMBOL(m68k_cputype);
unsigned long m68k_fputype;
unsigned long m68k_mmutype;
EXPORT_SYMBOL(m68k_mmutype);
unsigned long vme_brdtype;
EXPORT_SYMBOL(vme_brdtype);
int m68k_is040or060;
EXPORT_SYMBOL(m68k_is040or060);
extern unsigned long availmem;
int m68k_num_memory;
EXPORT_SYMBOL(m68k_num_memory);
int m68k_realnum_memory;
EXPORT_SYMBOL(m68k_realnum_memory);
unsigned long m68k_memoffset;
struct mem_info m68k_memory[NUM_MEMINFO];
EXPORT_SYMBOL(m68k_memory);
struct mem_info m68k_ramdisk;
static char m68k_command_line[CL_SIZE];
void (*mach_sched_init) (irq_handler_t handler) __initdata = NULL;
void (*mach_init_IRQ) (void) __initdata = NULL;
void (*mach_get_model) (char *model);
void (*mach_get_hardware_list) (struct seq_file *m);
unsigned long (*mach_gettimeoffset) (void);
int (*mach_hwclk) (int, struct rtc_time*);
EXPORT_SYMBOL(mach_hwclk);
int (*mach_set_clock_mmss) (unsigned long);
unsigned int (*mach_get_ss)(void);
int (*mach_get_rtc_pll)(struct rtc_pll_info *);
int (*mach_set_rtc_pll)(struct rtc_pll_info *);
EXPORT_SYMBOL(mach_get_ss);
EXPORT_SYMBOL(mach_get_rtc_pll);
EXPORT_SYMBOL(mach_set_rtc_pll);
void (*mach_reset)( void );
void (*mach_halt)( void );
void (*mach_power_off)( void );
long mach_max_dma_address = 0x00ffffff;
void (*mach_heartbeat) (int);
EXPORT_SYMBOL(mach_heartbeat);
void (*mach_l2_flush) (int);
#if defined(CONFIG_INPUT_M68K_BEEP) || defined(CONFIG_INPUT_M68K_BEEP_MODULE)
void (*mach_beep)(unsigned int, unsigned int);
EXPORT_SYMBOL(mach_beep);
#if defined(CONFIG_ISA) && defined(MULTI_ISA)
int isa_type;
int isa_sex;
EXPORT_SYMBOL(isa_type);
EXPORT_SYMBOL(isa_sex);
extern int amiga_parse_bootinfo(const struct bi_record *);
extern int atari_parse_bootinfo(const struct bi_record *);
extern int mac_parse_bootinfo(const struct bi_record *);
extern int q40_parse_bootinfo(const struct bi_record *);
extern int bvme6000_parse_bootinfo(const struct bi_record *);
extern int mvme16x_parse_bootinfo(const struct bi_record *);
extern int mvme147_parse_bootinfo(const struct bi_record *);
extern int hp300_parse_bootinfo(const struct bi_record *);
extern int apollo_parse_bootinfo(const struct bi_record *);
extern void config_amiga(void);
extern void config_atari(void);
extern void config_mac(void);
extern void config_sun3(void);
extern void config_apollo(void);
extern void config_mvme147(void);
extern void config_mvme16x(void);
extern void config_bvme6000(void);
extern void config_hp300(void);
extern void config_q40(void);
extern void config_sun3x(void);
#define MASK_256K 0xfffc0000
extern void paging_init(void);
static void __init m68k_parse_bootinfo(const struct bi_record *record)
void __init setup_arch(char **cmdline_p)
static int show_cpuinfo(struct seq_file *m, void *v)
static void *c_start(struct seq_file *m, loff_t *pos)
static void *c_next(struct seq_file *m, void *v, loff_t *pos)
static void c_stop(struct seq_file *m, void *v)
const struct seq_operations cpuinfo_op = ;
static int hardware_proc_show(struct seq_file *m, void *v)
static int hardware_proc_open(struct inode *inode, struct file *file)
static const struct file_operations hardware_proc_fops = ;
static int __init proc_hardware_init(void)
module_init(proc_hardware_init);
void check_bugs(void)
static int __init adb_probe_sync_enable (char *str)
__setup("adb_sync", adb_probe_sync_enable);
