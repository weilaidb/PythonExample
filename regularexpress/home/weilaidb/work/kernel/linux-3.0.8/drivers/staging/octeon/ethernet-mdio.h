extern const struct ethtool_ops cvm_oct_ethtool_ops;
int cvm_oct_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
int cvm_oct_phy_setup_device(struct net_device *dev);
