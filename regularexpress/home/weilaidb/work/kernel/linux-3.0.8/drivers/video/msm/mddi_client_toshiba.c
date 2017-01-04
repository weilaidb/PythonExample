#define LCD_CONTROL_BLOCK_BASE 0x110000
#define CMN         (LCD_CONTROL_BLOCK_BASE|0x10)
#define INTFLG      (LCD_CONTROL_BLOCK_BASE|0x18)
#define HCYCLE      (LCD_CONTROL_BLOCK_BASE|0x34)
#define HDE_START   (LCD_CONTROL_BLOCK_BASE|0x3C)
#define VPOS        (LCD_CONTROL_BLOCK_BASE|0xC0)
#define MPLFBUF     (LCD_CONTROL_BLOCK_BASE|0x20)
#define WAKEUP      (LCD_CONTROL_BLOCK_BASE|0x54)
#define WSYN_DLY    (LCD_CONTROL_BLOCK_BASE|0x58)
#define REGENB      (LCD_CONTROL_BLOCK_BASE|0x5C)
#define BASE5 0x150000
#define BASE6 0x160000
#define BASE7 0x170000
#define GPIOIEV     (BASE5 + 0x10)
#define GPIOIE      (BASE5 + 0x14)
#define GPIORIS     (BASE5 + 0x18)
#define GPIOMIS     (BASE5 + 0x1C)
#define GPIOIC      (BASE5 + 0x20)
#define INTMASK     (BASE6 + 0x0C)
#define INTMASK_VWAKEOUT (1U << 0)
#define INTMASK_VWAKEOUT_ACTIVE_LOW (1U << 8)
#define GPIOSEL     (BASE7 + 0x00)
#define GPIOSEL_VWAKEINT (1U << 0)
static DECLARE_WAIT_QUEUE_HEAD(toshiba_vsync_wait);
struct panel_info ;
static void toshiba_request_vsync(struct msm_panel_data *panel_data,
struct msmfb_callback *callback)
static void toshiba_clear_vsync(struct msm_panel_data *panel_data)
static void toshiba_wait_vsync(struct msm_panel_data *panel_data)
static int toshiba_suspend(struct msm_panel_data *panel_data)
static int toshiba_resume(struct msm_panel_data *panel_data)
static int toshiba_blank(struct msm_panel_data *panel_data)
static int toshiba_unblank(struct msm_panel_data *panel_data)
irqreturn_t toshiba_vsync_interrupt(int irq, void *data)
static int setup_vsync(struct panel_info *panel,
int init)
static int mddi_toshiba_probe(struct platform_device *pdev)
static int mddi_toshiba_remove(struct platform_device *pdev)
static struct platform_driver mddi_client_d263_0000 = ;
static int __init mddi_client_toshiba_init(void)
module_init(mddi_client_toshiba_init);
