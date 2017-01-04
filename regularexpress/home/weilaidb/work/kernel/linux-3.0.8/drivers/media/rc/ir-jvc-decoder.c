#define JVC_NBITS		16
#define JVC_UNIT		525000
#define JVC_HEADER_PULSE	(16 * JVC_UNIT)
#define JVC_HEADER_SPACE	(8  * JVC_UNIT)
#define JVC_BIT_PULSE		(1  * JVC_UNIT)
#define JVC_BIT_0_SPACE		(1  * JVC_UNIT)
#define JVC_BIT_1_SPACE		(3  * JVC_UNIT)
#define JVC_TRAILER_PULSE	(1  * JVC_UNIT)
#define	JVC_TRAILER_SPACE	(35 * JVC_UNIT)
enum jvc_state ;
static int ir_jvc_decode(struct rc_dev *dev, struct ir_raw_event ev)
static struct ir_raw_handler jvc_handler = ;
static int __init ir_jvc_decode_init(void)
static void __exit ir_jvc_decode_exit(void)
module_init(ir_jvc_decode_init);
module_exit(ir_jvc_decode_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Härdeman <david@hardeman.nu>");
MODULE_DESCRIPTION("JVC IR protocol decoder");
