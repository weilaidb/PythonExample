static struct kmem_cache *idr_layer_cache;
static struct idr_layer *get_from_free_list(struct idr *idp)
static void idr_layer_rcu_free(struct rcu_head *head)
static inline void free_layer(struct idr_layer *p)
static void __move_to_free_list(struct idr *idp, struct idr_layer *p)
static void move_to_free_list(struct idr *idp, struct idr_layer *p)
static void idr_mark_full(struct idr_layer **pa, int id)
int idr_pre_get(struct idr *idp, gfp_t gfp_mask)
EXPORT_SYMBOL(idr_pre_get);
static int sub_alloc(struct idr *idp, int *starting_id, struct idr_layer **pa)
static int idr_get_empty_slot(struct idr *idp, int starting_id,
struct idr_layer **pa)
static int idr_get_new_above_int(struct idr *idp, void *ptr, int starting_id)
int idr_get_new_above(struct idr *idp, void *ptr, int starting_id, int *id)
EXPORT_SYMBOL(idr_get_new_above);
int idr_get_new(struct idr *idp, void *ptr, int *id)
EXPORT_SYMBOL(idr_get_new);
static void idr_remove_warning(int id)
static void sub_remove(struct idr *idp, int shift, int id)
void idr_remove(struct idr *idp, int id)
EXPORT_SYMBOL(idr_remove);
void idr_remove_all(struct idr *idp)
EXPORT_SYMBOL(idr_remove_all);
void idr_destroy(struct idr *idp)
EXPORT_SYMBOL(idr_destroy);
void *idr_find(struct idr *idp, int id)
EXPORT_SYMBOL(idr_find);
int idr_for_each(struct idr *idp,
int (*fn)(int id, void *p, void *data), void *data)
EXPORT_SYMBOL(idr_for_each);
void *idr_get_next(struct idr *idp, int *nextidp)
EXPORT_SYMBOL(idr_get_next);
void *idr_replace(struct idr *idp, void *ptr, int id)
EXPORT_SYMBOL(idr_replace);
void __init idr_init_cache(void)
void idr_init(struct idr *idp)
EXPORT_SYMBOL(idr_init);
static void free_bitmap(struct ida *ida, struct ida_bitmap *bitmap)
int ida_pre_get(struct ida *ida, gfp_t gfp_mask)
EXPORT_SYMBOL(ida_pre_get);
int ida_get_new_above(struct ida *ida, int starting_id, int *p_id)
EXPORT_SYMBOL(ida_get_new_above);
int ida_get_new(struct ida *ida, int *p_id)
EXPORT_SYMBOL(ida_get_new);
void ida_remove(struct ida *ida, int id)
EXPORT_SYMBOL(ida_remove);
void ida_destroy(struct ida *ida)
EXPORT_SYMBOL(ida_destroy);
void ida_init(struct ida *ida)
EXPORT_SYMBOL(ida_init);
