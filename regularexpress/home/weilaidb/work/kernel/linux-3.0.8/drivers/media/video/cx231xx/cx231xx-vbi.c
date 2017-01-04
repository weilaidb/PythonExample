static inline void print_err_status(struct cx231xx *dev, int packet, int status)
static inline int cx231xx_isoc_vbi_copy(struct cx231xx *dev, struct urb *urb)
static int
vbi_buffer_setup(struct videobuf_queue *vq, unsigned int *count,
unsigned int *size)
static void free_buffer(struct videobuf_queue *vq, struct cx231xx_buffer *buf)
static int
vbi_buffer_prepare(struct videobuf_queue *vq, struct videobuf_buffer *vb,
enum v4l2_field field)
static void
vbi_buffer_queue(struct videobuf_queue *vq, struct videobuf_buffer *vb)
static void vbi_buffer_release(struct videobuf_queue *vq,
struct videobuf_buffer *vb)
struct videobuf_queue_ops cx231xx_vbi_qops = ;
static void cx231xx_irq_vbi_callback(struct urb *urb)
void cx231xx_uninit_vbi_isoc(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_uninit_vbi_isoc);
int cx231xx_init_vbi_isoc(struct cx231xx *dev, int max_packets,
int num_bufs, int max_pkt_size,
int (*bulk_copy) (struct cx231xx *dev,
struct urb *urb))
EXPORT_SYMBOL_GPL(cx231xx_init_vbi_isoc);
u32 cx231xx_get_vbi_line(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q,
u8 sav_eav, u8 *p_buffer, u32 buffer_size)
static inline void vbi_buffer_filled(struct cx231xx *dev,
struct cx231xx_dmaqueue *dma_q,
struct cx231xx_buffer *buf)
u32 cx231xx_copy_vbi_line(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q,
u8 *p_line, u32 length, int field_number)
static inline void get_next_vbi_buf(struct cx231xx_dmaqueue *dma_q,
struct cx231xx_buffer **buf)
void cx231xx_reset_vbi_buffer(struct cx231xx *dev,
struct cx231xx_dmaqueue *dma_q)
int cx231xx_do_vbi_copy(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q,
u8 *p_buffer, u32 bytes_to_copy)
u8 cx231xx_is_vbi_buffer_done(struct cx231xx *dev,
struct cx231xx_dmaqueue *dma_q)
