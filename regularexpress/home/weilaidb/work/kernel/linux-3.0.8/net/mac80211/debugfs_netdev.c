static ssize_t ieee80211_if_read(
struct ieee80211_sub_if_data *sdata,
char __user *userbuf,
size_t count, loff_t *ppos,
ssize_t (*format)(const struct ieee80211_sub_if_data *, char *, int))
static ssize_t ieee80211_if_write(
struct ieee80211_sub_if_data *sdata,
const char __user *userbuf,
size_t count, loff_t *ppos,
ssize_t (*write)(struct ieee80211_sub_if_data *, const char *, int))
#define IEEE80211_IF_FMT(name, field, format_string)			\
static ssize_t ieee80211_if_fmt_##name(					\
const struct ieee80211_sub_if_data *sdata, char *buf,		\
int buflen)							\
#define IEEE80211_IF_FMT_DEC(name, field)				\
IEEE80211_IF_FMT(name, field, "%d\n")
#define IEEE80211_IF_FMT_HEX(name, field)				\
IEEE80211_IF_FMT(name, field, "%#x\n")
#define IEEE80211_IF_FMT_LHEX(name, field)				\
IEEE80211_IF_FMT(name, field, "%#lx\n")
#define IEEE80211_IF_FMT_SIZE(name, field)				\
IEEE80211_IF_FMT(name, field, "%zd\n")
#define IEEE80211_IF_FMT_ATOMIC(name, field)				\
static ssize_t ieee80211_if_fmt_##name(					\
const struct ieee80211_sub_if_data *sdata,			\
char *buf, int buflen)						\
#define IEEE80211_IF_FMT_MAC(name, field)				\
static ssize_t ieee80211_if_fmt_##name(					\
const struct ieee80211_sub_if_data *sdata, char *buf,		\
int buflen)							\
#define IEEE80211_IF_FMT_DEC_DIV_16(name, field)			\
static ssize_t ieee80211_if_fmt_##name(					\
const struct ieee80211_sub_if_data *sdata,			\
char *buf, int buflen)						\
#define __IEEE80211_IF_FILE(name, _write)				\
static ssize_t ieee80211_if_read_##name(struct file *file,		\
char __user *userbuf,		\
size_t count, loff_t *ppos)	\
\
static const struct file_operations name##_ops =
#define __IEEE80211_IF_FILE_W(name)					\
static ssize_t ieee80211_if_write_##name(struct file *file,		\
const char __user *userbuf,	\
size_t count, loff_t *ppos)	\
\
__IEEE80211_IF_FILE(name, ieee80211_if_write_##name)
#define IEEE80211_IF_FILE(name, field, format)				\
IEEE80211_IF_FMT_##format(name, field)			\
__IEEE80211_IF_FILE(name, NULL)
IEEE80211_IF_FILE(drop_unencrypted, drop_unencrypted, DEC);
IEEE80211_IF_FILE(rc_rateidx_mask_2ghz, rc_rateidx_mask[IEEE80211_BAND_2GHZ],
HEX);
IEEE80211_IF_FILE(rc_rateidx_mask_5ghz, rc_rateidx_mask[IEEE80211_BAND_5GHZ],
HEX);
IEEE80211_IF_FILE(flags, flags, HEX);
IEEE80211_IF_FILE(state, state, LHEX);
IEEE80211_IF_FILE(channel_type, vif.bss_conf.channel_type, DEC);
IEEE80211_IF_FILE(bssid, u.mgd.bssid, MAC);
IEEE80211_IF_FILE(aid, u.mgd.aid, DEC);
IEEE80211_IF_FILE(last_beacon, u.mgd.last_beacon_signal, DEC);
IEEE80211_IF_FILE(ave_beacon, u.mgd.ave_beacon_signal, DEC_DIV_16);
static int ieee80211_set_smps(struct ieee80211_sub_if_data *sdata,
enum ieee80211_smps_mode smps_mode)
static const char *smps_modes[IEEE80211_SMPS_NUM_MODES] = ;
static ssize_t ieee80211_if_fmt_smps(const struct ieee80211_sub_if_data *sdata,
char *buf, int buflen)
static ssize_t ieee80211_if_parse_smps(struct ieee80211_sub_if_data *sdata,
const char *buf, int buflen)
__IEEE80211_IF_FILE_W(smps);
static ssize_t ieee80211_if_fmt_tkip_mic_test(
const struct ieee80211_sub_if_data *sdata, char *buf, int buflen)
static int hwaddr_aton(const char *txt, u8 *addr)
static ssize_t ieee80211_if_parse_tkip_mic_test(
struct ieee80211_sub_if_data *sdata, const char *buf, int buflen)
__IEEE80211_IF_FILE_W(tkip_mic_test);
IEEE80211_IF_FILE(num_sta_ps, u.ap.num_sta_ps, ATOMIC);
IEEE80211_IF_FILE(dtim_count, u.ap.dtim_count, DEC);
static ssize_t ieee80211_if_fmt_num_buffered_multicast(
const struct ieee80211_sub_if_data *sdata, char *buf, int buflen)
__IEEE80211_IF_FILE(num_buffered_multicast, NULL);
IEEE80211_IF_FILE(peer, u.wds.remote_addr, MAC);
IEEE80211_IF_FILE(fwded_mcast, u.mesh.mshstats.fwded_mcast, DEC);
IEEE80211_IF_FILE(fwded_unicast, u.mesh.mshstats.fwded_unicast, DEC);
IEEE80211_IF_FILE(fwded_frames, u.mesh.mshstats.fwded_frames, DEC);
IEEE80211_IF_FILE(dropped_frames_ttl, u.mesh.mshstats.dropped_frames_ttl, DEC);
IEEE80211_IF_FILE(dropped_frames_no_route,
u.mesh.mshstats.dropped_frames_no_route, DEC);
IEEE80211_IF_FILE(estab_plinks, u.mesh.mshstats.estab_plinks, ATOMIC);
IEEE80211_IF_FILE(dot11MeshMaxRetries,
u.mesh.mshcfg.dot11MeshMaxRetries, DEC);
IEEE80211_IF_FILE(dot11MeshRetryTimeout,
u.mesh.mshcfg.dot11MeshRetryTimeout, DEC);
IEEE80211_IF_FILE(dot11MeshConfirmTimeout,
u.mesh.mshcfg.dot11MeshConfirmTimeout, DEC);
IEEE80211_IF_FILE(dot11MeshHoldingTimeout,
u.mesh.mshcfg.dot11MeshHoldingTimeout, DEC);
IEEE80211_IF_FILE(dot11MeshTTL, u.mesh.mshcfg.dot11MeshTTL, DEC);
IEEE80211_IF_FILE(element_ttl, u.mesh.mshcfg.element_ttl, DEC);
IEEE80211_IF_FILE(auto_open_plinks, u.mesh.mshcfg.auto_open_plinks, DEC);
IEEE80211_IF_FILE(dot11MeshMaxPeerLinks,
u.mesh.mshcfg.dot11MeshMaxPeerLinks, DEC);
IEEE80211_IF_FILE(dot11MeshHWMPactivePathTimeout,
u.mesh.mshcfg.dot11MeshHWMPactivePathTimeout, DEC);
IEEE80211_IF_FILE(dot11MeshHWMPpreqMinInterval,
u.mesh.mshcfg.dot11MeshHWMPpreqMinInterval, DEC);
IEEE80211_IF_FILE(dot11MeshHWMPnetDiameterTraversalTime,
u.mesh.mshcfg.dot11MeshHWMPnetDiameterTraversalTime, DEC);
IEEE80211_IF_FILE(dot11MeshHWMPmaxPREQretries,
u.mesh.mshcfg.dot11MeshHWMPmaxPREQretries, DEC);
IEEE80211_IF_FILE(path_refresh_time,
u.mesh.mshcfg.path_refresh_time, DEC);
IEEE80211_IF_FILE(min_discovery_timeout,
u.mesh.mshcfg.min_discovery_timeout, DEC);
IEEE80211_IF_FILE(dot11MeshHWMPRootMode,
u.mesh.mshcfg.dot11MeshHWMPRootMode, DEC);
#define DEBUGFS_ADD(name) \
debugfs_create_file(#name, 0400, sdata->debugfs.dir, \
sdata, &name##_ops);
#define DEBUGFS_ADD_MODE(name, mode) \
debugfs_create_file(#name, mode, sdata->debugfs.dir, \
sdata, &name##_ops);
static void add_sta_files(struct ieee80211_sub_if_data *sdata)
static void add_ap_files(struct ieee80211_sub_if_data *sdata)
static void add_wds_files(struct ieee80211_sub_if_data *sdata)
static void add_vlan_files(struct ieee80211_sub_if_data *sdata)
static void add_monitor_files(struct ieee80211_sub_if_data *sdata)
static void add_mesh_stats(struct ieee80211_sub_if_data *sdata)
static void add_mesh_config(struct ieee80211_sub_if_data *sdata)
static void add_files(struct ieee80211_sub_if_data *sdata)
void ieee80211_debugfs_add_netdev(struct ieee80211_sub_if_data *sdata)
void ieee80211_debugfs_remove_netdev(struct ieee80211_sub_if_data *sdata)
void ieee80211_debugfs_rename_netdev(struct ieee80211_sub_if_data *sdata)
