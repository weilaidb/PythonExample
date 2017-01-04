#define __LINUX_LTALK_H
#define LTALK_HLEN		1
#define LTALK_MTU		600
#define LTALK_ALEN		1
extern struct net_device *alloc_ltalkdev(int sizeof_priv);
