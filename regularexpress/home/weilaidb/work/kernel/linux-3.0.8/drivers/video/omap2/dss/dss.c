#define DSS_SUBSYS_NAME "DSS"
#define DSS_SZ_REGS			SZ_512
struct dss_reg ;
#define DSS_REG(idx)			((const struct dss_reg) )
#define DSS_REVISION			DSS_REG(0x0000)
#define DSS_SYSCONFIG			DSS_REG(0x0010)
#define DSS_SYSSTATUS			DSS_REG(0x0014)
#define DSS_CONTROL			DSS_REG(0x0040)
#define DSS_SDI_CONTROL			DSS_REG(0x0044)
#define DSS_PLL_CONTROL			DSS_REG(0x0048)
#define DSS_SDI_STATUS			DSS_REG(0x005C)
#define REG_GET(idx, start, end) \
FLD_GET(dss_read_reg(idx), start, end)
#define REG_FLD_MOD(idx, val, start, end) \
dss_write_reg(idx, FLD_MOD(dss_read_reg(idx), val, start, end))
static struct  dss;
static const char * const dss_generic_clk_source_names[] = ;
static void dss_clk_enable_all_no_ctx(void);
static void dss_clk_disable_all_no_ctx(void);
static void dss_clk_enable_no_ctx(enum dss_clock clks);
static void dss_clk_disable_no_ctx(enum dss_clock clks);
static int _omap_dss_wait_reset(void);
static inline void dss_write_reg(const struct dss_reg idx, u32 val)
static inline u32 dss_read_reg(const struct dss_reg idx)
#define SR(reg) \
dss.ctx[(DSS_##reg).idx / sizeof(u32)] = dss_read_reg(DSS_##reg)
#define RR(reg) \
dss_write_reg(DSS_##reg, dss.ctx[(DSS_##reg).idx / sizeof(u32)])
void dss_save_context(void)
void dss_restore_context(void)
#undef SR
#undef RR
void dss_sdi_init(u8 datapairs)
int dss_sdi_enable(void)
void dss_sdi_disable(void)
const char *dss_get_generic_clk_source_name(enum omap_dss_clk_source clk_src)
void dss_dump_clocks(struct seq_file *s)
void dss_dump_regs(struct seq_file *s)
void dss_select_dispc_clk_source(enum omap_dss_clk_source clk_src)
void dss_select_dsi_clk_source(int dsi_module,
enum omap_dss_clk_source clk_src)
void dss_select_lcd_clk_source(enum omap_channel channel,
enum omap_dss_clk_source clk_src)
enum omap_dss_clk_source dss_get_dispc_clk_source(void)
enum omap_dss_clk_source dss_get_dsi_clk_source(int dsi_module)
enum omap_dss_clk_source dss_get_lcd_clk_source(enum omap_channel channel)
int dss_calc_clock_rates(struct dss_clock_info *cinfo)
int dss_set_clock_div(struct dss_clock_info *cinfo)
int dss_get_clock_div(struct dss_clock_info *cinfo)
unsigned long dss_get_dpll4_rate(void)
int dss_calc_clock_div(bool is_tft, unsigned long req_pck,
struct dss_clock_info *dss_cinfo,
struct dispc_clock_info *dispc_cinfo)
static int _omap_dss_wait_reset(void)
static int _omap_dss_reset(void)
void dss_set_venc_output(enum omap_dss_venc_type type)
void dss_set_dac_pwrdn_bgz(bool enable)
void dss_select_hdmi_venc_clk_source(enum dss_hdmi_venc_clk_source_select hdmi)
static int dss_init(void)
static void dss_exit(void)
static int dss_get_ctx_id(void)
int dss_need_ctx_restore(void)
static void save_all_ctx(void)
static void restore_all_ctx(void)
static int dss_get_clock(struct clk **clock, const char *clk_name)
static int dss_get_clocks(void)
static void dss_put_clocks(void)
unsigned long dss_clk_get_rate(enum dss_clock clk)
static unsigned count_clk_bits(enum dss_clock clks)
static void dss_clk_enable_no_ctx(enum dss_clock clks)
void dss_clk_enable(enum dss_clock clks)
static void dss_clk_disable_no_ctx(enum dss_clock clks)
void dss_clk_disable(enum dss_clock clks)
static void dss_clk_enable_all_no_ctx(void)
static void dss_clk_disable_all_no_ctx(void)
#if defined(CONFIG_DEBUG_FS) && defined(CONFIG_OMAP2_DSS_DEBUG_SUPPORT)
static void core_dump_clocks(struct seq_file *s)
#if defined(CONFIG_DEBUG_FS) && defined(CONFIG_OMAP2_DSS_DEBUG_SUPPORT)
void dss_debug_dump_clocks(struct seq_file *s)
static int omap_dsshw_probe(struct platform_device *pdev)
static int omap_dsshw_remove(struct platform_device *pdev)
static struct platform_driver omap_dsshw_driver = ;
int dss_init_platform_driver(void)
void dss_uninit_platform_driver(void)
