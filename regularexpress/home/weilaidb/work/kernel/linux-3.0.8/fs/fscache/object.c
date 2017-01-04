#define FSCACHE_DEBUG_LEVEL COOKIE
const char *fscache_object_states[FSCACHE_OBJECT__NSTATES] = ;
EXPORT_SYMBOL(fscache_object_states);
const char fscache_object_states_short[FSCACHE_OBJECT__NSTATES][5] = ;
static int  fscache_get_object(struct fscache_object *);
static void fscache_put_object(struct fscache_object *);
static void fscache_initialise_object(struct fscache_object *);
static void fscache_lookup_object(struct fscache_object *);
static void fscache_object_available(struct fscache_object *);
static void fscache_release_object(struct fscache_object *);
static void fscache_withdraw_object(struct fscache_object *);
static void fscache_enqueue_dependents(struct fscache_object *);
static void fscache_dequeue_object(struct fscache_object *);
static inline void fscache_done_parent_op(struct fscache_object *object)
static void fscache_object_state_machine(struct fscache_object *object)
void fscache_object_work_func(struct work_struct *work)
EXPORT_SYMBOL(fscache_object_work_func);
static void fscache_initialise_object(struct fscache_object *object)
static void fscache_lookup_object(struct fscache_object *object)
void fscache_object_lookup_negative(struct fscache_object *object)
EXPORT_SYMBOL(fscache_object_lookup_negative);
void fscache_obtained_object(struct fscache_object *object)
EXPORT_SYMBOL(fscache_obtained_object);
static void fscache_object_available(struct fscache_object *object)
static void fscache_drop_object(struct fscache_object *object)
static void fscache_release_object(struct fscache_object *object)
static void fscache_withdraw_object(struct fscache_object *object)
void fscache_withdrawing_object(struct fscache_cache *cache,
struct fscache_object *object)
static int fscache_get_object(struct fscache_object *object)
static void fscache_put_object(struct fscache_object *object)
void fscache_enqueue_object(struct fscache_object *object)
bool fscache_object_sleep_till_congested(signed long *timeoutp)
EXPORT_SYMBOL_GPL(fscache_object_sleep_till_congested);
static void fscache_enqueue_dependents(struct fscache_object *object)
void fscache_dequeue_object(struct fscache_object *object)
enum fscache_checkaux fscache_check_aux(struct fscache_object *object,
const void *data, uint16_t datalen)
EXPORT_SYMBOL(fscache_check_aux);
