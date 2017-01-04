#define FIT2_VERSION      "1.0"
#define j44(a,b)                (((a>>4)&0x0f)|(b&0xf0))
static void  fit2_write_regr( PIA *pi, int cont, int regr, int val)
static int fit2_read_regr( PIA *pi, int cont, int regr )
static void fit2_read_block( PIA *pi, char * buf, int count )
static void fit2_write_block( PIA *pi, char * buf, int count )
static void fit2_connect ( PIA *pi  )
static void fit2_disconnect ( PIA *pi )
static void fit2_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol fit2 = ;
static int __init fit2_init(void)
static void __exit fit2_exit(void)
MODULE_LICENSE("GPL");
module_init(fit2_init)
module_exit(fit2_exit)
