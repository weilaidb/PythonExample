static ssize_t show_parent(struct device *d, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(parent, S_IRUGO, show_parent, NULL);
int ipoib_vlan_add(struct net_device *pdev, unsigned short pkey)
int ipoib_vlan_delete(struct net_device *pdev, unsigned short pkey)
