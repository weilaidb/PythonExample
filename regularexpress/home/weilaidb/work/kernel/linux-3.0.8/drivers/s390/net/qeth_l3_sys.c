#define QETH_DEVICE_ATTR(_id, _name, _mode, _show, _store) \
struct device_attribute dev_attr_##_id = __ATTR(_name, _mode, _show, _store)
static ssize_t qeth_l3_dev_route_show(struct qeth_card *card,
struct qeth_routing_info *route, char *buf)
static ssize_t qeth_l3_dev_route4_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_route_store(struct qeth_card *card,
struct qeth_routing_info *route, enum qeth_prot_versions prot,
const char *buf, size_t count)
static ssize_t qeth_l3_dev_route4_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(route4, 0644, qeth_l3_dev_route4_show,
qeth_l3_dev_route4_store);
static ssize_t qeth_l3_dev_route6_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_route6_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(route6, 0644, qeth_l3_dev_route6_show,
qeth_l3_dev_route6_store);
static ssize_t qeth_l3_dev_fake_broadcast_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_fake_broadcast_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(fake_broadcast, 0644, qeth_l3_dev_fake_broadcast_show,
qeth_l3_dev_fake_broadcast_store);
static ssize_t qeth_l3_dev_broadcast_mode_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_broadcast_mode_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(broadcast_mode, 0644, qeth_l3_dev_broadcast_mode_show,
qeth_l3_dev_broadcast_mode_store);
static ssize_t qeth_l3_dev_canonical_macaddr_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_canonical_macaddr_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(canonical_macaddr, 0644, qeth_l3_dev_canonical_macaddr_show,
qeth_l3_dev_canonical_macaddr_store);
static ssize_t qeth_l3_dev_sniffer_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_sniffer_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(sniffer, 0644, qeth_l3_dev_sniffer_show,
qeth_l3_dev_sniffer_store);
static struct attribute *qeth_l3_device_attrs[] = ;
static struct attribute_group qeth_l3_device_attr_group = ;
static ssize_t qeth_l3_dev_ipato_enable_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_ipato_enable_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(ipato_enable, enable, 0644,
qeth_l3_dev_ipato_enable_show,
qeth_l3_dev_ipato_enable_store);
static ssize_t qeth_l3_dev_ipato_invert4_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_ipato_invert4_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static QETH_DEVICE_ATTR(ipato_invert4, invert4, 0644,
qeth_l3_dev_ipato_invert4_show,
qeth_l3_dev_ipato_invert4_store);
static ssize_t qeth_l3_dev_ipato_add_show(char *buf, struct qeth_card *card,
enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_ipato_add4_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int qeth_l3_parse_ipatoe(const char *buf, enum qeth_prot_versions proto,
u8 *addr, int *mask_bits)
static ssize_t qeth_l3_dev_ipato_add_store(const char *buf, size_t count,
struct qeth_card *card, enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_ipato_add4_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(ipato_add4, add4, 0644,
qeth_l3_dev_ipato_add4_show,
qeth_l3_dev_ipato_add4_store);
static ssize_t qeth_l3_dev_ipato_del_store(const char *buf, size_t count,
struct qeth_card *card, enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_ipato_del4_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(ipato_del4, del4, 0200, NULL,
qeth_l3_dev_ipato_del4_store);
static ssize_t qeth_l3_dev_ipato_invert6_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_ipato_invert6_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(ipato_invert6, invert6, 0644,
qeth_l3_dev_ipato_invert6_show,
qeth_l3_dev_ipato_invert6_store);
static ssize_t qeth_l3_dev_ipato_add6_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_ipato_add6_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(ipato_add6, add6, 0644,
qeth_l3_dev_ipato_add6_show,
qeth_l3_dev_ipato_add6_store);
static ssize_t qeth_l3_dev_ipato_del6_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(ipato_del6, del6, 0200, NULL,
qeth_l3_dev_ipato_del6_store);
static struct attribute *qeth_ipato_device_attrs[] = ;
static struct attribute_group qeth_device_ipato_group = ;
static ssize_t qeth_l3_dev_vipa_add_show(char *buf, struct qeth_card *card,
enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_vipa_add4_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int qeth_l3_parse_vipae(const char *buf, enum qeth_prot_versions proto,
u8 *addr)
static ssize_t qeth_l3_dev_vipa_add_store(const char *buf, size_t count,
struct qeth_card *card, enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_vipa_add4_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(vipa_add4, add4, 0644,
qeth_l3_dev_vipa_add4_show,
qeth_l3_dev_vipa_add4_store);
static ssize_t qeth_l3_dev_vipa_del_store(const char *buf, size_t count,
struct qeth_card *card, enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_vipa_del4_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(vipa_del4, del4, 0200, NULL,
qeth_l3_dev_vipa_del4_store);
static ssize_t qeth_l3_dev_vipa_add6_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_vipa_add6_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(vipa_add6, add6, 0644,
qeth_l3_dev_vipa_add6_show,
qeth_l3_dev_vipa_add6_store);
static ssize_t qeth_l3_dev_vipa_del6_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(vipa_del6, del6, 0200, NULL,
qeth_l3_dev_vipa_del6_store);
static struct attribute *qeth_vipa_device_attrs[] = ;
static struct attribute_group qeth_device_vipa_group = ;
static ssize_t qeth_l3_dev_rxip_add_show(char *buf, struct qeth_card *card,
enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_rxip_add4_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int qeth_l3_parse_rxipe(const char *buf, enum qeth_prot_versions proto,
u8 *addr)
static ssize_t qeth_l3_dev_rxip_add_store(const char *buf, size_t count,
struct qeth_card *card, enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_rxip_add4_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(rxip_add4, add4, 0644,
qeth_l3_dev_rxip_add4_show,
qeth_l3_dev_rxip_add4_store);
static ssize_t qeth_l3_dev_rxip_del_store(const char *buf, size_t count,
struct qeth_card *card, enum qeth_prot_versions proto)
static ssize_t qeth_l3_dev_rxip_del4_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(rxip_del4, del4, 0200, NULL,
qeth_l3_dev_rxip_del4_store);
static ssize_t qeth_l3_dev_rxip_add6_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t qeth_l3_dev_rxip_add6_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(rxip_add6, add6, 0644,
qeth_l3_dev_rxip_add6_show,
qeth_l3_dev_rxip_add6_store);
static ssize_t qeth_l3_dev_rxip_del6_store(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static QETH_DEVICE_ATTR(rxip_del6, del6, 0200, NULL,
qeth_l3_dev_rxip_del6_store);
static struct attribute *qeth_rxip_device_attrs[] = ;
static struct attribute_group qeth_device_rxip_group = ;
int qeth_l3_create_device_attributes(struct device *dev)
void qeth_l3_remove_device_attributes(struct device *dev)
