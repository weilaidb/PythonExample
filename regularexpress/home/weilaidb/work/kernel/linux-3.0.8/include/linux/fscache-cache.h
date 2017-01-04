#define _LINUX_FSCACHE_CACHE_H
#define NR_MAXCACHES BITS_PER_LONG
struct fscache_cache;
struct fscache_cache_ops;
struct fscache_object;
struct fscache_operation;
struct fscache_cache_tag ;
struct fscache_cache ;
extern wait_queue_head_t fscache_cache_cleared_wq;
typedef void (*fscache_operation_release_t)(struct fscache_operation *op);
typedef void (*fscache_operation_processor_t)(struct fscache_operation *op);
struct fscache_operation ;
extern atomic_t fscache_op_debug_id;
extern void fscache_op_work_func(struct work_struct *work);
extern void fscache_enqueue_operation(struct fscache_operation *);
extern void fscache_put_operation(struct fscache_operation *);
static inline void fscache_operation_init(struct fscache_operation *op,
fscache_operation_processor_t processor,
fscache_operation_release_t release)
struct fscache_retrieval ;
typedef int (*fscache_page_retrieval_func_t)(struct fscache_retrieval *op,
struct page *page,
gfp_t gfp);
typedef int (*fscache_pages_retrieval_func_t)(struct fscache_retrieval *op,
struct list_head *pages,
unsigned *nr_pages,
gfp_t gfp);
static inline
struct fscache_retrieval *fscache_get_retrieval(struct fscache_retrieval *op)
static inline void fscache_enqueue_retrieval(struct fscache_retrieval *op)
static inline void fscache_put_retrieval(struct fscache_retrieval *op)
struct fscache_storage ;
struct fscache_cache_ops ;
struct fscache_cookie ;
extern struct fscache_cookie fscache_fsdef_index;
struct fscache_object ;
extern const char *fscache_object_states[];
#define fscache_object_is_active(obj)			      \
(!test_bit(FSCACHE_IOERROR, &(obj)->cache->flags) &&  \
(obj)->state >= FSCACHE_OBJECT_AVAILABLE &&	      \
(obj)->state < FSCACHE_OBJECT_DYING)
#define fscache_object_is_dead(obj)				\
(test_bit(FSCACHE_IOERROR, &(obj)->cache->flags) &&	\
(obj)->state >= FSCACHE_OBJECT_DYING)
extern void fscache_object_work_func(struct work_struct *work);
static inline
void fscache_object_init(struct fscache_object *object,
struct fscache_cookie *cookie,
struct fscache_cache *cache)
extern void fscache_object_lookup_negative(struct fscache_object *object);
extern void fscache_obtained_object(struct fscache_object *object);
extern void fscache_object_destroy(struct fscache_object *object);
#define fscache_object_destroy(object) do  while(0)
static inline void fscache_object_destroyed(struct fscache_cache *cache)
static inline void fscache_object_lookup_error(struct fscache_object *object)
static inline
void fscache_set_store_limit(struct fscache_object *object, loff_t i_size)
static inline void fscache_end_io(struct fscache_retrieval *op,
struct page *page, int error)
extern void fscache_init_cache(struct fscache_cache *cache,
const struct fscache_cache_ops *ops,
const char *idfmt,
...) __attribute__ ((format (printf, 3, 4)));
extern int fscache_add_cache(struct fscache_cache *cache,
struct fscache_object *fsdef,
const char *tagname);
extern void fscache_withdraw_cache(struct fscache_cache *cache);
extern void fscache_io_error(struct fscache_cache *cache);
extern void fscache_mark_pages_cached(struct fscache_retrieval *op,
struct pagevec *pagevec);
extern bool fscache_object_sleep_till_congested(signed long *timeoutp);
extern enum fscache_checkaux fscache_check_aux(struct fscache_object *object,
const void *data,
uint16_t datalen);
