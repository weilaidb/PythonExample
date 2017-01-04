#define DSTR_VERSION      "1.01"
#define j44(a,b)  (((a>>3)&0x07)|((~a>>4)&0x08)|((b<<1)&0x70)|((~b)&0x80))
#define P1	w2(5);w2(0xd);w2(5);w2(4);
#define P2	w2(5);w2(7);w2(5);w2(4);
#define P3      w2(6);w2(4);w2(6);w2(4);
static int  cont_map[2] = ;
static int dstr_read_regr( PIA *pi, int cont, int regr )
static void dstr_write_regr(  PIA *pi, int cont, int regr, int val )
#define  CCP(x)  w0(0xff);w2(0xc);w2(4);\
w0(0xaa);w0(0x55);w0(0);w0(0xff);w0(0x87);w0(0x78);\
w0(x);w2(5);w2(4);
static void dstr_connect ( PIA *pi  )
static void dstr_disconnect ( PIA *pi )
static void dstr_read_block( PIA *pi, char * buf, int count )
static void dstr_write_block( PIA *pi, char * buf, int count )
static void dstr_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol dstr = ;
static int __init dstr_init(void)
static void __exit dstr_exit(void)
MODULE_LICENSE("GPL");
module_init(dstr_init)
module_exit(dstr_exit)
