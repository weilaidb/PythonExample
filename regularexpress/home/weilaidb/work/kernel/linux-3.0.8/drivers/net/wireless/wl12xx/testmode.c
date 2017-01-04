#define WL1271_TM_MAX_DATA_LENGTH 1024
enum wl1271_tm_commands ;
#define WL1271_TM_CMD_MAX (__WL1271_TM_CMD_AFTER_LAST - 1)
enum wl1271_tm_attrs ;
#define WL1271_TM_ATTR_MAX (__WL1271_TM_ATTR_AFTER_LAST - 1)
static struct nla_policy wl1271_tm_policy[WL1271_TM_ATTR_MAX + 1] = ;
static int wl1271_tm_cmd_test(struct wl1271 *wl, struct nlattr *tb[])
static int wl1271_tm_cmd_interrogate(struct wl1271 *wl, struct nlattr *tb[])
static int wl1271_tm_cmd_configure(struct wl1271 *wl, struct nlattr *tb[])
static int wl1271_tm_cmd_nvs_push(struct wl1271 *wl, struct nlattr *tb[])
static int wl1271_tm_cmd_set_plt_mode(struct wl1271 *wl, struct nlattr *tb[])
static int wl1271_tm_cmd_recover(struct wl1271 *wl, struct nlattr *tb[])
int wl1271_tm_cmd(struct ieee80211_hw *hw, void *data, int len)
