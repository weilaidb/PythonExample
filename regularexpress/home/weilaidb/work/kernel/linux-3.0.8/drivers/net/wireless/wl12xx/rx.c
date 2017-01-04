static u8 wl1271_rx_get_mem_block(struct wl1271_fw_common_status *status,
u32 drv_rx_counter)
static u32 wl1271_rx_get_buf_size(struct wl1271_fw_common_status *status,
u32 drv_rx_counter)
static void wl1271_rx_status(struct wl1271 *wl,
struct wl1271_rx_descriptor *desc,
struct ieee80211_rx_status *status,
u8 beacon)
static int wl1271_rx_handle_data(struct wl1271 *wl, u8 *data, u32 length)
void wl1271_rx(struct wl1271 *wl, struct wl1271_fw_common_status *status)
void wl1271_set_default_filters(struct wl1271 *wl)
