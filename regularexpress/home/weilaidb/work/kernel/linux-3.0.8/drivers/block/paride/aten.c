#define ATEN_VERSION      "1.01"
#define j44(a,b)                ((((a>>4)&0x0f)|(b&0xf0))^0x88)
static int  cont_map[2] = ;
static void  aten_write_regr( PIA *pi, int cont, int regr, int val)
static int aten_read_regr( PIA *pi, int cont, int regr )
static void aten_read_block( PIA *pi, char * buf, int count )
static void aten_write_block( PIA *pi, char * buf, int count )
static void aten_connect ( PIA *pi  )
static void aten_disconnect ( PIA *pi )
static void aten_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol aten = ;
static int __init aten_init(void)
static void __exit aten_exit(void)
MODULE_LICENSE("GPL");
module_init(aten_init)
module_exit(aten_exit)
