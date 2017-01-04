struct vb2_vmalloc_buf ;
static void vb2_vmalloc_put(void *buf_priv);
static void *vb2_vmalloc_alloc(void *alloc_ctx, unsigned long size)
static void vb2_vmalloc_put(void *buf_priv)
static void *vb2_vmalloc_vaddr(void *buf_priv)
static unsigned int vb2_vmalloc_num_users(void *buf_priv)
static int vb2_vmalloc_mmap(void *buf_priv, struct vm_area_struct *vma)
const struct vb2_mem_ops vb2_vmalloc_memops = ;
EXPORT_SYMBOL_GPL(vb2_vmalloc_memops);
MODULE_DESCRIPTION("vmalloc memory handling routines for videobuf2");
MODULE_AUTHOR("Pawel Osciak <pawel@osciak.com>");
MODULE_LICENSE("GPL");
