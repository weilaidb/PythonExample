#define RC5_NBITS		14
#define RC5X_NBITS		20
#define CHECK_RC5X_NBITS	8
#define RC5_UNIT		888888
#define RC5_BIT_START		(1 * RC5_UNIT)
#define RC5_BIT_END		(1 * RC5_UNIT)
#define RC5X_SPACE		(4 * RC5_UNIT)
enum rc5_state ;
static int ir_rc5_decode(struct rc_dev *dev, struct ir_raw_event ev)
static struct ir_raw_handler rc5_handler = ;
static int __init ir_rc5_decode_init(void)
static void __exit ir_rc5_decode_exit(void)
module_init(ir_rc5_decode_init);
module_exit(ir_rc5_decode_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_AUTHOR("Red Hat Inc. (http:
MODULE_DESCRIPTION("RC5(x) IR protocol decoder");
