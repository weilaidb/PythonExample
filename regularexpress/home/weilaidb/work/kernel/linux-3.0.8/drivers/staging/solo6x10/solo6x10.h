#define __SOLO6X10_H
#define PCI_VENDOR_ID_SOFTLOGIC		0x9413
#define PCI_DEVICE_ID_SOLO6010		0x6010
#define PCI_DEVICE_ID_SOLO6110		0x6110
#define PCI_VENDOR_ID_BLUECHERRY	0x1BB3
#define PCI_DEVICE_ID_NEUSOLO_4		0x4304
#define PCI_DEVICE_ID_NEUSOLO_9		0x4309
#define PCI_DEVICE_ID_NEUSOLO_16	0x4310
#define PCI_DEVICE_ID_BC_SOLO_4		0x4E04
#define PCI_DEVICE_ID_BC_SOLO_9		0x4E09
#define PCI_DEVICE_ID_BC_SOLO_16	0x4E10
#define PCI_DEVICE_ID_BC_6110_4		0x5304
#define PCI_DEVICE_ID_BC_6110_8		0x5308
#define PCI_DEVICE_ID_BC_6110_16	0x5310
#define SOLO6X10_NAME			"solo6x10"
#define SOLO_MAX_CHANNELS		16
#define SOLO6X10_VERSION		"2.1.0"
#define SOLO6X10_VER_MAJOR		2
#define SOLO6X10_VER_MINOR		0
#define SOLO6X10_VER_SUB		0
#define SOLO6X10_VER_NUM \
KERNEL_VERSION(SOLO6X10_VER_MAJOR, SOLO6X10_VER_MINOR, SOLO6X10_VER_SUB)
#define FLAGS_6110			1
#define SOLO_I2C_ADAPTERS		2
#define SOLO_I2C_TW			0
#define SOLO_I2C_SAA			1
#define SOLO_NR_P2M			4
#define SOLO_NR_P2M_DESC		256
#define SOLO_P2M_DMA_ID_MP4E		0
#define SOLO_P2M_DMA_ID_JPEG		0
#define SOLO_P2M_DMA_ID_MP4D		1
#define SOLO_P2M_DMA_ID_G723D		1
#define SOLO_P2M_DMA_ID_DISP		2
#define SOLO_P2M_DMA_ID_OSG		2
#define SOLO_P2M_DMA_ID_G723E		3
#define SOLO_P2M_DMA_ID_VIN		3
#define SOLO_ENC_MODE_CIF		2
#define SOLO_ENC_MODE_HD1		1
#define SOLO_ENC_MODE_D1		9
#define SOLO_DEFAULT_GOP		30
#define SOLO_DEFAULT_QP			3
#define SOLO_NR_RING_BUFS		512
#define SOLO_CLOCK_MHZ			108
#define V4L2_BUF_FLAG_MOTION_ON		0x0400
#define V4L2_BUF_FLAG_MOTION_DETECTED	0x0800
#define PRIVATE_CIDS
#define V4L2_CID_MOTION_ENABLE		(V4L2_CID_PRIVATE_BASE+0)
#define V4L2_CID_MOTION_THRESHOLD	(V4L2_CID_PRIVATE_BASE+1)
#define V4L2_CID_MOTION_TRACE		(V4L2_CID_PRIVATE_BASE+2)
enum SOLO_I2C_STATE ;
struct p2m_desc ;
struct solo_p2m_dev ;
#define OSD_TEXT_MAX		30
enum solo_enc_types ;
struct solo_enc_dev ;
struct solo_enc_buf ;
struct solo_dev ;
static inline u32 solo_reg_read(struct solo_dev *solo_dev, int reg)
static inline void solo_reg_write(struct solo_dev *solo_dev, int reg, u32 data)
void solo_irq_on(struct solo_dev *solo_dev, u32 mask);
void solo_irq_off(struct solo_dev *solo_dev, u32 mask);
int solo_disp_init(struct solo_dev *solo_dev);
void solo_disp_exit(struct solo_dev *solo_dev);
int solo_gpio_init(struct solo_dev *solo_dev);
void solo_gpio_exit(struct solo_dev *solo_dev);
int solo_i2c_init(struct solo_dev *solo_dev);
void solo_i2c_exit(struct solo_dev *solo_dev);
int solo_p2m_init(struct solo_dev *solo_dev);
void solo_p2m_exit(struct solo_dev *solo_dev);
int solo_v4l2_init(struct solo_dev *solo_dev);
void solo_v4l2_exit(struct solo_dev *solo_dev);
int solo_enc_init(struct solo_dev *solo_dev);
void solo_enc_exit(struct solo_dev *solo_dev);
int solo_enc_v4l2_init(struct solo_dev *solo_dev);
void solo_enc_v4l2_exit(struct solo_dev *solo_dev);
int solo_g723_init(struct solo_dev *solo_dev);
void solo_g723_exit(struct solo_dev *solo_dev);
int solo_i2c_isr(struct solo_dev *solo_dev);
void solo_p2m_isr(struct solo_dev *solo_dev, int id);
void solo_p2m_error_isr(struct solo_dev *solo_dev, u32 status);
void solo_enc_v4l2_isr(struct solo_dev *solo_dev);
void solo_g723_isr(struct solo_dev *solo_dev);
void solo_motion_isr(struct solo_dev *solo_dev);
void solo_video_in_isr(struct solo_dev *solo_dev);
u8 solo_i2c_readbyte(struct solo_dev *solo_dev, int id, u8 addr, u8 off);
void solo_i2c_writebyte(struct solo_dev *solo_dev, int id, u8 addr, u8 off,
u8 data);
int solo_p2m_dma_t(struct solo_dev *solo_dev, u8 id, int wr,
dma_addr_t dma_addr, u32 ext_addr, u32 size);
int solo_p2m_dma(struct solo_dev *solo_dev, u8 id, int wr,
void *sys_addr, u32 ext_addr, u32 size);
int solo_p2m_dma_sg(struct solo_dev *solo_dev, u8 id,
struct p2m_desc *pdesc, int wr,
struct scatterlist *sglist, u32 sg_off,
u32 ext_addr, u32 size);
void solo_p2m_push_desc(struct p2m_desc *desc, int wr, dma_addr_t dma_addr,
u32 ext_addr, u32 size, int repeat, u32 ext_size);
int solo_p2m_dma_desc(struct solo_dev *solo_dev, u8 id,
struct p2m_desc *desc, int desc_count);
void solo_set_motion_threshold(struct solo_dev *solo_dev, u8 ch, u16 val);
#define SOLO_DEF_MOT_THRESH		0x0300
int solo_osd_print(struct solo_enc_dev *solo_enc);
