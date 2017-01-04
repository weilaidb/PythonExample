#define _ISCSI_BOOT_SYSFS_
enum iscsi_boot_eth_properties_enum ;
enum iscsi_boot_tgt_properties_enum ;
enum iscsi_boot_initiator_properties_enum ;
struct attribute_group;
struct iscsi_boot_kobj ;
struct iscsi_boot_kset ;
struct iscsi_boot_kobj *
iscsi_boot_create_initiator(struct iscsi_boot_kset *boot_kset, int index,
void *data,
ssize_t (*show) (void *data, int type, char *buf),
mode_t (*is_visible) (void *data, int type));
struct iscsi_boot_kobj *
iscsi_boot_create_ethernet(struct iscsi_boot_kset *boot_kset, int index,
void *data,
ssize_t (*show) (void *data, int type, char *buf),
mode_t (*is_visible) (void *data, int type));
struct iscsi_boot_kobj *
iscsi_boot_create_target(struct iscsi_boot_kset *boot_kset, int index,
void *data,
ssize_t (*show) (void *data, int type, char *buf),
mode_t (*is_visible) (void *data, int type));
struct iscsi_boot_kset *iscsi_boot_create_kset(const char *set_name);
struct iscsi_boot_kset *iscsi_boot_create_host_kset(unsigned int hostno);
void iscsi_boot_destroy_kset(struct iscsi_boot_kset *boot_kset);
