MODULE_AUTHOR("Mike Christie <michaelc@cs.wisc.edu>");
MODULE_DESCRIPTION("sysfs interface and helpers to export iSCSI boot information");
MODULE_LICENSE("GPL");
struct iscsi_boot_attr ;
static ssize_t iscsi_boot_show_attribute(struct kobject *kobj,
struct attribute *attr, char *buf)
static const struct sysfs_ops iscsi_boot_attr_ops = ;
static void iscsi_boot_kobj_release(struct kobject *kobj)
static struct kobj_type iscsi_boot_ktype = ;
#define iscsi_boot_rd_attr(fnname, sysfs_name, attr_type)		\
static struct iscsi_boot_attr iscsi_boot_attr_##fnname =
iscsi_boot_rd_attr(tgt_index, index, ISCSI_BOOT_TGT_INDEX);
iscsi_boot_rd_attr(tgt_flags, flags, ISCSI_BOOT_TGT_FLAGS);
iscsi_boot_rd_attr(tgt_ip, ip-addr, ISCSI_BOOT_TGT_IP_ADDR);
iscsi_boot_rd_attr(tgt_port, port, ISCSI_BOOT_TGT_PORT);
iscsi_boot_rd_attr(tgt_lun, lun, ISCSI_BOOT_TGT_LUN);
iscsi_boot_rd_attr(tgt_chap, chap-type, ISCSI_BOOT_TGT_CHAP_TYPE);
iscsi_boot_rd_attr(tgt_nic, nic-assoc, ISCSI_BOOT_TGT_NIC_ASSOC);
iscsi_boot_rd_attr(tgt_name, target-name, ISCSI_BOOT_TGT_NAME);
iscsi_boot_rd_attr(tgt_chap_name, chap-name, ISCSI_BOOT_TGT_CHAP_NAME);
iscsi_boot_rd_attr(tgt_chap_secret, chap-secret, ISCSI_BOOT_TGT_CHAP_SECRET);
iscsi_boot_rd_attr(tgt_chap_rev_name, rev-chap-name,
ISCSI_BOOT_TGT_REV_CHAP_NAME);
iscsi_boot_rd_attr(tgt_chap_rev_secret, rev-chap-name-secret,
ISCSI_BOOT_TGT_REV_CHAP_SECRET);
static struct attribute *target_attrs[] = ;
static mode_t iscsi_boot_tgt_attr_is_visible(struct kobject *kobj,
struct attribute *attr, int i)
static struct attribute_group iscsi_boot_target_attr_group = ;
iscsi_boot_rd_attr(eth_index, index, ISCSI_BOOT_ETH_INDEX);
iscsi_boot_rd_attr(eth_flags, flags, ISCSI_BOOT_ETH_FLAGS);
iscsi_boot_rd_attr(eth_ip, ip-addr, ISCSI_BOOT_ETH_IP_ADDR);
iscsi_boot_rd_attr(eth_subnet, subnet-mask, ISCSI_BOOT_ETH_SUBNET_MASK);
iscsi_boot_rd_attr(eth_origin, origin, ISCSI_BOOT_ETH_ORIGIN);
iscsi_boot_rd_attr(eth_gateway, gateway, ISCSI_BOOT_ETH_GATEWAY);
iscsi_boot_rd_attr(eth_primary_dns, primary-dns, ISCSI_BOOT_ETH_PRIMARY_DNS);
iscsi_boot_rd_attr(eth_secondary_dns, secondary-dns,
ISCSI_BOOT_ETH_SECONDARY_DNS);
iscsi_boot_rd_attr(eth_dhcp, dhcp, ISCSI_BOOT_ETH_DHCP);
iscsi_boot_rd_attr(eth_vlan, vlan, ISCSI_BOOT_ETH_VLAN);
iscsi_boot_rd_attr(eth_mac, mac, ISCSI_BOOT_ETH_MAC);
iscsi_boot_rd_attr(eth_hostname, hostname, ISCSI_BOOT_ETH_HOSTNAME);
static struct attribute *ethernet_attrs[] = ;
static mode_t iscsi_boot_eth_attr_is_visible(struct kobject *kobj,
struct attribute *attr, int i)
static struct attribute_group iscsi_boot_ethernet_attr_group = ;
iscsi_boot_rd_attr(ini_index, index, ISCSI_BOOT_INI_INDEX);
iscsi_boot_rd_attr(ini_flags, flags, ISCSI_BOOT_INI_FLAGS);
iscsi_boot_rd_attr(ini_isns, isns-server, ISCSI_BOOT_INI_ISNS_SERVER);
iscsi_boot_rd_attr(ini_slp, slp-server, ISCSI_BOOT_INI_SLP_SERVER);
iscsi_boot_rd_attr(ini_primary_radius, pri-radius-server,
ISCSI_BOOT_INI_PRI_RADIUS_SERVER);
iscsi_boot_rd_attr(ini_secondary_radius, sec-radius-server,
ISCSI_BOOT_INI_SEC_RADIUS_SERVER);
iscsi_boot_rd_attr(ini_name, initiator-name, ISCSI_BOOT_INI_INITIATOR_NAME);
static struct attribute *initiator_attrs[] = ;
static mode_t iscsi_boot_ini_attr_is_visible(struct kobject *kobj,
struct attribute *attr, int i)
static struct attribute_group iscsi_boot_initiator_attr_group = ;
static struct iscsi_boot_kobj *
iscsi_boot_create_kobj(struct iscsi_boot_kset *boot_kset,
struct attribute_group *attr_group,
const char *name, int index, void *data,
ssize_t (*show) (void *data, int type, char *buf),
mode_t (*is_visible) (void *data, int type))
static void iscsi_boot_remove_kobj(struct iscsi_boot_kobj *boot_kobj)
struct iscsi_boot_kobj *
iscsi_boot_create_target(struct iscsi_boot_kset *boot_kset, int index,
void *data,
ssize_t (*show) (void *data, int type, char *buf),
mode_t (*is_visible) (void *data, int type))
EXPORT_SYMBOL_GPL(iscsi_boot_create_target);
struct iscsi_boot_kobj *
iscsi_boot_create_initiator(struct iscsi_boot_kset *boot_kset, int index,
void *data,
ssize_t (*show) (void *data, int type, char *buf),
mode_t (*is_visible) (void *data, int type))
EXPORT_SYMBOL_GPL(iscsi_boot_create_initiator);
struct iscsi_boot_kobj *
iscsi_boot_create_ethernet(struct iscsi_boot_kset *boot_kset, int index,
void *data,
ssize_t (*show) (void *data, int type, char *buf),
mode_t (*is_visible) (void *data, int type))
EXPORT_SYMBOL_GPL(iscsi_boot_create_ethernet);
struct iscsi_boot_kset *iscsi_boot_create_kset(const char *set_name)
EXPORT_SYMBOL_GPL(iscsi_boot_create_kset);
struct iscsi_boot_kset *iscsi_boot_create_host_kset(unsigned int hostno)
EXPORT_SYMBOL_GPL(iscsi_boot_create_host_kset);
void iscsi_boot_destroy_kset(struct iscsi_boot_kset *boot_kset)
EXPORT_SYMBOL_GPL(iscsi_boot_destroy_kset);
