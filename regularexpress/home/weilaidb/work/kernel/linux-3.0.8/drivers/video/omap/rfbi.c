#define OMAP_RFBI_RATE_LIMIT	1
#define RFBI_BASE		0x48050800
#define RFBI_REVISION		0x0000
#define RFBI_SYSCONFIG		0x0010
#define RFBI_SYSSTATUS		0x0014
#define RFBI_CONTROL		0x0040
#define RFBI_PIXEL_CNT		0x0044
#define RFBI_LINE_NUMBER	0x0048
#define RFBI_CMD		0x004c
#define RFBI_PARAM		0x0050
#define RFBI_DATA		0x0054
#define RFBI_READ		0x0058
#define RFBI_STATUS		0x005c
#define RFBI_CONFIG0		0x0060
#define RFBI_ONOFF_TIME0	0x0064
#define RFBI_CYCLE_TIME0	0x0068
#define RFBI_DATA_CYCLE1_0	0x006c
#define RFBI_DATA_CYCLE2_0	0x0070
#define RFBI_DATA_CYCLE3_0	0x0074
#define RFBI_VSYNC_WIDTH	0x0090
#define RFBI_HSYNC_WIDTH	0x0094
#define DISPC_BASE		0x48050400
#define DISPC_CONTROL		0x0040
#define DISPC_IRQ_FRAMEMASK     0x0001
static struct  rfbi;
static inline void rfbi_write_reg(int idx, u32 val)
static inline u32 rfbi_read_reg(int idx)
static int rfbi_get_clocks(void)
static void rfbi_put_clocks(void)
static void rfbi_enable_clocks(int enable)
static void rfbi_print_timings(void)
static void rfbi_print_timings(void)
static void rfbi_set_timings(const struct extif_timings *t)
static void rfbi_get_clk_info(u32 *clk_period, u32 *max_clk_div)
static int ps_to_rfbi_ticks(int time, int div)
static unsigned long rfbi_get_max_tx_rate(void)
static int rfbi_get_max_tx_rate(void)
static int rfbi_convert_timings(struct extif_timings *t)
static int rfbi_setup_tearsync(unsigned pin_cnt,
unsigned hs_pulse_time, unsigned vs_pulse_time,
int hs_pol_inv, int vs_pol_inv, int extif_div)
static int rfbi_enable_tearsync(int enable, unsigned line)
static void rfbi_write_command(const void *buf, unsigned int len)
static void rfbi_read_data(void *buf, unsigned int len)
static void rfbi_write_data(const void *buf, unsigned int len)
static void rfbi_transfer_area(int width, int height,
void (callback)(void * data), void *data)
static inline void _stop_transfer(void)
static void rfbi_dma_callback(void *data)
static void rfbi_set_bits_per_cycle(int bpc)
static int rfbi_init(struct omapfb_device *fbdev)
static void rfbi_cleanup(void)
const struct lcd_ctrl_extif omap2_ext_if = ;
