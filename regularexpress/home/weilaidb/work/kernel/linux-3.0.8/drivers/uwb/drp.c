enum uwb_drp_conflict_action ;
static void uwb_rc_set_drp_cmd_done(struct uwb_rc *rc, void *arg,
struct uwb_rceb *reply, ssize_t reply_size)
int uwb_rc_send_all_drp_ie(struct uwb_rc *rc)
static int evaluate_conflict_action(struct uwb_ie_drp *ext_drp_ie, int ext_beacon_slot,
struct uwb_rsv *rsv, int our_status)
static void handle_conflict_normal(struct uwb_ie_drp *drp_ie,
int ext_beacon_slot,
struct uwb_rsv *rsv,
struct uwb_mas_bm *conflicting_mas)
static void handle_conflict_expanding(struct uwb_ie_drp *drp_ie, int ext_beacon_slot,
struct uwb_rsv *rsv, bool companion_only,
struct uwb_mas_bm *conflicting_mas)
static void uwb_drp_handle_conflict_rsv(struct uwb_rc *rc, struct uwb_rsv *rsv,
struct uwb_rc_evt_drp *drp_evt,
struct uwb_ie_drp *drp_ie,
struct uwb_mas_bm *conflicting_mas)
static void uwb_drp_handle_all_conflict_rsv(struct uwb_rc *rc,
struct uwb_rc_evt_drp *drp_evt,
struct uwb_ie_drp *drp_ie,
struct uwb_mas_bm *conflicting_mas)
static void uwb_drp_process_target(struct uwb_rc *rc, struct uwb_rsv *rsv,
struct uwb_ie_drp *drp_ie, struct uwb_rc_evt_drp *drp_evt)
static void uwb_drp_process_owner(struct uwb_rc *rc, struct uwb_rsv *rsv,
struct uwb_dev *src, struct uwb_ie_drp *drp_ie,
struct uwb_rc_evt_drp *drp_evt)
static void uwb_cnflt_alien_stroke_timer(struct uwb_cnflt_alien *cnflt)
static void uwb_cnflt_update_work(struct work_struct *work)
static void uwb_cnflt_timer(unsigned long arg)
static void uwb_drp_handle_alien_drp(struct uwb_rc *rc, struct uwb_ie_drp *drp_ie)
static void uwb_drp_process_not_involved(struct uwb_rc *rc,
struct uwb_rc_evt_drp *drp_evt,
struct uwb_ie_drp *drp_ie)
static void uwb_drp_process_involved(struct uwb_rc *rc, struct uwb_dev *src,
struct uwb_rc_evt_drp *drp_evt,
struct uwb_ie_drp *drp_ie)
static bool uwb_drp_involves_us(struct uwb_rc *rc, struct uwb_ie_drp *drp_ie)
static void uwb_drp_process(struct uwb_rc *rc, struct uwb_rc_evt_drp *drp_evt,
struct uwb_dev *src, struct uwb_ie_drp *drp_ie)
static void uwb_drp_availability_process(struct uwb_rc *rc, struct uwb_dev *src,
struct uwb_ie_drp_avail *drp_availability_ie)
static
void uwb_drp_process_all(struct uwb_rc *rc, struct uwb_rc_evt_drp *drp_evt,
size_t ielen, struct uwb_dev *src_dev)
int uwbd_evt_handle_rc_drp(struct uwb_event *evt)
