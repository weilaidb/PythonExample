#define _NET_BATMAN_ADV_DEBUGFS_H_
#define DEBUGFS_BAT_SUBDIR "batman_adv"
void debugfs_init(void);
void debugfs_destroy(void);
int debugfs_add_meshif(struct net_device *dev);
void debugfs_del_meshif(struct net_device *dev);
