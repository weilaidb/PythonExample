#define MAGIC_DMABUF   0x17760309
#define MAGIC_VMAL_MEM 0x18221223
#define MAGIC_CHECK(is, should)						\
if (unlikely((is) != (should)))
static int debug;
module_param(debug, int, 0644);
MODULE_DESCRIPTION("helper module to manage video4linux vmalloc buffers");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_LICENSE("GPL");
#define dprintk(level, fmt, arg...)					\
if (debug >= level)						\
printk(KERN_DEBUG "vbuf-vmalloc: " fmt , ## arg)
static void videobuf_vm_open(struct vm_area_struct *vma)
static void videobuf_vm_close(struct vm_area_struct *vma)
static const struct vm_operations_struct videobuf_vm_ops = ;
static struct videobuf_buffer *__videobuf_alloc_vb(size_t size)
static int __videobuf_iolock(struct videobuf_queue *q,
struct videobuf_buffer *vb,
struct v4l2_framebuffer *fbuf)
static int __videobuf_mmap_mapper(struct videobuf_queue *q,
struct videobuf_buffer *buf,
struct vm_area_struct *vma)
static struct videobuf_qtype_ops qops = ;
void videobuf_queue_vmalloc_init(struct videobuf_queue *q,
const struct videobuf_queue_ops *ops,
struct device *dev,
spinlock_t *irqlock,
enum v4l2_buf_type type,
enum v4l2_field field,
unsigned int msize,
void *priv,
struct mutex *ext_lock)
EXPORT_SYMBOL_GPL(videobuf_queue_vmalloc_init);
void *videobuf_to_vmalloc(struct videobuf_buffer *buf)
EXPORT_SYMBOL_GPL(videobuf_to_vmalloc);
void videobuf_vmalloc_free(struct videobuf_buffer *buf)
EXPORT_SYMBOL_GPL(videobuf_vmalloc_free);
