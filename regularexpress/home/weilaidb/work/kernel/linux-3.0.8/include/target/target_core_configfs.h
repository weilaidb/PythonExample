#define TARGET_CORE_CONFIGFS_VERSION TARGET_CORE_MOD_VERSION
#define TARGET_CORE_CONFIG_ROOT	"/sys/kernel/config"
#define TARGET_CORE_NAME_MAX_LEN	64
#define TARGET_FABRIC_NAME_SIZE		32
extern struct target_fabric_configfs *target_fabric_configfs_init(
struct module *, const char *);
extern void target_fabric_configfs_free(struct target_fabric_configfs *);
extern int target_fabric_configfs_register(struct target_fabric_configfs *);
extern void target_fabric_configfs_deregister(struct target_fabric_configfs *);
struct target_fabric_configfs_template ;
struct target_fabric_configfs ;
#define TF_CIT_TMPL(tf) (&(tf)->tf_cit_tmpl)
