u_long atari_mch_cookie;
EXPORT_SYMBOL(atari_mch_cookie);
u_long atari_mch_type;
EXPORT_SYMBOL(atari_mch_type);
struct atari_hw_present atari_hw_present;
EXPORT_SYMBOL(atari_hw_present);
u_long atari_switches;
EXPORT_SYMBOL(atari_switches);
int atari_dont_touch_floppy_select;
EXPORT_SYMBOL(atari_dont_touch_floppy_select);
int atari_rtc_year_offset;
static void atari_reset(void);
static void atari_get_model(char *model);
static void atari_get_hardware_list(struct seq_file *m);
extern void atari_init_IRQ (void);
extern void atari_mksound(unsigned int count, unsigned int ticks);
static void atari_heartbeat(int on);
extern void atari_sched_init(irq_handler_t);
extern unsigned long atari_gettimeoffset (void);
extern int atari_mste_hwclk (int, struct rtc_time *);
extern int atari_tt_hwclk (int, struct rtc_time *);
extern int atari_mste_set_clock_mmss (unsigned long);
extern int atari_tt_set_clock_mmss (unsigned long);
static int __init scc_test(volatile char *ctla)
int __init atari_parse_bootinfo(const struct bi_record *record)
static int __init atari_switches_setup(char *str)
early_param("switches", atari_switches_setup);
void __init config_atari(void)
static void atari_heartbeat(int on)
static void atari_reset(void)
static void atari_get_model(char *model)
static void atari_get_hardware_list(struct seq_file *m)
