#define RC5_SZ_NBITS		15
#define RC5_UNIT		888888
#define RC5_BIT_START		(1 * RC5_UNIT)
#define RC5_BIT_END		(1 * RC5_UNIT)
enum rc5_sz_state ;
static int ir_rc5_sz_decode(struct rc_dev *dev, struct ir_raw_event ev)
static struct ir_raw_handler rc5_sz_handler = ;
static int __init ir_rc5_sz_decode_init(void)
static void __exit ir_rc5_sz_decode_exit(void)
module_init(ir_rc5_sz_decode_init);
module_exit(ir_rc5_sz_decode_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
MODULE_AUTHOR("Red Hat Inc. (http:
MODULE_DESCRIPTION("RC5 (streamzap) IR protocol decoder");
