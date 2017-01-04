static int media_device_open(struct file *filp)
static int media_device_close(struct file *filp)
static int media_device_get_info(struct media_device *dev,
struct media_device_info __user *__info)
static struct media_entity *find_entity(struct media_device *mdev, u32 id)
static long media_device_enum_entities(struct media_device *mdev,
struct media_entity_desc __user *uent)
static void media_device_kpad_to_upad(const struct media_pad *kpad,
struct media_pad_desc *upad)
static long media_device_enum_links(struct media_device *mdev,
struct media_links_enum __user *ulinks)
static long media_device_setup_link(struct media_device *mdev,
struct media_link_desc __user *_ulink)
static long media_device_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static const struct media_file_operations media_device_fops = ;
static ssize_t show_model(struct device *cd,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(model, S_IRUGO, show_model, NULL);
static void media_device_release(struct media_devnode *mdev)
int __must_check media_device_register(struct media_device *mdev)
EXPORT_SYMBOL_GPL(media_device_register);
void media_device_unregister(struct media_device *mdev)
EXPORT_SYMBOL_GPL(media_device_unregister);
int __must_check media_device_register_entity(struct media_device *mdev,
struct media_entity *entity)
EXPORT_SYMBOL_GPL(media_device_register_entity);
void media_device_unregister_entity(struct media_entity *entity)
EXPORT_SYMBOL_GPL(media_device_unregister_entity);
