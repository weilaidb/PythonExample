#define ON26_VERSION      "1.04"
#define j44(a,b)  (((a>>4)&0x0f)|(b&0xf0))
#define P1	w2(5);w2(0xd);w2(5);w2(0xd);w2(5);w2(4);
#define P2	w2(5);w2(7);w2(5);w2(4);
static int on26_read_regr( PIA *pi, int cont, int regr )
static void on26_write_regr( PIA *pi, int cont, int regr, int val )
#define  CCP(x)  w0(0xfe);w0(0xaa);w0(0x55);w0(0);w0(0xff);\
w0(0x87);w0(0x78);w0(x);w2(4);w2(5);w2(4);w0(0xff);
static void on26_connect ( PIA *pi )
static void on26_disconnect ( PIA *pi )
#define	RESET_WAIT  200
static int on26_test_port( PIA *pi)
static void on26_read_block( PIA *pi, char * buf, int count )
static void on26_write_block( PIA *pi, char * buf, int count )
static void on26_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol on26 = ;
static int __init on26_init(void)
static void __exit on26_exit(void)
MODULE_LICENSE("GPL");
module_init(on26_init)
module_exit(on26_exit)
