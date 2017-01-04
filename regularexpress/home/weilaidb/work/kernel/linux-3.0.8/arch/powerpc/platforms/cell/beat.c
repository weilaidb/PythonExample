static int beat_pm_poweroff_flag;
void beat_restart(char *cmd)
void beat_power_off(void)
u64 beat_halt_code = 0x1000000000000000UL;
EXPORT_SYMBOL(beat_halt_code);
void beat_halt(void)
int beat_set_rtc_time(struct rtc_time *rtc_time)
void beat_get_rtc_time(struct rtc_time *rtc_time)
#define	BEAT_NVRAM_SIZE	4096
ssize_t beat_nvram_read(char *buf, size_t count, loff_t *index)
ssize_t beat_nvram_write(char *buf, size_t count, loff_t *index)
ssize_t beat_nvram_get_size(void)
int beat_set_xdabr(unsigned long dabr)
int64_t beat_get_term_char(u64 vterm, u64 *len, u64 *t1, u64 *t2)
EXPORT_SYMBOL(beat_get_term_char);
int64_t beat_put_term_char(u64 vterm, u64 len, u64 t1, u64 t2)
EXPORT_SYMBOL(beat_put_term_char);
void beat_power_save(void)
void beat_kexec_cpu_down(int crash, int secondary)
static irqreturn_t beat_power_event(int virq, void *arg)
static irqreturn_t beat_reset_event(int virq, void *arg)
static struct beat_event_list  beat_event_list[] = ;
static int __init beat_register_event(void)
static int __init beat_event_init(void)
device_initcall(beat_event_init);
