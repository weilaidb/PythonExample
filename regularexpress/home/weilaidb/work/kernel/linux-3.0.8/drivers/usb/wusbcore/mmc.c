int wusbhc_mmcie_create(struct wusbhc *wusbhc)
void wusbhc_mmcie_destroy(struct wusbhc *wusbhc)
int wusbhc_mmcie_set(struct wusbhc *wusbhc, u8 interval, u8 repeat_cnt,
struct wuie_hdr *wuie)
EXPORT_SYMBOL_GPL(wusbhc_mmcie_set);
void wusbhc_mmcie_rm(struct wusbhc *wusbhc, struct wuie_hdr *wuie)
EXPORT_SYMBOL_GPL(wusbhc_mmcie_rm);
static int wusbhc_mmc_start(struct wusbhc *wusbhc)
static void wusbhc_mmc_stop(struct wusbhc *wusbhc)
int wusbhc_start(struct wusbhc *wusbhc)
void wusbhc_stop(struct wusbhc *wusbhc)
int wusbhc_chid_set(struct wusbhc *wusbhc, const struct wusb_ckhdid *chid)
EXPORT_SYMBOL_GPL(wusbhc_chid_set);
