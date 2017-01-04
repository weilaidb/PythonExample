#define TF_CIT_SETUP(_name, _item_ops, _group_ops, _attrs)		\
static void target_fabric_setup_##_name##_cit(struct target_fabric_configfs *tf) \
static int target_fabric_mappedlun_link(
struct config_item *lun_acl_ci,
struct config_item *lun_ci)
static int target_fabric_mappedlun_unlink(
struct config_item *lun_acl_ci,
struct config_item *lun_ci)
CONFIGFS_EATTR_STRUCT(target_fabric_mappedlun, se_lun_acl);
#define TCM_MAPPEDLUN_ATTR(_name, _mode)				\
static struct target_fabric_mappedlun_attribute target_fabric_mappedlun_##_name = \
__CONFIGFS_EATTR(_name, _mode,					\
target_fabric_mappedlun_show_##_name,				\
target_fabric_mappedlun_store_##_name);
static ssize_t target_fabric_mappedlun_show_write_protect(
struct se_lun_acl *lacl,
char *page)
static ssize_t target_fabric_mappedlun_store_write_protect(
struct se_lun_acl *lacl,
const char *page,
size_t count)
TCM_MAPPEDLUN_ATTR(write_protect, S_IRUGO | S_IWUSR);
CONFIGFS_EATTR_OPS(target_fabric_mappedlun, se_lun_acl, se_lun_group);
static void target_fabric_mappedlun_release(struct config_item *item)
static struct configfs_attribute *target_fabric_mappedlun_attrs[] = ;
static struct configfs_item_operations target_fabric_mappedlun_item_ops = ;
TF_CIT_SETUP(tpg_mappedlun, &target_fabric_mappedlun_item_ops, NULL,
target_fabric_mappedlun_attrs);
static struct config_group *target_core_mappedlun_stat_mkdir(
struct config_group *group,
const char *name)
static void target_core_mappedlun_stat_rmdir(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_fabric_mappedlun_stat_group_ops = ;
TF_CIT_SETUP(tpg_mappedlun_stat, NULL, &target_fabric_mappedlun_stat_group_ops,
NULL);
CONFIGFS_EATTR_OPS(target_fabric_nacl_attrib, se_node_acl, acl_attrib_group);
static struct configfs_item_operations target_fabric_nacl_attrib_item_ops = ;
TF_CIT_SETUP(tpg_nacl_attrib, &target_fabric_nacl_attrib_item_ops, NULL, NULL);
CONFIGFS_EATTR_OPS(target_fabric_nacl_auth, se_node_acl, acl_auth_group);
static struct configfs_item_operations target_fabric_nacl_auth_item_ops = ;
TF_CIT_SETUP(tpg_nacl_auth, &target_fabric_nacl_auth_item_ops, NULL, NULL);
CONFIGFS_EATTR_OPS(target_fabric_nacl_param, se_node_acl, acl_param_group);
static struct configfs_item_operations target_fabric_nacl_param_item_ops = ;
TF_CIT_SETUP(tpg_nacl_param, &target_fabric_nacl_param_item_ops, NULL, NULL);
CONFIGFS_EATTR_OPS(target_fabric_nacl_base, se_node_acl, acl_group);
static struct config_group *target_fabric_make_mappedlun(
struct config_group *group,
const char *name)
static void target_fabric_drop_mappedlun(
struct config_group *group,
struct config_item *item)
static void target_fabric_nacl_base_release(struct config_item *item)
static struct configfs_item_operations target_fabric_nacl_base_item_ops = ;
static struct configfs_group_operations target_fabric_nacl_base_group_ops = ;
TF_CIT_SETUP(tpg_nacl_base, &target_fabric_nacl_base_item_ops,
&target_fabric_nacl_base_group_ops, NULL);
TF_CIT_SETUP(tpg_nacl_stat, NULL, NULL, NULL);
static struct config_group *target_fabric_make_nodeacl(
struct config_group *group,
const char *name)
static void target_fabric_drop_nodeacl(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_fabric_nacl_group_ops = ;
TF_CIT_SETUP(tpg_nacl, NULL, &target_fabric_nacl_group_ops, NULL);
CONFIGFS_EATTR_OPS(target_fabric_np_base, se_tpg_np, tpg_np_group);
static void target_fabric_np_base_release(struct config_item *item)
static struct configfs_item_operations target_fabric_np_base_item_ops = ;
TF_CIT_SETUP(tpg_np_base, &target_fabric_np_base_item_ops, NULL, NULL);
static struct config_group *target_fabric_make_np(
struct config_group *group,
const char *name)
static void target_fabric_drop_np(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_fabric_np_group_ops = ;
TF_CIT_SETUP(tpg_np, NULL, &target_fabric_np_group_ops, NULL);
CONFIGFS_EATTR_STRUCT(target_fabric_port, se_lun);
#define TCM_PORT_ATTR(_name, _mode)					\
static struct target_fabric_port_attribute target_fabric_port_##_name =	\
__CONFIGFS_EATTR(_name, _mode,					\
target_fabric_port_show_attr_##_name,				\
target_fabric_port_store_attr_##_name);
#define TCM_PORT_ATTOR_RO(_name)					\
__CONFIGFS_EATTR_RO(_name,					\
target_fabric_port_show_attr_##_name);
static ssize_t target_fabric_port_show_attr_alua_tg_pt_gp(
struct se_lun *lun,
char *page)
static ssize_t target_fabric_port_store_attr_alua_tg_pt_gp(
struct se_lun *lun,
const char *page,
size_t count)
TCM_PORT_ATTR(alua_tg_pt_gp, S_IRUGO | S_IWUSR);
static ssize_t target_fabric_port_show_attr_alua_tg_pt_offline(
struct se_lun *lun,
char *page)
static ssize_t target_fabric_port_store_attr_alua_tg_pt_offline(
struct se_lun *lun,
const char *page,
size_t count)
TCM_PORT_ATTR(alua_tg_pt_offline, S_IRUGO | S_IWUSR);
static ssize_t target_fabric_port_show_attr_alua_tg_pt_status(
struct se_lun *lun,
char *page)
static ssize_t target_fabric_port_store_attr_alua_tg_pt_status(
struct se_lun *lun,
const char *page,
size_t count)
TCM_PORT_ATTR(alua_tg_pt_status, S_IRUGO | S_IWUSR);
static ssize_t target_fabric_port_show_attr_alua_tg_pt_write_md(
struct se_lun *lun,
char *page)
static ssize_t target_fabric_port_store_attr_alua_tg_pt_write_md(
struct se_lun *lun,
const char *page,
size_t count)
TCM_PORT_ATTR(alua_tg_pt_write_md, S_IRUGO | S_IWUSR);
static struct configfs_attribute *target_fabric_port_attrs[] = ;
CONFIGFS_EATTR_OPS(target_fabric_port, se_lun, lun_group);
static int target_fabric_port_link(
struct config_item *lun_ci,
struct config_item *se_dev_ci)
static int target_fabric_port_unlink(
struct config_item *lun_ci,
struct config_item *se_dev_ci)
static struct configfs_item_operations target_fabric_port_item_ops = ;
TF_CIT_SETUP(tpg_port, &target_fabric_port_item_ops, NULL, target_fabric_port_attrs);
static struct config_group *target_core_port_stat_mkdir(
struct config_group *group,
const char *name)
static void target_core_port_stat_rmdir(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_fabric_port_stat_group_ops = ;
TF_CIT_SETUP(tpg_port_stat, NULL, &target_fabric_port_stat_group_ops, NULL);
static struct config_group *target_fabric_make_lun(
struct config_group *group,
const char *name)
static void target_fabric_drop_lun(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_fabric_lun_group_ops = ;
TF_CIT_SETUP(tpg_lun, NULL, &target_fabric_lun_group_ops, NULL);
CONFIGFS_EATTR_OPS(target_fabric_tpg_attrib, se_portal_group, tpg_attrib_group);
static struct configfs_item_operations target_fabric_tpg_attrib_item_ops = ;
TF_CIT_SETUP(tpg_attrib, &target_fabric_tpg_attrib_item_ops, NULL, NULL);
CONFIGFS_EATTR_OPS(target_fabric_tpg_param, se_portal_group, tpg_param_group);
static struct configfs_item_operations target_fabric_tpg_param_item_ops = ;
TF_CIT_SETUP(tpg_param, &target_fabric_tpg_param_item_ops, NULL, NULL);
CONFIGFS_EATTR_OPS(target_fabric_tpg, se_portal_group, tpg_group);
static void target_fabric_tpg_release(struct config_item *item)
static struct configfs_item_operations target_fabric_tpg_base_item_ops = ;
TF_CIT_SETUP(tpg_base, &target_fabric_tpg_base_item_ops, NULL, NULL);
static struct config_group *target_fabric_make_tpg(
struct config_group *group,
const char *name)
static void target_fabric_drop_tpg(
struct config_group *group,
struct config_item *item)
static void target_fabric_release_wwn(struct config_item *item)
static struct configfs_item_operations target_fabric_tpg_item_ops = ;
static struct configfs_group_operations target_fabric_tpg_group_ops = ;
TF_CIT_SETUP(tpg, &target_fabric_tpg_item_ops, &target_fabric_tpg_group_ops,
NULL);
TF_CIT_SETUP(wwn_fabric_stats, NULL, NULL, NULL);
static struct config_group *target_fabric_make_wwn(
struct config_group *group,
const char *name)
static void target_fabric_drop_wwn(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_fabric_wwn_group_ops = ;
CONFIGFS_EATTR_OPS(target_fabric_wwn, target_fabric_configfs, tf_group);
static struct configfs_item_operations target_fabric_wwn_item_ops = ;
TF_CIT_SETUP(wwn, &target_fabric_wwn_item_ops, &target_fabric_wwn_group_ops, NULL);
CONFIGFS_EATTR_OPS(target_fabric_discovery, target_fabric_configfs,
tf_disc_group);
static struct configfs_item_operations target_fabric_discovery_item_ops = ;
TF_CIT_SETUP(discovery, &target_fabric_discovery_item_ops, NULL, NULL);
int target_fabric_setup_cits(struct target_fabric_configfs *tf)
