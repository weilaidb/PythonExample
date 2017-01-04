struct vb2_dc_conf ;
struct vb2_dc_buf ;
static void vb2_dma_contig_put(void *buf_priv);
static void *vb2_dma_contig_alloc(void *alloc_ctx, unsigned long size)
static void vb2_dma_contig_put(void *buf_priv)
static void *vb2_dma_contig_cookie(void *buf_priv)
static void *vb2_dma_contig_vaddr(void *buf_priv)
static unsigned int vb2_dma_contig_num_users(void *buf_priv)
static int vb2_dma_contig_mmap(void *buf_priv, struct vm_area_struct *vma)
static void *vb2_dma_contig_get_userptr(void *alloc_ctx, unsigned long vaddr,
unsigned long size, int write)
static void vb2_dma_contig_put_userptr(void *mem_priv)
const struct vb2_mem_ops vb2_dma_contig_memops = ;
EXPORT_SYMBOL_GPL(vb2_dma_contig_memops);
void *vb2_dma_contig_init_ctx(struct device *dev)
EXPORT_SYMBOL_GPL(vb2_dma_contig_init_ctx);
void vb2_dma_contig_cleanup_ctx(void *alloc_ctx)
EXPORT_SYMBOL_GPL(vb2_dma_contig_cleanup_ctx);
MODULE_DESCRIPTION("DMA-contig memory handling routines for videobuf2");
MODULE_AUTHOR("Pawel Osciak <pawel@osciak.com>");
MODULE_LICENSE("GPL");
