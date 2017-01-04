#define MODULE_NAME				"blizzard"
#define BLIZZARD_REV_CODE			0x00
#define BLIZZARD_CONFIG				0x02
#define BLIZZARD_PLL_DIV			0x04
#define BLIZZARD_PLL_LOCK_RANGE			0x06
#define BLIZZARD_PLL_CLOCK_SYNTH_0		0x08
#define BLIZZARD_PLL_CLOCK_SYNTH_1		0x0a
#define BLIZZARD_PLL_MODE			0x0c
#define BLIZZARD_CLK_SRC			0x0e
#define BLIZZARD_MEM_BANK0_ACTIVATE		0x10
#define BLIZZARD_MEM_BANK0_STATUS		0x14
#define BLIZZARD_PANEL_CONFIGURATION		0x28
#define BLIZZARD_HDISP				0x2a
#define BLIZZARD_HNDP				0x2c
#define BLIZZARD_VDISP0				0x2e
#define BLIZZARD_VDISP1				0x30
#define BLIZZARD_VNDP				0x32
#define BLIZZARD_HSW				0x34
#define BLIZZARD_VSW				0x38
#define BLIZZARD_DISPLAY_MODE			0x68
#define BLIZZARD_INPUT_WIN_X_START_0		0x6c
#define BLIZZARD_DATA_SOURCE_SELECT		0x8e
#define BLIZZARD_DISP_MEM_DATA_PORT		0x90
#define BLIZZARD_DISP_MEM_READ_ADDR0		0x92
#define BLIZZARD_POWER_SAVE			0xE6
#define BLIZZARD_NDISP_CTRL_STATUS		0xE8
#define BLIZZARD_SRC_WRITE_LCD_BACKGROUND	0x00
#define BLIZZARD_SRC_WRITE_LCD_DESTRUCTIVE	0x01
#define BLIZZARD_SRC_WRITE_OVERLAY_ENABLE	0x04
#define BLIZZARD_SRC_DISABLE_OVERLAY		0x05
#define BLIZZARD_SRC_WRITE_LCD			0x00
#define BLIZZARD_SRC_BLT_LCD			0x06
#define BLIZZARD_COLOR_RGB565			0x01
#define BLIZZARD_COLOR_YUV420			0x09
#define BLIZZARD_VERSION_S1D13745		0x01
#define BLIZZARD_VERSION_S1D13744		0x02
#define BLIZZARD_AUTO_UPDATE_TIME		(HZ / 20)
#define REQ_POOL_SIZE			24
#define IRQ_REQ_POOL_SIZE		4
#define REQ_FROM_IRQ_POOL 0x01
#define REQ_COMPLETE	0
#define REQ_PENDING	1
struct blizzard_reg_list ;
static const struct blizzard_reg_list blizzard_pll_regs[] = ;
static const struct blizzard_reg_list blizzard_gen_regs[] = ;
static u8 blizzard_reg_cache[0x5a / 2];
struct update_param ;
struct blizzard_request ;
struct plane_info ;
struct blizzard_struct  blizzard;
struct lcd_ctrl blizzard_ctrl;
static u8 blizzard_read_reg(u8 reg)
static void blizzard_write_reg(u8 reg, u8 val)
static void blizzard_restart_sdram(void)
static void blizzard_stop_sdram(void)
static void blizzard_wait_line_buffer(void)
static void blizzard_wait_yyc(void)
static void disable_overlay(void)
static void set_window_regs(int x_start, int y_start, int x_end, int y_end,
int x_out_start, int y_out_start,
int x_out_end, int y_out_end, int color_mode,
int zoom_off, int flags)
static void enable_tearsync(int y, int width, int height, int screen_height,
int out_height, int force_vsync)
static void disable_tearsync(void)
static inline void set_extif_timings(const struct extif_timings *t);
static inline struct blizzard_request *alloc_req(void)
static inline void free_req(struct blizzard_request *req)
static void process_pending_requests(void)
static void submit_req_list(struct list_head *head)
static void request_complete(void *data)
static int do_full_screen_update(struct blizzard_request *req)
static int check_1d_intersect(int a1, int a2, int b1, int b2)
static int do_partial_update(struct blizzard_request *req, int plane,
int x, int y, int w, int h,
int x_out, int y_out, int w_out, int h_out,
int wnd_color_mode, int bpp)
static int send_frame_handler(struct blizzard_request *req)
static void send_frame_complete(void *data)
#define ADD_PREQ(_x, _y, _w, _h, _x_out, _y_out, _w_out, _h_out) do  while(0)
static void create_req_list(int plane_idx,
struct omapfb_update_window *win,
struct list_head *req_head)
static void auto_update_complete(void *data)
static void blizzard_update_window_auto(unsigned long arg)
int blizzard_update_window_async(struct fb_info *fbi,
struct omapfb_update_window *win,
void (*complete_callback)(void *arg),
void *complete_callback_data)
EXPORT_SYMBOL(blizzard_update_window_async);
static int update_full_screen(void)
static int blizzard_setup_plane(int plane, int channel_out,
unsigned long offset, int screen_width,
int pos_x, int pos_y, int width, int height,
int color_mode)
static int blizzard_set_scale(int plane, int orig_w, int orig_h,
int out_w, int out_h)
static int blizzard_set_rotate(int angle)
static int blizzard_enable_plane(int plane, int enable)
static int sync_handler(struct blizzard_request *req)
static void blizzard_sync(void)
static void blizzard_bind_client(struct omapfb_notifier_block *nb)
static int blizzard_set_update_mode(enum omapfb_update_mode mode)
static enum omapfb_update_mode blizzard_get_update_mode(void)
static inline void set_extif_timings(const struct extif_timings *t)
static inline unsigned long round_to_extif_ticks(unsigned long ps, int div)
static int calc_reg_timing(unsigned long sysclk, int div)
static int calc_lut_timing(unsigned long sysclk, int div)
static int calc_extif_timings(unsigned long sysclk, int *extif_mem_div)
static void calc_blizzard_clk_rates(unsigned long ext_clk,
unsigned long *sys_clk, unsigned long *pix_clk)
static int setup_tearsync(unsigned long pix_clk, int extif_div)
static void blizzard_get_caps(int plane, struct omapfb_caps *caps)
static void _save_regs(const struct blizzard_reg_list *list, int cnt)
static void _restore_regs(const struct blizzard_reg_list *list, int cnt)
static void blizzard_save_all_regs(void)
static void blizzard_restore_pll_regs(void)
static void blizzard_restore_gen_regs(void)
static void blizzard_suspend(void)
static void blizzard_resume(void)
static int blizzard_init(struct omapfb_device *fbdev, int ext_mode,
struct omapfb_mem_desc *req_vram)
static void blizzard_cleanup(void)
struct lcd_ctrl blizzard_ctrl = ;
