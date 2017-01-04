#define _MEDIA_DEVICE_H
struct media_device ;
#define to_media_device(node) container_of(node, struct media_device, devnode)
int __must_check media_device_register(struct media_device *mdev);
void media_device_unregister(struct media_device *mdev);
int __must_check media_device_register_entity(struct media_device *mdev,
struct media_entity *entity);
void media_device_unregister_entity(struct media_entity *entity);
#define media_device_for_each_entity(entity, mdev)			\
list_for_each_entry(entity, &(mdev)->entities, list)
