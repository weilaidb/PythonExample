#define KEY_READ(name, prop, format_string)				\
static ssize_t key_##name##_read(struct file *file,			\
char __user *userbuf,			\
size_t count, loff_t *ppos)		\
#define KEY_READ_D(name) KEY_READ(name, name, "%d\n")
#define KEY_READ_X(name) KEY_READ(name, name, "0x%x\n")
#define KEY_OPS(name)							\
static const struct file_operations key_ ##name## _ops =
#define KEY_FILE(name, format)						\
KEY_READ_##format(name)				\
KEY_OPS(name)
#define KEY_CONF_READ(name, format_string)				\
KEY_READ(conf_##name, conf.name, format_string)
#define KEY_CONF_READ_D(name) KEY_CONF_READ(name, "%d\n")
#define KEY_CONF_OPS(name)						\
static const struct file_operations key_ ##name## _ops =
#define KEY_CONF_FILE(name, format)					\
KEY_CONF_READ_##format(name)				\
KEY_CONF_OPS(name)
KEY_CONF_FILE(keylen, D);
KEY_CONF_FILE(keyidx, D);
KEY_CONF_FILE(hw_key_idx, D);
KEY_FILE(flags, X);
KEY_FILE(tx_rx_count, D);
KEY_READ(ifindex, sdata->name, "%s\n");
KEY_OPS(ifindex);
static ssize_t key_algorithm_read(struct file *file,
char __user *userbuf,
size_t count, loff_t *ppos)
KEY_OPS(algorithm);
static ssize_t key_tx_spec_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
KEY_OPS(tx_spec);
static ssize_t key_rx_spec_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
KEY_OPS(rx_spec);
static ssize_t key_replays_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
KEY_OPS(replays);
static ssize_t key_icverrors_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
KEY_OPS(icverrors);
static ssize_t key_key_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
KEY_OPS(key);
#define DEBUGFS_ADD(name) \
debugfs_create_file(#name, 0400, key->debugfs.dir, \
key, &key_##name##_ops);
void ieee80211_debugfs_key_add(struct ieee80211_key *key)
;
void ieee80211_debugfs_key_remove(struct ieee80211_key *key)
void ieee80211_debugfs_key_update_default(struct ieee80211_sub_if_data *sdata)
void ieee80211_debugfs_key_add_mgmt_default(struct ieee80211_sub_if_data *sdata)
void ieee80211_debugfs_key_remove_mgmt_default(struct ieee80211_sub_if_data *sdata)
void ieee80211_debugfs_key_sta_del(struct ieee80211_key *key,
struct sta_info *sta)
