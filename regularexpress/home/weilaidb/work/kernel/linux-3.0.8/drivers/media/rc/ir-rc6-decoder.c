#define RC6_UNIT		444444
#define RC6_HEADER_NBITS	4
#define RC6_0_NBITS		16
#define RC6_6A_SMALL_NBITS	24
#define RC6_6A_LARGE_NBITS	32
#define RC6_PREFIX_PULSE	(6 * RC6_UNIT)
#define RC6_PREFIX_SPACE	(2 * RC6_UNIT)
#define RC6_BIT_START		(1 * RC6_UNIT)
#define RC6_BIT_END		(1 * RC6_UNIT)
#define RC6_TOGGLE_START	(2 * RC6_UNIT)
#define RC6_TOGGLE_END		(2 * RC6_UNIT)
#define RC6_MODE_MASK		0x07
#define RC6_STARTBIT_MASK	0x08
#define RC6_6A_MCE_TOGGLE_MASK	0x8000
enum rc6_mode ;
enum rc6_state ;
static enum rc6_mode rc6_mode(struct rc6_dec *data)
static int ir_rc6_decode(struct rc_dev *dev, struct ir_raw_event ev)
static struct ir_raw_handler rc6_handler = ;
static int __init ir_rc6_decode_init(void)
static void __exit ir_rc6_decode_exit(void)
module_init(ir_rc6_decode_init);
module_exit(ir_rc6_decode_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Härdeman <david@hardeman.nu>");
MODULE_DESCRIPTION("RC6 IR protocol decoder");
