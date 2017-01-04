void uwb_drp_avail_init(struct uwb_rc *rc)
void uwb_drp_available(struct uwb_rc *rc, struct uwb_mas_bm *avail)
int uwb_drp_avail_reserve_pending(struct uwb_rc *rc, struct uwb_mas_bm *mas)
void uwb_drp_avail_reserve(struct uwb_rc *rc, struct uwb_mas_bm *mas)
void uwb_drp_avail_release(struct uwb_rc *rc, struct uwb_mas_bm *mas)
void uwb_drp_avail_ie_update(struct uwb_rc *rc)
static
unsigned long get_val(u8 *array, size_t itr, size_t len)
static
void buffer_to_bmp(unsigned long *bmp_itr, void *_buffer,
size_t buffer_size)
static
int uwbd_evt_get_drp_avail(struct uwb_event *evt, unsigned long *bmp)
int uwbd_evt_handle_rc_drp_avail(struct uwb_event *evt)
