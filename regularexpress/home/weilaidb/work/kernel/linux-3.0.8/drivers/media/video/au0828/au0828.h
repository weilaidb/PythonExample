#define DRIVER_NAME "au0828"
#define URB_COUNT   16
#define URB_BUFSIZE (0xe522)
#define NTSC_STD_W      720
#define NTSC_STD_H      480
#define AU0828_INTERLACED_DEFAULT       1
#define V4L2_CID_PRIVATE_SHARPNESS  (V4L2_CID_PRIVATE_BASE + 0)
#define AU0828_MAX_ISO_BUFS    12
#define AU0828_ISO_PACKETS_PER_URB      128
#define AU0828_MIN_BUF 4
#define AU0828_DEF_BUF 8
#define AU0828_MAX_INPUT        4
#define AU0828_RESOURCE_VIDEO 0x01
#define AU0828_RESOURCE_VBI   0x02
enum au0828_itype ;
struct au0828_input ;
struct au0828_board ;
struct au0828_dvb ;
enum au0828_stream_state ;
#define AUVI_INPUT(nr) (dev->board.input[nr])
enum au0828_dev_state ;
struct au0828_fh ;
struct au0828_usb_isoc_ctl ;
struct au0828_buffer ;
struct au0828_dmaqueue ;
struct au0828_dev ;
#define au0828_read(dev, reg) au0828_readreg(dev, reg)
#define au0828_write(dev, reg, value) au0828_writereg(dev, reg, value)
#define au0828_andor(dev, reg, mask, value) 				\
au0828_writereg(dev, reg, 					\
(au0828_readreg(dev, reg) & ~(mask)) | ((value) & (mask)))
#define au0828_set(dev, reg, bit) au0828_andor(dev, (reg), (bit), (bit))
#define au0828_clear(dev, reg, bit) au0828_andor(dev, (reg), (bit), 0)
extern u32 au0828_read(struct au0828_dev *dev, u16 reg);
extern u32 au0828_write(struct au0828_dev *dev, u16 reg, u32 val);
extern int au0828_debug;
extern struct au0828_board au0828_boards[];
extern struct usb_device_id au0828_usb_id_table[];
extern void au0828_gpio_setup(struct au0828_dev *dev);
extern int au0828_tuner_callback(void *priv, int component,
int command, int arg);
extern void au0828_card_setup(struct au0828_dev *dev);
extern int au0828_i2c_register(struct au0828_dev *dev);
extern int au0828_i2c_unregister(struct au0828_dev *dev);
int au0828_analog_register(struct au0828_dev *dev,
struct usb_interface *interface);
int au0828_analog_stream_disable(struct au0828_dev *d);
void au0828_analog_unregister(struct au0828_dev *dev);
extern int au0828_dvb_register(struct au0828_dev *dev);
extern void au0828_dvb_unregister(struct au0828_dev *dev);
extern struct videobuf_queue_ops au0828_vbi_qops;
#define dprintk(level, fmt, arg...)\
do  while (0)
