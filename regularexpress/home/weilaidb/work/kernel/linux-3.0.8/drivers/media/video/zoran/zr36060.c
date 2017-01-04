#define ZR060_VERSION "v0.7"
#define MAX_CODECS 20
static int zr36060_codecs;
static int low_bitrate;
module_param(low_bitrate, bool, 0);
MODULE_PARM_DESC(low_bitrate, "Buz compatibility option, halves bitrate");
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-4)");
#define dprintk(num, format, args...) \
do  while (0)
static u8
zr36060_read (struct zr36060 *ptr,
u16             reg)
static void
zr36060_write(struct zr36060 *ptr,
u16             reg,
u8              value)
static u8
zr36060_read_status (struct zr36060 *ptr)
static u16
zr36060_read_scalefactor (struct zr36060 *ptr)
static void
zr36060_wait_end (struct zr36060 *ptr)
static int
zr36060_basic_test (struct zr36060 *ptr)
static int
zr36060_pushit (struct zr36060 *ptr,
u16             startreg,
u16             len,
const char     *data)
static const char zr36060_dqt[0x86] = ;
static const char zr36060_dht[0x1a4] = ;
#define NO_OF_COMPONENTS          0x3
#define BASELINE_PRECISION        0x8
static const char zr36060_tq[8] = ;
static const char zr36060_td[8] = ;
static const char zr36060_ta[8] = ;
static const char zr36060_decimation_h[8] = ;
static const char zr36060_decimation_v[8] = ;
static int
zr36060_set_sof (struct zr36060 *ptr)
static int
zr36060_set_sos (struct zr36060 *ptr)
static int
zr36060_set_dri (struct zr36060 *ptr)
static void
zr36060_init (struct zr36060 *ptr)
static int
zr36060_set_mode (struct videocodec *codec,
int                mode)
static int
zr36060_set_video (struct videocodec   *codec,
struct tvnorm       *norm,
struct vfe_settings *cap,
struct vfe_polarity *pol)
static int
zr36060_control (struct videocodec *codec,
int                type,
int                size,
void              *data)
static int
zr36060_unset (struct videocodec *codec)
static int
zr36060_setup (struct videocodec *codec)
static const struct videocodec zr36060_codec = ;
static int __init
zr36060_init_module (void)
static void __exit
zr36060_cleanup_module (void)
module_init(zr36060_init_module);
module_exit(zr36060_cleanup_module);
MODULE_AUTHOR("Laurent Pinchart <laurent.pinchart@skynet.be>");
MODULE_DESCRIPTION("Driver module for ZR36060 jpeg processors "
ZR060_VERSION);
MODULE_LICENSE("GPL");
