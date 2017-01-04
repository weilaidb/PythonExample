#define ZR016_VERSION "v0.7"
#define MAX_CODECS 20
static int zr36016_codecs;
static int debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Debug level (0-4)");
#define dprintk(num, format, args...) \
do  while (0)
static u8
zr36016_read (struct zr36016 *ptr,
u16             reg)
static void
zr36016_write (struct zr36016 *ptr,
u16             reg,
u8              value)
static u8
zr36016_readi (struct zr36016 *ptr,
u16             reg)
static void
zr36016_writei (struct zr36016 *ptr,
u16             reg,
u8              value)
static u8
zr36016_read_version (struct zr36016 *ptr)
static int
zr36016_basic_test (struct zr36016 *ptr)
static const int zr016_xoff[] = ;
static const int zr016_yoff[] = ;
static void
zr36016_init (struct zr36016 *ptr)
static int
zr36016_set_mode (struct videocodec *codec,
int                mode)
static int
zr36016_set_video (struct videocodec   *codec,
struct tvnorm       *norm,
struct vfe_settings *cap,
struct vfe_polarity *pol)
static int
zr36016_control (struct videocodec *codec,
int                type,
int                size,
void              *data)
static int
zr36016_unset (struct videocodec *codec)
static int
zr36016_setup (struct videocodec *codec)
static const struct videocodec zr36016_codec = ;
static int __init
zr36016_init_module (void)
static void __exit
zr36016_cleanup_module (void)
module_init(zr36016_init_module);
module_exit(zr36016_cleanup_module);
MODULE_AUTHOR("Wolfgang Scherr <scherr@net4you.at>");
MODULE_DESCRIPTION("Driver module for ZR36016 video frontends "
ZR016_VERSION);
MODULE_LICENSE("GPL");
