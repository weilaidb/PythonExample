#define _VIDEOBUF_DMA_SG_H
struct videobuf_dmabuf ;
struct videobuf_dma_sg_memory ;
void videobuf_dma_init(struct videobuf_dmabuf *dma);
int videobuf_dma_init_user(struct videobuf_dmabuf *dma, int direction,
unsigned long data, unsigned long size);
int videobuf_dma_init_kernel(struct videobuf_dmabuf *dma, int direction,
int nr_pages);
int videobuf_dma_init_overlay(struct videobuf_dmabuf *dma, int direction,
dma_addr_t addr, int nr_pages);
int videobuf_dma_free(struct videobuf_dmabuf *dma);
int videobuf_dma_map(struct device *dev, struct videobuf_dmabuf *dma);
int videobuf_dma_unmap(struct device *dev, struct videobuf_dmabuf *dma);
struct videobuf_dmabuf *videobuf_to_dma(struct videobuf_buffer *buf);
void *videobuf_sg_alloc(size_t size);
void videobuf_queue_sg_init(struct videobuf_queue *q,
const struct videobuf_queue_ops *ops,
struct device *dev,
spinlock_t *irqlock,
enum v4l2_buf_type type,
enum v4l2_field field,
unsigned int msize,
void *priv,
struct mutex *ext_lock);
