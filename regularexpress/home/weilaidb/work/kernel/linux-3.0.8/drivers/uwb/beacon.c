struct uwb_rc_cmd_start_beacon  __attribute__((packed));
static int uwb_rc_start_beacon(struct uwb_rc *rc, u16 bpst_offset, u8 channel)
static int uwb_rc_stop_beacon(struct uwb_rc *rc)
int uwb_rc_beacon(struct uwb_rc *rc, int channel, unsigned bpst_offset)
void uwb_bce_kfree(struct kref *_bce)
static
struct uwb_beca_e *__uwb_beca_find_bydev(struct uwb_rc *rc,
const struct uwb_dev_addr *dev_addr)
static
struct uwb_beca_e *__uwb_beca_find_bymac(struct uwb_rc *rc,
const struct uwb_mac_addr *mac_addr)
struct uwb_dev *uwb_dev_get_by_devaddr(struct uwb_rc *rc,
const struct uwb_dev_addr *devaddr)
struct uwb_dev *uwb_dev_get_by_macaddr(struct uwb_rc *rc,
const struct uwb_mac_addr *macaddr)
static void uwb_beca_e_init(struct uwb_beca_e *bce)
static
struct uwb_beca_e *__uwb_beca_add(struct uwb_rc *rc,
struct uwb_rc_evt_beacon *be,
struct uwb_beacon_frame *bf,
unsigned long ts_jiffies)
void uwb_beca_purge(struct uwb_rc *rc)
void uwb_beca_release(struct uwb_rc *rc)
static void uwb_beacon_print(struct uwb_rc *rc, struct uwb_rc_evt_beacon *be,
struct uwb_beacon_frame *bf)
ssize_t uwb_bce_print_IEs(struct uwb_dev *uwb_dev, struct uwb_beca_e *bce,
char *buf, size_t size)
static int uwb_verify_beacon(struct uwb_rc *rc, struct uwb_event *evt,
struct uwb_rc_evt_beacon *be)
int uwbd_evt_handle_rc_beacon(struct uwb_event *evt)
int uwbd_evt_handle_rc_beacon_size(struct uwb_event *evt)
int uwbd_evt_handle_rc_bp_slot_change(struct uwb_event *evt)
struct uwb_ie_bpo  __attribute__((packed));
int uwbd_evt_handle_rc_bpoie_change(struct uwb_event *evt)
static ssize_t uwb_rc_beacon_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t uwb_rc_beacon_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t size)
DEVICE_ATTR(beacon, S_IRUGO | S_IWUSR, uwb_rc_beacon_show, uwb_rc_beacon_store);
