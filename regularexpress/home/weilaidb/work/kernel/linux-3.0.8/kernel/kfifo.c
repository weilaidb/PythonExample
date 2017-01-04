static inline unsigned int kfifo_unused(struct __kfifo *fifo)
int __kfifo_alloc(struct __kfifo *fifo, unsigned int size,
size_t esize, gfp_t gfp_mask)
EXPORT_SYMBOL(__kfifo_alloc);
void __kfifo_free(struct __kfifo *fifo)
EXPORT_SYMBOL(__kfifo_free);
int __kfifo_init(struct __kfifo *fifo, void *buffer,
unsigned int size, size_t esize)
EXPORT_SYMBOL(__kfifo_init);
static void kfifo_copy_in(struct __kfifo *fifo, const void *src,
unsigned int len, unsigned int off)
unsigned int __kfifo_in(struct __kfifo *fifo,
const void *buf, unsigned int len)
EXPORT_SYMBOL(__kfifo_in);
static void kfifo_copy_out(struct __kfifo *fifo, void *dst,
unsigned int len, unsigned int off)
unsigned int __kfifo_out_peek(struct __kfifo *fifo,
void *buf, unsigned int len)
EXPORT_SYMBOL(__kfifo_out_peek);
unsigned int __kfifo_out(struct __kfifo *fifo,
void *buf, unsigned int len)
EXPORT_SYMBOL(__kfifo_out);
static unsigned long kfifo_copy_from_user(struct __kfifo *fifo,
const void __user *from, unsigned int len, unsigned int off,
unsigned int *copied)
int __kfifo_from_user(struct __kfifo *fifo, const void __user *from,
unsigned long len, unsigned int *copied)
EXPORT_SYMBOL(__kfifo_from_user);
static unsigned long kfifo_copy_to_user(struct __kfifo *fifo, void __user *to,
unsigned int len, unsigned int off, unsigned int *copied)
int __kfifo_to_user(struct __kfifo *fifo, void __user *to,
unsigned long len, unsigned int *copied)
EXPORT_SYMBOL(__kfifo_to_user);
static int setup_sgl_buf(struct scatterlist *sgl, void *buf,
int nents, unsigned int len)
static unsigned int setup_sgl(struct __kfifo *fifo, struct scatterlist *sgl,
int nents, unsigned int len, unsigned int off)
unsigned int __kfifo_dma_in_prepare(struct __kfifo *fifo,
struct scatterlist *sgl, int nents, unsigned int len)
EXPORT_SYMBOL(__kfifo_dma_in_prepare);
unsigned int __kfifo_dma_out_prepare(struct __kfifo *fifo,
struct scatterlist *sgl, int nents, unsigned int len)
EXPORT_SYMBOL(__kfifo_dma_out_prepare);
unsigned int __kfifo_max_r(unsigned int len, size_t recsize)
#define	__KFIFO_PEEK(data, out, mask) \
((data)[(out) & (mask)])
static unsigned int __kfifo_peek_n(struct __kfifo *fifo, size_t recsize)
#define	__KFIFO_POKE(data, in, mask, val) \
( \
(data)[(in) & (mask)] = (unsigned char)(val) \
)
static void __kfifo_poke_n(struct __kfifo *fifo, unsigned int n, size_t recsize)
unsigned int __kfifo_len_r(struct __kfifo *fifo, size_t recsize)
EXPORT_SYMBOL(__kfifo_len_r);
unsigned int __kfifo_in_r(struct __kfifo *fifo, const void *buf,
unsigned int len, size_t recsize)
EXPORT_SYMBOL(__kfifo_in_r);
static unsigned int kfifo_out_copy_r(struct __kfifo *fifo,
void *buf, unsigned int len, size_t recsize, unsigned int *n)
unsigned int __kfifo_out_peek_r(struct __kfifo *fifo, void *buf,
unsigned int len, size_t recsize)
EXPORT_SYMBOL(__kfifo_out_peek_r);
unsigned int __kfifo_out_r(struct __kfifo *fifo, void *buf,
unsigned int len, size_t recsize)
EXPORT_SYMBOL(__kfifo_out_r);
void __kfifo_skip_r(struct __kfifo *fifo, size_t recsize)
EXPORT_SYMBOL(__kfifo_skip_r);
int __kfifo_from_user_r(struct __kfifo *fifo, const void __user *from,
unsigned long len, unsigned int *copied, size_t recsize)
EXPORT_SYMBOL(__kfifo_from_user_r);
int __kfifo_to_user_r(struct __kfifo *fifo, void __user *to,
unsigned long len, unsigned int *copied, size_t recsize)
EXPORT_SYMBOL(__kfifo_to_user_r);
unsigned int __kfifo_dma_in_prepare_r(struct __kfifo *fifo,
struct scatterlist *sgl, int nents, unsigned int len, size_t recsize)
EXPORT_SYMBOL(__kfifo_dma_in_prepare_r);
void __kfifo_dma_in_finish_r(struct __kfifo *fifo,
unsigned int len, size_t recsize)
EXPORT_SYMBOL(__kfifo_dma_in_finish_r);
unsigned int __kfifo_dma_out_prepare_r(struct __kfifo *fifo,
struct scatterlist *sgl, int nents, unsigned int len, size_t recsize)
EXPORT_SYMBOL(__kfifo_dma_out_prepare_r);
void __kfifo_dma_out_finish_r(struct __kfifo *fifo, size_t recsize)
EXPORT_SYMBOL(__kfifo_dma_out_finish_r);
