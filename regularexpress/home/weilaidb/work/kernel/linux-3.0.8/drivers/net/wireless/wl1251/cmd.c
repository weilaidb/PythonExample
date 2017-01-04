int wl1251_cmd_send(struct wl1251 *wl, u16 id, void *buf, size_t len)
int wl1251_cmd_test(struct wl1251 *wl, void *buf, size_t buf_len, u8 answer)
int wl1251_cmd_interrogate(struct wl1251 *wl, u16 id, void *buf, size_t len)
int wl1251_cmd_configure(struct wl1251 *wl, u16 id, void *buf, size_t len)
int wl1251_cmd_vbm(struct wl1251 *wl, u8 identity,
void *bitmap, u16 bitmap_len, u8 bitmap_control)
int wl1251_cmd_data_path(struct wl1251 *wl, u8 channel, bool enable)
int wl1251_cmd_join(struct wl1251 *wl, u8 bss_type, u8 channel,
u16 beacon_interval, u8 dtim_interval)
int wl1251_cmd_ps_mode(struct wl1251 *wl, u8 ps_mode)
int wl1251_cmd_read_memory(struct wl1251 *wl, u32 addr, void *answer,
size_t len)
int wl1251_cmd_template_set(struct wl1251 *wl, u16 cmd_id,
void *buf, size_t buf_len)
int wl1251_cmd_scan(struct wl1251 *wl, u8 *ssid, size_t ssid_len,
struct ieee80211_channel *channels[],
unsigned int n_channels, unsigned int n_probes)
int wl1251_cmd_trigger_scan_to(struct wl1251 *wl, u32 timeout)
