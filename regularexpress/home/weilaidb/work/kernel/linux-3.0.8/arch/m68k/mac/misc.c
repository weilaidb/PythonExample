#define BOOTINFO_COMPAT_1_0
#define RTC_OFFSET 2082844800
static void (*rom_reset)(void);
static long cuda_read_time(void)
static void cuda_write_time(long data)
static __u8 cuda_read_pram(int offset)
static void cuda_write_pram(int offset, __u8 data)
#define cuda_read_time() 0
#define cuda_write_time(n)
#define cuda_read_pram NULL
#define cuda_write_pram NULL
static long pmu_read_time(void)
static void pmu_write_time(long data)
static __u8 pmu_read_pram(int offset)
static void pmu_write_pram(int offset, __u8 data)
#define pmu_read_time() 0
#define pmu_write_time(n)
#define pmu_read_pram NULL
#define pmu_write_pram NULL
static __u8 via_pram_readbyte(void)
static void via_pram_writebyte(__u8 data)
static void via_pram_command(int command, __u8 *data)
static __u8 via_read_pram(int offset)
static void via_write_pram(int offset, __u8 data)
static long via_read_time(void)
static void via_write_time(long time)
static void via_shutdown(void)
static void oss_shutdown(void)
static void cuda_restart(void)
static void cuda_shutdown(void)
void pmu_restart(void)
void pmu_shutdown(void)
void mac_pram_read(int offset, __u8 *buffer, int len)
void mac_pram_write(int offset, __u8 *buffer, int len)
void mac_poweroff(void)
void mac_reset(void)
#define SECS_PER_MINUTE (60)
#define SECS_PER_HOUR  (SECS_PER_MINUTE * 60)
#define SECS_PER_DAY   (SECS_PER_HOUR * 24)
static void unmktime(unsigned long time, long offset,
int *yearp, int *monp, int *dayp,
int *hourp, int *minp, int *secp)
int mac_hwclk(int op, struct rtc_time *t)
int mac_set_clock_mmss (unsigned long nowtime)
