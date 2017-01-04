#define __EASYCAP_H__
#define  PATIENCE  500
#define  PERSEVERE
#undef  EASYCAP_TESTCARD
#error "PAGE_SIZE not defined"
#define USB_EASYCAP_VENDOR_ID	0x05e1
#define USB_EASYCAP_PRODUCT_ID	0x0408
#define EASYCAP_DRIVER_VERSION "0.9.01"
#define EASYCAP_DRIVER_DESCRIPTION "easycapdc60"
#define USB_SKEL_MINOR_BASE     192
#define DONGLE_MANY 8
#define INPUT_MANY 6
#define SAA_0A_DEFAULT 0x7F
#define SAA_0B_DEFAULT 0x3F
#define SAA_0C_DEFAULT 0x2F
#define SAA_0D_DEFAULT 0x00
#define VIDEO_ISOC_BUFFER_MANY 16
#define VIDEO_ISOC_ORDER 3
#define VIDEO_ISOC_FRAMESPERDESC ((unsigned int) 1 << VIDEO_ISOC_ORDER)
#define USB_2_0_MAXPACKETSIZE 3072
#if (USB_2_0_MAXPACKETSIZE > PAGE_SIZE)
#error video_isoc_buffer[.] will not be big enough
#define VIDEO_JUNK_TOLERATE VIDEO_ISOC_BUFFER_MANY
#define VIDEO_LOST_TOLERATE 50
#define FIELD_BUFFER_SIZE (203 * PAGE_SIZE)
#define FRAME_BUFFER_SIZE (405 * PAGE_SIZE)
#define FIELD_BUFFER_MANY 4
#define FRAME_BUFFER_MANY 6
#define AUDIO_ISOC_BUFFER_MANY 16
#define AUDIO_ISOC_ORDER 1
#define AUDIO_ISOC_FRAMESPERDESC 32
#define AUDIO_ISOC_BUFFER_SIZE (PAGE_SIZE << AUDIO_ISOC_ORDER)
#define AUDIO_FRAGMENT_MANY 32
#define PAGES_PER_AUDIO_FRAGMENT 4
#define  PAL_BGHIN      0
#define  PAL_Nc         2
#define  SECAM          4
#define  NTSC_N         6
#define  NTSC_N_443     8
#define  NTSC_M         1
#define  NTSC_443       3
#define  NTSC_M_JP      5
#define  PAL_60         7
#define  PAL_M          9
#define  PAL_BGHIN_SLOW    10
#define  PAL_Nc_SLOW       12
#define  SECAM_SLOW        14
#define  NTSC_N_SLOW       16
#define  NTSC_N_443_SLOW   18
#define  NTSC_M_SLOW       11
#define  NTSC_443_SLOW     13
#define  NTSC_M_JP_SLOW    15
#define  PAL_60_SLOW       17
#define  PAL_M_SLOW        19
#define  STANDARD_MANY 20
enum ;
enum ;
enum ;
#define SETTINGS_MANY	(STANDARD_MANY * \
RESOLUTION_MANY * \
2 * \
PIXELFORMAT_MANY * \
INTERLACE_MANY)
struct easycap_dongle ;
struct data_buffer ;
struct data_urb ;
struct easycap_standard ;
struct easycap_format ;
struct inputset ;
struct easycap ;
long easycap_unlocked_ioctl(struct file *, unsigned int, unsigned long);
int              easycap_dqbuf(struct easycap *, int);
int              submit_video_urbs(struct easycap *);
int              kill_video_urbs(struct easycap *);
int              field2frame(struct easycap *);
int              redaub(struct easycap *, void *, void *,
int, int, u8, u8, bool);
void             easycap_testcard(struct easycap *, int);
int              fillin_formats(void);
int              newinput(struct easycap *, int);
int              adjust_standard(struct easycap *, v4l2_std_id);
int              adjust_format(struct easycap *, u32, u32, u32,
int, bool);
int              adjust_brightness(struct easycap *, int);
int              adjust_contrast(struct easycap *, int);
int              adjust_saturation(struct easycap *, int);
int              adjust_hue(struct easycap *, int);
int              adjust_volume(struct easycap *, int);
int		easycap_alsa_probe(struct easycap *);
void            easycap_alsa_complete(struct urb *);
void             easyoss_complete(struct urb *);
int              easycap_sound_setup(struct easycap *);
int              submit_audio_urbs(struct easycap *);
int              kill_audio_urbs(struct easycap *);
void             easyoss_testtone(struct easycap *, int);
int              audio_setup(struct easycap *);
int              audio_gainget(struct usb_device *);
int              audio_gainset(struct usb_device *, s8);
int              set_interface(struct usb_device *, u16);
int              wakeup_device(struct usb_device *);
int              confirm_resolution(struct usb_device *);
int              confirm_stream(struct usb_device *);
int              setup_stk(struct usb_device *, bool);
int              setup_saa(struct usb_device *, bool);
int              setup_vt(struct usb_device *);
int              check_stk(struct usb_device *, bool);
int              check_saa(struct usb_device *, bool);
int              ready_saa(struct usb_device *);
int              merit_saa(struct usb_device *);
int              check_vt(struct usb_device *);
int              select_input(struct usb_device *, int, int);
int              set_resolution(struct usb_device *,
u16, u16, u16, u16);
int              read_saa(struct usb_device *, u16);
int              read_stk(struct usb_device *, u32);
int              write_saa(struct usb_device *, u16, u16);
int              write_000(struct usb_device *, u16, u16);
int              start_100(struct usb_device *);
int              stop_100(struct usb_device *);
int              write_300(struct usb_device *);
int              read_vt(struct usb_device *, u16);
int              write_vt(struct usb_device *, u16, u16);
int		isdongle(struct easycap *);
struct signed_div_result  signed_div(long long int, long long int);
const char *strerror(int err);
#define SAY(format, args...) do  while (0)
#define SAM(format, args...) do  while (0)
extern int easycap_debug;
#define JOT(n, format, args...) do  while (0)
#define JOM(n, format, args...) do  while (0)
#define JOT(n, format, args...) do  while (0)
#define JOM(n, format, args...) do  while (0)
#define MICROSECONDS(X, Y) \
((1000000*((long long int)(X.tv_sec - Y.tv_sec))) + \
(long long int)(X.tv_usec - Y.tv_usec))
#define SUMMER(P, X, Y, Z) do  while (0)
extern bool easycap_readback;
extern const struct easycap_standard easycap_standard[];
extern struct easycap_format easycap_format[];
extern struct v4l2_queryctrl easycap_control[];
extern struct usb_driver easycap_usb_driver;
extern struct easycap_dongle easycapdc60_dongle[];
extern struct usb_class_driver easyoss_class;
