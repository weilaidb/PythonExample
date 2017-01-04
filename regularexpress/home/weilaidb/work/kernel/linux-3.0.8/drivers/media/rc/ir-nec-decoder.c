#define NEC_NBITS		32
#define NEC_UNIT		562500
#define NEC_HEADER_PULSE	(16 * NEC_UNIT)
#define NECX_HEADER_PULSE	(8  * NEC_UNIT)
#define NEC_HEADER_SPACE	(8  * NEC_UNIT)
#define NEC_REPEAT_SPACE	(4  * NEC_UNIT)
#define NEC_BIT_PULSE		(1  * NEC_UNIT)
#define NEC_BIT_0_SPACE		(1  * NEC_UNIT)
#define NEC_BIT_1_SPACE		(3  * NEC_UNIT)
#define	NEC_TRAILER_PULSE	(1  * NEC_UNIT)
#define	NEC_TRAILER_SPACE	(10 * NEC_UNIT)
#define NECX_REPEAT_BITS	1
enum nec_state ;
static int ir_nec_decode(struct rc_dev *dev, struct ir_raw_event ev)
static struct ir_raw_handler nec_handler = ;
static int __init ir_nec_decode_init(void)
static void __exit ir_nec_decode_exit(void)
module_init(ir_nec_decode_init);
module_exit(ir_nec_decode_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_AUTHOR("Red Hat Inc. (http:
MODULE_DESCRIPTION("NEC IR protocol decoder");
