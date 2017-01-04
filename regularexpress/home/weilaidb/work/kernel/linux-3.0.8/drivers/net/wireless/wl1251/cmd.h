#define __WL1251_CMD_H__
struct acx_header;
int wl1251_cmd_send(struct wl1251 *wl, u16 type, void *buf, size_t buf_len);
int wl1251_cmd_test(struct wl1251 *wl, void *buf, size_t buf_len, u8 answer);
int wl1251_cmd_interrogate(struct wl1251 *wl, u16 id, void *buf, size_t len);
int wl1251_cmd_configure(struct wl1251 *wl, u16 id, void *buf, size_t len);
int wl1251_cmd_vbm(struct wl1251 *wl, u8 identity,
void *bitmap, u16 bitmap_len, u8 bitmap_control);
int wl1251_cmd_data_path(struct wl1251 *wl, u8 channel, bool enable);
int wl1251_cmd_join(struct wl1251 *wl, u8 bss_type, u8 channel,
u16 beacon_interval, u8 dtim_interval);
int wl1251_cmd_ps_mode(struct wl1251 *wl, u8 ps_mode);
int wl1251_cmd_read_memory(struct wl1251 *wl, u32 addr, void *answer,
size_t len);
int wl1251_cmd_template_set(struct wl1251 *wl, u16 cmd_id,
void *buf, size_t buf_len);
int wl1251_cmd_scan(struct wl1251 *wl, u8 *ssid, size_t ssid_len,
struct ieee80211_channel *channels[],
unsigned int n_channels, unsigned int n_probes);
int wl1251_cmd_trigger_scan_to(struct wl1251 *wl, u32 timeout);
#define WL1251_COMMAND_TIMEOUT 2000
enum wl1251_commands ;
#define MAX_CMD_PARAMS 572
struct wl1251_cmd_header  __packed;
struct  wl1251_command  __packed;
enum ;
#define MAX_READ_SIZE 256
struct cmd_read_write_memory  __packed;
#define CMDMBOX_HEADER_LEN 4
#define CMDMBOX_INFO_ELEM_HEADER_LEN 4
#define WL1251_SCAN_MIN_DURATION 30000
#define WL1251_SCAN_MAX_DURATION 60000
#define WL1251_SCAN_NUM_PROBES 3
struct wl1251_scan_parameters  __packed;
struct wl1251_scan_ch_parameters  __packed;
#define SCAN_MAX_NUM_OF_CHANNELS 16
struct wl1251_cmd_scan  __packed;
enum ;
#define JOIN_CMD_CTRL_TX_FLUSH             0x80
#define JOIN_CMD_CTRL_EARLY_WAKEUP_ENABLE  0x01
struct cmd_join  __packed;
struct cmd_enabledisable_path  __packed;
#define WL1251_MAX_TEMPLATE_SIZE 300
struct wl1251_cmd_packet_template  __packed;
#define TIM_ELE_ID    5
#define PARTIAL_VBM_MAX    251
struct wl1251_tim  __packed;
struct wl1251_cmd_vbm_update  __packed;
enum wl1251_cmd_ps_mode ;
struct wl1251_cmd_ps_params  __packed;
struct wl1251_cmd_trigger_scan_to  __packed;
#define NUM_ACCESS_CATEGORIES_COPY 4
#define MAX_KEY_SIZE 32
#define DF_ENCRYPTION_DISABLE      0x01
#define DF_SNIFF_MODE_ENABLE       0x80
enum wl1251_cmd_key_action ;
enum wl1251_cmd_key_type ;
struct wl1251_cmd_set_keys  __packed;
