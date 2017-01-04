#define _NET_BATMAN_ADV_SYSFS_H_
#define SYSFS_IF_MESH_SUBDIR "mesh"
#define SYSFS_IF_BAT_SUBDIR "batman_adv"
struct bat_attribute ;
int sysfs_add_meshif(struct net_device *dev);
void sysfs_del_meshif(struct net_device *dev);
int sysfs_add_hardif(struct kobject **hardif_obj, struct net_device *dev);
void sysfs_del_hardif(struct kobject **hardif_obj);
