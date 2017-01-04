#define KBC_MAX_DEBOUNCE_CNT	0x3ffu
#define KBC_ROW_SCAN_TIME	16
#define KBC_ROW_SCAN_DLY	5
#define KBC_CYCLE_USEC	32
#define KBC_CONTROL_0	0x0
#define KBC_FIFO_TH_CNT_SHIFT(cnt)	(cnt << 14)
#define KBC_DEBOUNCE_CNT_SHIFT(cnt)	(cnt << 4)
#define KBC_CONTROL_FIFO_CNT_INT_EN	(1 << 3)
#define KBC_CONTROL_KBC_EN		(1 << 0)
#define KBC_INT_0	0x4
#define KBC_INT_FIFO_CNT_INT_STATUS	(1 << 2)
#define KBC_ROW_CFG0_0	0x8
#define KBC_COL_CFG0_0	0x18
#define KBC_INIT_DLY_0	0x28
#define KBC_RPT_DLY_0	0x2c
#define KBC_KP_ENT0_0	0x30
#define KBC_KP_ENT1_0	0x34
#define KBC_ROW0_MASK_0	0x38
#define KBC_ROW_SHIFT	3
struct tegra_kbc ;
static const u32 tegra_kbc_default_keymap[] = ;
static const struct matrix_keymap_data tegra_kbc_default_keymap_data = ;
static void tegra_kbc_report_released_keys(struct input_dev *input,
unsigned short old_keycodes[],
unsigned int old_num_keys,
unsigned short new_keycodes[],
unsigned int new_num_keys)
static void tegra_kbc_report_pressed_keys(struct input_dev *input,
unsigned char scancodes[],
unsigned short keycodes[],
unsigned int num_pressed_keys)
static void tegra_kbc_report_keys(struct tegra_kbc *kbc)
static void tegra_kbc_keypress_timer(unsigned long data)
static irqreturn_t tegra_kbc_isr(int irq, void *args)
static void tegra_kbc_setup_wakekeys(struct tegra_kbc *kbc, bool filter)
static void tegra_kbc_config_pins(struct tegra_kbc *kbc)
static int tegra_kbc_start(struct tegra_kbc *kbc)
static void tegra_kbc_stop(struct tegra_kbc *kbc)
static int tegra_kbc_open(struct input_dev *dev)
static void tegra_kbc_close(struct input_dev *dev)
static bool __devinit
tegra_kbc_check_pin_cfg(const struct tegra_kbc_platform_data *pdata,
struct device *dev, unsigned int *num_rows)
static int __devinit tegra_kbc_probe(struct platform_device *pdev)
static int __devexit tegra_kbc_remove(struct platform_device *pdev)
static int tegra_kbc_suspend(struct device *dev)
static int tegra_kbc_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(tegra_kbc_pm_ops, tegra_kbc_suspend, tegra_kbc_resume);
static struct platform_driver tegra_kbc_driver = ;
static void __exit tegra_kbc_exit(void)
module_exit(tegra_kbc_exit);
static int __init tegra_kbc_init(void)
module_init(tegra_kbc_init);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rakesh Iyer <riyer@nvidia.com>");
MODULE_DESCRIPTION("Tegra matrix keyboard controller driver");
MODULE_ALIAS("platform:tegra-kbc");
