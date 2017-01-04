#define __CPIA2_H__
#define CPIA2_MAJ_VER	3
#define CPIA2_MIN_VER   0
#define CPIA2_PATCH_VER	0
#define ALLOW_CORRUPT 0
#define XFER_ISOC 0
#define XFER_BULK 1
#define USBIF_CMDONLY 0
#define USBIF_BULK 1
#define USBIF_ISO_1 2
#define USBIF_ISO_2 3
#define USBIF_ISO_3 4
#define USBIF_ISO_4 5
#define USBIF_ISO_5 6
#define USBIF_ISO_6 7
#define NEVER_FLICKER   0
#define ANTI_FLICKER_ON 1
#define FLICKER_60      60
#define FLICKER_50      50
#define DEBUG_NONE          0
#define DEBUG_REG           0x00000001
#define DEBUG_DUMP_PATCH    0x00000002
#define DEBUG_DUMP_REGS     0x00000004
enum ;
#define STV_IMAGE_CIF_ROWS    288
#define STV_IMAGE_CIF_COLS    352
#define STV_IMAGE_QCIF_ROWS   144
#define STV_IMAGE_QCIF_COLS   176
#define STV_IMAGE_VGA_ROWS    480
#define STV_IMAGE_VGA_COLS    640
#define STV_IMAGE_QVGA_ROWS   240
#define STV_IMAGE_QVGA_COLS   320
#define JPEG_MARKER_COM (1<<6)
enum sensors ;
#define  CPIA2_ASIC_672 0x67
#define  DEVICE_STV_672   0x0001
#define  DEVICE_STV_676   0x0002
enum frame_status ;
enum ;
#define CAMERAACCESS_TYPE_BLOCK    0x00
#define CAMERAACCESS_TYPE_RANDOM   0x04
#define CAMERAACCESS_TYPE_MASK     0x08
#define CAMERAACCESS_TYPE_REPEAT   0x0C
#define TRANSFER_READ 0
#define TRANSFER_WRITE 1
#define DEFAULT_ALT   USBIF_ISO_6
#define DEFAULT_BRIGHTNESS 0x46
#define DEFAULT_CONTRAST 0x93
#define DEFAULT_SATURATION 0x7f
#define DEFAULT_TARGET_KB 0x30
#define HI_POWER_MODE CPIA2_SYSTEM_CONTROL_HIGH_POWER
#define LO_POWER_MODE CPIA2_SYSTEM_CONTROL_LOW_POWER
enum ;
enum user_cmd ;
#define CAMACC_CIF      0x01
#define CAMACC_VGA      0x02
#define CAMACC_QCIF     0x04
#define CAMACC_QVGA     0x08
struct cpia2_register ;
struct cpia2_reg_mask ;
struct cpia2_command ;
struct camera_params ;
#define NUM_SBUF    2
struct cpia2_sbuf ;
struct framebuf ;
struct cpia2_fh ;
struct camera_data ;
int cpia2_register_camera(struct camera_data *cam);
void cpia2_unregister_camera(struct camera_data *cam);
int cpia2_reset_camera(struct camera_data *cam);
int cpia2_set_low_power(struct camera_data *cam);
void cpia2_dbg_dump_registers(struct camera_data *cam);
int cpia2_match_video_size(int width, int height);
void cpia2_set_camera_state(struct camera_data *cam);
void cpia2_save_camera_state(struct camera_data *cam);
void cpia2_set_color_params(struct camera_data *cam);
void cpia2_set_brightness(struct camera_data *cam, unsigned char value);
void cpia2_set_contrast(struct camera_data *cam, unsigned char value);
void cpia2_set_saturation(struct camera_data *cam, unsigned char value);
int cpia2_set_flicker_mode(struct camera_data *cam, int mode);
void cpia2_set_format(struct camera_data *cam);
int cpia2_send_command(struct camera_data *cam, struct cpia2_command *cmd);
int cpia2_do_command(struct camera_data *cam,
unsigned int command,
unsigned char direction, unsigned char param);
struct camera_data *cpia2_init_camera_struct(void);
int cpia2_init_camera(struct camera_data *cam);
int cpia2_allocate_buffers(struct camera_data *cam);
void cpia2_free_buffers(struct camera_data *cam);
long cpia2_read(struct camera_data *cam,
char __user *buf, unsigned long count, int noblock);
unsigned int cpia2_poll(struct camera_data *cam,
struct file *filp, poll_table *wait);
int cpia2_remap_buffer(struct camera_data *cam, struct vm_area_struct *vma);
void cpia2_set_property_flip(struct camera_data *cam, int prop_val);
void cpia2_set_property_mirror(struct camera_data *cam, int prop_val);
int cpia2_set_target_kb(struct camera_data *cam, unsigned char value);
int cpia2_set_gpio(struct camera_data *cam, unsigned char setting);
int cpia2_set_fps(struct camera_data *cam, int framerate);
int cpia2_usb_init(void);
void cpia2_usb_cleanup(void);
int cpia2_usb_transfer_cmd(struct camera_data *cam, void *registers,
u8 request, u8 start, u8 count, u8 direction);
int cpia2_usb_stream_start(struct camera_data *cam, unsigned int alternate);
int cpia2_usb_stream_stop(struct camera_data *cam);
int cpia2_usb_stream_pause(struct camera_data *cam);
int cpia2_usb_stream_resume(struct camera_data *cam);
int cpia2_usb_change_streaming_alternate(struct camera_data *cam,
unsigned int alt);
#define ALOG(lev, fmt, args...) printk(lev "%s:%d %s(): " fmt, __FILE__, __LINE__, __func__, ## args)
#define LOG(fmt, args...) ALOG(KERN_INFO, fmt, ## args)
#define ERR(fmt, args...) ALOG(KERN_ERR, fmt, ## args)
#define DBG(fmt, args...) ALOG(KERN_DEBUG, fmt, ## args)
#define ALOG(fmt,args...) printk(fmt,##args)
#define LOG(fmt,args...) ALOG(KERN_INFO "cpia2: "fmt,##args)
#define ERR(fmt,args...) ALOG(KERN_ERR "cpia2: "fmt,##args)
#define DBG(fmn,args...) do  while(0)
#define KINFO(fmt, args...) printk(KERN_INFO fmt,##args)
