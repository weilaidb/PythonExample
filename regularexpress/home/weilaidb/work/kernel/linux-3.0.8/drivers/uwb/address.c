struct uwb_rc_cmd_dev_addr_mgmt  __attribute__((packed));
static
int uwb_rc_dev_addr_mgmt(struct uwb_rc *rc,
u8 bmOperationType, const u8 *baAddr,
struct uwb_rc_evt_dev_addr_mgmt *reply)
static int uwb_rc_addr_set(struct uwb_rc *rc,
const void *_addr, enum uwb_addr_type type)
static int uwb_rc_addr_get(struct uwb_rc *rc,
void *_addr, enum uwb_addr_type type)
int uwb_rc_mac_addr_get(struct uwb_rc *rc,
struct uwb_mac_addr *addr)
EXPORT_SYMBOL_GPL(uwb_rc_mac_addr_get);
int uwb_rc_dev_addr_get(struct uwb_rc *rc,
struct uwb_dev_addr *addr)
EXPORT_SYMBOL_GPL(uwb_rc_dev_addr_get);
int uwb_rc_mac_addr_set(struct uwb_rc *rc,
const struct uwb_mac_addr *addr)
int uwb_rc_dev_addr_set(struct uwb_rc *rc,
const struct uwb_dev_addr *addr)
int __uwb_mac_addr_assigned_check(struct device *dev, void *_addr)
int __uwb_dev_addr_assigned_check(struct device *dev, void *_addr)
int uwb_rc_dev_addr_assign(struct uwb_rc *rc)
int uwbd_evt_handle_rc_dev_addr_conflict(struct uwb_event *evt)
static ssize_t uwb_rc_mac_addr_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t uwb_rc_mac_addr_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
DEVICE_ATTR(mac_address, S_IRUGO | S_IWUSR, uwb_rc_mac_addr_show, uwb_rc_mac_addr_store);
size_t __uwb_addr_print(char *buf, size_t buf_size, const unsigned char *addr,
int type)
EXPORT_SYMBOL_GPL(__uwb_addr_print);
