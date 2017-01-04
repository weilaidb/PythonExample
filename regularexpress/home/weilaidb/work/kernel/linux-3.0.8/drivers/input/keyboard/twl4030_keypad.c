#define TWL4030_MAX_ROWS	8
#define TWL4030_MAX_COLS	8
#define TWL4030_ROW_SHIFT	4
#define TWL4030_KEYMAP_SIZE	(TWL4030_MAX_ROWS << TWL4030_ROW_SHIFT)
struct twl4030_keypad ;
#define PTV_PRESCALER			4
#define KEYP_CTRL			0x00
#define KEYP_DEB			0x01
#define KEYP_LONG_KEY			0x02
#define KEYP_LK_PTV			0x03
#define KEYP_TIMEOUT_L			0x04
#define KEYP_TIMEOUT_H			0x05
#define KEYP_KBC			0x06
#define KEYP_KBR			0x07
#define KEYP_SMS			0x08
#define KEYP_FULL_CODE_7_0		0x09
#define KEYP_FULL_CODE_15_8		0x0a
#define KEYP_FULL_CODE_23_16		0x0b
#define KEYP_FULL_CODE_31_24		0x0c
#define KEYP_FULL_CODE_39_32		0x0d
#define KEYP_FULL_CODE_47_40		0x0e
#define KEYP_FULL_CODE_55_48		0x0f
#define KEYP_FULL_CODE_63_56		0x10
#define KEYP_ISR1			0x11
#define KEYP_IMR1			0x12
#define KEYP_ISR2			0x13
#define KEYP_IMR2			0x14
#define KEYP_SIR			0x15
#define KEYP_EDR			0x16
#define KEYP_SIH_CTRL			0x17
#define KEYP_CTRL_SOFT_NRST		BIT(0)
#define KEYP_CTRL_SOFTMODEN		BIT(1)
#define KEYP_CTRL_LK_EN			BIT(2)
#define KEYP_CTRL_TOE_EN		BIT(3)
#define KEYP_CTRL_TOLE_EN		BIT(4)
#define KEYP_CTRL_RP_EN			BIT(5)
#define KEYP_CTRL_KBD_ON		BIT(6)
#define KEYP_PERIOD_US(t, prescale)	((t) / (31 << (prescale + 1)) - 1)
#define KEYP_LK_PTV_PTV_SHIFT		5
#define KEYP_IMR1_MIS			BIT(3)
#define KEYP_IMR1_TO			BIT(2)
#define KEYP_IMR1_LK			BIT(1)
#define KEYP_IMR1_KP			BIT(0)
#define KEYP_EDR_KP_FALLING		0x01
#define KEYP_EDR_KP_RISING		0x02
#define KEYP_EDR_KP_BOTH		0x03
#define KEYP_EDR_LK_FALLING		0x04
#define KEYP_EDR_LK_RISING		0x08
#define KEYP_EDR_TO_FALLING		0x10
#define KEYP_EDR_TO_RISING		0x20
#define KEYP_EDR_MIS_FALLING		0x40
#define KEYP_EDR_MIS_RISING		0x80
static int twl4030_kpread(struct twl4030_keypad *kp,
u8 *data, u32 reg, u8 num_bytes)
static int twl4030_kpwrite_u8(struct twl4030_keypad *kp, u8 data, u32 reg)
static inline u16 twl4030_col_xlate(struct twl4030_keypad *kp, u8 col)
static int twl4030_read_kp_matrix_state(struct twl4030_keypad *kp, u16 *state)
static bool twl4030_is_in_ghost_state(struct twl4030_keypad *kp, u16 *key_state)
static void twl4030_kp_scan(struct twl4030_keypad *kp, bool release_all)
static irqreturn_t do_kp_irq(int irq, void *_kp)
static int __devinit twl4030_kp_program(struct twl4030_keypad *kp)
static int __devinit twl4030_kp_probe(struct platform_device *pdev)
static int __devexit twl4030_kp_remove(struct platform_device *pdev)
static struct platform_driver twl4030_kp_driver = ;
static int __init twl4030_kp_init(void)
module_init(twl4030_kp_init);
static void __exit twl4030_kp_exit(void)
module_exit(twl4030_kp_exit);
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("TWL4030 Keypad Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:twl4030_keypad");
