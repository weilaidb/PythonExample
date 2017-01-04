#define PM8XXX_MAX_ROWS		18
#define PM8XXX_MAX_COLS		8
#define PM8XXX_ROW_SHIFT	3
#define PM8XXX_MATRIX_MAX_SIZE	(PM8XXX_MAX_ROWS * PM8XXX_MAX_COLS)
#define PM8XXX_MIN_ROWS		5
#define PM8XXX_MIN_COLS		5
#define MAX_SCAN_DELAY		128
#define MIN_SCAN_DELAY		1
#define MAX_ROW_HOLD_DELAY	122000
#define MIN_ROW_HOLD_DELAY	30500
#define MAX_DEBOUNCE_TIME	20
#define MIN_DEBOUNCE_TIME	5
#define KEYP_CTRL			0x148
#define KEYP_CTRL_EVNTS			BIT(0)
#define KEYP_CTRL_EVNTS_MASK		0x3
#define KEYP_CTRL_SCAN_COLS_SHIFT	5
#define KEYP_CTRL_SCAN_COLS_MIN		5
#define KEYP_CTRL_SCAN_COLS_BITS	0x3
#define KEYP_CTRL_SCAN_ROWS_SHIFT	2
#define KEYP_CTRL_SCAN_ROWS_MIN		5
#define KEYP_CTRL_SCAN_ROWS_BITS	0x7
#define KEYP_CTRL_KEYP_EN		BIT(7)
#define KEYP_SCAN			0x149
#define KEYP_SCAN_READ_STATE		BIT(0)
#define KEYP_SCAN_DBOUNCE_SHIFT		1
#define KEYP_SCAN_PAUSE_SHIFT		3
#define KEYP_SCAN_ROW_HOLD_SHIFT	6
#define KEYP_TEST			0x14A
#define KEYP_TEST_CLEAR_RECENT_SCAN	BIT(6)
#define KEYP_TEST_CLEAR_OLD_SCAN	BIT(5)
#define KEYP_TEST_READ_RESET		BIT(4)
#define KEYP_TEST_DTEST_EN		BIT(3)
#define KEYP_TEST_ABORT_READ		BIT(0)
#define KEYP_TEST_DBG_SELECT_SHIFT	1
#define KEYP_RECENT_DATA		0x14B
#define KEYP_OLD_DATA			0x14C
#define KEYP_CLOCK_FREQ			32768
struct pmic8xxx_kp ;
static int pmic8xxx_kp_write_u8(struct pmic8xxx_kp *kp,
u8 data, u16 reg)
static int pmic8xxx_kp_read(struct pmic8xxx_kp *kp,
u8 *data, u16 reg, unsigned num_bytes)
static int pmic8xxx_kp_read_u8(struct pmic8xxx_kp *kp,
u8 *data, u16 reg)
static u8 pmic8xxx_col_state(struct pmic8xxx_kp *kp, u8 col)
static int pmic8xxx_chk_sync_read(struct pmic8xxx_kp *kp)
static int pmic8xxx_kp_read_data(struct pmic8xxx_kp *kp, u16 *state,
u16 data_reg, int read_rows)
static int pmic8xxx_kp_read_matrix(struct pmic8xxx_kp *kp, u16 *new_state,
u16 *old_state)
static void __pmic8xxx_kp_scan_matrix(struct pmic8xxx_kp *kp, u16 *new_state,
u16 *old_state)
static bool pmic8xxx_detect_ghost_keys(struct pmic8xxx_kp *kp, u16 *new_state)
static int pmic8xxx_kp_scan_matrix(struct pmic8xxx_kp *kp, unsigned int events)
static irqreturn_t pmic8xxx_kp_stuck_irq(int irq, void *data)
static irqreturn_t pmic8xxx_kp_irq(int irq, void *data)
static int __devinit pmic8xxx_kpd_init(struct pmic8xxx_kp *kp)
static int  __devinit pmic8xxx_kp_config_gpio(int gpio_start, int num_gpios,
struct pmic8xxx_kp *kp, struct pm_gpio *gpio_config)
static int pmic8xxx_kp_enable(struct pmic8xxx_kp *kp)
static int pmic8xxx_kp_disable(struct pmic8xxx_kp *kp)
static int pmic8xxx_kp_open(struct input_dev *dev)
static void pmic8xxx_kp_close(struct input_dev *dev)
static int __devinit pmic8xxx_kp_probe(struct platform_device *pdev)
static int __devexit pmic8xxx_kp_remove(struct platform_device *pdev)
static int pmic8xxx_kp_suspend(struct device *dev)
static int pmic8xxx_kp_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(pm8xxx_kp_pm_ops,
pmic8xxx_kp_suspend, pmic8xxx_kp_resume);
static struct platform_driver pmic8xxx_kp_driver = ;
static int __init pmic8xxx_kp_init(void)
module_init(pmic8xxx_kp_init);
static void __exit pmic8xxx_kp_exit(void)
module_exit(pmic8xxx_kp_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("PMIC8XXX keypad driver");
MODULE_VERSION("1.0");
MODULE_ALIAS("platform:pmic8xxx_keypad");
MODULE_AUTHOR("Trilok Soni <tsoni@codeaurora.org>");
