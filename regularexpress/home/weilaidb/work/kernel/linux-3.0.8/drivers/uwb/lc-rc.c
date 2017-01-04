static int uwb_rc_index_match(struct device *dev, void *data)
static struct uwb_rc *uwb_rc_find_by_index(int index)
static int uwb_rc_new_index(void)
static void uwb_rc_sys_release(struct device *dev)
void uwb_rc_init(struct uwb_rc *rc)
EXPORT_SYMBOL_GPL(uwb_rc_init);
struct uwb_rc *uwb_rc_alloc(void)
EXPORT_SYMBOL_GPL(uwb_rc_alloc);
static struct attribute *rc_attrs[] = ;
static struct attribute_group rc_attr_group = ;
static int uwb_rc_sys_add(struct uwb_rc *rc)
static void __uwb_rc_sys_rm(struct uwb_rc *rc)
static
int uwb_rc_mac_addr_setup(struct uwb_rc *rc)
static int uwb_rc_setup(struct uwb_rc *rc)
int uwb_rc_add(struct uwb_rc *rc, struct device *parent_dev, void *priv)
EXPORT_SYMBOL_GPL(uwb_rc_add);
static int uwb_dev_offair_helper(struct device *dev, void *priv)
void uwb_rc_rm(struct uwb_rc *rc)
EXPORT_SYMBOL_GPL(uwb_rc_rm);
static int find_rc_try_get(struct device *dev, void *data)
struct uwb_rc *__uwb_rc_try_get(struct uwb_rc *target_rc)
EXPORT_SYMBOL_GPL(__uwb_rc_try_get);
static inline struct uwb_rc *uwb_rc_get(struct uwb_rc *rc)
static int find_rc_grandpa(struct device *dev, void *data)
struct uwb_rc *uwb_rc_get_by_grandpa(const struct device *grandpa_dev)
EXPORT_SYMBOL_GPL(uwb_rc_get_by_grandpa);
static int find_rc_dev(struct device *dev, void *data)
struct uwb_rc *uwb_rc_get_by_dev(const struct uwb_dev_addr *addr)
EXPORT_SYMBOL_GPL(uwb_rc_get_by_dev);
void uwb_rc_put(struct uwb_rc *rc)
EXPORT_SYMBOL_GPL(uwb_rc_put);
