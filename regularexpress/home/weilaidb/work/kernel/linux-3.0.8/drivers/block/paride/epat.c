#define EPAT_VERSION      "1.02"
#define j44(a,b)		(((a>>4)&0x0f)+(b&0xf0))
#define j53(a,b)		(((a>>3)&0x1f)+((b<<4)&0xe0))
static int epatc8;
module_param(epatc8, int, 0);
MODULE_PARM_DESC(epatc8, "support for the Shuttle EP1284 chip, "
"used in any recent Imation SuperDisk (LS-120) drive.");
static int cont_map[3] = ;
static void epat_write_regr( PIA *pi, int cont, int regr, int val)
static int epat_read_regr( PIA *pi, int cont, int regr )
static void epat_read_block( PIA *pi, char * buf, int count )
static void epat_write_block( PIA *pi, char * buf, int count )
#define	WR(r,v)		epat_write_regr(pi,2,r,v)
#define	RR(r)		(epat_read_regr(pi,2,r))
#define WRi(r,v)         epat_write_regr(pi,0,r,v)
#define RRi(r)           (epat_read_regr(pi,0,r))
#define CPP(x) 	w2(4);w0(0x22);w0(0xaa);w0(0x55);w0(0);w0(0xff);\
w0(0x87);w0(0x78);w0(x);w2(4);w2(5);w2(4);w0(0xff);
static void epat_connect ( PIA *pi )
static void epat_disconnect (PIA *pi)
static int epat_test_proto( PIA *pi, char * scratch, int verbose )
static void epat_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol epat = ;
static int __init epat_init(void)
static void __exit epat_exit(void)
MODULE_LICENSE("GPL");
module_init(epat_init)
module_exit(epat_exit)
