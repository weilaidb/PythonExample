#define CX23885_VERSION_CODE KERNEL_VERSION(0, 0, 2)
#define UNSET (-1U)
#define CX23885_MAXBOARDS 8
#define MAX_CX23885_INPUT 8
#define INPUT(nr) (&cx23885_boards[dev->board].input[nr])
#define RESOURCE_OVERLAY       1
#define RESOURCE_VIDEO         2
#define RESOURCE_VBI           4
#define BUFFER_TIMEOUT     (HZ)
#define CX23885_BOARD_NOAUTO               UNSET
#define CX23885_BOARD_UNKNOWN                  0
#define CX23885_BOARD_HAUPPAUGE_HVR1800lp      1
#define CX23885_BOARD_HAUPPAUGE_HVR1800        2
#define CX23885_BOARD_HAUPPAUGE_HVR1250        3
#define CX23885_BOARD_DVICO_FUSIONHDTV_5_EXP   4
#define CX23885_BOARD_HAUPPAUGE_HVR1500Q       5
#define CX23885_BOARD_HAUPPAUGE_HVR1500        6
#define CX23885_BOARD_HAUPPAUGE_HVR1200        7
#define CX23885_BOARD_HAUPPAUGE_HVR1700        8
#define CX23885_BOARD_HAUPPAUGE_HVR1400        9
#define CX23885_BOARD_DVICO_FUSIONHDTV_7_DUAL_EXP 10
#define CX23885_BOARD_DVICO_FUSIONHDTV_DVB_T_DUAL_EXP 11
#define CX23885_BOARD_LEADTEK_WINFAST_PXDVR3200_H 12
#define CX23885_BOARD_COMPRO_VIDEOMATE_E650F   13
#define CX23885_BOARD_TBS_6920                 14
#define CX23885_BOARD_TEVII_S470               15
#define CX23885_BOARD_DVBWORLD_2005            16
#define CX23885_BOARD_NETUP_DUAL_DVBS2_CI      17
#define CX23885_BOARD_HAUPPAUGE_HVR1270        18
#define CX23885_BOARD_HAUPPAUGE_HVR1275        19
#define CX23885_BOARD_HAUPPAUGE_HVR1255        20
#define CX23885_BOARD_HAUPPAUGE_HVR1210        21
#define CX23885_BOARD_MYGICA_X8506             22
#define CX23885_BOARD_MAGICPRO_PROHDTVE2       23
#define CX23885_BOARD_HAUPPAUGE_HVR1850        24
#define CX23885_BOARD_COMPRO_VIDEOMATE_E800    25
#define CX23885_BOARD_HAUPPAUGE_HVR1290        26
#define CX23885_BOARD_MYGICA_X8558PRO          27
#define CX23885_BOARD_LEADTEK_WINFAST_PXTV1200 28
#define CX23885_BOARD_GOTVIEW_X5_3D_HYBRID     29
#define CX23885_BOARD_NETUP_DUAL_DVB_T_C_CI_RF 30
#define GPIO_0 0x00000001
#define GPIO_1 0x00000002
#define GPIO_2 0x00000004
#define GPIO_3 0x00000008
#define GPIO_4 0x00000010
#define GPIO_5 0x00000020
#define GPIO_6 0x00000040
#define GPIO_7 0x00000080
#define GPIO_8 0x00000100
#define GPIO_9 0x00000200
#define GPIO_10 0x00000400
#define GPIO_11 0x00000800
#define GPIO_12 0x00001000
#define GPIO_13 0x00002000
#define GPIO_14 0x00004000
#define GPIO_15 0x00008000
#define CX23885_NORMS (\
V4L2_STD_NTSC_M |  V4L2_STD_NTSC_M_JP |  V4L2_STD_NTSC_443 | \
V4L2_STD_PAL_BG |  V4L2_STD_PAL_DK    |  V4L2_STD_PAL_I    | \
V4L2_STD_PAL_M  |  V4L2_STD_PAL_N     |  V4L2_STD_PAL_Nc   | \
V4L2_STD_PAL_60 |  V4L2_STD_SECAM_L   |  V4L2_STD_SECAM_DK)
struct cx23885_fmt ;
struct cx23885_ctrl ;
struct cx23885_tvnorm ;
struct cx23885_fh ;
enum cx23885_itype ;
enum cx23885_src_sel_type ;
struct cx23885_buffer ;
struct cx23885_input ;
typedef enum  port_t;
struct cx23885_board ;
struct cx23885_subid ;
struct cx23885_i2c ;
struct cx23885_dmaqueue ;
struct cx23885_tsport ;
struct cx23885_kernel_ir ;
struct cx23885_dev ;
static inline struct cx23885_dev *to_cx23885(struct v4l2_device *v4l2_dev)
#define call_all(dev, o, f, args...) \
v4l2_device_call_all(&dev->v4l2_dev, 0, o, f, ##args)
#define CX23885_HW_888_IR  (1 << 0)
#define CX23885_HW_AV_CORE (1 << 1)
#define call_hw(dev, grpid, o, f, args...) \
v4l2_device_call_all(&dev->v4l2_dev, grpid, o, f, ##args)
extern struct v4l2_subdev *cx23885_find_hw(struct cx23885_dev *dev, u32 hw);
#define SRAM_CH01  0
#define SRAM_CH02  1
#define SRAM_CH03  2
#define SRAM_CH04  3
#define SRAM_CH05  4
#define SRAM_CH06  5
#define SRAM_CH07  6
#define SRAM_CH08  7
#define SRAM_CH09  8
#define SRAM_CH10  9
#define SRAM_CH11 10
#define SRAM_CH12 11
#define SRAM_CH13 12
#define SRAM_CH14 13
#define SRAM_CH15 14
struct sram_channel ;
#define cx_read(reg)             readl(dev->lmmio + ((reg)>>2))
#define cx_write(reg, value)     writel((value), dev->lmmio + ((reg)>>2))
#define cx_andor(reg, mask, value) \
writel((readl(dev->lmmio+((reg)>>2)) & ~(mask)) |\
((value) & (mask)), dev->lmmio+((reg)>>2))
#define cx_set(reg, bit)          cx_andor((reg), (bit), (bit))
#define cx_clear(reg, bit)        cx_andor((reg), (bit), 0)
extern int cx23885_sram_channel_setup(struct cx23885_dev *dev,
struct sram_channel *ch,
unsigned int bpl, u32 risc);
extern void cx23885_sram_channel_dump(struct cx23885_dev *dev,
struct sram_channel *ch);
extern int cx23885_risc_stopper(struct pci_dev *pci, struct btcx_riscmem *risc,
u32 reg, u32 mask, u32 value);
extern int cx23885_risc_buffer(struct pci_dev *pci, struct btcx_riscmem *risc,
struct scatterlist *sglist,
unsigned int top_offset, unsigned int bottom_offset,
unsigned int bpl, unsigned int padding, unsigned int lines);
void cx23885_cancel_buffers(struct cx23885_tsport *port);
extern int cx23885_restart_queue(struct cx23885_tsport *port,
struct cx23885_dmaqueue *q);
extern void cx23885_wakeup(struct cx23885_tsport *port,
struct cx23885_dmaqueue *q, u32 count);
extern void cx23885_gpio_set(struct cx23885_dev *dev, u32 mask);
extern void cx23885_gpio_clear(struct cx23885_dev *dev, u32 mask);
extern u32 cx23885_gpio_get(struct cx23885_dev *dev, u32 mask);
extern void cx23885_gpio_enable(struct cx23885_dev *dev, u32 mask,
int asoutput);
extern void cx23885_irq_add_enable(struct cx23885_dev *dev, u32 mask);
extern void cx23885_irq_enable(struct cx23885_dev *dev, u32 mask);
extern void cx23885_irq_disable(struct cx23885_dev *dev, u32 mask);
extern void cx23885_irq_remove(struct cx23885_dev *dev, u32 mask);
extern struct cx23885_board cx23885_boards[];
extern const unsigned int cx23885_bcount;
extern struct cx23885_subid cx23885_subids[];
extern const unsigned int cx23885_idcount;
extern int cx23885_tuner_callback(void *priv, int component,
int command, int arg);
extern void cx23885_card_list(struct cx23885_dev *dev);
extern int  cx23885_ir_init(struct cx23885_dev *dev);
extern void cx23885_ir_pci_int_enable(struct cx23885_dev *dev);
extern void cx23885_ir_fini(struct cx23885_dev *dev);
extern void cx23885_gpio_setup(struct cx23885_dev *dev);
extern void cx23885_card_setup(struct cx23885_dev *dev);
extern void cx23885_card_setup_pre_i2c(struct cx23885_dev *dev);
extern int cx23885_dvb_register(struct cx23885_tsport *port);
extern int cx23885_dvb_unregister(struct cx23885_tsport *port);
extern int cx23885_buf_prepare(struct videobuf_queue *q,
struct cx23885_tsport *port,
struct cx23885_buffer *buf,
enum v4l2_field field);
extern void cx23885_buf_queue(struct cx23885_tsport *port,
struct cx23885_buffer *buf);
extern void cx23885_free_buffer(struct videobuf_queue *q,
struct cx23885_buffer *buf);
extern int cx23885_video_register(struct cx23885_dev *dev);
extern void cx23885_video_unregister(struct cx23885_dev *dev);
extern int cx23885_video_irq(struct cx23885_dev *dev, u32 status);
extern int cx23885_vbi_fmt(struct file *file, void *priv,
struct v4l2_format *f);
extern void cx23885_vbi_timeout(unsigned long data);
extern struct videobuf_queue_ops cx23885_vbi_qops;
extern int cx23885_i2c_register(struct cx23885_i2c *bus);
extern int cx23885_i2c_unregister(struct cx23885_i2c *bus);
extern void cx23885_av_clk(struct cx23885_dev *dev, int enable);
extern int cx23885_417_register(struct cx23885_dev *dev);
extern void cx23885_417_unregister(struct cx23885_dev *dev);
extern int cx23885_irq_417(struct cx23885_dev *dev, u32 status);
extern void cx23885_417_check_encoder(struct cx23885_dev *dev);
extern void cx23885_mc417_init(struct cx23885_dev *dev);
extern int mc417_memory_read(struct cx23885_dev *dev, u32 address, u32 *value);
extern int mc417_memory_write(struct cx23885_dev *dev, u32 address, u32 value);
extern int mc417_register_read(struct cx23885_dev *dev,
u16 address, u32 *value);
extern int mc417_register_write(struct cx23885_dev *dev,
u16 address, u32 value);
extern void mc417_gpio_set(struct cx23885_dev *dev, u32 mask);
extern void mc417_gpio_clear(struct cx23885_dev *dev, u32 mask);
extern void mc417_gpio_enable(struct cx23885_dev *dev, u32 mask, int asoutput);
static inline unsigned int norm_maxw(v4l2_std_id norm)
static inline unsigned int norm_maxh(v4l2_std_id norm)
static inline unsigned int norm_swidth(v4l2_std_id norm)
