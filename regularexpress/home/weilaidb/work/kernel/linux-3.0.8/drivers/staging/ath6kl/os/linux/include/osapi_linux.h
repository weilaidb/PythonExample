#define _OSAPI_LINUX_H_
#define __ATTRIB_PACK           __attribute__ ((packed))
#define __ATTRIB_PRINTF         __attribute__ ((format (printf, 1, 2)))
#define __ATTRIB_NORETURN       __attribute__ ((noreturn))
#define INLINE                  __inline__
#define __ATTRIB_PACK
#define __ATTRIB_PRINTF
#define __ATTRIB_NORETURN
#define INLINE                  __inline
#define PREPACK
#define POSTPACK                __ATTRIB_PACK
#define A_BE2CPU8(x)       ntohb(x)
#define A_BE2CPU16(x)      ntohs(x)
#define A_BE2CPU32(x)      ntohl(x)
#define A_LE2CPU8(x)       (x)
#define A_LE2CPU16(x)      (x)
#define A_LE2CPU32(x)      (x)
#define A_CPU2BE8(x)       htonb(x)
#define A_CPU2BE16(x)      htons(x)
#define A_CPU2BE32(x)      htonl(x)
#define A_MEMZERO(addr, len)            memset(addr, 0, len)
#define A_MALLOC(size)                  kmalloc((size), GFP_KERNEL)
#define A_MALLOC_NOWAIT(size)           kmalloc((size), GFP_ATOMIC)
#define A_LOGGER(mask, mod, args...)    printk(KERN_ALERT args)
#define A_PRINTF(args...)               printk(KERN_ALERT args)
#define A_PRINTF_LOG(args...)           printk(args)
#define A_SPRINTF(buf, args...)			sprintf (buf, args)
typedef spinlock_t                      A_MUTEX_T;
#define A_MUTEX_INIT(mutex)             spin_lock_init(mutex)
#define A_MUTEX_LOCK(mutex)             spin_lock_bh(mutex)
#define A_MUTEX_UNLOCK(mutex)           spin_unlock_bh(mutex)
#define A_IS_MUTEX_VALID(mutex)         true
#define A_MUTEX_DELETE(mutex)
#define A_GET_MS(offset)    \
(((jiffies / HZ) * 1000) + (offset))
#define A_MDELAY(msecs)                 mdelay(msecs)
typedef struct timer_list               A_TIMER;
#define A_INIT_TIMER(pTimer, pFunction, pArg) do  while (0)
#define A_TIMEOUT_MS(pTimer, periodMSec, repeatFlag) do  while (0)
#define A_UNTIMEOUT(pTimer) do  while (0)
#define A_DELETE_TIMER(pTimer) do  while (0)
typedef wait_queue_head_t               A_WAITQUEUE_HEAD;
#define A_INIT_WAITQUEUE_HEAD(head)     init_waitqueue_head(head)
#define __wait_event_interruptible_timeout(wq, condition, ret)          \
do  while (0)
#define wait_event_interruptible_timeout(wq, condition, timeout)        \
()
#define A_WAIT_EVENT_INTERRUPTIBLE_TIMEOUT(head, condition, timeout) do  while (0)
#define A_WAKE_UP(head)                 wake_up(head)
extern unsigned int panic_on_assert;
#define A_ASSERT(expr)  \
if (!(expr))
#define A_ASSERT(expr)
#define A_REQUEST_FIRMWARE(_ppf, _pfile, _dev) request_firmware(_ppf, _pfile, _dev)
#define A_RELEASE_FIRMWARE(_pf) release_firmware(_pf)
#define A_NETBUF_INIT()
typedef struct sk_buff_head A_NETBUF_QUEUE_T;
#define A_NETBUF_QUEUE_INIT(q)  \
a_netbuf_queue_init(q)
#define A_NETBUF_ENQUEUE(q, pkt) \
a_netbuf_enqueue((q), (pkt))
#define A_NETBUF_PREQUEUE(q, pkt) \
a_netbuf_prequeue((q), (pkt))
#define A_NETBUF_DEQUEUE(q) \
(a_netbuf_dequeue(q))
#define A_NETBUF_QUEUE_SIZE(q)  \
a_netbuf_queue_size(q)
#define A_NETBUF_QUEUE_EMPTY(q) \
(a_netbuf_queue_empty(q) ? true : false)
#define A_NETBUF_ALLOC(size) \
a_netbuf_alloc(size)
#define A_NETBUF_ALLOC_RAW(size) \
a_netbuf_alloc_raw(size)
#define A_NETBUF_FREE(bufPtr) \
a_netbuf_free(bufPtr)
#define A_NETBUF_DATA(bufPtr) \
a_netbuf_to_data(bufPtr)
#define A_NETBUF_LEN(bufPtr) \
a_netbuf_to_len(bufPtr)
#define A_NETBUF_PUSH(bufPtr, len) \
a_netbuf_push(bufPtr, len)
#define A_NETBUF_PUT(bufPtr, len) \
a_netbuf_put(bufPtr, len)
#define A_NETBUF_TRIM(bufPtr,len) \
a_netbuf_trim(bufPtr, len)
#define A_NETBUF_PULL(bufPtr, len) \
a_netbuf_pull(bufPtr, len)
#define A_NETBUF_HEADROOM(bufPtr)\
a_netbuf_headroom(bufPtr)
#define A_NETBUF_SETLEN(bufPtr,len) \
a_netbuf_setlen(bufPtr, len)
#define A_NETBUF_PUT_DATA(bufPtr, srcPtr,  len) \
a_netbuf_put_data(bufPtr, srcPtr, len)
#define A_NETBUF_PUSH_DATA(bufPtr, srcPtr,  len) \
a_netbuf_push_data(bufPtr, srcPtr, len)
#define A_NETBUF_PULL_DATA(bufPtr, dstPtr, len) \
a_netbuf_pull_data(bufPtr, dstPtr, len)
#define A_NETBUF_TRIM_DATA(bufPtr, dstPtr, len) \
a_netbuf_trim_data(bufPtr, dstPtr, len)
#define A_NETBUF_VIEW_DATA(bufPtr, t, size) \
(t )( ((struct skbuf *)(bufPtr))->data)
#define A_NETBUF_HEAD(bufPtr) \
((((struct sk_buff *)(bufPtr))->head))
void *a_netbuf_alloc(int size);
void *a_netbuf_alloc_raw(int size);
void a_netbuf_free(void *bufPtr);
void *a_netbuf_to_data(void *bufPtr);
u32 a_netbuf_to_len(void *bufPtr);
int a_netbuf_push(void *bufPtr, s32 len);
int a_netbuf_push_data(void *bufPtr, char *srcPtr, s32 len);
int a_netbuf_put(void *bufPtr, s32 len);
int a_netbuf_put_data(void *bufPtr, char *srcPtr, s32 len);
int a_netbuf_pull(void *bufPtr, s32 len);
int a_netbuf_pull_data(void *bufPtr, char *dstPtr, s32 len);
int a_netbuf_trim(void *bufPtr, s32 len);
int a_netbuf_trim_data(void *bufPtr, char *dstPtr, s32 len);
int a_netbuf_setlen(void *bufPtr, s32 len);
s32 a_netbuf_headroom(void *bufPtr);
void a_netbuf_enqueue(A_NETBUF_QUEUE_T *q, void *pkt);
void a_netbuf_prequeue(A_NETBUF_QUEUE_T *q, void *pkt);
void *a_netbuf_dequeue(A_NETBUF_QUEUE_T *q);
int a_netbuf_queue_size(A_NETBUF_QUEUE_T *q);
int a_netbuf_queue_empty(A_NETBUF_QUEUE_T *q);
int a_netbuf_queue_empty(A_NETBUF_QUEUE_T *q);
void a_netbuf_queue_init(A_NETBUF_QUEUE_T *q);
u32 a_copy_to_user(void *to, const void *from, u32 n);
u32 a_copy_from_user(void *to, const void *from, u32 n);
#define A_CHECK_DRV_TX()
#define A_GET_CACHE_LINE_BYTES()    L1_CACHE_BYTES
#define A_CACHE_LINE_PAD            128
static inline void *A_ALIGN_TO_CACHE_LINE(void *ptr)
#define __ATTRIB_PACK           __attribute__ ((packed))
#define __ATTRIB_PRINTF         __attribute__ ((format (printf, 1, 2)))
#define __ATTRIB_NORETURN       __attribute__ ((noreturn))
#define INLINE                  __inline__
#define __ATTRIB_PACK
#define __ATTRIB_PRINTF
#define __ATTRIB_NORETURN
#define INLINE                  __inline
#define PREPACK
#define POSTPACK                __ATTRIB_PACK
#define A_MEMZERO(addr, len)            memset((addr), 0, (len))
#define A_MALLOC(size)                  malloc(size)
