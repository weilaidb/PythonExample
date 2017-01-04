#define	FRIQ_VERSION	"1.01"
#define CMD(x)		w2(4);w0(0xff);w0(0xff);w0(0x73);w0(0x73);\
w0(0xc9);w0(0xc9);w0(0x26);w0(0x26);w0(x);w0(x);
#define j44(l,h)	(((l>>4)&0x0f)|(h&0xf0))
static int  cont_map[2] = ;
static int friq_read_regr( PIA *pi, int cont, int regr )
static void friq_write_regr( PIA *pi, int cont, int regr, int val)
static void friq_read_block_int( PIA *pi, char * buf, int count, int regr )
static void friq_read_block( PIA *pi, char * buf, int count)
static void friq_write_block( PIA *pi, char * buf, int count )
static void friq_connect ( PIA *pi  )
static void friq_disconnect ( PIA *pi )
static int friq_test_proto( PIA *pi, char * scratch, int verbose )
static void friq_log_adapter( PIA *pi, char * scratch, int verbose )
static void friq_release_proto( PIA *pi)
static struct pi_protocol friq = ;
static int __init friq_init(void)
static void __exit friq_exit(void)
MODULE_LICENSE("GPL");
module_init(friq_init)
module_exit(friq_exit)
