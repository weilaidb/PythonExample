#define __LINUX_UBI_H__
enum ;
struct ubi_volume_info ;
struct ubi_device_info ;
enum ;
struct ubi_notification ;
struct ubi_volume_desc;
int ubi_get_device_info(int ubi_num, struct ubi_device_info *di);
void ubi_get_volume_info(struct ubi_volume_desc *desc,
struct ubi_volume_info *vi);
struct ubi_volume_desc *ubi_open_volume(int ubi_num, int vol_id, int mode);
struct ubi_volume_desc *ubi_open_volume_nm(int ubi_num, const char *name,
int mode);
struct ubi_volume_desc *ubi_open_volume_path(const char *pathname, int mode);
int ubi_register_volume_notifier(struct notifier_block *nb,
int ignore_existing);
int ubi_unregister_volume_notifier(struct notifier_block *nb);
void ubi_close_volume(struct ubi_volume_desc *desc);
int ubi_leb_read(struct ubi_volume_desc *desc, int lnum, char *buf, int offset,
int len, int check);
int ubi_leb_write(struct ubi_volume_desc *desc, int lnum, const void *buf,
int offset, int len, int dtype);
int ubi_leb_change(struct ubi_volume_desc *desc, int lnum, const void *buf,
int len, int dtype);
int ubi_leb_erase(struct ubi_volume_desc *desc, int lnum);
int ubi_leb_unmap(struct ubi_volume_desc *desc, int lnum);
int ubi_leb_map(struct ubi_volume_desc *desc, int lnum, int dtype);
int ubi_is_mapped(struct ubi_volume_desc *desc, int lnum);
int ubi_sync(int ubi_num);
static inline int ubi_read(struct ubi_volume_desc *desc, int lnum, char *buf,
int offset, int len)
static inline int ubi_write(struct ubi_volume_desc *desc, int lnum,
const void *buf, int offset, int len)
static inline int ubi_change(struct ubi_volume_desc *desc, int lnum,
const void *buf, int len)
