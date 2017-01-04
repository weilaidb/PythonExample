static int verbose;
#define BACKPACK_VERSION "2.0.2"
#define PPCSTRUCT(pi) ((Interface *)(pi->private))
#define ATAPI_DATA       0
#define ATAPI_ERROR      1
#define ATAPI_FEATURES   1
#define ATAPI_INT_REASON 2
#define ATAPI_COUNT_LOW  4
#define ATAPI_COUNT_HIGH 5
#define ATAPI_DRIVE_SEL  6
#define ATAPI_STATUS     7
#define ATAPI_COMMAND    7
#define ATAPI_ALT_STATUS 0x0e
#define ATAPI_DEVICE_CONTROL 0x0e
static int bpck6_read_regr(PIA *pi, int cont, int reg)
static void bpck6_write_regr(PIA *pi, int cont, int reg, int val)
static void bpck6_write_block( PIA *pi, char * buf, int len )
static void bpck6_read_block( PIA *pi, char * buf, int len )
static void bpck6_connect ( PIA *pi  )
static void bpck6_disconnect ( PIA *pi )
static int bpck6_test_port ( PIA *pi )
static int bpck6_probe_unit ( PIA *pi )
static void bpck6_log_adapter( PIA *pi, char * scratch, int verbose )
static int bpck6_init_proto(PIA *pi)
static void bpck6_release_proto(PIA *pi)
static struct pi_protocol bpck6 = ;
static int __init bpck6_init(void)
static void __exit bpck6_exit(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Micro Solutions Inc.");
MODULE_DESCRIPTION("BACKPACK Protocol module, compatible with PARIDE");
module_param(verbose, bool, 0644);
module_init(bpck6_init)
module_exit(bpck6_exit)
