void rtas_indicator_progress(char *, unsigned short);
int _chrp_type;
EXPORT_SYMBOL(_chrp_type);
static struct mpic *chrp_mpic;
DEFINE_PER_CPU(struct timer_list, heartbeat_timer);
unsigned long event_scan_interval;
extern unsigned long loops_per_jiffy;
static unsigned int __iomem *briq_SPOR;
extern struct smp_ops_t chrp_smp_ops;
static const char *gg2_memtypes[4] = ;
static const char *gg2_cachesizes[4] = ;
static const char *gg2_cachetypes[4] = ;
static const char *gg2_cachemodes[4] = ;
static const char *chrp_names[] = ;
void chrp_show_cpuinfo(struct seq_file *m)
static inline void __init sio_write(u8 val, u8 index)
static inline u8 __init sio_read(u8 index)
static void __init sio_fixup_irq(const char *name, u8 device, u8 level,
u8 type)
static void __init sio_init(void)
static void __init pegasos_set_l2cr(void)
static void briq_restart(char *cmd)
static void chrp_init_early(void)
void __init chrp_setup_arch(void)
static void chrp_8259_cascade(unsigned int irq, struct irq_desc *desc)
static void __init chrp_find_openpic(void)
#if defined(CONFIG_VT) && defined(CONFIG_INPUT_ADBHID) && defined(CONFIG_XMON)
static struct irqaction xmon_irqaction = ;
static void __init chrp_find_8259(void)
void __init chrp_init_IRQ(void)
void __init
chrp_init2(void)
static int __init chrp_probe(void)
define_machine(chrp) ;
