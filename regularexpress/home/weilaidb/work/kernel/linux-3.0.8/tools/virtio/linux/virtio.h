#define LINUX_VIRTIO_H
typedef unsigned long long dma_addr_t;
struct scatterlist ;
struct page ;
#define BUG_ON(__BUG_ON_cond) assert(!(__BUG_ON_cond))
#define virt_to_phys(p) ((unsigned long)p)
#define phys_to_virt(a) ((void *)(unsigned long)(a))
#define virt_to_page(p) ((struct page*)((virt_to_phys(p) / 4096) * \
sizeof(struct page)))
#define offset_in_page(p) (((unsigned long)p) % 4096)
#define sg_phys(sg) ((sg->page_link & ~0x3) / sizeof(struct page) * 4096 + \
sg->offset)
static inline void sg_mark_end(struct scatterlist *sg)
static inline void sg_init_table(struct scatterlist *sgl, unsigned int nents)
static inline void sg_assign_page(struct scatterlist *sg, struct page *page)
static inline void sg_set_page(struct scatterlist *sg, struct page *page,
unsigned int len, unsigned int offset)
static inline void sg_set_buf(struct scatterlist *sg, const void *buf,
unsigned int buflen)
static inline void sg_init_one(struct scatterlist *sg, const void *buf, unsigned int buflen)
typedef __u16 u16;
typedef enum  gfp_t;
typedef enum  irqreturn_t;
static inline void *kmalloc(size_t s, gfp_t gfp)
static inline void kfree(void *p)
#define container_of(ptr, type, member) ()
#define uninitialized_var(x) x = x
# ifndef likely
#  define likely(x)	(__builtin_expect(!!(x), 1))
# endif
# ifndef unlikely
#  define unlikely(x)	(__builtin_expect(!!(x), 0))
# endif
#define pr_err(format, ...) fprintf (stderr, format, ## __VA_ARGS__)
#define pr_debug(format, ...) fprintf (stderr, format, ## __VA_ARGS__)
#define pr_debug(format, ...) do  while (0)
#define dev_err(dev, format, ...) fprintf (stderr, format, ## __VA_ARGS__)
#define dev_warn(dev, format, ...) fprintf (stderr, format, ## __VA_ARGS__)
#define list_add_tail(a, b) do  while (0)
#define list_del(a) do  while (0)
#define BIT_WORD(nr)		((nr) / BITS_PER_LONG)
#define BITS_PER_BYTE		8
#define BITS_PER_LONG (sizeof(long) * BITS_PER_BYTE)
#define BIT_MASK(nr)		(1UL << ((nr) % BITS_PER_LONG))
static inline void clear_bit(int nr, volatile unsigned long *addr)
static inline int test_bit(int nr, const volatile unsigned long *addr)
#define virtio_has_feature(dev, feature) \
test_bit((feature), (dev)->features)
struct virtio_device ;
struct virtqueue ;
#define EXPORT_SYMBOL_GPL(__EXPORT_SYMBOL_GPL_name) \
void __EXPORT_SYMBOL_GPL##__EXPORT_SYMBOL_GPL_name()
#define MODULE_LICENSE(__MODULE_LICENSE_value) \
const char *__MODULE_LICENSE_name = __MODULE_LICENSE_value
#define CONFIG_SMP
#if defined(__i386__) || defined(__x86_64__)
#define barrier() asm volatile("" ::: "memory")
#define mb() __sync_synchronize()
#define smp_mb()	mb()
# define smp_rmb()	barrier()
# define smp_wmb()	barrier()
#error Please fill in barrier macros
int virtqueue_add_buf_gfp(struct virtqueue *vq,
struct scatterlist sg[],
unsigned int out_num,
unsigned int in_num,
void *data,
gfp_t gfp);
static inline int virtqueue_add_buf(struct virtqueue *vq,
struct scatterlist sg[],
unsigned int out_num,
unsigned int in_num,
void *data)
void virtqueue_kick(struct virtqueue *vq);
void *virtqueue_get_buf(struct virtqueue *vq, unsigned int *len);
void virtqueue_disable_cb(struct virtqueue *vq);
bool virtqueue_enable_cb(struct virtqueue *vq);
void *virtqueue_detach_unused_buf(struct virtqueue *vq);
struct virtqueue *vring_new_virtqueue(unsigned int num,
unsigned int vring_align,
struct virtio_device *vdev,
void *pages,
void (*notify)(struct virtqueue *vq),
void (*callback)(struct virtqueue *vq),
const char *name);
void vring_del_virtqueue(struct virtqueue *vq);
