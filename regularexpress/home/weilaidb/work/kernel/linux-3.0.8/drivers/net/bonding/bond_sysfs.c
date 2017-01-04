#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define to_dev(obj)	container_of(obj, struct device, kobj)
#define to_bond(cd)	((struct bonding *)(netdev_priv(to_net_dev(cd))))
static ssize_t bonding_show_bonds(struct class *cls,
struct class_attribute *attr,
char *buf)
static struct net_device *bond_get_by_name(struct net *net, const char *ifname)
static ssize_t bonding_store_bonds(struct class *cls,
struct class_attribute *attr,
const char *buffer, size_t count)
static CLASS_ATTR(bonding_masters,  S_IWUSR | S_IRUGO,
bonding_show_bonds, bonding_store_bonds);
int bond_create_slave_symlinks(struct net_device *master,
struct net_device *slave)
void bond_destroy_slave_symlinks(struct net_device *master,
struct net_device *slave)
static ssize_t bonding_show_slaves(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t bonding_store_slaves(struct device *d,
struct device_attribute *attr,
const char *buffer, size_t count)
static DEVICE_ATTR(slaves, S_IRUGO | S_IWUSR, bonding_show_slaves,
bonding_store_slaves);
static ssize_t bonding_show_mode(struct device *d,
struct device_attribute *attr, char *buf)
static ssize_t bonding_store_mode(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(mode, S_IRUGO | S_IWUSR,
bonding_show_mode, bonding_store_mode);
static ssize_t bonding_show_xmit_hash(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_xmit_hash(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(xmit_hash_policy, S_IRUGO | S_IWUSR,
bonding_show_xmit_hash, bonding_store_xmit_hash);
static ssize_t bonding_show_arp_validate(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_arp_validate(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(arp_validate, S_IRUGO | S_IWUSR, bonding_show_arp_validate,
bonding_store_arp_validate);
static ssize_t bonding_show_fail_over_mac(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_fail_over_mac(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(fail_over_mac, S_IRUGO | S_IWUSR,
bonding_show_fail_over_mac, bonding_store_fail_over_mac);
static ssize_t bonding_show_arp_interval(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_arp_interval(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(arp_interval, S_IRUGO | S_IWUSR,
bonding_show_arp_interval, bonding_store_arp_interval);
static ssize_t bonding_show_arp_targets(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_arp_targets(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(arp_ip_target, S_IRUGO | S_IWUSR , bonding_show_arp_targets, bonding_store_arp_targets);
static ssize_t bonding_show_downdelay(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_downdelay(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(downdelay, S_IRUGO | S_IWUSR,
bonding_show_downdelay, bonding_store_downdelay);
static ssize_t bonding_show_updelay(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_updelay(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(updelay, S_IRUGO | S_IWUSR,
bonding_show_updelay, bonding_store_updelay);
static ssize_t bonding_show_lacp(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_lacp(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(lacp_rate, S_IRUGO | S_IWUSR,
bonding_show_lacp, bonding_store_lacp);
static ssize_t bonding_show_ad_select(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_ad_select(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(ad_select, S_IRUGO | S_IWUSR,
bonding_show_ad_select, bonding_store_ad_select);
static ssize_t bonding_show_num_peer_notif(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_num_peer_notif(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(num_grat_arp, S_IRUGO | S_IWUSR,
bonding_show_num_peer_notif, bonding_store_num_peer_notif);
static DEVICE_ATTR(num_unsol_na, S_IRUGO | S_IWUSR,
bonding_show_num_peer_notif, bonding_store_num_peer_notif);
static ssize_t bonding_show_miimon(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_miimon(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(miimon, S_IRUGO | S_IWUSR,
bonding_show_miimon, bonding_store_miimon);
static ssize_t bonding_show_primary(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_primary(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(primary, S_IRUGO | S_IWUSR,
bonding_show_primary, bonding_store_primary);
static ssize_t bonding_show_primary_reselect(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_primary_reselect(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(primary_reselect, S_IRUGO | S_IWUSR,
bonding_show_primary_reselect,
bonding_store_primary_reselect);
static ssize_t bonding_show_carrier(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_carrier(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(use_carrier, S_IRUGO | S_IWUSR,
bonding_show_carrier, bonding_store_carrier);
static ssize_t bonding_show_active_slave(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_active_slave(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(active_slave, S_IRUGO | S_IWUSR,
bonding_show_active_slave, bonding_store_active_slave);
static ssize_t bonding_show_mii_status(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(mii_status, S_IRUGO, bonding_show_mii_status, NULL);
static ssize_t bonding_show_ad_aggregator(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ad_aggregator, S_IRUGO, bonding_show_ad_aggregator, NULL);
static ssize_t bonding_show_ad_num_ports(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ad_num_ports, S_IRUGO, bonding_show_ad_num_ports, NULL);
static ssize_t bonding_show_ad_actor_key(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ad_actor_key, S_IRUGO, bonding_show_ad_actor_key, NULL);
static ssize_t bonding_show_ad_partner_key(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ad_partner_key, S_IRUGO, bonding_show_ad_partner_key, NULL);
static ssize_t bonding_show_ad_partner_mac(struct device *d,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ad_partner_mac, S_IRUGO, bonding_show_ad_partner_mac, NULL);
static ssize_t bonding_show_queue_id(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_queue_id(struct device *d,
struct device_attribute *attr,
const char *buffer, size_t count)
static DEVICE_ATTR(queue_id, S_IRUGO | S_IWUSR, bonding_show_queue_id,
bonding_store_queue_id);
static ssize_t bonding_show_slaves_active(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_slaves_active(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(all_slaves_active, S_IRUGO | S_IWUSR,
bonding_show_slaves_active, bonding_store_slaves_active);
static ssize_t bonding_show_resend_igmp(struct device *d,
struct device_attribute *attr,
char *buf)
static ssize_t bonding_store_resend_igmp(struct device *d,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(resend_igmp, S_IRUGO | S_IWUSR,
bonding_show_resend_igmp, bonding_store_resend_igmp);
static struct attribute *per_bond_attrs[] = ;
static struct attribute_group bonding_group = ;
int bond_create_sysfs(void)
void bond_destroy_sysfs(void)
void bond_prepare_sysfs_group(struct bonding *bond)
