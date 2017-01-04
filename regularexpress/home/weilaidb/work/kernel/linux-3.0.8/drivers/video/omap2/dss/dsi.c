#define DSS_SUBSYS_NAME "DSI"
#define DSI_CATCH_MISSING_TE
struct dsi_reg ;
#define DSI_REG(idx)		((const struct dsi_reg) )
#define DSI_SZ_REGS		SZ_1K
#define DSI_REVISION			DSI_REG(0x0000)
#define DSI_SYSCONFIG			DSI_REG(0x0010)
#define DSI_SYSSTATUS			DSI_REG(0x0014)
#define DSI_IRQSTATUS			DSI_REG(0x0018)
#define DSI_IRQENABLE			DSI_REG(0x001C)
#define DSI_CTRL			DSI_REG(0x0040)
#define DSI_GNQ				DSI_REG(0x0044)
#define DSI_COMPLEXIO_CFG1		DSI_REG(0x0048)
#define DSI_COMPLEXIO_IRQ_STATUS	DSI_REG(0x004C)
#define DSI_COMPLEXIO_IRQ_ENABLE	DSI_REG(0x0050)
#define DSI_CLK_CTRL			DSI_REG(0x0054)
#define DSI_TIMING1			DSI_REG(0x0058)
#define DSI_TIMING2			DSI_REG(0x005C)
#define DSI_VM_TIMING1			DSI_REG(0x0060)
#define DSI_VM_TIMING2			DSI_REG(0x0064)
#define DSI_VM_TIMING3			DSI_REG(0x0068)
#define DSI_CLK_TIMING			DSI_REG(0x006C)
#define DSI_TX_FIFO_VC_SIZE		DSI_REG(0x0070)
#define DSI_RX_FIFO_VC_SIZE		DSI_REG(0x0074)
#define DSI_COMPLEXIO_CFG2		DSI_REG(0x0078)
#define DSI_RX_FIFO_VC_FULLNESS		DSI_REG(0x007C)
#define DSI_VM_TIMING4			DSI_REG(0x0080)
#define DSI_TX_FIFO_VC_EMPTINESS	DSI_REG(0x0084)
#define DSI_VM_TIMING5			DSI_REG(0x0088)
#define DSI_VM_TIMING6			DSI_REG(0x008C)
#define DSI_VM_TIMING7			DSI_REG(0x0090)
#define DSI_STOPCLK_TIMING		DSI_REG(0x0094)
#define DSI_VC_CTRL(n)			DSI_REG(0x0100 + (n * 0x20))
#define DSI_VC_TE(n)			DSI_REG(0x0104 + (n * 0x20))
#define DSI_VC_LONG_PACKET_HEADER(n)	DSI_REG(0x0108 + (n * 0x20))
#define DSI_VC_LONG_PACKET_PAYLOAD(n)	DSI_REG(0x010C + (n * 0x20))
#define DSI_VC_SHORT_PACKET_HEADER(n)	DSI_REG(0x0110 + (n * 0x20))
#define DSI_VC_IRQSTATUS(n)		DSI_REG(0x0118 + (n * 0x20))
#define DSI_VC_IRQENABLE(n)		DSI_REG(0x011C + (n * 0x20))
#define DSI_DSIPHY_CFG0			DSI_REG(0x200 + 0x0000)
#define DSI_DSIPHY_CFG1			DSI_REG(0x200 + 0x0004)
#define DSI_DSIPHY_CFG2			DSI_REG(0x200 + 0x0008)
#define DSI_DSIPHY_CFG5			DSI_REG(0x200 + 0x0014)
#define DSI_DSIPHY_CFG10		DSI_REG(0x200 + 0x0028)
#define DSI_PLL_CONTROL			DSI_REG(0x300 + 0x0000)
#define DSI_PLL_STATUS			DSI_REG(0x300 + 0x0004)
#define DSI_PLL_GO			DSI_REG(0x300 + 0x0008)
#define DSI_PLL_CONFIGURATION1		DSI_REG(0x300 + 0x000C)
#define DSI_PLL_CONFIGURATION2		DSI_REG(0x300 + 0x0010)
#define REG_GET(dsidev, idx, start, end) \
FLD_GET(dsi_read_reg(dsidev, idx), start, end)
#define REG_FLD_MOD(dsidev, idx, val, start, end) \
dsi_write_reg(dsidev, idx, FLD_MOD(dsi_read_reg(dsidev, idx), val, start, end))
#define DSI_IRQ_VC0		(1 << 0)
#define DSI_IRQ_VC1		(1 << 1)
#define DSI_IRQ_VC2		(1 << 2)
#define DSI_IRQ_VC3		(1 << 3)
#define DSI_IRQ_WAKEUP		(1 << 4)
#define DSI_IRQ_RESYNC		(1 << 5)
#define DSI_IRQ_PLL_LOCK	(1 << 7)
#define DSI_IRQ_PLL_UNLOCK	(1 << 8)
#define DSI_IRQ_PLL_RECALL	(1 << 9)
#define DSI_IRQ_COMPLEXIO_ERR	(1 << 10)
#define DSI_IRQ_HS_TX_TIMEOUT	(1 << 14)
#define DSI_IRQ_LP_RX_TIMEOUT	(1 << 15)
#define DSI_IRQ_TE_TRIGGER	(1 << 16)
#define DSI_IRQ_ACK_TRIGGER	(1 << 17)
#define DSI_IRQ_SYNC_LOST	(1 << 18)
#define DSI_IRQ_LDO_POWER_GOOD	(1 << 19)
#define DSI_IRQ_TA_TIMEOUT	(1 << 20)
#define DSI_IRQ_ERROR_MASK \
(DSI_IRQ_HS_TX_TIMEOUT | DSI_IRQ_LP_RX_TIMEOUT | DSI_IRQ_SYNC_LOST | \
DSI_IRQ_TA_TIMEOUT)
#define DSI_IRQ_CHANNEL_MASK	0xf
#define DSI_VC_IRQ_CS		(1 << 0)
#define DSI_VC_IRQ_ECC_CORR	(1 << 1)
#define DSI_VC_IRQ_PACKET_SENT	(1 << 2)
#define DSI_VC_IRQ_FIFO_TX_OVF	(1 << 3)
#define DSI_VC_IRQ_FIFO_RX_OVF	(1 << 4)
#define DSI_VC_IRQ_BTA		(1 << 5)
#define DSI_VC_IRQ_ECC_NO_CORR	(1 << 6)
#define DSI_VC_IRQ_FIFO_TX_UDF	(1 << 7)
#define DSI_VC_IRQ_PP_BUSY_CHANGE (1 << 8)
#define DSI_VC_IRQ_ERROR_MASK \
(DSI_VC_IRQ_CS | DSI_VC_IRQ_ECC_CORR | DSI_VC_IRQ_FIFO_TX_OVF | \
DSI_VC_IRQ_FIFO_RX_OVF | DSI_VC_IRQ_ECC_NO_CORR | \
DSI_VC_IRQ_FIFO_TX_UDF)
#define DSI_CIO_IRQ_ERRSYNCESC1		(1 << 0)
#define DSI_CIO_IRQ_ERRSYNCESC2		(1 << 1)
#define DSI_CIO_IRQ_ERRSYNCESC3		(1 << 2)
#define DSI_CIO_IRQ_ERRSYNCESC4		(1 << 3)
#define DSI_CIO_IRQ_ERRSYNCESC5		(1 << 4)
#define DSI_CIO_IRQ_ERRESC1		(1 << 5)
#define DSI_CIO_IRQ_ERRESC2		(1 << 6)
#define DSI_CIO_IRQ_ERRESC3		(1 << 7)
#define DSI_CIO_IRQ_ERRESC4		(1 << 8)
#define DSI_CIO_IRQ_ERRESC5		(1 << 9)
#define DSI_CIO_IRQ_ERRCONTROL1		(1 << 10)
#define DSI_CIO_IRQ_ERRCONTROL2		(1 << 11)
#define DSI_CIO_IRQ_ERRCONTROL3		(1 << 12)
#define DSI_CIO_IRQ_ERRCONTROL4		(1 << 13)
#define DSI_CIO_IRQ_ERRCONTROL5		(1 << 14)
#define DSI_CIO_IRQ_STATEULPS1		(1 << 15)
#define DSI_CIO_IRQ_STATEULPS2		(1 << 16)
#define DSI_CIO_IRQ_STATEULPS3		(1 << 17)
#define DSI_CIO_IRQ_STATEULPS4		(1 << 18)
#define DSI_CIO_IRQ_STATEULPS5		(1 << 19)
#define DSI_CIO_IRQ_ERRCONTENTIONLP0_1	(1 << 20)
#define DSI_CIO_IRQ_ERRCONTENTIONLP1_1	(1 << 21)
#define DSI_CIO_IRQ_ERRCONTENTIONLP0_2	(1 << 22)
#define DSI_CIO_IRQ_ERRCONTENTIONLP1_2	(1 << 23)
#define DSI_CIO_IRQ_ERRCONTENTIONLP0_3	(1 << 24)
#define DSI_CIO_IRQ_ERRCONTENTIONLP1_3	(1 << 25)
#define DSI_CIO_IRQ_ERRCONTENTIONLP0_4	(1 << 26)
#define DSI_CIO_IRQ_ERRCONTENTIONLP1_4	(1 << 27)
#define DSI_CIO_IRQ_ERRCONTENTIONLP0_5	(1 << 28)
#define DSI_CIO_IRQ_ERRCONTENTIONLP1_5	(1 << 29)
#define DSI_CIO_IRQ_ULPSACTIVENOT_ALL0	(1 << 30)
#define DSI_CIO_IRQ_ULPSACTIVENOT_ALL1	(1 << 31)
#define DSI_CIO_IRQ_ERROR_MASK \
(DSI_CIO_IRQ_ERRSYNCESC1 | DSI_CIO_IRQ_ERRSYNCESC2 | \
DSI_CIO_IRQ_ERRSYNCESC3 | DSI_CIO_IRQ_ERRSYNCESC4 | \
DSI_CIO_IRQ_ERRSYNCESC5 | \
DSI_CIO_IRQ_ERRESC1 | DSI_CIO_IRQ_ERRESC2 | \
DSI_CIO_IRQ_ERRESC3 | DSI_CIO_IRQ_ERRESC4 | \
DSI_CIO_IRQ_ERRESC5 | \
DSI_CIO_IRQ_ERRCONTROL1 | DSI_CIO_IRQ_ERRCONTROL2 | \
DSI_CIO_IRQ_ERRCONTROL3 | DSI_CIO_IRQ_ERRCONTROL4 | \
DSI_CIO_IRQ_ERRCONTROL5 | \
DSI_CIO_IRQ_ERRCONTENTIONLP0_1 | DSI_CIO_IRQ_ERRCONTENTIONLP1_1 | \
DSI_CIO_IRQ_ERRCONTENTIONLP0_2 | DSI_CIO_IRQ_ERRCONTENTIONLP1_2 | \
DSI_CIO_IRQ_ERRCONTENTIONLP0_3 | DSI_CIO_IRQ_ERRCONTENTIONLP1_3 | \
DSI_CIO_IRQ_ERRCONTENTIONLP0_4 | DSI_CIO_IRQ_ERRCONTENTIONLP1_4 | \
DSI_CIO_IRQ_ERRCONTENTIONLP0_5 | DSI_CIO_IRQ_ERRCONTENTIONLP1_5)
#define DSI_DT_DCS_SHORT_WRITE_0	0x05
#define DSI_DT_DCS_SHORT_WRITE_1	0x15
#define DSI_DT_DCS_READ			0x06
#define DSI_DT_SET_MAX_RET_PKG_SIZE	0x37
#define DSI_DT_NULL_PACKET		0x09
#define DSI_DT_DCS_LONG_WRITE		0x39
#define DSI_DT_RX_ACK_WITH_ERR		0x02
#define DSI_DT_RX_DCS_LONG_READ		0x1c
#define DSI_DT_RX_SHORT_READ_1		0x21
#define DSI_DT_RX_SHORT_READ_2		0x22
typedef void (*omap_dsi_isr_t) (void *arg, u32 mask);
#define DSI_MAX_NR_ISRS                2
struct dsi_isr_data ;
enum fifo_size ;
enum dsi_vc_mode ;
enum dsi_lane ;
struct dsi_update_region ;
struct dsi_irq_stats ;
struct dsi_isr_tables ;
struct dsi_data ;
struct dsi_packet_sent_handler_data ;
static struct platform_device *dsi_pdev_map[MAX_NUM_DSI];
static unsigned int dsi_perf;
module_param_named(dsi_perf, dsi_perf, bool, 0644);
static inline struct dsi_data *dsi_get_dsidrv_data(struct platform_device *dsidev)
static inline struct platform_device *dsi_get_dsidev_from_dssdev(struct omap_dss_device *dssdev)
struct platform_device *dsi_get_dsidev_from_id(int module)
static int dsi_get_dsidev_id(struct platform_device *dsidev)
static inline void dsi_write_reg(struct platform_device *dsidev,
const struct dsi_reg idx, u32 val)
static inline u32 dsi_read_reg(struct platform_device *dsidev,
const struct dsi_reg idx)
void dsi_save_context(void)
void dsi_restore_context(void)
void dsi_bus_lock(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(dsi_bus_lock);
void dsi_bus_unlock(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(dsi_bus_unlock);
static bool dsi_bus_is_locked(struct platform_device *dsidev)
static void dsi_completion_handler(void *data, u32 mask)
static inline int wait_for_bit_change(struct platform_device *dsidev,
const struct dsi_reg idx, int bitnum, int value)
static void dsi_perf_mark_setup(struct platform_device *dsidev)
static void dsi_perf_mark_start(struct platform_device *dsidev)
static void dsi_perf_show(struct platform_device *dsidev, const char *name)
#define dsi_perf_mark_setup(x)
#define dsi_perf_mark_start(x)
#define dsi_perf_show(x, y)
static void print_irq_status(u32 status)
static void print_irq_status_vc(int channel, u32 status)
static void print_irq_status_cio(u32 status)
static void dsi_collect_irq_stats(struct platform_device *dsidev, u32 irqstatus,
u32 *vcstatus, u32 ciostatus)
#define dsi_collect_irq_stats(dsidev, irqstatus, vcstatus, ciostatus)
static int debug_irq;
static void dsi_handle_irq_errors(struct platform_device *dsidev, u32 irqstatus,
u32 *vcstatus, u32 ciostatus)
static void dsi_call_isrs(struct dsi_isr_data *isr_array,
unsigned isr_array_size, u32 irqstatus)
static void dsi_handle_isrs(struct dsi_isr_tables *isr_tables,
u32 irqstatus, u32 *vcstatus, u32 ciostatus)
static irqreturn_t omap_dsi_irq_handler(int irq, void *arg)
static void _omap_dsi_configure_irqs(struct platform_device *dsidev,
struct dsi_isr_data *isr_array,
unsigned isr_array_size, u32 default_mask,
const struct dsi_reg enable_reg,
const struct dsi_reg status_reg)
static void _omap_dsi_set_irqs(struct platform_device *dsidev)
static void _omap_dsi_set_irqs_vc(struct platform_device *dsidev, int vc)
static void _omap_dsi_set_irqs_cio(struct platform_device *dsidev)
static void _dsi_initialize_irq(struct platform_device *dsidev)
static int _dsi_register_isr(omap_dsi_isr_t isr, void *arg, u32 mask,
struct dsi_isr_data *isr_array, unsigned isr_array_size)
static int _dsi_unregister_isr(omap_dsi_isr_t isr, void *arg, u32 mask,
struct dsi_isr_data *isr_array, unsigned isr_array_size)
static int dsi_register_isr(struct platform_device *dsidev, omap_dsi_isr_t isr,
void *arg, u32 mask)
static int dsi_unregister_isr(struct platform_device *dsidev,
omap_dsi_isr_t isr, void *arg, u32 mask)
static int dsi_register_isr_vc(struct platform_device *dsidev, int channel,
omap_dsi_isr_t isr, void *arg, u32 mask)
static int dsi_unregister_isr_vc(struct platform_device *dsidev, int channel,
omap_dsi_isr_t isr, void *arg, u32 mask)
static int dsi_register_isr_cio(struct platform_device *dsidev,
omap_dsi_isr_t isr, void *arg, u32 mask)
static int dsi_unregister_isr_cio(struct platform_device *dsidev,
omap_dsi_isr_t isr, void *arg, u32 mask)
static u32 dsi_get_errors(struct platform_device *dsidev)
static inline void enable_clocks(bool enable)
static inline void dsi_enable_pll_clock(struct platform_device *dsidev,
bool enable)
static void _dsi_print_reset_status(struct platform_device *dsidev)
#define _dsi_print_reset_status(x)
static inline int dsi_if_enable(struct platform_device *dsidev, bool enable)
unsigned long dsi_get_pll_hsdiv_dispc_rate(struct platform_device *dsidev)
static unsigned long dsi_get_pll_hsdiv_dsi_rate(struct platform_device *dsidev)
static unsigned long dsi_get_txbyteclkhs(struct platform_device *dsidev)
static unsigned long dsi_fclk_rate(struct platform_device *dsidev)
static int dsi_set_lp_clk_divisor(struct omap_dss_device *dssdev)
static void dsi_enable_scp_clk(struct platform_device *dsidev)
static void dsi_disable_scp_clk(struct platform_device *dsidev)
enum dsi_pll_power_state ;
static int dsi_pll_power(struct platform_device *dsidev,
enum dsi_pll_power_state state)
static int dsi_calc_clock_rates(struct omap_dss_device *dssdev,
struct dsi_clock_info *cinfo)
int dsi_pll_calc_clock_div_pck(struct platform_device *dsidev, bool is_tft,
unsigned long req_pck, struct dsi_clock_info *dsi_cinfo,
struct dispc_clock_info *dispc_cinfo)
int dsi_pll_set_clock_div(struct platform_device *dsidev,
struct dsi_clock_info *cinfo)
int dsi_pll_init(struct platform_device *dsidev, bool enable_hsclk,
bool enable_hsdiv)
void dsi_pll_uninit(struct platform_device *dsidev, bool disconnect_lanes)
static void dsi_dump_dsidev_clocks(struct platform_device *dsidev,
struct seq_file *s)
void dsi_dump_clocks(struct seq_file *s)
static void dsi_dump_dsidev_irqs(struct platform_device *dsidev,
struct seq_file *s)
static void dsi1_dump_irqs(struct seq_file *s)
static void dsi2_dump_irqs(struct seq_file *s)
void dsi_create_debugfs_files_irq(struct dentry *debugfs_dir,
const struct file_operations *debug_fops)
static void dsi_dump_dsidev_regs(struct platform_device *dsidev,
struct seq_file *s)
static void dsi1_dump_regs(struct seq_file *s)
static void dsi2_dump_regs(struct seq_file *s)
void dsi_create_debugfs_files_reg(struct dentry *debugfs_dir,
const struct file_operations *debug_fops)
enum dsi_cio_power_state ;
static int dsi_cio_power(struct platform_device *dsidev,
enum dsi_cio_power_state state)
static inline int dsi_get_num_data_lanes(struct platform_device *dsidev)
static inline int dsi_get_num_data_lanes_dssdev(struct omap_dss_device *dssdev)
static unsigned dsi_get_line_buf_size(struct platform_device *dsidev)
static void dsi_set_lane_config(struct omap_dss_device *dssdev)
static inline unsigned ns2ddr(struct platform_device *dsidev, unsigned ns)
static inline unsigned ddr2ns(struct platform_device *dsidev, unsigned ddr)
static void dsi_cio_timings(struct platform_device *dsidev)
static void dsi_cio_enable_lane_override(struct omap_dss_device *dssdev,
enum dsi_lane lanes)
static void dsi_cio_disable_lane_override(struct platform_device *dsidev)
static int dsi_cio_wait_tx_clk_esc_reset(struct omap_dss_device *dssdev)
static int dsi_cio_init(struct omap_dss_device *dssdev)
static void dsi_cio_uninit(struct platform_device *dsidev)
static int _dsi_wait_reset(struct platform_device *dsidev)
static int _dsi_reset(struct platform_device *dsidev)
static void dsi_config_tx_fifo(struct platform_device *dsidev,
enum fifo_size size1, enum fifo_size size2,
enum fifo_size size3, enum fifo_size size4)
static void dsi_config_rx_fifo(struct platform_device *dsidev,
enum fifo_size size1, enum fifo_size size2,
enum fifo_size size3, enum fifo_size size4)
static int dsi_force_tx_stop_mode_io(struct platform_device *dsidev)
static bool dsi_vc_is_enabled(struct platform_device *dsidev, int channel)
static void dsi_packet_sent_handler_vp(void *data, u32 mask)
static int dsi_sync_vc_vp(struct platform_device *dsidev, int channel)
static void dsi_packet_sent_handler_l4(void *data, u32 mask)
static int dsi_sync_vc_l4(struct platform_device *dsidev, int channel)
static int dsi_sync_vc(struct platform_device *dsidev, int channel)
static int dsi_vc_enable(struct platform_device *dsidev, int channel,
bool enable)
static void dsi_vc_initial_config(struct platform_device *dsidev, int channel)
static int dsi_vc_config_l4(struct platform_device *dsidev, int channel)
static int dsi_vc_config_vp(struct platform_device *dsidev, int channel)
void omapdss_dsi_vc_enable_hs(struct omap_dss_device *dssdev, int channel,
bool enable)
EXPORT_SYMBOL(omapdss_dsi_vc_enable_hs);
static void dsi_vc_flush_long_data(struct platform_device *dsidev, int channel)
static void dsi_show_rx_ack_with_err(u16 err)
static u16 dsi_vc_flush_receive_data(struct platform_device *dsidev,
int channel)
static int dsi_vc_send_bta(struct platform_device *dsidev, int channel)
int dsi_vc_send_bta_sync(struct omap_dss_device *dssdev, int channel)
EXPORT_SYMBOL(dsi_vc_send_bta_sync);
static inline void dsi_vc_write_long_header(struct platform_device *dsidev,
int channel, u8 data_type, u16 len, u8 ecc)
static inline void dsi_vc_write_long_payload(struct platform_device *dsidev,
int channel, u8 b1, u8 b2, u8 b3, u8 b4)
static int dsi_vc_send_long(struct platform_device *dsidev, int channel,
u8 data_type, u8 *data, u16 len, u8 ecc)
static int dsi_vc_send_short(struct platform_device *dsidev, int channel,
u8 data_type, u16 data, u8 ecc)
int dsi_vc_send_null(struct omap_dss_device *dssdev, int channel)
EXPORT_SYMBOL(dsi_vc_send_null);
int dsi_vc_dcs_write_nosync(struct omap_dss_device *dssdev, int channel,
u8 *data, int len)
EXPORT_SYMBOL(dsi_vc_dcs_write_nosync);
int dsi_vc_dcs_write(struct omap_dss_device *dssdev, int channel, u8 *data,
int len)
EXPORT_SYMBOL(dsi_vc_dcs_write);
int dsi_vc_dcs_write_0(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd)
EXPORT_SYMBOL(dsi_vc_dcs_write_0);
int dsi_vc_dcs_write_1(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd,
u8 param)
EXPORT_SYMBOL(dsi_vc_dcs_write_1);
int dsi_vc_dcs_read(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd,
u8 *buf, int buflen)
EXPORT_SYMBOL(dsi_vc_dcs_read);
int dsi_vc_dcs_read_1(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd,
u8 *data)
EXPORT_SYMBOL(dsi_vc_dcs_read_1);
int dsi_vc_dcs_read_2(struct omap_dss_device *dssdev, int channel, u8 dcs_cmd,
u8 *data1, u8 *data2)
EXPORT_SYMBOL(dsi_vc_dcs_read_2);
int dsi_vc_set_max_rx_packet_size(struct omap_dss_device *dssdev, int channel,
u16 len)
EXPORT_SYMBOL(dsi_vc_set_max_rx_packet_size);
static int dsi_enter_ulps(struct platform_device *dsidev)
static void dsi_set_lp_rx_timeout(struct platform_device *dsidev,
unsigned ticks, bool x4, bool x16)
static void dsi_set_ta_timeout(struct platform_device *dsidev, unsigned ticks,
bool x8, bool x16)
static void dsi_set_stop_state_counter(struct platform_device *dsidev,
unsigned ticks, bool x4, bool x16)
static void dsi_set_hs_tx_timeout(struct platform_device *dsidev,
unsigned ticks, bool x4, bool x16)
static int dsi_proto_config(struct omap_dss_device *dssdev)
static void dsi_proto_timings(struct omap_dss_device *dssdev)
#define DSI_DECL_VARS \
int __dsi_cb = 0; u32 __dsi_cv = 0;
#define DSI_FLUSH(dsidev, ch) \
if (__dsi_cb > 0)
#define DSI_PUSH(dsidev, ch, data) \
do  while (0)
static int dsi_update_screen_l4(struct omap_dss_device *dssdev,
int x, int y, int w, int h)
static void dsi_update_screen_dispc(struct omap_dss_device *dssdev,
u16 x, u16 y, u16 w, u16 h)
static void dsi_te_timeout(unsigned long arg)
static void dsi_handle_framedone(struct platform_device *dsidev, int error)
static void dsi_framedone_timeout_work_callback(struct work_struct *work)
static void dsi_framedone_irq_callback(void *data, u32 mask)
int omap_dsi_prepare_update(struct omap_dss_device *dssdev,
u16 *x, u16 *y, u16 *w, u16 *h,
bool enlarge_update_area)
EXPORT_SYMBOL(omap_dsi_prepare_update);
int omap_dsi_update(struct omap_dss_device *dssdev,
int channel,
u16 x, u16 y, u16 w, u16 h,
void (*callback)(int, void *), void *data)
EXPORT_SYMBOL(omap_dsi_update);
static int dsi_display_init_dispc(struct omap_dss_device *dssdev)
static void dsi_display_uninit_dispc(struct omap_dss_device *dssdev)
static int dsi_configure_dsi_clocks(struct omap_dss_device *dssdev)
static int dsi_configure_dispc_clocks(struct omap_dss_device *dssdev)
static int dsi_display_init_dsi(struct omap_dss_device *dssdev)
static void dsi_display_uninit_dsi(struct omap_dss_device *dssdev,
bool disconnect_lanes, bool enter_ulps)
static int dsi_core_init(struct platform_device *dsidev)
int omapdss_dsi_display_enable(struct omap_dss_device *dssdev)
EXPORT_SYMBOL(omapdss_dsi_display_enable);
void omapdss_dsi_display_disable(struct omap_dss_device *dssdev,
bool disconnect_lanes, bool enter_ulps)
EXPORT_SYMBOL(omapdss_dsi_display_disable);
int omapdss_dsi_enable_te(struct omap_dss_device *dssdev, bool enable)
EXPORT_SYMBOL(omapdss_dsi_enable_te);
void dsi_get_overlay_fifo_thresholds(enum omap_plane plane,
u32 fifo_size, enum omap_burst_size *burst_size,
u32 *fifo_low, u32 *fifo_high)
int dsi_init_display(struct omap_dss_device *dssdev)
int omap_dsi_request_vc(struct omap_dss_device *dssdev, int *channel)
EXPORT_SYMBOL(omap_dsi_request_vc);
int omap_dsi_set_vc_id(struct omap_dss_device *dssdev, int channel, int vc_id)
EXPORT_SYMBOL(omap_dsi_set_vc_id);
void omap_dsi_release_vc(struct omap_dss_device *dssdev, int channel)
EXPORT_SYMBOL(omap_dsi_release_vc);
void dsi_wait_pll_hsdiv_dispc_active(struct platform_device *dsidev)
void dsi_wait_pll_hsdiv_dsi_active(struct platform_device *dsidev)
static void dsi_calc_clock_param_ranges(struct platform_device *dsidev)
static int dsi_init(struct platform_device *dsidev)
static void dsi_exit(struct platform_device *dsidev)
static int omap_dsi1hw_probe(struct platform_device *dsidev)
static int omap_dsi1hw_remove(struct platform_device *dsidev)
static struct platform_driver omap_dsi1hw_driver = ;
int dsi_init_platform_driver(void)
void dsi_uninit_platform_driver(void)
