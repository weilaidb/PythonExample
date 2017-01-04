#define DSS_SUBSYS_NAME "RFBI"
struct rfbi_reg ;
#define RFBI_REG(idx)		((const struct rfbi_reg) )
#define RFBI_REVISION		RFBI_REG(0x0000)
#define RFBI_SYSCONFIG		RFBI_REG(0x0010)
#define RFBI_SYSSTATUS		RFBI_REG(0x0014)
#define RFBI_CONTROL		RFBI_REG(0x0040)
#define RFBI_PIXEL_CNT		RFBI_REG(0x0044)
#define RFBI_LINE_NUMBER	RFBI_REG(0x0048)
#define RFBI_CMD		RFBI_REG(0x004c)
#define RFBI_PARAM		RFBI_REG(0x0050)
#define RFBI_DATA		RFBI_REG(0x0054)
#define RFBI_READ		RFBI_REG(0x0058)
#define RFBI_STATUS		RFBI_REG(0x005c)
#define RFBI_CONFIG(n)		RFBI_REG(0x0060 + (n)*0x18)
#define RFBI_ONOFF_TIME(n)	RFBI_REG(0x0064 + (n)*0x18)
#define RFBI_CYCLE_TIME(n)	RFBI_REG(0x0068 + (n)*0x18)
#define RFBI_DATA_CYCLE1(n)	RFBI_REG(0x006c + (n)*0x18)
#define RFBI_DATA_CYCLE2(n)	RFBI_REG(0x0070 + (n)*0x18)
#define RFBI_DATA_CYCLE3(n)	RFBI_REG(0x0074 + (n)*0x18)
#define RFBI_VSYNC_WIDTH	RFBI_REG(0x0090)
#define RFBI_HSYNC_WIDTH	RFBI_REG(0x0094)
#define REG_FLD_MOD(idx, val, start, end) \
rfbi_write_reg(idx, FLD_MOD(rfbi_read_reg(idx), val, start, end))
enum omap_rfbi_cycleformat ;
enum omap_rfbi_datatype ;
enum omap_rfbi_parallelmode ;
static int rfbi_convert_timings(struct rfbi_timings *t);
static void rfbi_get_clk_info(u32 *clk_period, u32 *max_clk_div);
static struct  rfbi;
static inline void rfbi_write_reg(const struct rfbi_reg idx, u32 val)
static inline u32 rfbi_read_reg(const struct rfbi_reg idx)
static void rfbi_enable_clocks(bool enable)
void rfbi_bus_lock(void)
EXPORT_SYMBOL(rfbi_bus_lock);
void rfbi_bus_unlock(void)
EXPORT_SYMBOL(rfbi_bus_unlock);
void omap_rfbi_write_command(const void *buf, u32 len)
EXPORT_SYMBOL(omap_rfbi_write_command);
void omap_rfbi_read_data(void *buf, u32 len)
EXPORT_SYMBOL(omap_rfbi_read_data);
void omap_rfbi_write_data(const void *buf, u32 len)
EXPORT_SYMBOL(omap_rfbi_write_data);
void omap_rfbi_write_pixels(const void __iomem *buf, int scr_width,
u16 x, u16 y,
u16 w, u16 h)
EXPORT_SYMBOL(omap_rfbi_write_pixels);
static void rfbi_transfer_area(struct omap_dss_device *dssdev, u16 width,
u16 height, void (*callback)(void *data), void *data)
static void framedone_callback(void *data, u32 mask)
#if 1
static void rfbi_print_timings(void)
static void rfbi_print_timings(void)
static u32 extif_clk_period;
static inline unsigned long round_to_extif_ticks(unsigned long ps, int div)
static int calc_reg_timing(struct rfbi_timings *t, int div)
static int calc_extif_timings(struct rfbi_timings *t)
static void rfbi_set_timings(int rfbi_module, struct rfbi_timings *t)
static int ps_to_rfbi_ticks(int time, int div)
static void rfbi_get_clk_info(u32 *clk_period, u32 *max_clk_div)
static int rfbi_convert_timings(struct rfbi_timings *t)
int omap_rfbi_setup_te(enum omap_rfbi_te_mode mode,
unsigned hs_pulse_time, unsigned vs_pulse_time,
int hs_pol_inv, int vs_pol_inv, int extif_div)
EXPORT_SYMBOL(omap_rfbi_setup_te);
int omap_rfbi_enable_te(bool enable, unsigned line)
EXPORT_SYMBOL(omap_rfbi_enable_te);
static int rfbi_configure(int rfbi_module, int bpp, int lines)
int omap_rfbi_configure(struct omap_dss_device *dssdev, int pixel_size,
int data_lines)
EXPORT_SYMBOL(omap_rfbi_configure);
int omap_rfbi_prepare_update(struct omap_dss_device *dssdev,
u16 *x, u16 *y, u16 *w, u16 *h)
EXPORT_SYMBOL(omap_rfbi_prepare_update);
int omap_rfbi_update(struct omap_dss_device *dssdev,
u16 x, u16 y, u16 w, u16 h,
void (*callback)(void *), void *data)
EXPORT_SYMBOL(omap_rfbi_update);
void rfbi_dump_regs(struct seq_file *s)
int omapdss_rfbi_display_enable(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omapdss_rfbi_display_enable);
void omapdss_rfbi_display_disable(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omapdss_rfbi_display_disable);
int rfbi_init_display(struct omap_dss_device *dssdev)
static int omap_rfbihw_probe(struct platform_device *pdev)
static int omap_rfbihw_remove(struct platform_device *pdev)
static struct platform_driver omap_rfbihw_driver = ;
int rfbi_init_platform_driver(void)
void rfbi_uninit_platform_driver(void)
