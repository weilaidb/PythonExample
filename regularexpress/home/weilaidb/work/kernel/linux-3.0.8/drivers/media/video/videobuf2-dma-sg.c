struct vb2_dma_sg_buf ;
static void vb2_dma_sg_put(void *buf_priv);
static void *vb2_dma_sg_alloc(void *alloc_ctx, unsigned long size)
static void vb2_dma_sg_put(void *buf_priv)
static void *vb2_dma_sg_get_userptr(void *alloc_ctx, unsigned long vaddr,
unsigned long size, int write)
static void vb2_dma_sg_put_userptr(void *buf_priv)
static void *vb2_dma_sg_vaddr(void *buf_priv)
static unsigned int vb2_dma_sg_num_users(void *buf_priv)
static int vb2_dma_sg_mmap(void *buf_priv, struct vm_area_struct *vma)
static void *vb2_dma_sg_cookie(void *buf_priv)
const struct vb2_mem_ops vb2_dma_sg_memops = ;
EXPORT_SYMBOL_GPL(vb2_dma_sg_memops);
MODULE_DESCRIPTION("dma scatter/gather memory handling routines for videobuf2");
MODULE_AUTHOR("Andrzej Pietrasiewicz");
MODULE_LICENSE("GPL");
