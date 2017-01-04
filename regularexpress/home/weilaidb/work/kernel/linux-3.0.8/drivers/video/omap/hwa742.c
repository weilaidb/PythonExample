#define HWA742_REV_CODE_REG       0x0
#define HWA742_CONFIG_REG         0x2
#define HWA742_PLL_DIV_REG        0x4
#define HWA742_PLL_0_REG          0x6
#define HWA742_PLL_1_REG          0x8
#define HWA742_PLL_2_REG          0xa
#define HWA742_PLL_3_REG          0xc
#define HWA742_PLL_4_REG          0xe
#define HWA742_CLK_SRC_REG        0x12
#define HWA742_PANEL_TYPE_REG     0x14
#define HWA742_H_DISP_REG         0x16
#define HWA742_H_NDP_REG          0x18
#define HWA742_V_DISP_1_REG       0x1a
#define HWA742_V_DISP_2_REG       0x1c
#define HWA742_V_NDP_REG          0x1e
#define HWA742_HS_W_REG           0x20
#define HWA742_HP_S_REG           0x22
#define HWA742_VS_W_REG           0x24
#define HWA742_VP_S_REG           0x26
#define HWA742_PCLK_POL_REG       0x28
#define HWA742_INPUT_MODE_REG     0x2a
#define HWA742_TRANSL_MODE_REG1   0x2e
#define HWA742_DISP_MODE_REG      0x34
#define HWA742_WINDOW_TYPE        0x36
#define HWA742_WINDOW_X_START_0   0x38
#define HWA742_WINDOW_X_START_1   0x3a
#define HWA742_WINDOW_Y_START_0   0x3c
#define HWA742_WINDOW_Y_START_1   0x3e
#define HWA742_WINDOW_X_END_0     0x40
#define HWA742_WINDOW_X_END_1     0x42
#define HWA742_WINDOW_Y_END_0     0x44
#define HWA742_WINDOW_Y_END_1     0x46
#define HWA742_MEMORY_WRITE_LSB   0x48
#define HWA742_MEMORY_WRITE_MSB   0x49
#define HWA742_MEMORY_READ_0      0x4a
#define HWA742_MEMORY_READ_1      0x4c
#define HWA742_MEMORY_READ_2      0x4e
#define HWA742_POWER_SAVE         0x56
#define HWA742_NDP_CTRL           0x58
#define HWA742_AUTO_UPDATE_TIME		(HZ / 20)
#define REQ_POOL_SIZE			24
#define IRQ_REQ_POOL_SIZE		4
#define REQ_FROM_IRQ_POOL 0x01
#define REQ_COMPLETE	0
#define REQ_PENDING	1
struct update_param ;
struct hwa742_request ;
struct  hwa742;
struct lcd_ctrl hwa742_ctrl;
static u8 hwa742_read_reg(u8 reg)
static void hwa742_write_reg(u8 reg, u8 data)
static void set_window_regs(int x_start, int y_start, int x_end, int y_end)
static void set_format_regs(int conv, int transl, int flags)
static void enable_tearsync(int y, int width, int height, int screen_height,
int force_vsync)
static void disable_tearsync(void)
static inline struct hwa742_request *alloc_req(void)
static inline void free_req(struct hwa742_request *req)
static void process_pending_requests(void)
static void submit_req_list(struct list_head *head)
static void request_complete(void *data)
static int send_frame_handler(struct hwa742_request *req)
static void send_frame_complete(void *data)
#define ADD_PREQ(_x, _y, _w, _h) do  while(0)
static void create_req_list(struct omapfb_update_window *win,
struct list_head *req_head)
static void auto_update_complete(void *data)
static void hwa742_update_window_auto(unsigned long arg)
int hwa742_update_window_async(struct fb_info *fbi,
struct omapfb_update_window *win,
void (*complete_callback)(void *arg),
void *complete_callback_data)
EXPORT_SYMBOL(hwa742_update_window_async);
static int hwa742_setup_plane(int plane, int channel_out,
unsigned long offset, int screen_width,
int pos_x, int pos_y, int width, int height,
int color_mode)
static int hwa742_enable_plane(int plane, int enable)
static int sync_handler(struct hwa742_request *req)
static void hwa742_sync(void)
static void hwa742_bind_client(struct omapfb_notifier_block *nb)
static int hwa742_set_update_mode(enum omapfb_update_mode mode)
static enum omapfb_update_mode hwa742_get_update_mode(void)
static unsigned long round_to_extif_ticks(unsigned long ps, int div)
static int calc_reg_timing(unsigned long sysclk, int div)
static int calc_lut_timing(unsigned long sysclk, int div)
static int calc_extif_timings(unsigned long sysclk, int *extif_mem_div)
static void calc_hwa742_clk_rates(unsigned long ext_clk,
unsigned long *sys_clk, unsigned long *pix_clk)
static int setup_tearsync(unsigned long pix_clk, int extif_div)
static void hwa742_get_caps(int plane, struct omapfb_caps *caps)
static void hwa742_suspend(void)
static void hwa742_resume(void)
static int hwa742_init(struct omapfb_device *fbdev, int ext_mode,
struct omapfb_mem_desc *req_vram)
static void hwa742_cleanup(void)
struct lcd_ctrl hwa742_ctrl = ;
