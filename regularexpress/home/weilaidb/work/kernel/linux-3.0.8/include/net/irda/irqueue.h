#define IRDA_QUEUE_H
#define NAME_SIZE      32
#define HB_NOLOCK	0
#define HB_LOCK		1
#define HASHBIN_SIZE   8
#define HASHBIN_MASK   0x7
#define IRDA_ALIGN __attribute__((aligned))
#define Q_NULL
typedef void (*FREE_FUNC)(void *arg);
struct irda_queue ;
typedef struct irda_queue irda_queue_t;
typedef struct hashbin_t  hashbin_t;
hashbin_t *hashbin_new(int type);
int      hashbin_delete(hashbin_t* hashbin, FREE_FUNC func);
int      hashbin_clear(hashbin_t* hashbin, FREE_FUNC free_func);
void     hashbin_insert(hashbin_t* hashbin, irda_queue_t* entry, long hashv,
const char* name);
void*    hashbin_remove(hashbin_t* hashbin, long hashv, const char* name);
void*    hashbin_remove_first(hashbin_t *hashbin);
void*	 hashbin_remove_this( hashbin_t* hashbin, irda_queue_t* entry);
void*    hashbin_find(hashbin_t* hashbin, long hashv, const char* name);
void*    hashbin_lock_find(hashbin_t* hashbin, long hashv, const char* name);
void*    hashbin_find_next(hashbin_t* hashbin, long hashv, const char* name,
void ** pnext);
irda_queue_t *hashbin_get_first(hashbin_t *hashbin);
irda_queue_t *hashbin_get_next(hashbin_t *hashbin);
#define HASHBIN_GET_SIZE(hashbin) hashbin->hb_size
