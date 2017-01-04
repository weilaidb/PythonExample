#define STMPE_KPC_COL			0x60
#define STMPE_KPC_ROW_MSB		0x61
#define STMPE_KPC_ROW_LSB		0x62
#define STMPE_KPC_CTRL_MSB		0x63
#define STMPE_KPC_CTRL_LSB		0x64
#define STMPE_KPC_COMBI_KEY_0		0x65
#define STMPE_KPC_COMBI_KEY_1		0x66
#define STMPE_KPC_COMBI_KEY_2		0x67
#define STMPE_KPC_DATA_BYTE0		0x68
#define STMPE_KPC_DATA_BYTE1		0x69
#define STMPE_KPC_DATA_BYTE2		0x6a
#define STMPE_KPC_DATA_BYTE3		0x6b
#define STMPE_KPC_DATA_BYTE4		0x6c
#define STMPE_KPC_CTRL_LSB_SCAN		(0x1 << 0)
#define STMPE_KPC_CTRL_LSB_DEBOUNCE	(0x7f << 1)
#define STMPE_KPC_CTRL_MSB_SCAN_COUNT	(0xf << 4)
#define STMPE_KPC_ROW_MSB_ROWS		0xff
#define STMPE_KPC_DATA_UP		(0x1 << 7)
#define STMPE_KPC_DATA_ROW		(0xf << 3)
#define STMPE_KPC_DATA_COL		(0x7 << 0)
#define STMPE_KPC_DATA_NOKEY_MASK	0x78
#define STMPE_KEYPAD_MAX_DEBOUNCE	127
#define STMPE_KEYPAD_MAX_SCAN_COUNT	15
#define STMPE_KEYPAD_MAX_ROWS		8
#define STMPE_KEYPAD_MAX_COLS		8
#define STMPE_KEYPAD_ROW_SHIFT		3
#define STMPE_KEYPAD_KEYMAP_SIZE	\
(STMPE_KEYPAD_MAX_ROWS * STMPE_KEYPAD_MAX_COLS)
struct stmpe_keypad_variant ;
static const struct stmpe_keypad_variant stmpe_keypad_variants[] = ;
struct stmpe_keypad ;
static int stmpe_keypad_read_data(struct stmpe_keypad *keypad, u8 *data)
static irqreturn_t stmpe_keypad_irq(int irq, void *dev)
static int __devinit stmpe_keypad_altfunc_init(struct stmpe_keypad *keypad)
static int __devinit stmpe_keypad_chip_init(struct stmpe_keypad *keypad)
static int __devinit stmpe_keypad_probe(struct platform_device *pdev)
static int __devexit stmpe_keypad_remove(struct platform_device *pdev)
static struct platform_driver stmpe_keypad_driver = ;
static int __init stmpe_keypad_init(void)
module_init(stmpe_keypad_init);
static void __exit stmpe_keypad_exit(void)
module_exit(stmpe_keypad_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("STMPExxxx keypad driver");
MODULE_AUTHOR("Rabin Vincent <rabin.vincent@stericsson.com>");
