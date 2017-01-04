static inline void uwb_dev_addr_init(struct uwb_dev_addr *addr)
static inline void uwb_mac_addr_init(struct uwb_mac_addr *addr)
static inline int uwb_dev_addr_bcast(const struct uwb_dev_addr *addr)
int uwb_notifs_register(struct uwb_rc *rc, struct uwb_notifs_handler *new)
EXPORT_SYMBOL_GPL(uwb_notifs_register);
int uwb_notifs_deregister(struct uwb_rc *rc, struct uwb_notifs_handler *entry)
EXPORT_SYMBOL_GPL(uwb_notifs_deregister);
void uwb_notify(struct uwb_rc *rc, struct uwb_dev *uwb_dev, enum uwb_notifs event)
static void uwb_dev_sys_release(struct device *dev)
void uwb_dev_init(struct uwb_dev *uwb_dev)
static ssize_t uwb_dev_EUI_48_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(EUI_48, S_IRUGO, uwb_dev_EUI_48_show, NULL);
static ssize_t uwb_dev_DevAddr_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(DevAddr, S_IRUGO, uwb_dev_DevAddr_show, NULL);
static ssize_t uwb_dev_BPST_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(BPST, S_IRUGO, uwb_dev_BPST_show, NULL);
static ssize_t uwb_dev_IEs_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(IEs, S_IRUGO | S_IWUSR, uwb_dev_IEs_show, NULL);
static ssize_t uwb_dev_LQE_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t uwb_dev_LQE_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(LQE, S_IRUGO | S_IWUSR, uwb_dev_LQE_show, uwb_dev_LQE_store);
static ssize_t uwb_dev_RSSI_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t uwb_dev_RSSI_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
static DEVICE_ATTR(RSSI, S_IRUGO | S_IWUSR, uwb_dev_RSSI_show, uwb_dev_RSSI_store);
static struct attribute *dev_attrs[] = ;
static struct attribute_group dev_attr_group = ;
static const struct attribute_group *groups[] = ;
static int __uwb_dev_sys_add(struct uwb_dev *uwb_dev, struct device *parent_dev)
static void __uwb_dev_sys_rm(struct uwb_dev *uwb_dev)
int uwb_dev_add(struct uwb_dev *uwb_dev, struct device *parent_dev,
struct uwb_rc *parent_rc)
void uwb_dev_rm(struct uwb_dev *uwb_dev)
static
int __uwb_dev_try_get(struct device *dev, void *__target_uwb_dev)
struct uwb_dev *uwb_dev_try_get(struct uwb_rc *rc, struct uwb_dev *uwb_dev)
EXPORT_SYMBOL_GPL(uwb_dev_try_get);
int __uwb_dev_offair(struct uwb_dev *uwb_dev, struct uwb_rc *rc)
void uwbd_dev_offair(struct uwb_beca_e *bce)
void uwbd_dev_onair(struct uwb_rc *rc, struct uwb_beca_e *bce)
int uwb_dev_for_each(struct uwb_rc *rc, uwb_dev_for_each_f function, void *priv)
EXPORT_SYMBOL_GPL(uwb_dev_for_each);
