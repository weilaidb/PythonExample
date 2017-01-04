static int whc_update_di(struct whc *whc, int idx)
int whc_wusbhc_start(struct wusbhc *wusbhc)
void whc_wusbhc_stop(struct wusbhc *wusbhc, int delay)
int whc_mmcie_add(struct wusbhc *wusbhc, u8 interval, u8 repeat_cnt,
u8 handle, struct wuie_hdr *wuie)
int whc_mmcie_rm(struct wusbhc *wusbhc, u8 handle)
int whc_bwa_set(struct wusbhc *wusbhc, s8 stream_index, const struct uwb_mas_bm *mas_bm)
int whc_dev_info_set(struct wusbhc *wusbhc, struct wusb_dev *wusb_dev)
int whc_set_num_dnts(struct wusbhc *wusbhc, u8 interval, u8 slots)
static int whc_set_key(struct whc *whc, u8 key_index, uint32_t tkid,
const void *key, size_t key_size, bool is_gtk)
int whc_set_ptk(struct wusbhc *wusbhc, u8 port_idx, u32 tkid,
const void *ptk, size_t key_size)
int whc_set_gtk(struct wusbhc *wusbhc, u32 tkid,
const void *gtk, size_t key_size)
int whc_set_cluster_id(struct whc *whc, u8 bcid)
