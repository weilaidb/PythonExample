#define _TTM_EXECBUF_UTIL_H_
struct ttm_validate_buffer ;
extern void ttm_eu_backoff_reservation(struct list_head *list);
extern int ttm_eu_reserve_buffers(struct list_head *list);
extern void ttm_eu_fence_buffer_objects(struct list_head *list, void *sync_obj);
