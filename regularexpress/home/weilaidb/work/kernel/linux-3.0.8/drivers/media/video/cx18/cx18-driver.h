#define CX18_DRIVER_H
#  error "This driver requires kernel PCI support."
#define CX18_MEM_OFFSET	0x00000000
#define CX18_MEM_SIZE	0x04000000
#define CX18_REG_OFFSET	0x02000000
#define CX18_MAX_CARDS 32
#define CX18_CARD_HVR_1600_ESMT	      0
#define CX18_CARD_HVR_1600_SAMSUNG    1
#define CX18_CARD_COMPRO_H900 	      2
#define CX18_CARD_YUAN_MPC718 	      3
#define CX18_CARD_CNXT_RAPTOR_PAL     4
#define CX18_CARD_TOSHIBA_QOSMIO_DVBT 5
#define CX18_CARD_LEADTEK_PVR2100     6
#define CX18_CARD_LEADTEK_DVR3100H    7
#define CX18_CARD_GOTVIEW_PCI_DVD3    8
#define CX18_CARD_HVR_1600_S5H1411    9
#define CX18_CARD_LAST		      9
#define CX18_ENC_STREAM_TYPE_MPG  0
#define CX18_ENC_STREAM_TYPE_TS   1
#define CX18_ENC_STREAM_TYPE_YUV  2
#define CX18_ENC_STREAM_TYPE_VBI  3
#define CX18_ENC_STREAM_TYPE_PCM  4
#define CX18_ENC_STREAM_TYPE_IDX  5
#define CX18_ENC_STREAM_TYPE_RAD  6
#define CX18_MAX_STREAMS	  7
#define PCI_VENDOR_ID_CX      0x14f1
#define PCI_DEVICE_ID_CX23418 0x5b7a
#define CX18_PCI_ID_HAUPPAUGE 		0x0070
#define CX18_PCI_ID_COMPRO 		0x185b
#define CX18_PCI_ID_YUAN 		0x12ab
#define CX18_PCI_ID_CONEXANT		0x14f1
#define CX18_PCI_ID_TOSHIBA		0x1179
#define CX18_PCI_ID_LEADTEK		0x107D
#define CX18_PCI_ID_GOTVIEW		0x5854
#define CX18_DEFAULT_ENC_TS_BUFFERS  1
#define CX18_DEFAULT_ENC_MPG_BUFFERS 2
#define CX18_DEFAULT_ENC_IDX_BUFFERS 1
#define CX18_DEFAULT_ENC_YUV_BUFFERS 2
#define CX18_DEFAULT_ENC_VBI_BUFFERS 1
#define CX18_DEFAULT_ENC_PCM_BUFFERS 1
#define CX18_MAX_FW_MDLS_PER_STREAM 63
#define CX18_UNIT_ENC_YUV_BUFSIZE	(720 *  32 * 3 / 2)
#define CX18_625_LINE_ENC_YUV_BUFSIZE	(CX18_UNIT_ENC_YUV_BUFSIZE * 576/32)
#define CX18_525_LINE_ENC_YUV_BUFSIZE	(CX18_UNIT_ENC_YUV_BUFSIZE * 480/32)
struct cx18_enc_idx_entry  __attribute__ ((packed));
#define CX18_UNIT_ENC_IDX_BUFSIZE \
(sizeof(struct cx18_enc_idx_entry) * V4L2_ENC_IDX_ENTRIES)
#define CX18_DEFAULT_ENC_TS_BUFSIZE   32
#define CX18_DEFAULT_ENC_MPG_BUFSIZE  32
#define CX18_DEFAULT_ENC_IDX_BUFSIZE  (CX18_UNIT_ENC_IDX_BUFSIZE * 1 / 1024 + 1)
#define CX18_DEFAULT_ENC_YUV_BUFSIZE  (CX18_UNIT_ENC_YUV_BUFSIZE * 3 / 1024 + 1)
#define CX18_DEFAULT_ENC_PCM_BUFSIZE   4
#define I2C_CLIENTS_MAX 16
#define CX18_DBGFLG_WARN  (1 << 0)
#define CX18_DBGFLG_INFO  (1 << 1)
#define CX18_DBGFLG_API   (1 << 2)
#define CX18_DBGFLG_DMA   (1 << 3)
#define CX18_DBGFLG_IOCTL (1 << 4)
#define CX18_DBGFLG_FILE  (1 << 5)
#define CX18_DBGFLG_I2C   (1 << 6)
#define CX18_DBGFLG_IRQ   (1 << 7)
#define CX18_DBGFLG_HIGHVOL (1 << 8)
#define CX18_DEBUG(x, type, fmt, args...) \
do  while (0)
#define CX18_DEBUG_WARN(fmt, args...)  CX18_DEBUG(CX18_DBGFLG_WARN, "warning", fmt , ## args)
#define CX18_DEBUG_INFO(fmt, args...)  CX18_DEBUG(CX18_DBGFLG_INFO, "info", fmt , ## args)
#define CX18_DEBUG_API(fmt, args...)   CX18_DEBUG(CX18_DBGFLG_API, "api", fmt , ## args)
#define CX18_DEBUG_DMA(fmt, args...)   CX18_DEBUG(CX18_DBGFLG_DMA, "dma", fmt , ## args)
#define CX18_DEBUG_IOCTL(fmt, args...) CX18_DEBUG(CX18_DBGFLG_IOCTL, "ioctl", fmt , ## args)
#define CX18_DEBUG_FILE(fmt, args...)  CX18_DEBUG(CX18_DBGFLG_FILE, "file", fmt , ## args)
#define CX18_DEBUG_I2C(fmt, args...)   CX18_DEBUG(CX18_DBGFLG_I2C, "i2c", fmt , ## args)
#define CX18_DEBUG_IRQ(fmt, args...)   CX18_DEBUG(CX18_DBGFLG_IRQ, "irq", fmt , ## args)
#define CX18_DEBUG_HIGH_VOL(x, type, fmt, args...) \
do  while (0)
#define CX18_DEBUG_HI_WARN(fmt, args...)  CX18_DEBUG_HIGH_VOL(CX18_DBGFLG_WARN, "warning", fmt , ## args)
#define CX18_DEBUG_HI_INFO(fmt, args...)  CX18_DEBUG_HIGH_VOL(CX18_DBGFLG_INFO, "info", fmt , ## args)
#define CX18_DEBUG_HI_API(fmt, args...)   CX18_DEBUG_HIGH_VOL(CX18_DBGFLG_API, "api", fmt , ## args)
#define CX18_DEBUG_HI_DMA(fmt, args...)   CX18_DEBUG_HIGH_VOL(CX18_DBGFLG_DMA, "dma", fmt , ## args)
#define CX18_DEBUG_HI_IOCTL(fmt, args...) CX18_DEBUG_HIGH_VOL(CX18_DBGFLG_IOCTL, "ioctl", fmt , ## args)
#define CX18_DEBUG_HI_FILE(fmt, args...)  CX18_DEBUG_HIGH_VOL(CX18_DBGFLG_FILE, "file", fmt , ## args)
#define CX18_DEBUG_HI_I2C(fmt, args...)   CX18_DEBUG_HIGH_VOL(CX18_DBGFLG_I2C, "i2c", fmt , ## args)
#define CX18_DEBUG_HI_IRQ(fmt, args...)   CX18_DEBUG_HIGH_VOL(CX18_DBGFLG_IRQ, "irq", fmt , ## args)
#define CX18_ERR(fmt, args...)      v4l2_err(&cx->v4l2_dev, fmt , ## args)
#define CX18_WARN(fmt, args...)     v4l2_warn(&cx->v4l2_dev, fmt , ## args)
#define CX18_INFO(fmt, args...)     v4l2_info(&cx->v4l2_dev, fmt , ## args)
#define CX18_DEBUG_DEV(x, dev, type, fmt, args...) \
do  while (0)
#define CX18_DEBUG_WARN_DEV(dev, fmt, args...) \
CX18_DEBUG_DEV(CX18_DBGFLG_WARN, dev, "warning", fmt , ## args)
#define CX18_DEBUG_INFO_DEV(dev, fmt, args...) \
CX18_DEBUG_DEV(CX18_DBGFLG_INFO, dev, "info", fmt , ## args)
#define CX18_DEBUG_API_DEV(dev, fmt, args...) \
CX18_DEBUG_DEV(CX18_DBGFLG_API, dev, "api", fmt , ## args)
#define CX18_DEBUG_DMA_DEV(dev, fmt, args...) \
CX18_DEBUG_DEV(CX18_DBGFLG_DMA, dev, "dma", fmt , ## args)
#define CX18_DEBUG_IOCTL_DEV(dev, fmt, args...) \
CX18_DEBUG_DEV(CX18_DBGFLG_IOCTL, dev, "ioctl", fmt , ## args)
#define CX18_DEBUG_FILE_DEV(dev, fmt, args...) \
CX18_DEBUG_DEV(CX18_DBGFLG_FILE, dev, "file", fmt , ## args)
#define CX18_DEBUG_I2C_DEV(dev, fmt, args...) \
CX18_DEBUG_DEV(CX18_DBGFLG_I2C, dev, "i2c", fmt , ## args)
#define CX18_DEBUG_IRQ_DEV(dev, fmt, args...) \
CX18_DEBUG_DEV(CX18_DBGFLG_IRQ, dev, "irq", fmt , ## args)
#define CX18_DEBUG_HIGH_VOL_DEV(x, dev, type, fmt, args...) \
do  while (0)
#define CX18_DEBUG_HI_WARN_DEV(dev, fmt, args...) \
CX18_DEBUG_HIGH_VOL_DEV(CX18_DBGFLG_WARN, dev, "warning", fmt , ## args)
#define CX18_DEBUG_HI_INFO_DEV(dev, fmt, args...) \
CX18_DEBUG_HIGH_VOL_DEV(CX18_DBGFLG_INFO, dev, "info", fmt , ## args)
#define CX18_DEBUG_HI_API_DEV(dev, fmt, args...) \
CX18_DEBUG_HIGH_VOL_DEV(CX18_DBGFLG_API, dev, "api", fmt , ## args)
#define CX18_DEBUG_HI_DMA_DEV(dev, fmt, args...) \
CX18_DEBUG_HIGH_VOL_DEV(CX18_DBGFLG_DMA, dev, "dma", fmt , ## args)
#define CX18_DEBUG_HI_IOCTL_DEV(dev, fmt, args...) \
CX18_DEBUG_HIGH_VOL_DEV(CX18_DBGFLG_IOCTL, dev, "ioctl", fmt , ## args)
#define CX18_DEBUG_HI_FILE_DEV(dev, fmt, args...) \
CX18_DEBUG_HIGH_VOL_DEV(CX18_DBGFLG_FILE, dev, "file", fmt , ## args)
#define CX18_DEBUG_HI_I2C_DEV(dev, fmt, args...) \
CX18_DEBUG_HIGH_VOL_DEV(CX18_DBGFLG_I2C, dev, "i2c", fmt , ## args)
#define CX18_DEBUG_HI_IRQ_DEV(dev, fmt, args...) \
CX18_DEBUG_HIGH_VOL_DEV(CX18_DBGFLG_IRQ, dev, "irq", fmt , ## args)
#define CX18_ERR_DEV(dev, fmt, args...)      v4l2_err(dev, fmt , ## args)
#define CX18_WARN_DEV(dev, fmt, args...)     v4l2_warn(dev, fmt , ## args)
#define CX18_INFO_DEV(dev, fmt, args...)     v4l2_info(dev, fmt , ## args)
extern int cx18_debug;
struct cx18_options ;
#define CX18_F_M_NEED_SWAP  0
#define CX18_F_S_CLAIMED 	3
#define CX18_F_S_STREAMING      4
#define CX18_F_S_INTERNAL_USE	5
#define CX18_F_S_STREAMOFF	7
#define CX18_F_S_APPL_IO        8
#define CX18_F_S_STOPPING	9
#define CX18_F_I_LOADED_FW		0
#define CX18_F_I_EOS			4
#define CX18_F_I_RADIO_USER		5
#define CX18_F_I_ENC_PAUSED		13
#define CX18_F_I_INITED			21
#define CX18_F_I_FAILED			22
#define CX18_SLICED_TYPE_TELETEXT_B     (1)
#define CX18_SLICED_TYPE_CAPTION_525    (4)
#define CX18_SLICED_TYPE_WSS_625        (5)
#define CX18_SLICED_TYPE_VPS            (7)
#define list_entry_is_past_end(pos, head, member) \
(&pos->member == (head))
struct cx18_buffer ;
struct cx18_mdl ;
struct cx18_queue ;
struct cx18_stream;
struct cx18_dvb ;
struct cx18;
struct cx18_scb;
#define CX18_MAX_MDL_ACKS 2
#define CX18_MAX_IN_WORK_ORDERS (CX18_MAX_FW_MDLS_PER_STREAM + 7)
#define CX18_F_EWO_MB_STALE_UPON_RECEIPT 0x1
#define CX18_F_EWO_MB_STALE_WHILE_PROC   0x2
#define CX18_F_EWO_MB_STALE \
(CX18_F_EWO_MB_STALE_UPON_RECEIPT | CX18_F_EWO_MB_STALE_WHILE_PROC)
struct cx18_in_work_order ;
#define CX18_INVALID_TASK_HANDLE 0xffffffff
struct cx18_stream ;
struct cx18_videobuf_buffer ;
struct cx18_open_id ;
static inline struct cx18_open_id *fh2id(struct v4l2_fh *fh)
static inline struct cx18_open_id *file2id(struct file *file)
struct cx18_card;
static const u32 vbi_active_samples = 1444;
static const u32 vbi_hblank_samples_60Hz = 272;
static const u32 vbi_hblank_samples_50Hz = 284;
#define CX18_VBI_FRAMES 32
struct vbi_info ;
struct cx18_i2c_algo_callback_data ;
#define CX18_MAX_MMIO_WR_RETRIES 10
struct cx18 ;
static inline struct cx18 *to_cx18(struct v4l2_device *v4l2_dev)
extern int (*cx18_ext_init)(struct cx18 *);
extern int cx18_first_minor;
int cx18_msleep_timeout(unsigned int msecs, int intr);
struct tveeprom;
void cx18_read_eeprom(struct cx18 *cx, struct tveeprom *tv);
int cx18_init_on_first_open(struct cx18 *cx);
static inline int cx18_raw_vbi(const struct cx18 *cx)
#define cx18_call_hw(cx, hw, o, f, args...)				\
do  while (0)
#define cx18_call_all(cx, o, f, args...) cx18_call_hw(cx, 0, o, f , ##args)
#define cx18_call_hw_err(cx, hw, o, f, args...)				\
()
#define cx18_call_all_err(cx, o, f, args...) \
cx18_call_hw_err(cx, 0, o, f , ##args)
