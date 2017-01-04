#define DSS_SUBSYS_NAME "DISPC"
#define DISPC_SZ_REGS			SZ_4K
#define DISPC_IRQ_MASK_ERROR            (DISPC_IRQ_GFX_FIFO_UNDERFLOW | \
DISPC_IRQ_OCP_ERR | \
DISPC_IRQ_VID1_FIFO_UNDERFLOW | \
DISPC_IRQ_VID2_FIFO_UNDERFLOW | \
DISPC_IRQ_SYNC_LOST | \
DISPC_IRQ_SYNC_LOST_DIGIT)
#define DISPC_MAX_NR_ISRS		8
struct omap_dispc_isr_data ;
struct dispc_h_coef ;
struct dispc_v_coef ;
#define REG_GET(idx, start, end) \
FLD_GET(dispc_read_reg(idx), start, end)
#define REG_FLD_MOD(idx, val, start, end)				\
dispc_write_reg(idx, FLD_MOD(dispc_read_reg(idx), val, start, end))
struct dispc_irq_stats ;
static struct  dispc;
enum omap_color_component ;
static void _omap_dispc_set_irqs(void);
static inline void dispc_write_reg(const u16 idx, u32 val)
static inline u32 dispc_read_reg(const u16 idx)
#define SR(reg) \
dispc.ctx[DISPC_##reg / sizeof(u32)] = dispc_read_reg(DISPC_##reg)
#define RR(reg) \
dispc_write_reg(DISPC_##reg, dispc.ctx[DISPC_##reg / sizeof(u32)])
void dispc_save_context(void)
void dispc_restore_context(void)
#undef SR
#undef RR
static inline void enable_clocks(bool enable)
bool dispc_go_busy(enum omap_channel channel)
void dispc_go(enum omap_channel channel)
static void _dispc_write_firh_reg(enum omap_plane plane, int reg, u32 value)
static void _dispc_write_firhv_reg(enum omap_plane plane, int reg, u32 value)
static void _dispc_write_firv_reg(enum omap_plane plane, int reg, u32 value)
static void _dispc_write_firh2_reg(enum omap_plane plane, int reg, u32 value)
static void _dispc_write_firhv2_reg(enum omap_plane plane, int reg, u32 value)
static void _dispc_write_firv2_reg(enum omap_plane plane, int reg, u32 value)
static void _dispc_set_scale_coef(enum omap_plane plane, int hscaleup,
int vscaleup, int five_taps,
enum omap_color_component color_comp)
static void _dispc_setup_color_conv_coef(void)
static void _dispc_set_plane_ba0(enum omap_plane plane, u32 paddr)
static void _dispc_set_plane_ba1(enum omap_plane plane, u32 paddr)
static void _dispc_set_plane_ba0_uv(enum omap_plane plane, u32 paddr)
static void _dispc_set_plane_ba1_uv(enum omap_plane plane, u32 paddr)
static void _dispc_set_plane_pos(enum omap_plane plane, int x, int y)
static void _dispc_set_pic_size(enum omap_plane plane, int width, int height)
static void _dispc_set_vid_size(enum omap_plane plane, int width, int height)
static void _dispc_set_pre_mult_alpha(enum omap_plane plane, bool enable)
static void _dispc_setup_global_alpha(enum omap_plane plane, u8 global_alpha)
static void _dispc_set_pix_inc(enum omap_plane plane, s32 inc)
static void _dispc_set_row_inc(enum omap_plane plane, s32 inc)
static void _dispc_set_color_mode(enum omap_plane plane,
enum omap_color_mode color_mode)
static void _dispc_set_channel_out(enum omap_plane plane,
enum omap_channel channel)
void dispc_set_burst_size(enum omap_plane plane,
enum omap_burst_size burst_size)
void dispc_enable_gamma_table(bool enable)
static void _dispc_set_vid_color_conv(enum omap_plane plane, bool enable)
void dispc_enable_replication(enum omap_plane plane, bool enable)
void dispc_set_lcd_size(enum omap_channel channel, u16 width, u16 height)
void dispc_set_digit_size(u16 width, u16 height)
static void dispc_read_plane_fifo_sizes(void)
u32 dispc_get_plane_fifo_size(enum omap_plane plane)
void dispc_setup_plane_fifo(enum omap_plane plane, u32 low, u32 high)
void dispc_enable_fifomerge(bool enable)
static void _dispc_set_fir(enum omap_plane plane,
int hinc, int vinc,
enum omap_color_component color_comp)
static void _dispc_set_vid_accu0(enum omap_plane plane, int haccu, int vaccu)
static void _dispc_set_vid_accu1(enum omap_plane plane, int haccu, int vaccu)
static void _dispc_set_vid_accu2_0(enum omap_plane plane, int haccu, int vaccu)
static void _dispc_set_vid_accu2_1(enum omap_plane plane, int haccu, int vaccu)
static void _dispc_set_scale_param(enum omap_plane plane,
u16 orig_width, u16 orig_height,
u16 out_width, u16 out_height,
bool five_taps, u8 rotation,
enum omap_color_component color_comp)
static void _dispc_set_scaling_common(enum omap_plane plane,
u16 orig_width, u16 orig_height,
u16 out_width, u16 out_height,
bool ilace, bool five_taps,
bool fieldmode, enum omap_color_mode color_mode,
u8 rotation)
static void _dispc_set_scaling_uv(enum omap_plane plane,
u16 orig_width, u16 orig_height,
u16 out_width, u16 out_height,
bool ilace, bool five_taps,
bool fieldmode, enum omap_color_mode color_mode,
u8 rotation)
static void _dispc_set_scaling(enum omap_plane plane,
u16 orig_width, u16 orig_height,
u16 out_width, u16 out_height,
bool ilace, bool five_taps,
bool fieldmode, enum omap_color_mode color_mode,
u8 rotation)
static void _dispc_set_rotation_attrs(enum omap_plane plane, u8 rotation,
bool mirroring, enum omap_color_mode color_mode)
static int color_mode_to_bpp(enum omap_color_mode color_mode)
static s32 pixinc(int pixels, u8 ps)
static void calc_vrfb_rotation_offset(u8 rotation, bool mirror,
u16 screen_width,
u16 width, u16 height,
enum omap_color_mode color_mode, bool fieldmode,
unsigned int field_offset,
unsigned *offset0, unsigned *offset1,
s32 *row_inc, s32 *pix_inc)
static void calc_dma_rotation_offset(u8 rotation, bool mirror,
u16 screen_width,
u16 width, u16 height,
enum omap_color_mode color_mode, bool fieldmode,
unsigned int field_offset,
unsigned *offset0, unsigned *offset1,
s32 *row_inc, s32 *pix_inc)
static unsigned long calc_fclk_five_taps(enum omap_channel channel, u16 width,
u16 height, u16 out_width, u16 out_height,
enum omap_color_mode color_mode)
static unsigned long calc_fclk(enum omap_channel channel, u16 width,
u16 height, u16 out_width, u16 out_height)
void dispc_set_channel_out(enum omap_plane plane, enum omap_channel channel_out)
static int _dispc_setup_plane(enum omap_plane plane,
u32 paddr, u16 screen_width,
u16 pos_x, u16 pos_y,
u16 width, u16 height,
u16 out_width, u16 out_height,
enum omap_color_mode color_mode,
bool ilace,
enum omap_dss_rotation_type rotation_type,
u8 rotation, int mirror,
u8 global_alpha, u8 pre_mult_alpha,
enum omap_channel channel, u32 puv_addr)
static void _dispc_enable_plane(enum omap_plane plane, bool enable)
static void dispc_disable_isr(void *data, u32 mask)
static void _enable_lcd_out(enum omap_channel channel, bool enable)
static void dispc_enable_lcd_out(enum omap_channel channel, bool enable)
static void _enable_digit_out(bool enable)
static void dispc_enable_digit_out(bool enable)
bool dispc_is_channel_enabled(enum omap_channel channel)
void dispc_enable_channel(enum omap_channel channel, bool enable)
void dispc_lcd_enable_signal_polarity(bool act_high)
void dispc_lcd_enable_signal(bool enable)
void dispc_pck_free_enable(bool enable)
void dispc_enable_fifohandcheck(enum omap_channel channel, bool enable)
void dispc_set_lcd_display_type(enum omap_channel channel,
enum omap_lcd_display_type type)
void dispc_set_loadmode(enum omap_dss_load_mode mode)
void dispc_set_default_color(enum omap_channel channel, u32 color)
u32 dispc_get_default_color(enum omap_channel channel)
void dispc_set_trans_key(enum omap_channel ch,
enum omap_dss_trans_key_type type,
u32 trans_key)
void dispc_get_trans_key(enum omap_channel ch,
enum omap_dss_trans_key_type *type,
u32 *trans_key)
void dispc_enable_trans_key(enum omap_channel ch, bool enable)
void dispc_enable_alpha_blending(enum omap_channel ch, bool enable)
bool dispc_alpha_blending_enabled(enum omap_channel ch)
bool dispc_trans_key_enabled(enum omap_channel ch)
void dispc_set_tft_data_lines(enum omap_channel channel, u8 data_lines)
void dispc_set_parallel_interface_mode(enum omap_channel channel,
enum omap_parallel_interface_mode mode)
static bool _dispc_lcd_timings_ok(int hsw, int hfp, int hbp,
int vsw, int vfp, int vbp)
bool dispc_lcd_timings_ok(struct omap_video_timings *timings)
static void _dispc_set_lcd_timings(enum omap_channel channel, int hsw,
int hfp, int hbp, int vsw, int vfp, int vbp)
void dispc_set_lcd_timings(enum omap_channel channel,
struct omap_video_timings *timings)
static void dispc_set_lcd_divisor(enum omap_channel channel, u16 lck_div,
u16 pck_div)
static void dispc_get_lcd_divisor(enum omap_channel channel, int *lck_div,
int *pck_div)
unsigned long dispc_fclk_rate(void)
unsigned long dispc_lclk_rate(enum omap_channel channel)
unsigned long dispc_pclk_rate(enum omap_channel channel)
void dispc_dump_clocks(struct seq_file *s)
void dispc_dump_irqs(struct seq_file *s)
void dispc_dump_regs(struct seq_file *s)
static void _dispc_set_pol_freq(enum omap_channel channel, bool onoff, bool rf,
bool ieo, bool ipc, bool ihs, bool ivs, u8 acbi, u8 acb)
void dispc_set_pol_freq(enum omap_channel channel,
enum omap_panel_config config, u8 acbi, u8 acb)
void dispc_find_clk_divs(bool is_tft, unsigned long req_pck, unsigned long fck,
struct dispc_clock_info *cinfo)
int dispc_calc_clock_rates(unsigned long dispc_fclk_rate,
struct dispc_clock_info *cinfo)
int dispc_set_clock_div(enum omap_channel channel,
struct dispc_clock_info *cinfo)
int dispc_get_clock_div(enum omap_channel channel,
struct dispc_clock_info *cinfo)
static void _omap_dispc_set_irqs(void)
int omap_dispc_register_isr(omap_dispc_isr_t isr, void *arg, u32 mask)
EXPORT_SYMBOL(omap_dispc_register_isr);
int omap_dispc_unregister_isr(omap_dispc_isr_t isr, void *arg, u32 mask)
EXPORT_SYMBOL(omap_dispc_unregister_isr);
static void print_irq_status(u32 status)
static irqreturn_t omap_dispc_irq_handler(int irq, void *arg)
static void dispc_error_worker(struct work_struct *work)
int omap_dispc_wait_for_irq_timeout(u32 irqmask, unsigned long timeout)
int omap_dispc_wait_for_irq_interruptible_timeout(u32 irqmask,
unsigned long timeout)
void dispc_fake_vsync_irq(void)
static void _omap_dispc_initialize_irq(void)
void dispc_enable_sidle(void)
void dispc_disable_sidle(void)
static void _omap_dispc_initial_config(void)
int dispc_enable_plane(enum omap_plane plane, bool enable)
int dispc_setup_plane(enum omap_plane plane,
u32 paddr, u16 screen_width,
u16 pos_x, u16 pos_y,
u16 width, u16 height,
u16 out_width, u16 out_height,
enum omap_color_mode color_mode,
bool ilace,
enum omap_dss_rotation_type rotation_type,
u8 rotation, bool mirror, u8 global_alpha,
u8 pre_mult_alpha, enum omap_channel channel,
u32 puv_addr)
static int omap_dispchw_probe(struct platform_device *pdev)
static int omap_dispchw_remove(struct platform_device *pdev)
static struct platform_driver omap_dispchw_driver = ;
int dispc_init_platform_driver(void)
void dispc_uninit_platform_driver(void)
