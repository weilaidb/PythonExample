#define TM6000_VERSION KERNEL_VERSION(0, 0, 2)
enum tm6000_itype ;
enum tm6000_mux ;
enum tm6000_devtype ;
struct tm6000_input ;
struct tm6000_fmt ;
struct tm6000_buffer ;
struct tm6000_dmaqueue ;
enum tm6000_core_state ;
enum tm6000_io_method ;
enum tm6000_mode ;
struct tm6000_gpio ;
struct tm6000_capabilities ;
struct tm6000_dvb ;
struct snd_tm6000_card ;
struct tm6000_endpoint ;
struct tm6000_core ;
enum tm6000_ops_type ;
struct tm6000_ops ;
struct tm6000_fh ;
#define TM6000_STD	(V4L2_STD_PAL|V4L2_STD_PAL_N|V4L2_STD_PAL_Nc|    \
V4L2_STD_PAL_M|V4L2_STD_PAL_60|V4L2_STD_NTSC_M| \
V4L2_STD_NTSC_M_JP|V4L2_STD_SECAM)
int tm6000_tuner_callback(void *ptr, int component, int command, int arg);
int tm6000_xc5000_callback(void *ptr, int component, int command, int arg);
int tm6000_cards_setup(struct tm6000_core *dev);
void tm6000_flash_led(struct tm6000_core *dev, u8 state);
int tm6000_read_write_usb(struct tm6000_core *dev, u8 reqtype, u8 req,
u16 value, u16 index, u8 *buf, u16 len);
int tm6000_get_reg(struct tm6000_core *dev, u8 req, u16 value, u16 index);
int tm6000_get_reg16(struct tm6000_core *dev, u8 req, u16 value, u16 index);
int tm6000_get_reg32(struct tm6000_core *dev, u8 req, u16 value, u16 index);
int tm6000_set_reg(struct tm6000_core *dev, u8 req, u16 value, u16 index);
int tm6000_set_reg_mask(struct tm6000_core *dev, u8 req, u16 value,
u16 index, u16 mask);
int tm6000_i2c_reset(struct tm6000_core *dev, u16 tsleep);
int tm6000_init(struct tm6000_core *dev);
int tm6000_init_analog_mode(struct tm6000_core *dev);
int tm6000_init_digital_mode(struct tm6000_core *dev);
int tm6000_set_audio_bitrate(struct tm6000_core *dev, int bitrate);
int tm6000_set_audio_rinput(struct tm6000_core *dev);
int tm6000_tvaudio_set_mute(struct tm6000_core *dev, u8 mute);
void tm6000_set_volume(struct tm6000_core *dev, int vol);
int tm6000_v4l2_register(struct tm6000_core *dev);
int tm6000_v4l2_unregister(struct tm6000_core *dev);
int tm6000_v4l2_exit(void);
void tm6000_set_fourcc_format(struct tm6000_core *dev);
void tm6000_remove_from_devlist(struct tm6000_core *dev);
void tm6000_add_into_devlist(struct tm6000_core *dev);
int tm6000_register_extension(struct tm6000_ops *ops);
void tm6000_unregister_extension(struct tm6000_ops *ops);
void tm6000_init_extension(struct tm6000_core *dev);
void tm6000_close_extension(struct tm6000_core *dev);
int tm6000_call_fillbuf(struct tm6000_core *dev, enum tm6000_ops_type type,
char *buf, int size);
void tm6000_get_std_res(struct tm6000_core *dev);
int tm6000_set_standard(struct tm6000_core *dev);
int tm6000_i2c_register(struct tm6000_core *dev);
int tm6000_i2c_unregister(struct tm6000_core *dev);
int tm6000_v4l2_mmap(struct file *filp, struct vm_area_struct *vma);
int tm6000_vidioc_streamon(struct file *file, void *priv,
enum v4l2_buf_type i);
int tm6000_vidioc_streamoff(struct file *file, void *priv,
enum v4l2_buf_type i);
int tm6000_vidioc_reqbufs(struct file *file, void *priv,
struct v4l2_requestbuffers *rb);
int tm6000_vidioc_querybuf(struct file *file, void *priv,
struct v4l2_buffer *b);
int tm6000_vidioc_qbuf(struct file *file, void *priv, struct v4l2_buffer *b);
int tm6000_vidioc_dqbuf(struct file *file, void *priv, struct v4l2_buffer *b);
ssize_t tm6000_v4l2_read(struct file *filp, char __user * buf, size_t count,
loff_t *f_pos);
unsigned int tm6000_v4l2_poll(struct file *file,
struct poll_table_struct *wait);
int tm6000_queue_init(struct tm6000_core *dev);
int tm6000_ir_init(struct tm6000_core *dev);
int tm6000_ir_fini(struct tm6000_core *dev);
void tm6000_ir_wait(struct tm6000_core *dev, u8 state);
int tm6000_ir_int_start(struct tm6000_core *dev);
void tm6000_ir_int_stop(struct tm6000_core *dev);
extern int tm6000_debug;
#define dprintk(dev, level, fmt, arg...) do  while (0)
#define V4L2_DEBUG_REG		0x0004
#define V4L2_DEBUG_I2C		0x0008
#define V4L2_DEBUG_QUEUE	0x0010
#define V4L2_DEBUG_ISOC		0x0020
#define V4L2_DEBUG_RES_LOCK	0x0040
#define V4L2_DEBUG_OPEN		0x0080
#define tm6000_err(fmt, arg...) do  while (0)
