static int wusbhc_bwa_set(struct wusbhc *wusbhc, u8 stream,
const struct uwb_mas_bm *mas)
static void wusbhc_rsv_complete_cb(struct uwb_rsv *rsv)
int wusbhc_rsv_establish(struct wusbhc *wusbhc)
void wusbhc_rsv_terminate(struct wusbhc *wusbhc)
