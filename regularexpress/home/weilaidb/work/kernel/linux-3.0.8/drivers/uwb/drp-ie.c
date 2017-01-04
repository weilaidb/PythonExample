int uwb_rsv_reason_code(struct uwb_rsv *rsv)
int uwb_rsv_companion_reason_code(struct uwb_rsv *rsv)
int uwb_rsv_status(struct uwb_rsv *rsv)
int uwb_rsv_companion_status(struct uwb_rsv *rsv)
static struct uwb_ie_drp *uwb_drp_ie_alloc(void)
static void uwb_drp_ie_from_bm(struct uwb_ie_drp *drp_ie,
struct uwb_mas_bm *mas)
int uwb_drp_ie_update(struct uwb_rsv *rsv)
static
void uwb_drp_ie_single_zone_to_bm(struct uwb_mas_bm *bm, u8 zone, u16 mas_bm)
void uwb_drp_ie_to_bm(struct uwb_mas_bm *bm, const struct uwb_ie_drp *drp_ie)
