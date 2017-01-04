#define __OSDEP_INTF_H_
#define RND4(x)	(((x >> 2) + (((x & 3) == 0) ?  0 : 1)) << 2)
struct intf_priv ;
int r871x_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
