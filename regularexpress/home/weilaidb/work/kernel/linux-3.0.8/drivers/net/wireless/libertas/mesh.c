#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static ssize_t lbs_anycast_get(struct device *dev,
struct device_attribute *attr, char * buf)
static ssize_t lbs_anycast_set(struct device *dev,
struct device_attribute *attr, const char * buf, size_t count)
static ssize_t lbs_prb_rsp_limit_get(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lbs_prb_rsp_limit_set(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t lbs_mesh_get(struct device *dev,
struct device_attribute *attr, char * buf)
static ssize_t lbs_mesh_set(struct device *dev,
struct device_attribute *attr, const char * buf, size_t count)
static DEVICE_ATTR(lbs_mesh, 0644, lbs_mesh_get, lbs_mesh_set);
static DEVICE_ATTR(anycast_mask, 0644, lbs_anycast_get, lbs_anycast_set);
static DEVICE_ATTR(prb_rsp_limit, 0644, lbs_prb_rsp_limit_get,
lbs_prb_rsp_limit_set);
static struct attribute *lbs_mesh_sysfs_entries[] = ;
static struct attribute_group lbs_mesh_attr_group = ;
int lbs_init_mesh(struct lbs_private *priv)
int lbs_deinit_mesh(struct lbs_private *priv)
static int lbs_mesh_stop(struct net_device *dev)
static int lbs_mesh_dev_open(struct net_device *dev)
static const struct net_device_ops mesh_netdev_ops = ;
int lbs_add_mesh(struct lbs_private *priv)
void lbs_remove_mesh(struct lbs_private *priv)
struct net_device *lbs_mesh_set_dev(struct lbs_private *priv,
struct net_device *dev, struct rxpd *rxpd)
void lbs_mesh_set_txpd(struct lbs_private *priv,
struct net_device *dev, struct txpd *txpd)
int lbs_mesh_bt_add_del(struct lbs_private *priv, bool add, u8 *addr1)
int lbs_mesh_bt_reset(struct lbs_private *priv)
int lbs_mesh_bt_get_inverted(struct lbs_private *priv, bool *inverted)
int lbs_mesh_bt_set_inverted(struct lbs_private *priv, bool inverted)
int lbs_mesh_bt_get_entry(struct lbs_private *priv, u32 id, u8 *addr1)
int lbs_cmd_fwt_access(struct lbs_private *priv, u16 cmd_action,
struct cmd_ds_fwt_access *cmd)
int lbs_mesh_access(struct lbs_private *priv, uint16_t cmd_action,
struct cmd_ds_mesh_access *cmd)
static int __lbs_mesh_config_send(struct lbs_private *priv,
struct cmd_ds_mesh_config *cmd,
uint16_t action, uint16_t type)
int lbs_mesh_config_send(struct lbs_private *priv,
struct cmd_ds_mesh_config *cmd,
uint16_t action, uint16_t type)
int lbs_mesh_config(struct lbs_private *priv, uint16_t action, uint16_t chan)
static int mesh_get_default_parameters(struct device *dev,
struct mrvl_mesh_defaults *defs)
static ssize_t bootflag_get(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bootflag_set(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t boottime_get(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t boottime_set(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t channel_get(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t channel_set(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t mesh_id_get(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t mesh_id_set(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t protocol_id_get(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t protocol_id_set(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t metric_id_get(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t metric_id_set(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t capability_get(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t capability_set(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(bootflag, 0644, bootflag_get, bootflag_set);
static DEVICE_ATTR(boottime, 0644, boottime_get, boottime_set);
static DEVICE_ATTR(channel, 0644, channel_get, channel_set);
static DEVICE_ATTR(mesh_id, 0644, mesh_id_get, mesh_id_set);
static DEVICE_ATTR(protocol_id, 0644, protocol_id_get, protocol_id_set);
static DEVICE_ATTR(metric_id, 0644, metric_id_get, metric_id_set);
static DEVICE_ATTR(capability, 0644, capability_get, capability_set);
static struct attribute *boot_opts_attrs[] = ;
static struct attribute_group boot_opts_group = ;
static struct attribute *mesh_ie_attrs[] = ;
static struct attribute_group mesh_ie_group = ;
void lbs_persist_config_init(struct net_device *dev)
void lbs_persist_config_remove(struct net_device *dev)
static const char *mesh_stat_strings[] = ;
void lbs_mesh_ethtool_get_stats(struct net_device *dev,
struct ethtool_stats *stats, uint64_t *data)
int lbs_mesh_ethtool_get_sset_count(struct net_device *dev, int sset)
void lbs_mesh_ethtool_get_strings(struct net_device *dev,
uint32_t stringset, uint8_t *s)
