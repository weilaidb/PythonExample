#define _SYSFS_H_
struct kobject;
struct module;
enum kobj_ns_type;
struct attribute ;
#define sysfs_attr_init(attr)				\
do  while(0)
#define sysfs_attr_init(attr) do  while(0)
struct attribute_group ;
#define __ATTR(_name,_mode,_show,_store)
#define __ATTR_RO(_name)
#define __ATTR_NULL
#define attr_name(_attr) (_attr).attr.name
struct file;
struct vm_area_struct;
struct bin_attribute ;
#define sysfs_bin_attr_init(bin_attr) sysfs_attr_init(&(bin_attr)->attr)
struct sysfs_ops ;
struct sysfs_dirent;
int sysfs_schedule_callback(struct kobject *kobj, void (*func)(void *),
void *data, struct module *owner);
int __must_check sysfs_create_dir(struct kobject *kobj);
void sysfs_remove_dir(struct kobject *kobj);
int __must_check sysfs_rename_dir(struct kobject *kobj, const char *new_name);
int __must_check sysfs_move_dir(struct kobject *kobj,
struct kobject *new_parent_kobj);
int __must_check sysfs_create_file(struct kobject *kobj,
const struct attribute *attr);
int __must_check sysfs_create_files(struct kobject *kobj,
const struct attribute **attr);
int __must_check sysfs_chmod_file(struct kobject *kobj,
const struct attribute *attr, mode_t mode);
void sysfs_remove_file(struct kobject *kobj, const struct attribute *attr);
void sysfs_remove_files(struct kobject *kobj, const struct attribute **attr);
int __must_check sysfs_create_bin_file(struct kobject *kobj,
const struct bin_attribute *attr);
void sysfs_remove_bin_file(struct kobject *kobj,
const struct bin_attribute *attr);
int __must_check sysfs_create_link(struct kobject *kobj, struct kobject *target,
const char *name);
int __must_check sysfs_create_link_nowarn(struct kobject *kobj,
struct kobject *target,
const char *name);
void sysfs_remove_link(struct kobject *kobj, const char *name);
int sysfs_rename_link(struct kobject *kobj, struct kobject *target,
const char *old_name, const char *new_name);
void sysfs_delete_link(struct kobject *dir, struct kobject *targ,
const char *name);
int __must_check sysfs_create_group(struct kobject *kobj,
const struct attribute_group *grp);
int sysfs_update_group(struct kobject *kobj,
const struct attribute_group *grp);
void sysfs_remove_group(struct kobject *kobj,
const struct attribute_group *grp);
int sysfs_add_file_to_group(struct kobject *kobj,
const struct attribute *attr, const char *group);
void sysfs_remove_file_from_group(struct kobject *kobj,
const struct attribute *attr, const char *group);
int sysfs_merge_group(struct kobject *kobj,
const struct attribute_group *grp);
void sysfs_unmerge_group(struct kobject *kobj,
const struct attribute_group *grp);
void sysfs_notify(struct kobject *kobj, const char *dir, const char *attr);
void sysfs_notify_dirent(struct sysfs_dirent *sd);
struct sysfs_dirent *sysfs_get_dirent(struct sysfs_dirent *parent_sd,
const void *ns,
const unsigned char *name);
struct sysfs_dirent *sysfs_get(struct sysfs_dirent *sd);
void sysfs_put(struct sysfs_dirent *sd);
int __must_check sysfs_init(void);
static inline int sysfs_schedule_callback(struct kobject *kobj,
void (*func)(void *), void *data, struct module *owner)
static inline int sysfs_create_dir(struct kobject *kobj)
static inline void sysfs_remove_dir(struct kobject *kobj)
static inline int sysfs_rename_dir(struct kobject *kobj, const char *new_name)
static inline int sysfs_move_dir(struct kobject *kobj,
struct kobject *new_parent_kobj)
static inline int sysfs_create_file(struct kobject *kobj,
const struct attribute *attr)
static inline int sysfs_create_files(struct kobject *kobj,
const struct attribute **attr)
static inline int sysfs_chmod_file(struct kobject *kobj,
const struct attribute *attr, mode_t mode)
static inline void sysfs_remove_file(struct kobject *kobj,
const struct attribute *attr)
static inline void sysfs_remove_files(struct kobject *kobj,
const struct attribute **attr)
static inline int sysfs_create_bin_file(struct kobject *kobj,
const struct bin_attribute *attr)
static inline void sysfs_remove_bin_file(struct kobject *kobj,
const struct bin_attribute *attr)
static inline int sysfs_create_link(struct kobject *kobj,
struct kobject *target, const char *name)
static inline int sysfs_create_link_nowarn(struct kobject *kobj,
struct kobject *target,
const char *name)
static inline void sysfs_remove_link(struct kobject *kobj, const char *name)
static inline int sysfs_rename_link(struct kobject *k, struct kobject *t,
const char *old_name, const char *new_name)
static inline void sysfs_delete_link(struct kobject *k, struct kobject *t,
const char *name)
static inline int sysfs_create_group(struct kobject *kobj,
const struct attribute_group *grp)
static inline int sysfs_update_group(struct kobject *kobj,
const struct attribute_group *grp)
static inline void sysfs_remove_group(struct kobject *kobj,
const struct attribute_group *grp)
static inline int sysfs_add_file_to_group(struct kobject *kobj,
const struct attribute *attr, const char *group)
static inline void sysfs_remove_file_from_group(struct kobject *kobj,
const struct attribute *attr, const char *group)
static inline int sysfs_merge_group(struct kobject *kobj,
const struct attribute_group *grp)
static inline void sysfs_unmerge_group(struct kobject *kobj,
const struct attribute_group *grp)
static inline void sysfs_notify(struct kobject *kobj, const char *dir,
const char *attr)
static inline void sysfs_notify_dirent(struct sysfs_dirent *sd)
static inline
struct sysfs_dirent *sysfs_get_dirent(struct sysfs_dirent *parent_sd,
const void *ns,
const unsigned char *name)
static inline struct sysfs_dirent *sysfs_get(struct sysfs_dirent *sd)
static inline void sysfs_put(struct sysfs_dirent *sd)
static inline int __must_check sysfs_init(void)
