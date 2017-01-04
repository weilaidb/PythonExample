static void ttm_eu_backoff_reservation_locked(struct list_head *list)
static void ttm_eu_del_from_lru_locked(struct list_head *list)
static void ttm_eu_list_ref_sub(struct list_head *list)
static int ttm_eu_wait_unreserved_locked(struct list_head *list,
struct ttm_buffer_object *bo)
void ttm_eu_backoff_reservation(struct list_head *list)
EXPORT_SYMBOL(ttm_eu_backoff_reservation);
int ttm_eu_reserve_buffers(struct list_head *list)
EXPORT_SYMBOL(ttm_eu_reserve_buffers);
void ttm_eu_fence_buffer_objects(struct list_head *list, void *sync_obj)
EXPORT_SYMBOL(ttm_eu_fence_buffer_objects);
