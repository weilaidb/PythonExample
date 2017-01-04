extern const struct zoran_format zoran_formats[];
static int card[BUZ_MAX] = ;
module_param_array(card, int, NULL, 0444);
MODULE_PARM_DESC(card, "Card type");
static unsigned long vidmem;
module_param(vidmem, ulong, 0444);
MODULE_PARM_DESC(vidmem, "Default video memory base address");
static unsigned int default_input;
module_param(default_input, uint, 0444);
MODULE_PARM_DESC(default_input,
"Default input (0=Composite, 1=S-Video, 2=Internal)");
static int default_mux = 1;
module_param(default_mux, int, 0644);
MODULE_PARM_DESC(default_mux,
"Default 6 Eyes mux setting (Input selection)");
static int default_norm;
module_param(default_norm, int, 0444);
MODULE_PARM_DESC(default_norm, "Default norm (0=PAL, 1=NTSC, 2=SECAM)");
static int video_nr[BUZ_MAX] = ;
module_param_array(video_nr, int, NULL, 0444);
MODULE_PARM_DESC(video_nr, "Video device number (-1=Auto)");
int v4l_nbufs = 4;
int v4l_bufsize = 864;
module_param(v4l_nbufs, int, 0644);
MODULE_PARM_DESC(v4l_nbufs, "Maximum number of V4L buffers to use");
module_param(v4l_bufsize, int, 0644);
MODULE_PARM_DESC(v4l_bufsize, "Maximum size per V4L buffer (in kB)");
int jpg_nbufs = 32;
int jpg_bufsize = 512;
module_param(jpg_nbufs, int, 0644);
MODULE_PARM_DESC(jpg_nbufs, "Maximum number of JPG buffers to use");
module_param(jpg_bufsize, int, 0644);
MODULE_PARM_DESC(jpg_bufsize, "Maximum size per JPG buffer (in kB)");
int pass_through = 0;
module_param(pass_through, int, 0644);
MODULE_PARM_DESC(pass_through,
"Pass TV signal through to TV-out when idling");
int zr36067_debug = 1;
module_param_named(debug, zr36067_debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug level (0-5)");
MODULE_DESCRIPTION("Zoran-36057/36067 JPEG codec driver");
MODULE_AUTHOR("Serguei Miridonov");
MODULE_LICENSE("GPL");
#define ZR_DEVICE(subven, subdev, data)
static struct pci_device_id zr36067_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, zr36067_pci_tbl);
static unsigned int zoran_num;
static u32
zr36060_read (struct videocodec *codec,
u16                reg)
static void
zr36060_write (struct videocodec *codec,
u16                reg,
u32                val)
static u32
zr36050_read (struct videocodec *codec,
u16                reg)
static void
zr36050_write (struct videocodec *codec,
u16                reg,
u32                val)
static u32
zr36016_read (struct videocodec *codec,
u16                reg)
void
zr36016_write (struct videocodec *codec,
u16                reg,
u32                val)
static void
dc10_init (struct zoran *zr)
static void
dc10plus_init (struct zoran *zr)
static void
buz_init (struct zoran *zr)
static void
lml33_init (struct zoran *zr)
static void
avs6eyes_init (struct zoran *zr)
static char *
codecid_to_modulename (u16 codecid)
static struct tvnorm f50sqpixel = ;
static struct tvnorm f60sqpixel = ;
static struct tvnorm f50ccir601 = ;
static struct tvnorm f60ccir601 = ;
static struct tvnorm f50ccir601_lml33 = ;
static struct tvnorm f60ccir601_lml33 = ;
static struct tvnorm f50sqpixel_dc10 = ;
static struct tvnorm f60sqpixel_dc10 = ;
static struct tvnorm f50ccir601_lm33r10 = ;
static struct tvnorm f60ccir601_lm33r10 = ;
static struct tvnorm f50ccir601_avs6eyes = ;
static struct tvnorm f60ccir601_avs6eyes = ;
static const unsigned short vpx3220_addrs[] = ;
static const unsigned short saa7110_addrs[] = ;
static const unsigned short saa7111_addrs[] = ;
static const unsigned short saa7114_addrs[] = ;
static const unsigned short adv717x_addrs[] = ;
static const unsigned short ks0127_addrs[] = ;
static const unsigned short saa7185_addrs[] = ;
static const unsigned short bt819_addrs[] = ;
static const unsigned short bt856_addrs[] = ;
static const unsigned short bt866_addrs[] = ;
static struct card_info zoran_cards[NUM_CARDS] __devinitdata = ;
static int
zoran_i2c_getsda (void *data)
static int
zoran_i2c_getscl (void *data)
static void
zoran_i2c_setsda (void *data,
int   state)
static void
zoran_i2c_setscl (void *data,
int   state)
static const struct i2c_algo_bit_data zoran_i2c_bit_data_template = ;
static int
zoran_register_i2c (struct zoran *zr)
static void
zoran_unregister_i2c (struct zoran *zr)
int
zoran_check_jpg_settings (struct zoran              *zr,
struct zoran_jpg_settings *settings,
int try)
void
zoran_open_init_params (struct zoran *zr)
static void __devinit
test_interrupts (struct zoran *zr)
static int __devinit
zr36057_init (struct zoran *zr)
static void __devexit zoran_remove(struct pci_dev *pdev)
void
zoran_vdev_release (struct video_device *vdev)
static struct videocodec_master * __devinit
zoran_setup_videocodec (struct zoran *zr,
int           type)
static void zoran_subdev_notify(struct v4l2_subdev *sd, unsigned int cmd, void *arg)
static int __devinit zoran_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_driver zoran_driver = ;
static int __init zoran_init(void)
static void __exit zoran_exit(void)
module_init(zoran_init);
module_exit(zoran_exit);
