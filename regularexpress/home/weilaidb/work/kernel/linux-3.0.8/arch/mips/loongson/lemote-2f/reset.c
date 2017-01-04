static void reset_cpu(void)
static void fl2f_reboot(void)
static void fl2f_shutdown(void)
void ml2f_reboot(void)
#define yl2f89_reboot ml2f_reboot
#define EC_SHUTDOWN_IO_PORT_HIGH 0xff2d
#define EC_SHUTDOWN_IO_PORT_LOW	 0xff2e
#define EC_SHUTDOWN_IO_PORT_DATA 0xff2f
#define REG_SHUTDOWN_HIGH        0xFC
#define REG_SHUTDOWN_LOW         0x29
#define BIT_SHUTDOWN_ON          (1 << 1)
static void ml2f_shutdown(void)
static void yl2f89_shutdown(void)
void mach_prepare_reboot(void)
void mach_prepare_shutdown(void)
