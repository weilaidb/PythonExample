#define SONY_UNIT		600000
#define SONY_HEADER_PULSE	(4 * SONY_UNIT)
#define	SONY_HEADER_SPACE	(1 * SONY_UNIT)
#define SONY_BIT_0_PULSE	(1 * SONY_UNIT)
#define SONY_BIT_1_PULSE	(2 * SONY_UNIT)
#define SONY_BIT_SPACE		(1 * SONY_UNIT)
#define SONY_TRAILER_SPACE	(10 * SONY_UNIT)
enum sony_state ;
static int ir_sony_decode(struct rc_dev *dev, struct ir_raw_event ev)
static struct ir_raw_handler sony_handler = ;
static int __init ir_sony_decode_init(void)
static void __exit ir_sony_decode_exit(void)
module_init(ir_sony_decode_init);
module_exit(ir_sony_decode_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Härdeman <david@hardeman.nu>");
MODULE_DESCRIPTION("Sony IR protocol decoder");
