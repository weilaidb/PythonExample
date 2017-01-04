#define CX25821_H_
#define CX25821_VERSION_CODE KERNEL_VERSION(0, 0, 106)
#define UNSET (-1U)
#define NO_SYNC_LINE (-1U)
#define CX25821_MAXBOARDS 2
#define TRUE    1
#define FALSE   0
#define LINE_SIZE_D1    1440
#define MAX_DECODERS            8
#define MAX_ENCODERS            2
#define QUAD_DECODERS           4
#define MAX_CAMERAS             16
#define MAX_CX25821_INPUT 8
#define INPUT(nr) (&cx25821_boards[dev->board].input[nr])
#define RESOURCE_VIDEO0       1
#define RESOURCE_VIDEO1       2
#define RESOURCE_VIDEO2       4
#define RESOURCE_VIDEO3       8
#define RESOURCE_VIDEO4       16
#define RESOURCE_VIDEO5       32
#define RESOURCE_VIDEO6       64
#define RESOURCE_VIDEO7       128
#define RESOURCE_VIDEO8       256
#define RESOURCE_VIDEO9       512
#define RESOURCE_VIDEO10      1024
#define RESOURCE_VIDEO11      2048
#define RESOURCE_VIDEO_IOCTL  4096
#define BUFFER_TIMEOUT     (HZ)
#define UNKNOWN_BOARD       0
#define CX25821_BOARD        1
#define CX25821_NORMS (\
V4L2_STD_NTSC_M |  V4L2_STD_NTSC_M_JP | V4L2_STD_NTSC_M_KR | \
V4L2_STD_PAL_BG |  V4L2_STD_PAL_DK    |  V4L2_STD_PAL_I    | \
V4L2_STD_PAL_M  |  V4L2_STD_PAL_N     |  V4L2_STD_PAL_H    | \
V4L2_STD_PAL_Nc)
#define CX25821_BOARD_CONEXANT_ATHENA10 1
#define MAX_VID_CHANNEL_NUM     12
#define VID_CHANNEL_NUM 8
struct cx25821_fmt ;
struct cx25821_ctrl ;
struct cx25821_tvnorm ;
struct cx25821_fh ;
enum cx25821_itype ;
enum cx25821_src_sel_type ;
struct cx25821_buffer ;
struct cx25821_input ;
typedef enum  port_t;
struct cx25821_board ;
struct cx25821_subid ;
struct cx25821_i2c ;
struct cx25821_dmaqueue ;
struct cx25821_data ;
struct cx25821_channel ;
struct cx25821_dev ;
struct upstream_user_struct ;
struct downstream_user_struct ;
extern struct upstream_user_struct *up_data;
static inline struct cx25821_dev *get_cx25821(struct v4l2_device *v4l2_dev)
#define cx25821_call_all(dev, o, f, args...) \
v4l2_device_call_all(&dev->v4l2_dev, 0, o, f, ##args)
extern struct list_head cx25821_devlist;
extern struct mutex cx25821_devlist_mutex;
extern struct cx25821_board cx25821_boards[];
extern struct cx25821_subid cx25821_subids[];
#define SRAM_CH00  0
#define SRAM_CH01  1
#define SRAM_CH02  2
#define SRAM_CH03  3
#define SRAM_CH04  4
#define SRAM_CH05  5
#define SRAM_CH06  6
#define SRAM_CH07  7
#define SRAM_CH08  8
#define SRAM_CH09  9
#define SRAM_CH10  10
#define SRAM_CH11  11
#define VID_UPSTREAM_SRAM_CHANNEL_I     SRAM_CH09
#define VID_UPSTREAM_SRAM_CHANNEL_J     SRAM_CH10
#define AUDIO_UPSTREAM_SRAM_CHANNEL_B   SRAM_CH11
#define VIDEO_IOCTL_CH  11
struct sram_channel ;
extern struct sram_channel cx25821_sram_channels[];
#define STATUS_SUCCESS         0
#define STATUS_UNSUCCESSFUL    -1
#define cx_read(reg)             readl(dev->lmmio + ((reg)>>2))
#define cx_write(reg, value)     writel((value), dev->lmmio + ((reg)>>2))
#define cx_andor(reg, mask, value) \
writel((readl(dev->lmmio+((reg)>>2)) & ~(mask)) |\
((value) & (mask)), dev->lmmio+((reg)>>2))
#define cx_set(reg, bit)          cx_andor((reg), (bit), (bit))
#define cx_clear(reg, bit)        cx_andor((reg), (bit), 0)
#define Set_GPIO_Bit(Bit)                       (1 << Bit)
#define Clear_GPIO_Bit(Bit)                     (~(1 << Bit))
#define CX25821_ERR(fmt, args...)			\
pr_err("(%d): " fmt, dev->board, ##args)
#define CX25821_WARN(fmt, args...)			\
pr_warn("(%d): " fmt, dev->board, ##args)
#define CX25821_INFO(fmt, args...)			\
pr_info("(%d): " fmt, dev->board, ##args)
extern int cx25821_i2c_register(struct cx25821_i2c *bus);
extern void cx25821_card_setup(struct cx25821_dev *dev);
extern int cx25821_ir_init(struct cx25821_dev *dev);
extern int cx25821_i2c_read(struct cx25821_i2c *bus, u16 reg_addr, int *value);
extern int cx25821_i2c_write(struct cx25821_i2c *bus, u16 reg_addr, int value);
extern int cx25821_i2c_unregister(struct cx25821_i2c *bus);
extern void cx25821_gpio_init(struct cx25821_dev *dev);
extern void cx25821_set_gpiopin_direction(struct cx25821_dev *dev,
int pin_number, int pin_logic_value);
extern int medusa_video_init(struct cx25821_dev *dev);
extern int medusa_set_videostandard(struct cx25821_dev *dev);
extern void medusa_set_resolution(struct cx25821_dev *dev, int width,
int decoder_select);
extern int medusa_set_brightness(struct cx25821_dev *dev, int brightness,
int decoder);
extern int medusa_set_contrast(struct cx25821_dev *dev, int contrast,
int decoder);
extern int medusa_set_hue(struct cx25821_dev *dev, int hue, int decoder);
extern int medusa_set_saturation(struct cx25821_dev *dev, int saturation,
int decoder);
extern int cx25821_sram_channel_setup(struct cx25821_dev *dev,
struct sram_channel *ch, unsigned int bpl,
u32 risc);
extern int cx25821_risc_buffer(struct pci_dev *pci, struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int top_offset,
unsigned int bottom_offset,
unsigned int bpl,
unsigned int padding, unsigned int lines);
extern int cx25821_risc_databuffer_audio(struct pci_dev *pci,
struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int bpl,
unsigned int lines, unsigned int lpi);
extern void cx25821_free_buffer(struct videobuf_queue *q,
struct cx25821_buffer *buf);
extern int cx25821_risc_stopper(struct pci_dev *pci, struct btcx_riscmem *risc,
u32 reg, u32 mask, u32 value);
extern void cx25821_sram_channel_dump(struct cx25821_dev *dev,
struct sram_channel *ch);
extern void cx25821_sram_channel_dump_audio(struct cx25821_dev *dev,
struct sram_channel *ch);
extern struct cx25821_dev *cx25821_dev_get(struct pci_dev *pci);
extern void cx25821_print_irqbits(char *name, char *tag, char **strings,
int len, u32 bits, u32 mask);
extern void cx25821_dev_unregister(struct cx25821_dev *dev);
extern int cx25821_sram_channel_setup_audio(struct cx25821_dev *dev,
struct sram_channel *ch,
unsigned int bpl, u32 risc);
extern int cx25821_vidupstream_init_ch1(struct cx25821_dev *dev,
int channel_select, int pixel_format);
extern int cx25821_vidupstream_init_ch2(struct cx25821_dev *dev,
int channel_select, int pixel_format);
extern int cx25821_audio_upstream_init(struct cx25821_dev *dev,
int channel_select);
extern void cx25821_free_mem_upstream_ch1(struct cx25821_dev *dev);
extern void cx25821_free_mem_upstream_ch2(struct cx25821_dev *dev);
extern void cx25821_free_mem_upstream_audio(struct cx25821_dev *dev);
extern void cx25821_start_upstream_video_ch1(struct cx25821_dev *dev,
struct upstream_user_struct
*up_data);
extern void cx25821_start_upstream_video_ch2(struct cx25821_dev *dev,
struct upstream_user_struct
*up_data);
extern void cx25821_start_upstream_audio(struct cx25821_dev *dev,
struct upstream_user_struct *up_data);
extern void cx25821_stop_upstream_video_ch1(struct cx25821_dev *dev);
extern void cx25821_stop_upstream_video_ch2(struct cx25821_dev *dev);
extern void cx25821_stop_upstream_audio(struct cx25821_dev *dev);
extern int cx25821_sram_channel_setup_upstream(struct cx25821_dev *dev,
struct sram_channel *ch,
unsigned int bpl, u32 risc);
extern void cx25821_set_pixel_format(struct cx25821_dev *dev, int channel,
u32 format);
extern void cx25821_videoioctl_unregister(struct cx25821_dev *dev);
extern struct video_device *cx25821_vdev_init(struct cx25821_dev *dev,
struct pci_dev *pci,
struct video_device *template,
char *type);
