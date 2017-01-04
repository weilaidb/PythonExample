DEFINE_SPINLOCK(rtc_lock);
EXPORT_SYMBOL(rtc_lock);
static int set_rtc_mmss(unsigned long);
unsigned long profile_pc(struct pt_regs *regs)
EXPORT_SYMBOL(profile_pc);
__volatile__ unsigned int *master_l10_counter;
u32 (*do_arch_gettimeoffset)(void);
int update_persistent_clock(struct timespec now)
#define TICK_SIZE (tick_nsec / 1000)
static irqreturn_t timer_interrupt(int dummy, void *dev_id)
static unsigned char mostek_read_byte(struct device *dev, u32 ofs)
static void mostek_write_byte(struct device *dev, u32 ofs, u8 val)
static struct m48t59_plat_data m48t59_data = ;
static struct platform_device m48t59_rtc = ;
static int __devinit clock_probe(struct platform_device *op)
static struct of_device_id clock_match[] = ;
static struct platform_driver clock_driver = ;
static int __init clock_init(void)
fs_initcall(clock_init);
u32 sbus_do_gettimeoffset(void)
u32 arch_gettimeoffset(void)
static void __init sbus_time_init(void)
void __init time_init(void)
static int set_rtc_mmss(unsigned long secs)
