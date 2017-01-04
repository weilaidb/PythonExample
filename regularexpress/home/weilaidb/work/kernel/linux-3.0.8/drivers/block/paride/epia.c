#define EPIA_VERSION      "1.02"
#define j44(a,b)                (((a>>4)&0x0f)+(b&0xf0))
#define j53(a,b)                (((a>>3)&0x1f)+((b<<4)&0xe0))
static int cont_map[2] = ;
static int epia_read_regr( PIA *pi, int cont, int regr )
static void epia_write_regr( PIA *pi, int cont, int regr, int val)
#define WR(r,v)         epia_write_regr(pi,0,r,v)
#define RR(r)           (epia_read_regr(pi,0,r))
static void epia_connect ( PIA *pi  )
static void epia_disconnect ( PIA *pi )
static void epia_read_block( PIA *pi, char * buf, int count )
static void epia_write_block( PIA *pi, char * buf, int count )
static int epia_test_proto( PIA *pi, char * scratch, int verbose )
static void epia_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol epia = ;
static int __init epia_init(void)
static void __exit epia_exit(void)
MODULE_LICENSE("GPL");
module_init(epia_init)
module_exit(epia_exit)
