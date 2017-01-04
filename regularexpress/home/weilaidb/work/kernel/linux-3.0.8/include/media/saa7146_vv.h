#define __SAA7146_VV__
#define MAX_SAA7146_CAPTURE_BUFFERS	32
#define BUFFER_TIMEOUT     (HZ/2)
#define WRITE_RPS0(x) do  while (0);
#define WRITE_RPS1(x) do  while (0);
struct	saa7146_video_dma ;
#define FORMAT_BYTE_SWAP	0x1
#define FORMAT_IS_PLANAR	0x2
struct saa7146_format ;
struct saa7146_standard
;
struct saa7146_buf ;
struct saa7146_dmaqueue ;
struct saa7146_overlay ;
struct saa7146_fh ;
#define STATUS_OVERLAY	0x01
#define STATUS_CAPTURE	0x02
struct saa7146_vv
;
#define SAA7146_USE_PORT_B_FOR_VBI	0x2
struct saa7146_ext_vv
;
struct saa7146_use_ops  ;
int saa7146_register_device(struct video_device **vid, struct saa7146_dev* dev, char *name, int type);
int saa7146_unregister_device(struct video_device **vid, struct saa7146_dev* dev);
void saa7146_buffer_finish(struct saa7146_dev *dev, struct saa7146_dmaqueue *q, int state);
void saa7146_buffer_next(struct saa7146_dev *dev, struct saa7146_dmaqueue *q,int vbi);
int saa7146_buffer_queue(struct saa7146_dev *dev, struct saa7146_dmaqueue *q, struct saa7146_buf *buf);
void saa7146_buffer_timeout(unsigned long data);
void saa7146_dma_free(struct saa7146_dev* dev,struct videobuf_queue *q,
struct saa7146_buf *buf);
int saa7146_vv_init(struct saa7146_dev* dev, struct saa7146_ext_vv *ext_vv);
int saa7146_vv_release(struct saa7146_dev* dev);
int saa7146_enable_overlay(struct saa7146_fh *fh);
void saa7146_disable_overlay(struct saa7146_fh *fh);
void saa7146_set_capture(struct saa7146_dev *dev, struct saa7146_buf *buf, struct saa7146_buf *next);
void saa7146_write_out_dma(struct saa7146_dev* dev, int which, struct saa7146_video_dma* vdma) ;
void saa7146_set_hps_source_and_sync(struct saa7146_dev *saa, int source, int sync);
void saa7146_set_gpio(struct saa7146_dev *saa, u8 pin, u8 data);
extern const struct v4l2_ioctl_ops saa7146_video_ioctl_ops;
extern struct saa7146_use_ops saa7146_video_uops;
int saa7146_start_preview(struct saa7146_fh *fh);
int saa7146_stop_preview(struct saa7146_fh *fh);
long saa7146_video_do_ioctl(struct file *file, unsigned int cmd, void *arg);
extern struct saa7146_use_ops saa7146_vbi_uops;
int saa7146_res_get(struct saa7146_fh *fh, unsigned int bit);
void saa7146_res_free(struct saa7146_fh *fh, unsigned int bits);
#define RESOURCE_DMA1_HPS	0x1
#define RESOURCE_DMA2_CLP	0x2
#define RESOURCE_DMA3_BRS	0x4
#define SAA7146_HPS_SOURCE_PORT_A	0x00
#define SAA7146_HPS_SOURCE_PORT_B	0x01
#define SAA7146_HPS_SOURCE_YPB_CPA	0x02
#define SAA7146_HPS_SOURCE_YPA_CPB	0x03
#define SAA7146_HPS_SYNC_PORT_A		0x00
#define SAA7146_HPS_SYNC_PORT_B		0x01
#define SAA7146_CLIPPING_MEM	(16 * 4 * sizeof(u32))
#define SAA7146_CLIPPING_RECT		0x4
#define SAA7146_CLIPPING_RECT_INVERTED	0x5
#define SAA7146_CLIPPING_MASK		0x6
#define SAA7146_CLIPPING_MASK_INVERTED	0x7
#define RGB08_COMPOSED	0x0217
#define RGB15_COMPOSED	0x0213
#define RGB16_COMPOSED	0x0210
#define RGB24_COMPOSED	0x0201
#define RGB32_COMPOSED	0x0202
#define Y8			0x0006
#define YUV411_COMPOSED		0x0003
#define YUV422_COMPOSED		0x0000
#define YUV411_DECOMPOSED	0x100b
#define YUV422_DECOMPOSED	0x1009
#define YUV420_DECOMPOSED	0x100a
#define IS_PLANAR(x) (x & 0xf000)
#define SAA7146_NO_SWAP		(0x0)
#define SAA7146_TWO_BYTE_SWAP	(0x1)
#define SAA7146_FOUR_BYTE_SWAP	(0x2)
