static inline struct bnx2i_hba *bnx2i_dev_to_hba(struct device *dev)
static ssize_t bnx2i_show_sq_info(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bnx2i_set_sq_info(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t bnx2i_show_ccell_info(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t bnx2i_set_ccell_info(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(sq_size, S_IRUGO | S_IWUSR,
bnx2i_show_sq_info, bnx2i_set_sq_info);
static DEVICE_ATTR(num_ccell, S_IRUGO | S_IWUSR,
bnx2i_show_ccell_info, bnx2i_set_ccell_info);
struct device_attribute *bnx2i_dev_attributes[] = ;
