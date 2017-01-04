#define _LINUX_KFIFO_H
struct __kfifo ;
#define __STRUCT_KFIFO_COMMON(datatype, recsize, ptrtype) \
union
#define __STRUCT_KFIFO(type, size, recsize, ptrtype) \
#define STRUCT_KFIFO(type, size) \
struct __STRUCT_KFIFO(type, size, 0, type)
#define __STRUCT_KFIFO_PTR(type, recsize, ptrtype) \
#define STRUCT_KFIFO_PTR(type) \
struct __STRUCT_KFIFO_PTR(type, 0, type)
struct kfifo __STRUCT_KFIFO_PTR(unsigned char, 0, void);
#define STRUCT_KFIFO_REC_1(size) \
struct __STRUCT_KFIFO(unsigned char, size, 1, void)
#define STRUCT_KFIFO_REC_2(size) \
struct __STRUCT_KFIFO(unsigned char, size, 2, void)
struct kfifo_rec_ptr_1 __STRUCT_KFIFO_PTR(unsigned char, 1, void);
struct kfifo_rec_ptr_2 __STRUCT_KFIFO_PTR(unsigned char, 2, void);
#define	__is_kfifo_ptr(fifo)	(sizeof(*fifo) == sizeof(struct __kfifo))
#define DECLARE_KFIFO_PTR(fifo, type)	STRUCT_KFIFO_PTR(type) fifo
#define DECLARE_KFIFO(fifo, type, size)	STRUCT_KFIFO(type, size) fifo
#define INIT_KFIFO(fifo) \
(void)()
#define DEFINE_KFIFO(fifo, type, size) \
DECLARE_KFIFO(fifo, type, size) = \
(typeof(fifo))
static inline unsigned int __must_check
__kfifo_uint_must_check_helper(unsigned int val)
static inline int __must_check
__kfifo_int_must_check_helper(int val)
#define kfifo_initialized(fifo) ((fifo)->kfifo.mask)
#define kfifo_esize(fifo)	((fifo)->kfifo.esize)
#define kfifo_recsize(fifo)	(sizeof(*(fifo)->rectype))
#define kfifo_size(fifo)	((fifo)->kfifo.mask + 1)
#define kfifo_reset(fifo) \
(void)()
#define kfifo_reset_out(fifo)	\
(void)()
#define kfifo_len(fifo) \
()
#define	kfifo_is_empty(fifo) \
()
#define	kfifo_is_full(fifo) \
()
#define	kfifo_avail(fifo) \
__kfifo_uint_must_check_helper( \
() \
)
#define	kfifo_skip(fifo) \
(void)()
#define kfifo_peek_len(fifo) \
__kfifo_uint_must_check_helper( \
() \
)
#define kfifo_alloc(fifo, size, gfp_mask) \
__kfifo_int_must_check_helper( \
() \
)
#define kfifo_free(fifo) \
()
#define kfifo_init(fifo, buffer, size) \
()
#define	kfifo_put(fifo, val) \
()
#define	kfifo_get(fifo, val) \
__kfifo_uint_must_check_helper( \
() \
)
#define	kfifo_peek(fifo, val) \
__kfifo_uint_must_check_helper( \
() \
)
#define	kfifo_in(fifo, buf, n) \
()
#define	kfifo_in_spinlocked(fifo, buf, n, lock) \
()
#define kfifo_in_locked(fifo, buf, n, lock) \
kfifo_in_spinlocked(fifo, buf, n, lock)
#define	kfifo_out(fifo, buf, n) \
__kfifo_uint_must_check_helper( \
() \
)
#define	kfifo_out_spinlocked(fifo, buf, n, lock) \
__kfifo_uint_must_check_helper( \
() \
)
#define kfifo_out_locked(fifo, buf, n, lock) \
kfifo_out_spinlocked(fifo, buf, n, lock)
#define	kfifo_from_user(fifo, from, len, copied) \
__kfifo_uint_must_check_helper( \
() \
)
#define	kfifo_to_user(fifo, to, len, copied) \
__kfifo_uint_must_check_helper( \
() \
)
#define	kfifo_dma_in_prepare(fifo, sgl, nents, len) \
()
#define kfifo_dma_in_finish(fifo, len) \
(void)()
#define	kfifo_dma_out_prepare(fifo, sgl, nents, len) \
()
#define kfifo_dma_out_finish(fifo, len) \
(void)()
#define	kfifo_out_peek(fifo, buf, n) \
__kfifo_uint_must_check_helper( \
() \
)
extern int __kfifo_alloc(struct __kfifo *fifo, unsigned int size,
size_t esize, gfp_t gfp_mask);
extern void __kfifo_free(struct __kfifo *fifo);
extern int __kfifo_init(struct __kfifo *fifo, void *buffer,
unsigned int size, size_t esize);
extern unsigned int __kfifo_in(struct __kfifo *fifo,
const void *buf, unsigned int len);
extern unsigned int __kfifo_out(struct __kfifo *fifo,
void *buf, unsigned int len);
extern int __kfifo_from_user(struct __kfifo *fifo,
const void __user *from, unsigned long len, unsigned int *copied);
extern int __kfifo_to_user(struct __kfifo *fifo,
void __user *to, unsigned long len, unsigned int *copied);
extern unsigned int __kfifo_dma_in_prepare(struct __kfifo *fifo,
struct scatterlist *sgl, int nents, unsigned int len);
extern unsigned int __kfifo_dma_out_prepare(struct __kfifo *fifo,
struct scatterlist *sgl, int nents, unsigned int len);
extern unsigned int __kfifo_out_peek(struct __kfifo *fifo,
void *buf, unsigned int len);
extern unsigned int __kfifo_in_r(struct __kfifo *fifo,
const void *buf, unsigned int len, size_t recsize);
extern unsigned int __kfifo_out_r(struct __kfifo *fifo,
void *buf, unsigned int len, size_t recsize);
extern int __kfifo_from_user_r(struct __kfifo *fifo,
const void __user *from, unsigned long len, unsigned int *copied,
size_t recsize);
extern int __kfifo_to_user_r(struct __kfifo *fifo, void __user *to,
unsigned long len, unsigned int *copied, size_t recsize);
extern unsigned int __kfifo_dma_in_prepare_r(struct __kfifo *fifo,
struct scatterlist *sgl, int nents, unsigned int len, size_t recsize);
extern void __kfifo_dma_in_finish_r(struct __kfifo *fifo,
unsigned int len, size_t recsize);
extern unsigned int __kfifo_dma_out_prepare_r(struct __kfifo *fifo,
struct scatterlist *sgl, int nents, unsigned int len, size_t recsize);
extern void __kfifo_dma_out_finish_r(struct __kfifo *fifo, size_t recsize);
extern unsigned int __kfifo_len_r(struct __kfifo *fifo, size_t recsize);
extern void __kfifo_skip_r(struct __kfifo *fifo, size_t recsize);
extern unsigned int __kfifo_out_peek_r(struct __kfifo *fifo,
void *buf, unsigned int len, size_t recsize);
extern unsigned int __kfifo_max_r(unsigned int len, size_t recsize);
