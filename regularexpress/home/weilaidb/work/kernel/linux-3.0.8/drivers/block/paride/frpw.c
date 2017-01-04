#define	FRPW_VERSION	"1.03"
#define cec4		w2(0xc);w2(0xe);w2(0xe);w2(0xc);w2(4);w2(4);w2(4);
#define j44(l,h)	(((l>>4)&0x0f)|(h&0xf0))
static int  cont_map[2] = ;
static int frpw_read_regr( PIA *pi, int cont, int regr )
static void frpw_write_regr( PIA *pi, int cont, int regr, int val)
static void frpw_read_block_int( PIA *pi, char * buf, int count, int regr )
static void frpw_read_block( PIA *pi, char * buf, int count)
static void frpw_write_block( PIA *pi, char * buf, int count )
static void frpw_connect ( PIA *pi  )
static void frpw_disconnect ( PIA *pi )
static int frpw_test_pnp ( PIA *pi )
static int frpw_test_proto( PIA *pi, char * scratch, int verbose )
static void frpw_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol frpw = ;
static int __init frpw_init(void)
static void __exit frpw_exit(void)
MODULE_LICENSE("GPL");
module_init(frpw_init)
module_exit(frpw_exit)
