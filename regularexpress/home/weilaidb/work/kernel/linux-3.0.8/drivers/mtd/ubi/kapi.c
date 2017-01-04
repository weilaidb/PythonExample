void ubi_do_get_device_info(struct ubi_device *ubi, struct ubi_device_info *di)
EXPORT_SYMBOL_GPL(ubi_do_get_device_info);
int ubi_get_device_info(int ubi_num, struct ubi_device_info *di)
EXPORT_SYMBOL_GPL(ubi_get_device_info);
void ubi_do_get_volume_info(struct ubi_device *ubi, struct ubi_volume *vol,
struct ubi_volume_info *vi)
void ubi_get_volume_info(struct ubi_volume_desc *desc,
struct ubi_volume_info *vi)
EXPORT_SYMBOL_GPL(ubi_get_volume_info);
struct ubi_volume_desc *ubi_open_volume(int ubi_num, int vol_id, int mode)
EXPORT_SYMBOL_GPL(ubi_open_volume);
struct ubi_volume_desc *ubi_open_volume_nm(int ubi_num, const char *name,
int mode)
EXPORT_SYMBOL_GPL(ubi_open_volume_nm);
struct ubi_volume_desc *ubi_open_volume_path(const char *pathname, int mode)
EXPORT_SYMBOL_GPL(ubi_open_volume_path);
void ubi_close_volume(struct ubi_volume_desc *desc)
EXPORT_SYMBOL_GPL(ubi_close_volume);
int ubi_leb_read(struct ubi_volume_desc *desc, int lnum, char *buf, int offset,
int len, int check)
EXPORT_SYMBOL_GPL(ubi_leb_read);
int ubi_leb_write(struct ubi_volume_desc *desc, int lnum, const void *buf,
int offset, int len, int dtype)
EXPORT_SYMBOL_GPL(ubi_leb_write);
int ubi_leb_change(struct ubi_volume_desc *desc, int lnum, const void *buf,
int len, int dtype)
EXPORT_SYMBOL_GPL(ubi_leb_change);
int ubi_leb_erase(struct ubi_volume_desc *desc, int lnum)
EXPORT_SYMBOL_GPL(ubi_leb_erase);
int ubi_leb_unmap(struct ubi_volume_desc *desc, int lnum)
EXPORT_SYMBOL_GPL(ubi_leb_unmap);
int ubi_leb_map(struct ubi_volume_desc *desc, int lnum, int dtype)
EXPORT_SYMBOL_GPL(ubi_leb_map);
int ubi_is_mapped(struct ubi_volume_desc *desc, int lnum)
EXPORT_SYMBOL_GPL(ubi_is_mapped);
int ubi_sync(int ubi_num)
EXPORT_SYMBOL_GPL(ubi_sync);
BLOCKING_NOTIFIER_HEAD(ubi_notifiers);
int ubi_register_volume_notifier(struct notifier_block *nb,
int ignore_existing)
EXPORT_SYMBOL_GPL(ubi_register_volume_notifier);
int ubi_unregister_volume_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(ubi_unregister_volume_notifier);
