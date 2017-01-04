#define WM831X_TCH_ENA                          0x8000
#define WM831X_TCH_CVT_ENA                      0x4000
#define WM831X_TCH_SLPENA                       0x1000
#define WM831X_TCH_Z_ENA                        0x0400
#define WM831X_TCH_Y_ENA                        0x0200
#define WM831X_TCH_X_ENA                        0x0100
#define WM831X_TCH_DELAY_MASK                   0x00E0
#define WM831X_TCH_DELAY_SHIFT                       5
#define WM831X_TCH_DELAY_WIDTH                       3
#define WM831X_TCH_RATE_MASK                    0x001F
#define WM831X_TCH_RATE_SHIFT                        0
#define WM831X_TCH_RATE_WIDTH                        5
#define WM831X_TCH_PD_WK                        0x2000
#define WM831X_TCH_5WIRE                        0x1000
#define WM831X_TCH_PDONLY                       0x0800
#define WM831X_TCH_ISEL                         0x0100
#define WM831X_TCH_RPU_MASK                     0x000F
#define WM831X_TCH_RPU_SHIFT                         0
#define WM831X_TCH_RPU_WIDTH                         4
#define WM831X_TCH_PD                           0x8000
#define WM831X_TCH_DATA_MASK                    0x0FFF
#define WM831X_TCH_DATA_SHIFT                        0
#define WM831X_TCH_DATA_WIDTH                       12
struct wm831x_ts ;
static void wm831x_pd_data_work(struct work_struct *work)
static irqreturn_t wm831x_ts_data_irq(int irq, void *irq_data)
static irqreturn_t wm831x_ts_pen_down_irq(int irq, void *irq_data)
static int wm831x_ts_input_open(struct input_dev *idev)
static void wm831x_ts_input_close(struct input_dev *idev)
static __devinit int wm831x_ts_probe(struct platform_device *pdev)
static __devexit int wm831x_ts_remove(struct platform_device *pdev)
static struct platform_driver wm831x_ts_driver = ;
static int __init wm831x_ts_init(void)
module_init(wm831x_ts_init);
static void __exit wm831x_ts_exit(void)
module_exit(wm831x_ts_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("WM831x PMIC touchscreen driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-touch");
