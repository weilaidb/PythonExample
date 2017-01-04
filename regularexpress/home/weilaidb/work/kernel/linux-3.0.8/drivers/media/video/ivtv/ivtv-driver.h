#define IVTV_DRIVER_H
#define IVTV_ENCODER_OFFSET	0x00000000
#define IVTV_ENCODER_SIZE	0x00800000
#define IVTV_DECODER_OFFSET	0x01000000
#define IVTV_DECODER_SIZE	0x00800000
#define IVTV_REG_OFFSET 	0x02000000
#define IVTV_REG_SIZE		0x00010000
#define IVTV_MAX_CARDS 32
#define IVTV_ENC_STREAM_TYPE_MPG  0
#define IVTV_ENC_STREAM_TYPE_YUV  1
#define IVTV_ENC_STREAM_TYPE_VBI  2
#define IVTV_ENC_STREAM_TYPE_PCM  3
#define IVTV_ENC_STREAM_TYPE_RAD  4
#define IVTV_DEC_STREAM_TYPE_MPG  5
#define IVTV_DEC_STREAM_TYPE_VBI  6
#define IVTV_DEC_STREAM_TYPE_VOUT 7
#define IVTV_DEC_STREAM_TYPE_YUV  8
#define IVTV_MAX_STREAMS	  9
#define IVTV_DMA_SG_OSD_ENT	(2883584/PAGE_SIZE)
#define IVTV_REG_DMAXFER 	(0x0000)
#define IVTV_REG_DMASTATUS 	(0x0004)
#define IVTV_REG_DECDMAADDR 	(0x0008)
#define IVTV_REG_ENCDMAADDR 	(0x000c)
#define IVTV_REG_DMACONTROL 	(0x0010)
#define IVTV_REG_IRQSTATUS 	(0x0040)
#define IVTV_REG_IRQMASK 	(0x0048)
#define IVTV_REG_ENC_SDRAM_REFRESH 	(0x07F8)
#define IVTV_REG_ENC_SDRAM_PRECHARGE 	(0x07FC)
#define IVTV_REG_DEC_SDRAM_REFRESH 	(0x08F8)
#define IVTV_REG_DEC_SDRAM_PRECHARGE 	(0x08FC)
#define IVTV_REG_VDM 			(0x2800)
#define IVTV_REG_AO 			(0x2D00)
#define IVTV_REG_BYTEFLUSH 		(0x2D24)
#define IVTV_REG_SPU 			(0x9050)
#define IVTV_REG_HW_BLOCKS 		(0x9054)
#define IVTV_REG_VPU 			(0x9058)
#define IVTV_REG_APU 			(0xA064)
#define IVTV_REG_DEC_LINE_FIELD		(0x28C0)
extern int ivtv_debug;
extern int ivtv_fw_debug;
#define IVTV_DBGFLG_WARN    (1 << 0)
#define IVTV_DBGFLG_INFO    (1 << 1)
#define IVTV_DBGFLG_MB      (1 << 2)
#define IVTV_DBGFLG_IOCTL   (1 << 3)
#define IVTV_DBGFLG_FILE    (1 << 4)
#define IVTV_DBGFLG_DMA     (1 << 5)
#define IVTV_DBGFLG_IRQ     (1 << 6)
#define IVTV_DBGFLG_DEC     (1 << 7)
#define IVTV_DBGFLG_YUV     (1 << 8)
#define IVTV_DBGFLG_I2C     (1 << 9)
#define IVTV_DBGFLG_HIGHVOL (1 << 10)
#define IVTV_DEBUG(x, type, fmt, args...) \
do  while (0)
#define IVTV_DEBUG_WARN(fmt, args...)  IVTV_DEBUG(IVTV_DBGFLG_WARN,  "warn",  fmt , ## args)
#define IVTV_DEBUG_INFO(fmt, args...)  IVTV_DEBUG(IVTV_DBGFLG_INFO,  "info",  fmt , ## args)
#define IVTV_DEBUG_MB(fmt, args...)    IVTV_DEBUG(IVTV_DBGFLG_MB,    "mb",    fmt , ## args)
#define IVTV_DEBUG_DMA(fmt, args...)   IVTV_DEBUG(IVTV_DBGFLG_DMA,   "dma",   fmt , ## args)
#define IVTV_DEBUG_IOCTL(fmt, args...) IVTV_DEBUG(IVTV_DBGFLG_IOCTL, "ioctl", fmt , ## args)
#define IVTV_DEBUG_FILE(fmt, args...)  IVTV_DEBUG(IVTV_DBGFLG_FILE,  "file",  fmt , ## args)
#define IVTV_DEBUG_I2C(fmt, args...)   IVTV_DEBUG(IVTV_DBGFLG_I2C,   "i2c",   fmt , ## args)
#define IVTV_DEBUG_IRQ(fmt, args...)   IVTV_DEBUG(IVTV_DBGFLG_IRQ,   "irq",   fmt , ## args)
#define IVTV_DEBUG_DEC(fmt, args...)   IVTV_DEBUG(IVTV_DBGFLG_DEC,   "dec",   fmt , ## args)
#define IVTV_DEBUG_YUV(fmt, args...)   IVTV_DEBUG(IVTV_DBGFLG_YUV,   "yuv",   fmt , ## args)
#define IVTV_DEBUG_HIGH_VOL(x, type, fmt, args...) \
do  while (0)
#define IVTV_DEBUG_HI_WARN(fmt, args...)  IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_WARN,  "warn",  fmt , ## args)
#define IVTV_DEBUG_HI_INFO(fmt, args...)  IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_INFO,  "info",  fmt , ## args)
#define IVTV_DEBUG_HI_MB(fmt, args...)    IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_MB,    "mb",    fmt , ## args)
#define IVTV_DEBUG_HI_DMA(fmt, args...)   IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_DMA,   "dma",   fmt , ## args)
#define IVTV_DEBUG_HI_IOCTL(fmt, args...) IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_IOCTL, "ioctl", fmt , ## args)
#define IVTV_DEBUG_HI_FILE(fmt, args...)  IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_FILE,  "file",  fmt , ## args)
#define IVTV_DEBUG_HI_I2C(fmt, args...)   IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_I2C,   "i2c",   fmt , ## args)
#define IVTV_DEBUG_HI_IRQ(fmt, args...)   IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_IRQ,   "irq",   fmt , ## args)
#define IVTV_DEBUG_HI_DEC(fmt, args...)   IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_DEC,   "dec",   fmt , ## args)
#define IVTV_DEBUG_HI_YUV(fmt, args...)   IVTV_DEBUG_HIGH_VOL(IVTV_DBGFLG_YUV,   "yuv",   fmt , ## args)
#define IVTV_ERR(fmt, args...)      v4l2_err(&itv->v4l2_dev, fmt , ## args)
#define IVTV_WARN(fmt, args...)     v4l2_warn(&itv->v4l2_dev, fmt , ## args)
#define IVTV_INFO(fmt, args...)     v4l2_info(&itv->v4l2_dev, fmt , ## args)
#define OUT_NONE        0
#define OUT_MPG         1
#define OUT_YUV         2
#define OUT_UDMA_YUV    3
#define OUT_PASSTHROUGH 4
#define IVTV_MAX_PGM_INDEX (400)
#define IVTV_DEFAULT_I2C_CLOCK_PERIOD	20
struct ivtv_options ;
struct ivtv_mailbox ;
struct ivtv_api_cache ;
struct ivtv_mailbox_data ;
#define IVTV_F_B_NEED_BUF_SWAP  (1 << 0)
#define IVTV_F_S_DMA_PENDING	0
#define IVTV_F_S_DMA_HAS_VBI	1
#define IVTV_F_S_NEEDS_DATA	2
#define IVTV_F_S_CLAIMED 	3
#define IVTV_F_S_STREAMING      4
#define IVTV_F_S_INTERNAL_USE	5
#define IVTV_F_S_PASSTHROUGH	6
#define IVTV_F_S_STREAMOFF	7
#define IVTV_F_S_APPL_IO        8
#define IVTV_F_S_PIO_PENDING	9
#define IVTV_F_S_PIO_HAS_VBI	1
#define IVTV_F_I_DMA		   0
#define IVTV_F_I_UDMA		   1
#define IVTV_F_I_UDMA_PENDING	   2
#define IVTV_F_I_SPEED_CHANGE	   3
#define IVTV_F_I_EOS		   4
#define IVTV_F_I_RADIO_USER	   5
#define IVTV_F_I_DIG_RST	   6
#define IVTV_F_I_DEC_YUV	   7
#define IVTV_F_I_UPDATE_CC	   9
#define IVTV_F_I_UPDATE_WSS	   10
#define IVTV_F_I_UPDATE_VPS	   11
#define IVTV_F_I_DECODING_YUV	   12
#define IVTV_F_I_ENC_PAUSED	   13
#define IVTV_F_I_VALID_DEC_TIMINGS 14
#define IVTV_F_I_HAVE_WORK  	   15
#define IVTV_F_I_WORK_HANDLER_VBI  16
#define IVTV_F_I_WORK_HANDLER_YUV  17
#define IVTV_F_I_WORK_HANDLER_PIO  18
#define IVTV_F_I_PIO		   19
#define IVTV_F_I_DEC_PAUSED	   20
#define IVTV_F_I_INITED		   21
#define IVTV_F_I_FAILED		   22
#define IVTV_F_I_EV_DEC_STOPPED	   28
#define IVTV_F_I_EV_VSYNC	   29
#define IVTV_F_I_EV_VSYNC_FIELD    30
#define IVTV_F_I_EV_VSYNC_ENABLED  31
struct ivtv_sg_element ;
struct ivtv_sg_host_element ;
struct ivtv_user_dma ;
struct ivtv_dma_page_info ;
struct ivtv_buffer ;
struct ivtv_queue ;
struct ivtv;
struct ivtv_stream ;
struct ivtv_open_id ;
static inline struct ivtv_open_id *fh2id(struct v4l2_fh *fh)
struct yuv_frame_info
;
#define IVTV_YUV_MODE_INTERLACED	0x00
#define IVTV_YUV_MODE_PROGRESSIVE	0x01
#define IVTV_YUV_MODE_AUTO		0x02
#define IVTV_YUV_MODE_MASK		0x03
#define IVTV_YUV_SYNC_EVEN		0x00
#define IVTV_YUV_SYNC_ODD		0x04
#define IVTV_YUV_SYNC_MASK		0x04
#define IVTV_YUV_BUFFERS 8
struct yuv_playback_info
;
#define IVTV_VBI_FRAMES 32
struct vbi_cc ;
struct vbi_vps ;
struct vbi_info ;
struct ivtv_card;
struct ivtv ;
static inline struct ivtv *to_ivtv(struct v4l2_device *v4l2_dev)
extern int ivtv_first_minor;
void ivtv_set_irq_mask(struct ivtv *itv, u32 mask);
void ivtv_clear_irq_mask(struct ivtv *itv, u32 mask);
int ivtv_set_output_mode(struct ivtv *itv, int mode);
struct ivtv_stream *ivtv_get_output_stream(struct ivtv *itv);
int ivtv_msleep_timeout(unsigned int msecs, int intr);
int ivtv_waitq(wait_queue_head_t *waitq);
struct tveeprom;
void ivtv_read_eeprom(struct ivtv *itv, struct tveeprom *tv);
int ivtv_init_on_first_open(struct ivtv *itv);
static inline int ivtv_raw_vbi(const struct ivtv *itv)
#define write_sync(val, reg) \
do  while (0)
#define read_reg(reg) readl(itv->reg_mem + (reg))
#define write_reg(val, reg) writel(val, itv->reg_mem + (reg))
#define write_reg_sync(val, reg) \
do  while (0)
#define read_enc(addr) readl(itv->enc_mem + (u32)(addr))
#define write_enc(val, addr) writel(val, itv->enc_mem + (u32)(addr))
#define write_enc_sync(val, addr) \
do  while (0)
#define read_dec(addr) readl(itv->dec_mem + (u32)(addr))
#define write_dec(val, addr) writel(val, itv->dec_mem + (u32)(addr))
#define write_dec_sync(val, addr) \
do  while (0)
#define ivtv_call_hw(itv, hw, o, f, args...) 				\
do  while (0)
#define ivtv_call_all(itv, o, f, args...) ivtv_call_hw(itv, 0, o, f , ##args)
#define ivtv_call_hw_err(itv, hw, o, f, args...)			\
()
#define ivtv_call_all_err(itv, o, f, args...) ivtv_call_hw_err(itv, 0, o, f , ##args)
