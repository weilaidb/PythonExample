#define _MEDIA_DEVNODE_H
#define MEDIA_FLAG_REGISTERED	0
struct media_file_operations ;
struct media_devnode ;
#define to_media_devnode(cd) container_of(cd, struct media_devnode, dev)
int __must_check media_devnode_register(struct media_devnode *mdev);
void media_devnode_unregister(struct media_devnode *mdev);
static inline struct media_devnode *media_devnode_data(struct file *filp)
static inline int media_devnode_is_registered(struct media_devnode *mdev)
