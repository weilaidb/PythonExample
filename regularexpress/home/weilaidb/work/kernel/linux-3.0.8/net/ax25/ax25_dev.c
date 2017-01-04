ax25_dev *ax25_dev_list;
DEFINE_SPINLOCK(ax25_dev_lock);
ax25_dev *ax25_addr_ax25dev(ax25_address *addr)
void ax25_dev_device_up(struct net_device *dev)
void ax25_dev_device_down(struct net_device *dev)
int ax25_fwd_ioctl(unsigned int cmd, struct ax25_fwd_struct *fwd)
struct net_device *ax25_fwd_dev(struct net_device *dev)
void __exit ax25_dev_free(void)
