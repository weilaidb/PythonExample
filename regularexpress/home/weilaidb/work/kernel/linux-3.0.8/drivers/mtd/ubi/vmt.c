static int paranoid_check_volumes(struct ubi_device *ubi);
#define paranoid_check_volumes(ubi) 0
static ssize_t vol_attribute_show(struct device *dev,
struct device_attribute *attr, char *buf);
static struct device_attribute attr_vol_reserved_ebs =
__ATTR(reserved_ebs, S_IRUGO, vol_attribute_show, NULL);
static struct device_attribute attr_vol_type =
__ATTR(type, S_IRUGO, vol_attribute_show, NULL);
static struct device_attribute attr_vol_name =
__ATTR(name, S_IRUGO, vol_attribute_show, NULL);
static struct device_attribute attr_vol_corrupted =
__ATTR(corrupted, S_IRUGO, vol_attribute_show, NULL);
static struct device_attribute attr_vol_alignment =
__ATTR(alignment, S_IRUGO, vol_attribute_show, NULL);
static struct device_attribute attr_vol_usable_eb_size =
__ATTR(usable_eb_size, S_IRUGO, vol_attribute_show, NULL);
static struct device_attribute attr_vol_data_bytes =
__ATTR(data_bytes, S_IRUGO, vol_attribute_show, NULL);
static struct device_attribute attr_vol_upd_marker =
__ATTR(upd_marker, S_IRUGO, vol_attribute_show, NULL);
static ssize_t vol_attribute_show(struct device *dev,
struct device_attribute *attr, char *buf)
static void vol_release(struct device *dev)
static int volume_sysfs_init(struct ubi_device *ubi, struct ubi_volume *vol)
static void volume_sysfs_close(struct ubi_volume *vol)
int ubi_create_volume(struct ubi_device *ubi, struct ubi_mkvol_req *req)
int ubi_remove_volume(struct ubi_volume_desc *desc, int no_vtbl)
int ubi_resize_volume(struct ubi_volume_desc *desc, int reserved_pebs)
int ubi_rename_volumes(struct ubi_device *ubi, struct list_head *rename_list)
int ubi_add_volume(struct ubi_device *ubi, struct ubi_volume *vol)
void ubi_free_volume(struct ubi_device *ubi, struct ubi_volume *vol)
static int paranoid_check_volume(struct ubi_device *ubi, int vol_id)
static int paranoid_check_volumes(struct ubi_device *ubi)
