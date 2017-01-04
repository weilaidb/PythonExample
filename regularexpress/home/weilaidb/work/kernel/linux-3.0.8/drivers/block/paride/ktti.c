#define KTTI_VERSION      "1.0"
#define j44(a,b)                (((a>>4)&0x0f)|(b&0xf0))
static int  cont_map[2] = ;
static void  ktti_write_regr( PIA *pi, int cont, int regr, int val)
static int ktti_read_regr( PIA *pi, int cont, int regr )
static void ktti_read_block( PIA *pi, char * buf, int count )
static void ktti_write_block( PIA *pi, char * buf, int count )
static void ktti_connect ( PIA *pi  )
static void ktti_disconnect ( PIA *pi )
static void ktti_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol ktti = ;
static int __init ktti_init(void)
static void __exit ktti_exit(void)
MODULE_LICENSE("GPL");
module_init(ktti_init)
module_exit(ktti_exit)
