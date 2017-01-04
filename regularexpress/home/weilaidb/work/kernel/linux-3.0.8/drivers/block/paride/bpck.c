#define	BPCK_VERSION	"1.02"
#undef r2
#undef w2
#define PC			pi->private
#define r2()			(PC=(in_p(2) & 0xff))
#define w2(byte)
#define t2(pat)
#define e2()
#define o2()
#define j44(l,h)     (((l>>3)&0x7)|((l>>4)&0x8)|((h<<1)&0x70)|(h&0x80))
static int  cont_map[3] = ;
static int bpck_read_regr( PIA *pi, int cont, int regr )
static void bpck_write_regr( PIA *pi, int cont, int regr, int val )
#define WR(r,v)		bpck_write_regr(pi,2,r,v)
#define RR(r)		(bpck_read_regr(pi,2,r))
static void bpck_write_block( PIA *pi, char * buf, int count )
static void bpck_read_block( PIA *pi, char * buf, int count )
static int bpck_probe_unit ( PIA *pi )
static void bpck_connect ( PIA *pi  )
static void bpck_disconnect ( PIA *pi )
static void bpck_force_spp ( PIA *pi )
#define TEST_LEN  16
static int bpck_test_proto( PIA *pi, char * scratch, int verbose )
static void bpck_read_eeprom ( PIA *pi, char * buf )
static int bpck_test_port ( PIA *pi )
static void bpck_log_adapter( PIA *pi, char * scratch, int verbose )
static struct pi_protocol bpck = ;
static int __init bpck_init(void)
static void __exit bpck_exit(void)
MODULE_LICENSE("GPL");
module_init(bpck_init)
module_exit(bpck_exit)
