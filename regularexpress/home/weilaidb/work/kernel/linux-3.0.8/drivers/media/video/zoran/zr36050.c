#define ZR050_VERSION "v0.7.1"
#define MAX_CODECS 20
static int zr36050_codecs;
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-4)");
#define dprintk(num, format, args...) \
do  while (0)
static u8
zr36050_read (struct zr36050 *ptr,
u16             reg)
static void
zr36050_write (struct zr36050 *ptr,
u16             reg,
u8              value)
static u8
zr36050_read_status1 (struct zr36050 *ptr)
static u16
zr36050_read_scalefactor (struct zr36050 *ptr)
static void
zr36050_wait_end (struct zr36050 *ptr)
static int
zr36050_basic_test (struct zr36050 *ptr)
static int
zr36050_pushit (struct zr36050 *ptr,
u16             startreg,
u16             len,
const char     *data)
static const char zr36050_dqt[0x86] = ;
static const char zr36050_dht[0x1a4] = ;
#define NO_OF_COMPONENTS          0x3
#define BASELINE_PRECISION        0x8
static const char zr36050_tq[8] = ;
static const char zr36050_td[8] = ;
static const char zr36050_ta[8] = ;
static const char zr36050_decimation_h[8] = ;
static const char zr36050_decimation_v[8] = ;
static int
zr36050_set_sof (struct zr36050 *ptr)
static int
zr36050_set_sos (struct zr36050 *ptr)
static int
zr36050_set_dri (struct zr36050 *ptr)
static void
zr36050_init (struct zr36050 *ptr)
static int
zr36050_set_mode (struct videocodec *codec,
int                mode)
static int
zr36050_set_video (struct videocodec   *codec,
struct tvnorm       *norm,
struct vfe_settings *cap,
struct vfe_polarity *pol)
static int
zr36050_control (struct videocodec *codec,
int                type,
int                size,
void              *data)
static int
zr36050_unset (struct videocodec *codec)
static int
zr36050_setup (struct videocodec *codec)
static const struct videocodec zr36050_codec = ;
static int __init
zr36050_init_module (void)
static void __exit
zr36050_cleanup_module (void)
module_init(zr36050_init_module);
module_exit(zr36050_cleanup_module);
MODULE_AUTHOR("Wolfgang Scherr <scherr@net4you.at>");
MODULE_DESCRIPTION("Driver module for ZR36050 jpeg processors "
ZR050_VERSION);
MODULE_LICENSE("GPL");
