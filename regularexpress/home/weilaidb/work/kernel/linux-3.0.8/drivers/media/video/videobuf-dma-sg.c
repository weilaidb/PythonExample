#define MAGIC_DMABUF 0x19721112
#define MAGIC_SG_MEM 0x17890714
#define MAGIC_CHECK(is, should)						\
if (unlikely((is) != (should)))
static int debug;
module_param(debug, int, 0644);
MODULE_DESCRIPTION("helper module to manage video4linux dma sg buffers");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_LICENSE("GPL");
#define dprintk(level, fmt, arg...)					\
if (debug >= level)						\
printk(KERN_DEBUG "vbuf-sg: " fmt , ## arg)
static struct scatterlist *videobuf_vmalloc_to_sg(unsigned char *virt,
int nr_pages)
static struct scatterlist *videobuf_pages_to_sg(struct page **pages,
int nr_pages, int offset, size_t size)
struct videobuf_dmabuf *videobuf_to_dma(struct videobuf_buffer *buf)
EXPORT_SYMBOL_GPL(videobuf_to_dma);
void videobuf_dma_init(struct videobuf_dmabuf *dma)
EXPORT_SYMBOL_GPL(videobuf_dma_init);
static int videobuf_dma_init_user_locked(struct videobuf_dmabuf *dma,
int direction, unsigned long data, unsigned long size)
int videobuf_dma_init_user(struct videobuf_dmabuf *dma, int direction,
unsigned long data, unsigned long size)
EXPORT_SYMBOL_GPL(videobuf_dma_init_user);
int videobuf_dma_init_kernel(struct videobuf_dmabuf *dma, int direction,
int nr_pages)
EXPORT_SYMBOL_GPL(videobuf_dma_init_kernel);
int videobuf_dma_init_overlay(struct videobuf_dmabuf *dma, int direction,
dma_addr_t addr, int nr_pages)
EXPORT_SYMBOL_GPL(videobuf_dma_init_overlay);
int videobuf_dma_map(struct device *dev, struct videobuf_dmabuf *dma)
EXPORT_SYMBOL_GPL(videobuf_dma_map);
int videobuf_dma_unmap(struct device *dev, struct videobuf_dmabuf *dma)
EXPORT_SYMBOL_GPL(videobuf_dma_unmap);
int videobuf_dma_free(struct videobuf_dmabuf *dma)
EXPORT_SYMBOL_GPL(videobuf_dma_free);
static void videobuf_vm_open(struct vm_area_struct *vma)
static void videobuf_vm_close(struct vm_area_struct *vma)
static int videobuf_vm_fault(struct vm_area_struct *vma, struct vm_fault *vmf)
static const struct vm_operations_struct videobuf_vm_ops = ;
static struct videobuf_buffer *__videobuf_alloc_vb(size_t size)
static void *__videobuf_to_vaddr(struct videobuf_buffer *buf)
static int __videobuf_iolock(struct videobuf_queue *q,
struct videobuf_buffer *vb,
struct v4l2_framebuffer *fbuf)
static int __videobuf_sync(struct videobuf_queue *q,
struct videobuf_buffer *buf)
static int __videobuf_mmap_mapper(struct videobuf_queue *q,
struct videobuf_buffer *buf,
struct vm_area_struct *vma)
static struct videobuf_qtype_ops sg_ops = ;
void *videobuf_sg_alloc(size_t size)
EXPORT_SYMBOL_GPL(videobuf_sg_alloc);
void videobuf_queue_sg_init(struct videobuf_queue *q,
const struct videobuf_queue_ops *ops,
struct device *dev,
spinlock_t *irqlock,
enum v4l2_buf_type type,
enum v4l2_field field,
unsigned int msize,
void *priv,
struct mutex *ext_lock)
EXPORT_SYMBOL_GPL(videobuf_queue_sg_init);
