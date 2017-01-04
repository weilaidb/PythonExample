void fw_csr_iterator_init(struct fw_csr_iterator *ci, const u32 *p)
EXPORT_SYMBOL(fw_csr_iterator_init);
int fw_csr_iterator_next(struct fw_csr_iterator *ci, int *key, int *value)
EXPORT_SYMBOL(fw_csr_iterator_next);
static const u32 *search_leaf(const u32 *directory, int search_key)
static int textual_leaf_to_string(const u32 *block, char *buf, size_t size)
int fw_csr_string(const u32 *directory, int key, char *buf, size_t size)
EXPORT_SYMBOL(fw_csr_string);
static void get_ids(const u32 *directory, int *id)
static void get_modalias_ids(struct fw_unit *unit, int *id)
static bool match_ids(const struct ieee1394_device_id *id_table, int *id)
static bool is_fw_unit(struct device *dev);
static int fw_unit_match(struct device *dev, struct device_driver *drv)
static int get_modalias(struct fw_unit *unit, char *buffer, size_t buffer_size)
static int fw_unit_uevent(struct device *dev, struct kobj_uevent_env *env)
struct bus_type fw_bus_type = ;
EXPORT_SYMBOL(fw_bus_type);
int fw_device_enable_phys_dma(struct fw_device *device)
EXPORT_SYMBOL(fw_device_enable_phys_dma);
struct config_rom_attribute ;
static ssize_t show_immediate(struct device *dev,
struct device_attribute *dattr, char *buf)
#define IMMEDIATE_ATTR(name, key)				\
static ssize_t show_text_leaf(struct device *dev,
struct device_attribute *dattr, char *buf)
#define TEXT_LEAF_ATTR(name, key)				\
static struct config_rom_attribute config_rom_attributes[] = ;
static void init_fw_attribute_group(struct device *dev,
struct device_attribute *attrs,
struct fw_attribute_group *group)
static ssize_t modalias_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t rom_index_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute fw_unit_attributes[] = ;
static ssize_t config_rom_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t guid_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int units_sprintf(char *buf, const u32 *directory)
static ssize_t units_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute fw_device_attributes[] = ;
static int read_rom(struct fw_device *device,
int generation, int index, u32 *data)
#define MAX_CONFIG_ROM_SIZE 256
static int read_config_rom(struct fw_device *device, int generation)
static void fw_unit_release(struct device *dev)
static struct device_type fw_unit_type = ;
static bool is_fw_unit(struct device *dev)
static void create_units(struct fw_device *device)
static int shutdown_unit(struct device *device, void *data)
DECLARE_RWSEM(fw_device_rwsem);
DEFINE_IDR(fw_device_idr);
int fw_cdev_major;
struct fw_device *fw_device_get_by_devt(dev_t devt)
struct workqueue_struct *fw_workqueue;
EXPORT_SYMBOL(fw_workqueue);
static void fw_schedule_device_work(struct fw_device *device,
unsigned long delay)
#define MAX_RETRIES	10
#define RETRY_DELAY	(3 * HZ)
#define INITIAL_DELAY	(HZ / 2)
#define SHUTDOWN_DELAY	(2 * HZ)
static void fw_device_shutdown(struct work_struct *work)
static void fw_device_release(struct device *dev)
static struct device_type fw_device_type = ;
static bool is_fw_device(struct device *dev)
static int update_unit(struct device *dev, void *data)
static void fw_device_update(struct work_struct *work)
static int lookup_existing_device(struct device *dev, void *data)
enum ;
static void set_broadcast_channel(struct fw_device *device, int generation)
int fw_device_set_broadcast_channel(struct device *dev, void *gen)
static void fw_device_init(struct work_struct *work)
enum ;
static int reread_config_rom(struct fw_device *device, int generation)
static void fw_device_refresh(struct work_struct *work)
void fw_node_event(struct fw_card *card, struct fw_node *node, int event)
