#define FIT3_VERSION      "1.0"
#define j44(a,b)                (((a>>3)&0x0f)|((b<<1)&0xf0))
#define w7(byte)
#define r7()                    (in_p(7) & 0xff)
static void  fit3_write_regr( PIA *pi, int cont, int regr, int val)
static int fit3_read_regr( PIA *pi, int cont, int regr )
static void fit3_read_block( PIA *pi, char * buf, int count )
static void fit3_write_block( PIA *pi, char * buf, int count )
static void fit3_connect ( PIA *pi  )
static void fit3_disconnect ( PIA *pi )
static void fit3_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol fit3 = ;
static int __init fit3_init(void)
static void __exit fit3_exit(void)
MODULE_LICENSE("GPL");
module_init(fit3_init)
module_exit(fit3_exit)
