static void uwb_rsv_timer(unsigned long arg);
static const char *rsv_states[] = ;
static const char *rsv_types[] = ;
bool uwb_rsv_has_two_drp_ies(struct uwb_rsv *rsv)
const char *uwb_rsv_state_str(enum uwb_rsv_state state)
EXPORT_SYMBOL_GPL(uwb_rsv_state_str);
const char *uwb_rsv_type_str(enum uwb_drp_type type)
EXPORT_SYMBOL_GPL(uwb_rsv_type_str);
void uwb_rsv_dump(char *text, struct uwb_rsv *rsv)
static void uwb_rsv_release(struct kref *kref)
void uwb_rsv_get(struct uwb_rsv *rsv)
void uwb_rsv_put(struct uwb_rsv *rsv)
static int uwb_rsv_get_stream(struct uwb_rsv *rsv)
static void uwb_rsv_put_stream(struct uwb_rsv *rsv)
void uwb_rsv_backoff_win_timer(unsigned long arg)
void uwb_rsv_backoff_win_increment(struct uwb_rc *rc)
static void uwb_rsv_stroke_timer(struct uwb_rsv *rsv)
static void uwb_rsv_state_update(struct uwb_rsv *rsv,
enum uwb_rsv_state new_state)
static void uwb_rsv_callback(struct uwb_rsv *rsv)
void uwb_rsv_set_state(struct uwb_rsv *rsv, enum uwb_rsv_state new_state)
static void uwb_rsv_handle_timeout_work(struct work_struct *work)
static struct uwb_rsv *uwb_rsv_alloc(struct uwb_rc *rc)
struct uwb_rsv *uwb_rsv_create(struct uwb_rc *rc, uwb_rsv_cb_f cb, void *pal_priv)
EXPORT_SYMBOL_GPL(uwb_rsv_create);
void uwb_rsv_remove(struct uwb_rsv *rsv)
void uwb_rsv_destroy(struct uwb_rsv *rsv)
EXPORT_SYMBOL_GPL(uwb_rsv_destroy);
int uwb_rsv_establish(struct uwb_rsv *rsv)
EXPORT_SYMBOL_GPL(uwb_rsv_establish);
int uwb_rsv_modify(struct uwb_rsv *rsv, int max_mas, int min_mas, int max_interval)
EXPORT_SYMBOL_GPL(uwb_rsv_modify);
int uwb_rsv_try_move(struct uwb_rsv *rsv, struct uwb_mas_bm *available)
void uwb_rsv_handle_drp_avail_change(struct uwb_rc *rc)
void uwb_rsv_terminate(struct uwb_rsv *rsv)
EXPORT_SYMBOL_GPL(uwb_rsv_terminate);
void uwb_rsv_accept(struct uwb_rsv *rsv, uwb_rsv_cb_f cb, void *pal_priv)
EXPORT_SYMBOL_GPL(uwb_rsv_accept);
static bool uwb_rsv_match(struct uwb_rsv *rsv, struct uwb_dev *src,
struct uwb_ie_drp *drp_ie)
static struct uwb_rsv *uwb_rsv_new_target(struct uwb_rc *rc,
struct uwb_dev *src,
struct uwb_ie_drp *drp_ie)
void uwb_rsv_get_usable_mas(struct uwb_rsv *rsv, struct uwb_mas_bm *mas)
EXPORT_SYMBOL_GPL(uwb_rsv_get_usable_mas);
struct uwb_rsv *uwb_rsv_find(struct uwb_rc *rc, struct uwb_dev *src,
struct uwb_ie_drp *drp_ie)
static bool uwb_rsv_update_all(struct uwb_rc *rc)
void uwb_rsv_queue_update(struct uwb_rc *rc)
void uwb_rsv_sched_update(struct uwb_rc *rc)
static void uwb_rsv_update_work(struct work_struct *work)
static void uwb_rsv_alien_bp_work(struct work_struct *work)
static void uwb_rsv_timer(unsigned long arg)
void uwb_rsv_remove_all(struct uwb_rc *rc)
void uwb_rsv_init(struct uwb_rc *rc)
int uwb_rsv_setup(struct uwb_rc *rc)
void uwb_rsv_cleanup(struct uwb_rc *rc)
