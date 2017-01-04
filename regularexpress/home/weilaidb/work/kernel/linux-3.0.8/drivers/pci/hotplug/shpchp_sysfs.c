static ssize_t show_ctrl (struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR (ctrl, S_IRUGO, show_ctrl, NULL);
int __must_check shpchp_create_ctrl_files (struct controller *ctrl)
void shpchp_remove_ctrl_files(struct controller *ctrl)
