#define	ON20_VERSION	"1.01"
#define op(f)	w2(4);w0(f);w2(5);w2(0xd);w2(5);w2(0xd);w2(5);w2(4);
#define vl(v)	w2(4);w0(v);w2(5);w2(7);w2(5);w2(4);
#define j44(a,b)  (((a>>4)&0x0f)|(b&0xf0))
static int on20_read_regr( PIA *pi, int cont, int regr )
static void on20_write_regr( PIA *pi, int cont, int regr, int val )
static void on20_connect ( PIA *pi)
static void on20_disconnect ( PIA *pi )
static void on20_read_block( PIA *pi, char * buf, int count )
static void on20_write_block(  PIA *pi, char * buf, int count )
static void on20_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol on20 = ;
static int __init on20_init(void)
static void __exit on20_exit(void)
MODULE_LICENSE("GPL");
module_init(on20_init)
module_exit(on20_exit)
