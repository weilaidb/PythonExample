struct matrix_keypad ;
static void __activate_col(const struct matrix_keypad_platform_data *pdata,
int col, bool on)
static void activate_col(const struct matrix_keypad_platform_data *pdata,
int col, bool on)
static void activate_all_cols(const struct matrix_keypad_platform_data *pdata,
bool on)
static bool row_asserted(const struct matrix_keypad_platform_data *pdata,
int row)
static void enable_row_irqs(struct matrix_keypad *keypad)
static void disable_row_irqs(struct matrix_keypad *keypad)
static void matrix_keypad_scan(struct work_struct *work)
static irqreturn_t matrix_keypad_interrupt(int irq, void *id)
static int matrix_keypad_start(struct input_dev *dev)
static void matrix_keypad_stop(struct input_dev *dev)
static void matrix_keypad_enable_wakeup(struct matrix_keypad *keypad)
static void matrix_keypad_disable_wakeup(struct matrix_keypad *keypad)
static int matrix_keypad_suspend(struct device *dev)
static int matrix_keypad_resume(struct device *dev)
static const SIMPLE_DEV_PM_OPS(matrix_keypad_pm_ops,
matrix_keypad_suspend, matrix_keypad_resume);
static int __devinit init_matrix_gpio(struct platform_device *pdev,
struct matrix_keypad *keypad)
static int __devinit matrix_keypad_probe(struct platform_device *pdev)
static int __devexit matrix_keypad_remove(struct platform_device *pdev)
static struct platform_driver matrix_keypad_driver = ;
static int __init matrix_keypad_init(void)
static void __exit matrix_keypad_exit(void)
module_init(matrix_keypad_init);
module_exit(matrix_keypad_exit);
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("GPIO Driven Matrix Keypad Driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:matrix-keypad");
