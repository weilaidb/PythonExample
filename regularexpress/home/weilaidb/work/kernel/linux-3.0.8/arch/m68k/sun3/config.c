char sun3_reserved_pmeg[SUN3_PMEGS_NUM];
extern unsigned long sun3_gettimeoffset(void);
static void sun3_sched_init(irq_handler_t handler);
extern void sun3_get_model (char* model);
extern int sun3_hwclk(int set, struct rtc_time *t);
volatile char* clock_va;
extern unsigned long availmem;
unsigned long num_pages;
static void sun3_get_hardware_list(struct seq_file *m)
void __init sun3_init(void)
static void sun3_reboot (void)
static void sun3_halt (void)
static void __init sun3_bootmem_alloc(unsigned long memory_start,
unsigned long memory_end)
void __init config_sun3(void)
static void __init sun3_sched_init(irq_handler_t timer_routine)
