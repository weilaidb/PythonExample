#define __OSDEP_SERVICE_H_
#define _SUCCESS	1
#define _FAIL		0
#define   _usb_alloc_urb(x, y)       usb_alloc_urb(x, y)
#define   _usb_submit_urb(x, y)     usb_submit_urb(x, y)
struct	__queue	;
#define _pkt struct sk_buff
#define _buffer unsigned char
#define thread_exit() complete_and_exit(NULL, 0)
#define _workitem struct work_struct
#define MSECS(t)        (HZ * ((t) / 1000) + (HZ * ((t) % 1000)) / 1000)
#define _init_queue(pqueue)				\
do  while (0)
static inline void *_netdev_priv(struct net_device *dev)
static inline void os_free_netdev(struct net_device *dev)
static inline struct list_head *get_next(struct list_head *list)
static inline struct list_head *get_list_head(struct  __queue *queue)
#define LIST_CONTAINOR(ptr, type, member) \
((type *)((char *)(ptr)-(SIZE_T)(&((type *)0)->member)))
static inline void _enter_hwio_critical(struct semaphore *prwlock,
unsigned long *pirqL)
static inline void _exit_hwio_critical(struct semaphore *prwlock,
unsigned long *pirqL)
static inline void list_delete(struct list_head *plist)
static inline void _init_timer(struct timer_list *ptimer,
struct  net_device *padapter,
void *pfunc, void *cntx)
static inline void _set_timer(struct timer_list *ptimer, u32 delay_time)
static inline void _cancel_timer(struct timer_list *ptimer, u8 *bcancelled)
static inline void _init_workitem(_workitem *pwork, void *pfunc, void *cntx)
static inline void _set_workitem(_workitem *pwork)
#define BIT(x)	(1 << (x))
static inline u32 is_list_empty(struct list_head *phead)
static inline void list_insert_tail(struct list_head *plist,
struct list_head *phead)
static inline u32 _down_sema(struct semaphore *sema)
static inline void _rtl_rwlock_init(struct semaphore *prwlock)
static inline void _init_listhead(struct list_head *list)
static inline u32 _queue_empty(struct  __queue *pqueue)
static inline u32 end_of_queue_search(struct list_head *head, struct list_head *plist)
static inline void sleep_schedulable(int ms)
static inline u8 *_malloc(u32 sz)
static inline unsigned char _cancel_timer_ex(struct timer_list *ptimer)
static inline void thread_enter(void *context)
static inline void flush_signals_thread(void)
static inline u32 _RND8(u32 sz)
static inline u32 _RND128(u32 sz)
static inline u32 _RND256(u32 sz)
static inline u32 _RND512(u32 sz)
#define STRUCT_PACKED __attribute__ ((packed))
