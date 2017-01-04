#define _MEDIA_VIDEOBUF2_DMA_COHERENT_H
static inline dma_addr_t
vb2_dma_contig_plane_paddr(struct vb2_buffer *vb, unsigned int plane_no)
void *vb2_dma_contig_init_ctx(struct device *dev);
void vb2_dma_contig_cleanup_ctx(void *alloc_ctx);
extern const struct vb2_mem_ops vb2_dma_contig_memops;
