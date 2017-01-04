#define _CORE_PRIV_H
int  ib_device_register_sysfs(struct ib_device *device,
int (*port_callback)(struct ib_device *,
u8, struct kobject *));
void ib_device_unregister_sysfs(struct ib_device *device);
int  ib_sysfs_setup(void);
void ib_sysfs_cleanup(void);
int  ib_cache_setup(void);
void ib_cache_cleanup(void);
