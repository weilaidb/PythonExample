#define KBIC_VERSION      "1.01"
#define r12w()			(delay_p,inw(pi->port+1)&0xffff)
#define j44(a,b)                ((((a>>4)&0x0f)|(b&0xf0))^0x88)
#define j53(w)                  (((w>>3)&0x1f)|((w>>4)&0xe0))
static int  cont_map[2] = ;
static int kbic_read_regr( PIA *pi, int cont, int regr )
static void  kbic_write_regr( PIA *pi, int cont, int regr, int val)
static void k951_connect ( PIA *pi  )
static void k951_disconnect ( PIA *pi )
#define	CCP(x)	w2(0xc4);w0(0xaa);w0(0x55);w0(0);w0(0xff);w0(0x87);\
w0(0x78);w0(x);w2(0xc5);w2(0xc4);w0(0xff);
static void k971_connect ( PIA *pi  )
static void k971_disconnect ( PIA *pi )
static void kbic_read_block( PIA *pi, char * buf, int count )
static void kbic_write_block( PIA *pi, char * buf, int count )
static void kbic_log_adapter( PIA *pi, char * scratch,
int verbose, char * chip )
static void k951_log_adapter( PIA *pi, char * scratch, int verbose )
static void k971_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol k951 = ;
static struct pi_protocol k971 = ;
static int __init kbic_init(void)
static void __exit kbic_exit(void)
MODULE_LICENSE("GPL");
module_init(kbic_init)
module_exit(kbic_exit)
