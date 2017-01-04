static struct list_head g_tf_list;
static struct mutex g_tf_lock;
struct target_core_configfs_attribute ;
static inline struct se_hba *
item_to_hba(struct config_item *item)
static ssize_t target_core_attr_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static struct configfs_item_operations target_core_fabric_item_ops = ;
static struct configfs_attribute target_core_item_attr_version = ;
static struct target_fabric_configfs *target_core_get_fabric(
const char *name)
static struct config_group *target_core_register_fabric(
struct config_group *group,
const char *name)
static void target_core_deregister_fabric(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_core_fabric_group_ops = ;
static struct configfs_attribute *target_core_fabric_item_attrs[] = ;
static struct config_item_type target_core_fabrics_item = ;
static struct configfs_subsystem target_core_fabrics = ;
static struct configfs_subsystem *target_core_subsystem[] = ;
struct target_fabric_configfs *target_fabric_configfs_init(
struct module *fabric_mod,
const char *name)
EXPORT_SYMBOL(target_fabric_configfs_init);
void target_fabric_configfs_free(
struct target_fabric_configfs *tf)
EXPORT_SYMBOL(target_fabric_configfs_free);
static int target_fabric_tf_ops_check(
struct target_fabric_configfs *tf)
int target_fabric_configfs_register(
struct target_fabric_configfs *tf)
EXPORT_SYMBOL(target_fabric_configfs_register);
void target_fabric_configfs_deregister(
struct target_fabric_configfs *tf)
EXPORT_SYMBOL(target_fabric_configfs_deregister);
#define DEF_DEV_ATTRIB_SHOW(_name)					\
static ssize_t target_core_dev_show_attr_##_name(			\
struct se_dev_attrib *da,					\
char *page)							\
#define DEF_DEV_ATTRIB_STORE(_name)					\
static ssize_t target_core_dev_store_attr_##_name(			\
struct se_dev_attrib *da,					\
const char *page,						\
size_t count)							\
#define DEF_DEV_ATTRIB(_name)						\
DEF_DEV_ATTRIB_SHOW(_name);						\
DEF_DEV_ATTRIB_STORE(_name);
#define DEF_DEV_ATTRIB_RO(_name)					\
DEF_DEV_ATTRIB_SHOW(_name);
CONFIGFS_EATTR_STRUCT(target_core_dev_attrib, se_dev_attrib);
#define SE_DEV_ATTR(_name, _mode)					\
static struct target_core_dev_attrib_attribute				\
target_core_dev_attrib_##_name =		\
__CONFIGFS_EATTR(_name, _mode,				\
target_core_dev_show_attr_##_name,			\
target_core_dev_store_attr_##_name);
#define SE_DEV_ATTR_RO(_name);						\
static struct target_core_dev_attrib_attribute				\
target_core_dev_attrib_##_name =		\
__CONFIGFS_EATTR_RO(_name,					\
target_core_dev_show_attr_##_name);
DEF_DEV_ATTRIB(emulate_dpo);
SE_DEV_ATTR(emulate_dpo, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(emulate_fua_write);
SE_DEV_ATTR(emulate_fua_write, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(emulate_fua_read);
SE_DEV_ATTR(emulate_fua_read, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(emulate_write_cache);
SE_DEV_ATTR(emulate_write_cache, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(emulate_ua_intlck_ctrl);
SE_DEV_ATTR(emulate_ua_intlck_ctrl, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(emulate_tas);
SE_DEV_ATTR(emulate_tas, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(emulate_tpu);
SE_DEV_ATTR(emulate_tpu, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(emulate_tpws);
SE_DEV_ATTR(emulate_tpws, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(enforce_pr_isids);
SE_DEV_ATTR(enforce_pr_isids, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB_RO(hw_block_size);
SE_DEV_ATTR_RO(hw_block_size);
DEF_DEV_ATTRIB(block_size);
SE_DEV_ATTR(block_size, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB_RO(hw_max_sectors);
SE_DEV_ATTR_RO(hw_max_sectors);
DEF_DEV_ATTRIB(max_sectors);
SE_DEV_ATTR(max_sectors, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(optimal_sectors);
SE_DEV_ATTR(optimal_sectors, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB_RO(hw_queue_depth);
SE_DEV_ATTR_RO(hw_queue_depth);
DEF_DEV_ATTRIB(queue_depth);
SE_DEV_ATTR(queue_depth, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(task_timeout);
SE_DEV_ATTR(task_timeout, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(max_unmap_lba_count);
SE_DEV_ATTR(max_unmap_lba_count, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(max_unmap_block_desc_count);
SE_DEV_ATTR(max_unmap_block_desc_count, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(unmap_granularity);
SE_DEV_ATTR(unmap_granularity, S_IRUGO | S_IWUSR);
DEF_DEV_ATTRIB(unmap_granularity_alignment);
SE_DEV_ATTR(unmap_granularity_alignment, S_IRUGO | S_IWUSR);
CONFIGFS_EATTR_OPS(target_core_dev_attrib, se_dev_attrib, da_group);
static struct configfs_attribute *target_core_dev_attrib_attrs[] = ;
static struct configfs_item_operations target_core_dev_attrib_ops = ;
static struct config_item_type target_core_dev_attrib_cit = ;
CONFIGFS_EATTR_STRUCT(target_core_dev_wwn, t10_wwn);
#define SE_DEV_WWN_ATTR(_name, _mode)					\
static struct target_core_dev_wwn_attribute target_core_dev_wwn_##_name = \
__CONFIGFS_EATTR(_name, _mode,				\
target_core_dev_wwn_show_attr_##_name,			\
target_core_dev_wwn_store_attr_##_name);
#define SE_DEV_WWN_ATTR_RO(_name);					\
do  while (0);
static ssize_t target_core_dev_wwn_show_attr_vpd_unit_serial(
struct t10_wwn *t10_wwn,
char *page)
static ssize_t target_core_dev_wwn_store_attr_vpd_unit_serial(
struct t10_wwn *t10_wwn,
const char *page,
size_t count)
SE_DEV_WWN_ATTR(vpd_unit_serial, S_IRUGO | S_IWUSR);
static ssize_t target_core_dev_wwn_show_attr_vpd_protocol_identifier(
struct t10_wwn *t10_wwn,
char *page)
static ssize_t target_core_dev_wwn_store_attr_vpd_protocol_identifier(
struct t10_wwn *t10_wwn,
const char *page,
size_t count)
SE_DEV_WWN_ATTR(vpd_protocol_identifier, S_IRUGO | S_IWUSR);
#define DEF_DEV_WWN_ASSOC_SHOW(_name, _assoc)				\
static ssize_t target_core_dev_wwn_show_attr_##_name(			\
struct t10_wwn *t10_wwn,					\
char *page)							\
DEF_DEV_WWN_ASSOC_SHOW(vpd_assoc_logical_unit, 0x00);
static ssize_t target_core_dev_wwn_store_attr_vpd_assoc_logical_unit(
struct t10_wwn *t10_wwn,
const char *page,
size_t count)
SE_DEV_WWN_ATTR(vpd_assoc_logical_unit, S_IRUGO | S_IWUSR);
DEF_DEV_WWN_ASSOC_SHOW(vpd_assoc_target_port, 0x10);
static ssize_t target_core_dev_wwn_store_attr_vpd_assoc_target_port(
struct t10_wwn *t10_wwn,
const char *page,
size_t count)
SE_DEV_WWN_ATTR(vpd_assoc_target_port, S_IRUGO | S_IWUSR);
DEF_DEV_WWN_ASSOC_SHOW(vpd_assoc_scsi_target_device, 0x20);
static ssize_t target_core_dev_wwn_store_attr_vpd_assoc_scsi_target_device(
struct t10_wwn *t10_wwn,
const char *page,
size_t count)
SE_DEV_WWN_ATTR(vpd_assoc_scsi_target_device, S_IRUGO | S_IWUSR);
CONFIGFS_EATTR_OPS(target_core_dev_wwn, t10_wwn, t10_wwn_group);
static struct configfs_attribute *target_core_dev_wwn_attrs[] = ;
static struct configfs_item_operations target_core_dev_wwn_ops = ;
static struct config_item_type target_core_dev_wwn_cit = ;
CONFIGFS_EATTR_STRUCT(target_core_dev_pr, se_subsystem_dev);
#define SE_DEV_PR_ATTR(_name, _mode)					\
static struct target_core_dev_pr_attribute target_core_dev_pr_##_name = \
__CONFIGFS_EATTR(_name, _mode,					\
target_core_dev_pr_show_attr_##_name,				\
target_core_dev_pr_store_attr_##_name);
#define SE_DEV_PR_ATTR_RO(_name);					\
static struct target_core_dev_pr_attribute target_core_dev_pr_##_name =	\
__CONFIGFS_EATTR_RO(_name,					\
target_core_dev_pr_show_attr_##_name);
static ssize_t target_core_dev_pr_show_spc3_res(
struct se_device *dev,
char *page,
ssize_t *len)
static ssize_t target_core_dev_pr_show_spc2_res(
struct se_device *dev,
char *page,
ssize_t *len)
static ssize_t target_core_dev_pr_show_attr_res_holder(
struct se_subsystem_dev *su_dev,
char *page)
SE_DEV_PR_ATTR_RO(res_holder);
static ssize_t target_core_dev_pr_show_attr_res_pr_all_tgt_pts(
struct se_subsystem_dev *su_dev,
char *page)
SE_DEV_PR_ATTR_RO(res_pr_all_tgt_pts);
static ssize_t target_core_dev_pr_show_attr_res_pr_generation(
struct se_subsystem_dev *su_dev,
char *page)
SE_DEV_PR_ATTR_RO(res_pr_generation);
static ssize_t target_core_dev_pr_show_attr_res_pr_holder_tg_port(
struct se_subsystem_dev *su_dev,
char *page)
SE_DEV_PR_ATTR_RO(res_pr_holder_tg_port);
static ssize_t target_core_dev_pr_show_attr_res_pr_registered_i_pts(
struct se_subsystem_dev *su_dev,
char *page)
SE_DEV_PR_ATTR_RO(res_pr_registered_i_pts);
static ssize_t target_core_dev_pr_show_attr_res_pr_type(
struct se_subsystem_dev *su_dev,
char *page)
SE_DEV_PR_ATTR_RO(res_pr_type);
static ssize_t target_core_dev_pr_show_attr_res_type(
struct se_subsystem_dev *su_dev,
char *page)
SE_DEV_PR_ATTR_RO(res_type);
static ssize_t target_core_dev_pr_show_attr_res_aptpl_active(
struct se_subsystem_dev *su_dev,
char *page)
SE_DEV_PR_ATTR_RO(res_aptpl_active);
static ssize_t target_core_dev_pr_show_attr_res_aptpl_metadata(
struct se_subsystem_dev *su_dev,
char *page)
enum ;
static match_table_t tokens = ;
static ssize_t target_core_dev_pr_store_attr_res_aptpl_metadata(
struct se_subsystem_dev *su_dev,
const char *page,
size_t count)
SE_DEV_PR_ATTR(res_aptpl_metadata, S_IRUGO | S_IWUSR);
CONFIGFS_EATTR_OPS(target_core_dev_pr, se_subsystem_dev, se_dev_pr_group);
static struct configfs_attribute *target_core_dev_pr_attrs[] = ;
static struct configfs_item_operations target_core_dev_pr_ops = ;
static struct config_item_type target_core_dev_pr_cit = ;
static ssize_t target_core_show_dev_info(void *p, char *page)
static struct target_core_configfs_attribute target_core_attr_dev_info = ;
static ssize_t target_core_store_dev_control(
void *p,
const char *page,
size_t count)
static struct target_core_configfs_attribute target_core_attr_dev_control = ;
static ssize_t target_core_show_dev_alias(void *p, char *page)
static ssize_t target_core_store_dev_alias(
void *p,
const char *page,
size_t count)
static struct target_core_configfs_attribute target_core_attr_dev_alias = ;
static ssize_t target_core_show_dev_udev_path(void *p, char *page)
static ssize_t target_core_store_dev_udev_path(
void *p,
const char *page,
size_t count)
static struct target_core_configfs_attribute target_core_attr_dev_udev_path = ;
static ssize_t target_core_store_dev_enable(
void *p,
const char *page,
size_t count)
static struct target_core_configfs_attribute target_core_attr_dev_enable = ;
static ssize_t target_core_show_alua_lu_gp(void *p, char *page)
static ssize_t target_core_store_alua_lu_gp(
void *p,
const char *page,
size_t count)
static struct target_core_configfs_attribute target_core_attr_dev_alua_lu_gp = ;
static struct configfs_attribute *lio_core_dev_attrs[] = ;
static void target_core_dev_release(struct config_item *item)
static ssize_t target_core_dev_show(struct config_item *item,
struct configfs_attribute *attr,
char *page)
static ssize_t target_core_dev_store(struct config_item *item,
struct configfs_attribute *attr,
const char *page, size_t count)
static struct configfs_item_operations target_core_dev_item_ops = ;
static struct config_item_type target_core_dev_cit = ;
CONFIGFS_EATTR_STRUCT(target_core_alua_lu_gp, t10_alua_lu_gp);
#define SE_DEV_ALUA_LU_ATTR(_name, _mode)				\
static struct target_core_alua_lu_gp_attribute				\
target_core_alua_lu_gp_##_name =		\
__CONFIGFS_EATTR(_name, _mode,					\
target_core_alua_lu_gp_show_attr_##_name,			\
target_core_alua_lu_gp_store_attr_##_name);
#define SE_DEV_ALUA_LU_ATTR_RO(_name)					\
static struct target_core_alua_lu_gp_attribute				\
target_core_alua_lu_gp_##_name =		\
__CONFIGFS_EATTR_RO(_name,					\
target_core_alua_lu_gp_show_attr_##_name);
static ssize_t target_core_alua_lu_gp_show_attr_lu_gp_id(
struct t10_alua_lu_gp *lu_gp,
char *page)
static ssize_t target_core_alua_lu_gp_store_attr_lu_gp_id(
struct t10_alua_lu_gp *lu_gp,
const char *page,
size_t count)
SE_DEV_ALUA_LU_ATTR(lu_gp_id, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_lu_gp_show_attr_members(
struct t10_alua_lu_gp *lu_gp,
char *page)
SE_DEV_ALUA_LU_ATTR_RO(members);
CONFIGFS_EATTR_OPS(target_core_alua_lu_gp, t10_alua_lu_gp, lu_gp_group);
static struct configfs_attribute *target_core_alua_lu_gp_attrs[] = ;
static void target_core_alua_lu_gp_release(struct config_item *item)
static struct configfs_item_operations target_core_alua_lu_gp_ops = ;
static struct config_item_type target_core_alua_lu_gp_cit = ;
static struct config_group *target_core_alua_create_lu_gp(
struct config_group *group,
const char *name)
static void target_core_alua_drop_lu_gp(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_core_alua_lu_gps_group_ops = ;
static struct config_item_type target_core_alua_lu_gps_cit = ;
CONFIGFS_EATTR_STRUCT(target_core_alua_tg_pt_gp, t10_alua_tg_pt_gp);
#define SE_DEV_ALUA_TG_PT_ATTR(_name, _mode)				\
static struct target_core_alua_tg_pt_gp_attribute			\
target_core_alua_tg_pt_gp_##_name =		\
__CONFIGFS_EATTR(_name, _mode,					\
target_core_alua_tg_pt_gp_show_attr_##_name,			\
target_core_alua_tg_pt_gp_store_attr_##_name);
#define SE_DEV_ALUA_TG_PT_ATTR_RO(_name)				\
static struct target_core_alua_tg_pt_gp_attribute			\
target_core_alua_tg_pt_gp_##_name =		\
__CONFIGFS_EATTR_RO(_name,					\
target_core_alua_tg_pt_gp_show_attr_##_name);
static ssize_t target_core_alua_tg_pt_gp_show_attr_alua_access_state(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
static ssize_t target_core_alua_tg_pt_gp_store_attr_alua_access_state(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
SE_DEV_ALUA_TG_PT_ATTR(alua_access_state, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_tg_pt_gp_show_attr_alua_access_status(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
static ssize_t target_core_alua_tg_pt_gp_store_attr_alua_access_status(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
SE_DEV_ALUA_TG_PT_ATTR(alua_access_status, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_tg_pt_gp_show_attr_alua_access_type(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
static ssize_t target_core_alua_tg_pt_gp_store_attr_alua_access_type(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
SE_DEV_ALUA_TG_PT_ATTR(alua_access_type, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_tg_pt_gp_show_attr_alua_write_metadata(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
static ssize_t target_core_alua_tg_pt_gp_store_attr_alua_write_metadata(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
SE_DEV_ALUA_TG_PT_ATTR(alua_write_metadata, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_tg_pt_gp_show_attr_nonop_delay_msecs(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
static ssize_t target_core_alua_tg_pt_gp_store_attr_nonop_delay_msecs(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
SE_DEV_ALUA_TG_PT_ATTR(nonop_delay_msecs, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_tg_pt_gp_show_attr_trans_delay_msecs(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
static ssize_t target_core_alua_tg_pt_gp_store_attr_trans_delay_msecs(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
SE_DEV_ALUA_TG_PT_ATTR(trans_delay_msecs, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_tg_pt_gp_show_attr_preferred(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
static ssize_t target_core_alua_tg_pt_gp_store_attr_preferred(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
SE_DEV_ALUA_TG_PT_ATTR(preferred, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_tg_pt_gp_show_attr_tg_pt_gp_id(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
static ssize_t target_core_alua_tg_pt_gp_store_attr_tg_pt_gp_id(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
SE_DEV_ALUA_TG_PT_ATTR(tg_pt_gp_id, S_IRUGO | S_IWUSR);
static ssize_t target_core_alua_tg_pt_gp_show_attr_members(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
SE_DEV_ALUA_TG_PT_ATTR_RO(members);
CONFIGFS_EATTR_OPS(target_core_alua_tg_pt_gp, t10_alua_tg_pt_gp,
tg_pt_gp_group);
static struct configfs_attribute *target_core_alua_tg_pt_gp_attrs[] = ;
static void target_core_alua_tg_pt_gp_release(struct config_item *item)
static struct configfs_item_operations target_core_alua_tg_pt_gp_ops = ;
static struct config_item_type target_core_alua_tg_pt_gp_cit = ;
static struct config_group *target_core_alua_create_tg_pt_gp(
struct config_group *group,
const char *name)
static void target_core_alua_drop_tg_pt_gp(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_core_alua_tg_pt_gps_group_ops = ;
static struct config_item_type target_core_alua_tg_pt_gps_cit = ;
static struct config_item_type target_core_alua_cit = ;
static struct config_group *target_core_stat_mkdir(
struct config_group *group,
const char *name)
static void target_core_stat_rmdir(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_core_stat_group_ops = ;
static struct config_item_type target_core_stat_cit = ;
static struct config_group *target_core_make_subdev(
struct config_group *group,
const char *name)
static void target_core_drop_subdev(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_core_hba_group_ops = ;
CONFIGFS_EATTR_STRUCT(target_core_hba, se_hba);
#define SE_HBA_ATTR(_name, _mode)				\
static struct target_core_hba_attribute				\
target_core_hba_##_name =			\
__CONFIGFS_EATTR(_name, _mode,			\
target_core_hba_show_attr_##_name,		\
target_core_hba_store_attr_##_name);
#define SE_HBA_ATTR_RO(_name)					\
static struct target_core_hba_attribute				\
target_core_hba_##_name =			\
__CONFIGFS_EATTR_RO(_name,			\
target_core_hba_show_attr_##_name);
static ssize_t target_core_hba_show_attr_hba_info(
struct se_hba *hba,
char *page)
SE_HBA_ATTR_RO(hba_info);
static ssize_t target_core_hba_show_attr_hba_mode(struct se_hba *hba,
char *page)
static ssize_t target_core_hba_store_attr_hba_mode(struct se_hba *hba,
const char *page, size_t count)
SE_HBA_ATTR(hba_mode, S_IRUGO | S_IWUSR);
CONFIGFS_EATTR_OPS(target_core_hba, se_hba, hba_group);
static void target_core_hba_release(struct config_item *item)
static struct configfs_attribute *target_core_hba_attrs[] = ;
static struct configfs_item_operations target_core_hba_item_ops = ;
static struct config_item_type target_core_hba_cit = ;
static struct config_group *target_core_call_addhbatotarget(
struct config_group *group,
const char *name)
static void target_core_call_delhbafromtarget(
struct config_group *group,
struct config_item *item)
static struct configfs_group_operations target_core_group_ops = ;
static struct config_item_type target_core_cit = ;
static int __init target_core_init_configfs(void)
static void __exit target_core_exit_configfs(void)
MODULE_DESCRIPTION("Target_Core_Mod/ConfigFS");
MODULE_AUTHOR("nab@Linux-iSCSI.org");
MODULE_LICENSE("GPL");
module_init(target_core_init_configfs);
module_exit(target_core_exit_configfs);
