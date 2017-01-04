#define _MEDIA_VIDEOBUF2_DMA_SG_H
struct vb2_dma_sg_desc ;
static inline struct vb2_dma_sg_desc *vb2_dma_sg_plane_desc(
struct vb2_buffer *vb, unsigned int plane_no)
extern const struct vb2_mem_ops vb2_dma_sg_memops;
