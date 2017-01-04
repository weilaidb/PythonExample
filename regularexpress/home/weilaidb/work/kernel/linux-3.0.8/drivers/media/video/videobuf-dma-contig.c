struct videobuf_dma_contig_memory ;
#define MAGIC_DC_MEM 0x0733ac61
#define MAGIC_CHECK(is, should)						    \
if (unlikely((is) != (should)))
static void
videobuf_vm_open(struct vm_area_struct *vma)
static void videobuf_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct videobuf_vm_ops = ;
static void videobuf_dma_contig_user_put(struct videobuf_dma_contig_memory *mem)
static int videobuf_dma_contig_user_get(struct videobuf_dma_contig_memory *mem,
struct videobuf_buffer *vb)
static struct videobuf_buffer *__videobuf_alloc_vb(size_t size)
static void *__videobuf_to_vaddr(struct videobuf_buffer *buf)
static int __videobuf_iolock(struct videobuf_queue *q,
struct videobuf_buffer *vb,
struct v4l2_framebuffer *fbuf)
static int __videobuf_mmap_mapper(struct videobuf_queue *q,
struct videobuf_buffer *buf,
struct vm_area_struct *vma)
static struct videobuf_qtype_ops qops = ;
void videobuf_queue_dma_contig_init(struct videobuf_queue *q,
const struct videobuf_queue_ops *ops,
struct device *dev,
spinlock_t *irqlock,
enum v4l2_buf_type type,
enum v4l2_field field,
unsigned int msize,
void *priv,
struct mutex *ext_lock)
EXPORT_SYMBOL_GPL(videobuf_queue_dma_contig_init);
dma_addr_t videobuf_to_dma_contig(struct videobuf_buffer *buf)
EXPORT_SYMBOL_GPL(videobuf_to_dma_contig);
void videobuf_dma_contig_free(struct videobuf_queue *q,
struct videobuf_buffer *buf)
EXPORT_SYMBOL_GPL(videobuf_dma_contig_free);
MODULE_DESCRIPTION("helper module to manage video4linux dma contig buffers");
MODULE_AUTHOR("Magnus Damm");
MODULE_LICENSE("GPL");
