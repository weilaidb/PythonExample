static unsigned long amiga_model;
unsigned long amiga_eclock;
EXPORT_SYMBOL(amiga_eclock);
unsigned long amiga_colorclock;
EXPORT_SYMBOL(amiga_colorclock);
unsigned long amiga_chipset;
EXPORT_SYMBOL(amiga_chipset);
unsigned char amiga_vblank;
EXPORT_SYMBOL(amiga_vblank);
static unsigned char amiga_psfreq;
struct amiga_hw_present amiga_hw_present;
EXPORT_SYMBOL(amiga_hw_present);
static char s_a500[] __initdata = "A500";
static char s_a500p[] __initdata = "A500+";
static char s_a600[] __initdata = "A600";
static char s_a1000[] __initdata = "A1000";
static char s_a1200[] __initdata = "A1200";
static char s_a2000[] __initdata = "A2000";
static char s_a2500[] __initdata = "A2500";
static char s_a3000[] __initdata = "A3000";
static char s_a3000t[] __initdata = "A3000T";
static char s_a3000p[] __initdata = "A3000+";
static char s_a4000[] __initdata = "A4000";
static char s_a4000t[] __initdata = "A4000T";
static char s_cdtv[] __initdata = "CDTV";
static char s_cd32[] __initdata = "CD32";
static char s_draco[] __initdata = "Draco";
static char *amiga_models[] __initdata = ;
static char amiga_model_name[13] = "Amiga ";
static void amiga_sched_init(irq_handler_t handler);
static void amiga_get_model(char *model);
static void amiga_get_hardware_list(struct seq_file *m);
static unsigned long amiga_gettimeoffset(void);
extern void amiga_mksound(unsigned int count, unsigned int ticks);
static void amiga_reset(void);
extern void amiga_init_sound(void);
static void amiga_mem_console_write(struct console *co, const char *b,
unsigned int count);
static void amiga_heartbeat(int on);
static struct console amiga_console_driver = ;
static struct  mb_resources = ;
static struct resource ram_resource[NUM_MEMINFO];
int amiga_parse_bootinfo(const struct bi_record *record)
static void __init amiga_identify(void)
void __init config_amiga(void)
static unsigned short jiffy_ticks;
static void __init amiga_sched_init(irq_handler_t timer_routine)
#define TICK_SIZE 10000
static unsigned long amiga_gettimeoffset(void)
static NORET_TYPE void amiga_reset(void)
ATTRIB_NORET;
static void amiga_reset(void)
#define SAVEKMSG_MAXMEM		128*1024
#define SAVEKMSG_MAGIC1		0x53415645
#define SAVEKMSG_MAGIC2		0x4B4D5347
struct savekmsg ;
static struct savekmsg *savekmsg;
static void amiga_mem_console_write(struct console *co, const char *s,
unsigned int count)
static int __init amiga_savekmsg_setup(char *arg)
early_param("debug", amiga_savekmsg_setup);
static void amiga_serial_putc(char c)
static void amiga_serial_console_write(struct console *co, const char *s,
unsigned int count)
static int __init amiga_debug_setup(char *arg)
early_param("debug", amiga_debug_setup);
static void amiga_heartbeat(int on)
static void amiga_get_model(char *model)
static void amiga_get_hardware_list(struct seq_file *m)
EXPORT_SYMBOL_GPL(key_maps);
