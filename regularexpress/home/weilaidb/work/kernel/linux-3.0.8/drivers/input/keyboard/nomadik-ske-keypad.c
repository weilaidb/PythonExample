#define SKE_KPMLT	(0x1 << 6)
#define SKE_KPCN	(0x7 << 3)
#define SKE_KPASEN	(0x1 << 2)
#define SKE_KPASON	(0x1 << 7)
#define SKE_KPIMA	(0x1 << 2)
#define SKE_KPICS	(0x1 << 3)
#define SKE_KPICA	(0x1 << 2)
#define SKE_KPRISA	(0x1 << 2)
#define SKE_KEYPAD_ROW_SHIFT	3
#define SKE_KPD_KEYMAP_SIZE	(8 * 8)
#define SKE_ASR0	0x20
#define SKE_ASR1	0x24
#define SKE_ASR2	0x28
#define SKE_ASR3	0x2C
#define SKE_NUM_ASRX_REGISTERS	(4)
struct ske_keypad ;
static void ske_keypad_set_bits(struct ske_keypad *keypad, u16 addr,
u8 mask, u8 data)
static int __devinit ske_keypad_chip_init(struct ske_keypad *keypad)
static void ske_keypad_read_data(struct ske_keypad *keypad)
static irqreturn_t ske_keypad_irq(int irq, void *dev_id)
static int __devinit ske_keypad_probe(struct platform_device *pdev)
static int __devexit ske_keypad_remove(struct platform_device *pdev)
static int ske_keypad_suspend(struct device *dev)
static int ske_keypad_resume(struct device *dev)
static const struct dev_pm_ops ske_keypad_dev_pm_ops = ;
struct platform_driver ske_keypad_driver = ;
static int __init ske_keypad_init(void)
module_init(ske_keypad_init);
static void __exit ske_keypad_exit(void)
module_exit(ske_keypad_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Naveen Kumar <naveen.gaddipati@stericsson.com> / Sundar Iyer <sundar.iyer@stericsson.com>");
MODULE_DESCRIPTION("Nomadik Scroll-Key-Encoder Keypad Driver");
MODULE_ALIAS("platform:nomadik-ske-keypad");
