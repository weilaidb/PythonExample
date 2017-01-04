#define CPEI_INTERVAL	(5*HZ)
struct timer_list sn_cpei_timer;
void sn_init_cpei_timer(void);
static DEFINE_MUTEX(sn_oemdata_mutex);
static u8 **sn_oemdata;
static u64 *sn_oemdata_size, sn_oemdata_bufsize;
static int print_hook(const char *fmt, ...)
static void sn_cpei_handler(int irq, void *devid, struct pt_regs *regs)
static void sn_cpei_timer_handler(unsigned long dummy)
void sn_init_cpei_timer(void)
static int
sn_platform_plat_specific_err_print(const u8 * sect_header, u8 ** oemdata,
u64 * oemdata_size)
int sn_salinfo_platform_oemdata(const u8 *sect_header, u8 **oemdata, u64 *oemdata_size)
static int __init sn_salinfo_init(void)
module_init(sn_salinfo_init)
