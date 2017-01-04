#define GET_HASHBIN(x) ( x & HASHBIN_MASK )
static __u32 hash( const char* name)
static void enqueue_first(irda_queue_t **queue, irda_queue_t* element)
static irda_queue_t *dequeue_first(irda_queue_t **queue)
static irda_queue_t *dequeue_general(irda_queue_t **queue, irda_queue_t* element)
hashbin_t *hashbin_new(int type)
EXPORT_SYMBOL(hashbin_new);
static int hashbin_lock_depth = 0;
int hashbin_delete( hashbin_t* hashbin, FREE_FUNC free_func)
EXPORT_SYMBOL(hashbin_delete);
void hashbin_insert(hashbin_t* hashbin, irda_queue_t* entry, long hashv,
const char* name)
EXPORT_SYMBOL(hashbin_insert);
void *hashbin_remove_first( hashbin_t *hashbin)
void* hashbin_remove( hashbin_t* hashbin, long hashv, const char* name)
EXPORT_SYMBOL(hashbin_remove);
void* hashbin_remove_this( hashbin_t* hashbin, irda_queue_t* entry)
EXPORT_SYMBOL(hashbin_remove_this);
void* hashbin_find( hashbin_t* hashbin, long hashv, const char* name )
EXPORT_SYMBOL(hashbin_find);
void* hashbin_lock_find( hashbin_t* hashbin, long hashv, const char* name )
EXPORT_SYMBOL(hashbin_lock_find);
void* hashbin_find_next( hashbin_t* hashbin, long hashv, const char* name,
void ** pnext)
irda_queue_t *hashbin_get_first( hashbin_t* hashbin)
EXPORT_SYMBOL(hashbin_get_first);
irda_queue_t *hashbin_get_next( hashbin_t *hashbin)
EXPORT_SYMBOL(hashbin_get_next);
