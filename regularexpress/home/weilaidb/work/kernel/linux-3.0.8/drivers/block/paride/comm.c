#define COMM_VERSION      "1.01"
#define j44(a,b)	(((a>>3)&0x0f)|((b<<1)&0xf0))
#define P1	w2(5);w2(0xd);w2(0xd);w2(5);w2(4);
#define P2	w2(5);w2(7);w2(7);w2(5);w2(4);
static int  cont_map[2] = ;
static int comm_read_regr( PIA *pi, int cont, int regr )
static void comm_write_regr( PIA *pi, int cont, int regr, int val )
static void comm_connect ( PIA *pi  )
static void comm_disconnect ( PIA *pi )
static void comm_read_block( PIA *pi, char * buf, int count )
static void comm_write_block( PIA *pi, char * buf, int count )
static void comm_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol comm = ;
static int __init comm_init(void)
static void __exit comm_exit(void)
MODULE_LICENSE("GPL");
module_init(comm_init)
module_exit(comm_exit)
