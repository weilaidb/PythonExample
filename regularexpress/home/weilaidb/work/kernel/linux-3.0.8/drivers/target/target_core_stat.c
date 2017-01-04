#define INITIAL_JIFFIES ((unsigned long)(unsigned int) (-300*HZ))
#define NONE		"None"
#define ISPRINT(a)   ((a >= ' ') && (a <= '~'))
#define SCSI_LU_INDEX			1
#define LU_COUNT			1
CONFIGFS_EATTR_STRUCT(target_stat_scsi_dev, se_dev_stat_grps);
#define DEV_STAT_SCSI_DEV_ATTR(_name, _mode)				\
static struct target_stat_scsi_dev_attribute				\
target_stat_scsi_dev_##_name =			\
__CONFIGFS_EATTR(_name, _mode,					\
target_stat_scsi_dev_show_attr_##_name,				\
target_stat_scsi_dev_store_attr_##_name);
#define DEV_STAT_SCSI_DEV_ATTR_RO(_name)				\
static struct target_stat_scsi_dev_attribute				\
target_stat_scsi_dev_##_name =			\
__CONFIGFS_EATTR_RO(_name,					\
target_stat_scsi_dev_show_attr_##_name);
static ssize_t target_stat_scsi_dev_show_attr_inst(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_DEV_ATTR_RO(inst);
static ssize_t target_stat_scsi_dev_show_attr_indx(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_DEV_ATTR_RO(indx);
static ssize_t target_stat_scsi_dev_show_attr_role(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_DEV_ATTR_RO(role);
static ssize_t target_stat_scsi_dev_show_attr_ports(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_DEV_ATTR_RO(ports);
CONFIGFS_EATTR_OPS(target_stat_scsi_dev, se_dev_stat_grps, scsi_dev_group);
static struct configfs_attribute *target_stat_scsi_dev_attrs[] = ;
static struct configfs_item_operations target_stat_scsi_dev_attrib_ops = ;
static struct config_item_type target_stat_scsi_dev_cit = ;
CONFIGFS_EATTR_STRUCT(target_stat_scsi_tgt_dev, se_dev_stat_grps);
#define DEV_STAT_SCSI_TGT_DEV_ATTR(_name, _mode)			\
static struct target_stat_scsi_tgt_dev_attribute			\
target_stat_scsi_tgt_dev_##_name =		\
__CONFIGFS_EATTR(_name, _mode,					\
target_stat_scsi_tgt_dev_show_attr_##_name,			\
target_stat_scsi_tgt_dev_store_attr_##_name);
#define DEV_STAT_SCSI_TGT_DEV_ATTR_RO(_name)				\
static struct target_stat_scsi_tgt_dev_attribute			\
target_stat_scsi_tgt_dev_##_name =		\
__CONFIGFS_EATTR_RO(_name,					\
target_stat_scsi_tgt_dev_show_attr_##_name);
static ssize_t target_stat_scsi_tgt_dev_show_attr_inst(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_TGT_DEV_ATTR_RO(inst);
static ssize_t target_stat_scsi_tgt_dev_show_attr_indx(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_TGT_DEV_ATTR_RO(indx);
static ssize_t target_stat_scsi_tgt_dev_show_attr_num_lus(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_TGT_DEV_ATTR_RO(num_lus);
static ssize_t target_stat_scsi_tgt_dev_show_attr_status(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_TGT_DEV_ATTR_RO(status);
static ssize_t target_stat_scsi_tgt_dev_show_attr_non_access_lus(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_TGT_DEV_ATTR_RO(non_access_lus);
static ssize_t target_stat_scsi_tgt_dev_show_attr_resets(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_TGT_DEV_ATTR_RO(resets);
CONFIGFS_EATTR_OPS(target_stat_scsi_tgt_dev, se_dev_stat_grps, scsi_tgt_dev_group);
static struct configfs_attribute *target_stat_scsi_tgt_dev_attrs[] = ;
static struct configfs_item_operations target_stat_scsi_tgt_dev_attrib_ops = ;
static struct config_item_type target_stat_scsi_tgt_dev_cit = ;
CONFIGFS_EATTR_STRUCT(target_stat_scsi_lu, se_dev_stat_grps);
#define DEV_STAT_SCSI_LU_ATTR(_name, _mode)				\
static struct target_stat_scsi_lu_attribute target_stat_scsi_lu_##_name = \
__CONFIGFS_EATTR(_name, _mode,					\
target_stat_scsi_lu_show_attr_##_name,				\
target_stat_scsi_lu_store_attr_##_name);
#define DEV_STAT_SCSI_LU_ATTR_RO(_name)					\
static struct target_stat_scsi_lu_attribute target_stat_scsi_lu_##_name = \
__CONFIGFS_EATTR_RO(_name,					\
target_stat_scsi_lu_show_attr_##_name);
static ssize_t target_stat_scsi_lu_show_attr_inst(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(inst);
static ssize_t target_stat_scsi_lu_show_attr_dev(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(dev);
static ssize_t target_stat_scsi_lu_show_attr_indx(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(indx);
static ssize_t target_stat_scsi_lu_show_attr_lun(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(lun);
static ssize_t target_stat_scsi_lu_show_attr_lu_name(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(lu_name);
static ssize_t target_stat_scsi_lu_show_attr_vend(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(vend);
static ssize_t target_stat_scsi_lu_show_attr_prod(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(prod);
static ssize_t target_stat_scsi_lu_show_attr_rev(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(rev);
static ssize_t target_stat_scsi_lu_show_attr_dev_type(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(dev_type);
static ssize_t target_stat_scsi_lu_show_attr_status(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(status);
static ssize_t target_stat_scsi_lu_show_attr_state_bit(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(state_bit);
static ssize_t target_stat_scsi_lu_show_attr_num_cmds(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(num_cmds);
static ssize_t target_stat_scsi_lu_show_attr_read_mbytes(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(read_mbytes);
static ssize_t target_stat_scsi_lu_show_attr_write_mbytes(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(write_mbytes);
static ssize_t target_stat_scsi_lu_show_attr_resets(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(resets);
static ssize_t target_stat_scsi_lu_show_attr_full_stat(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(full_stat);
static ssize_t target_stat_scsi_lu_show_attr_hs_num_cmds(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(hs_num_cmds);
static ssize_t target_stat_scsi_lu_show_attr_creation_time(
struct se_dev_stat_grps *sgrps, char *page)
DEV_STAT_SCSI_LU_ATTR_RO(creation_time);
CONFIGFS_EATTR_OPS(target_stat_scsi_lu, se_dev_stat_grps, scsi_lu_group);
static struct configfs_attribute *target_stat_scsi_lu_attrs[] = ;
static struct configfs_item_operations target_stat_scsi_lu_attrib_ops = ;
static struct config_item_type target_stat_scsi_lu_cit = ;
void target_stat_setup_dev_default_groups(struct se_subsystem_dev *se_subdev)
CONFIGFS_EATTR_STRUCT(target_stat_scsi_port, se_port_stat_grps);
#define DEV_STAT_SCSI_PORT_ATTR(_name, _mode)				\
static struct target_stat_scsi_port_attribute				\
target_stat_scsi_port_##_name =			\
__CONFIGFS_EATTR(_name, _mode,					\
target_stat_scsi_port_show_attr_##_name,			\
target_stat_scsi_port_store_attr_##_name);
#define DEV_STAT_SCSI_PORT_ATTR_RO(_name)				\
static struct target_stat_scsi_port_attribute				\
target_stat_scsi_port_##_name =			\
__CONFIGFS_EATTR_RO(_name,					\
target_stat_scsi_port_show_attr_##_name);
static ssize_t target_stat_scsi_port_show_attr_inst(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_PORT_ATTR_RO(inst);
static ssize_t target_stat_scsi_port_show_attr_dev(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_PORT_ATTR_RO(dev);
static ssize_t target_stat_scsi_port_show_attr_indx(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_PORT_ATTR_RO(indx);
static ssize_t target_stat_scsi_port_show_attr_role(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_PORT_ATTR_RO(role);
static ssize_t target_stat_scsi_port_show_attr_busy_count(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_PORT_ATTR_RO(busy_count);
CONFIGFS_EATTR_OPS(target_stat_scsi_port, se_port_stat_grps, scsi_port_group);
static struct configfs_attribute *target_stat_scsi_port_attrs[] = ;
static struct configfs_item_operations target_stat_scsi_port_attrib_ops = ;
static struct config_item_type target_stat_scsi_port_cit = ;
CONFIGFS_EATTR_STRUCT(target_stat_scsi_tgt_port, se_port_stat_grps);
#define DEV_STAT_SCSI_TGT_PORT_ATTR(_name, _mode)			\
static struct target_stat_scsi_tgt_port_attribute			\
target_stat_scsi_tgt_port_##_name =		\
__CONFIGFS_EATTR(_name, _mode,					\
target_stat_scsi_tgt_port_show_attr_##_name,			\
target_stat_scsi_tgt_port_store_attr_##_name);
#define DEV_STAT_SCSI_TGT_PORT_ATTR_RO(_name)				\
static struct target_stat_scsi_tgt_port_attribute			\
target_stat_scsi_tgt_port_##_name =		\
__CONFIGFS_EATTR_RO(_name,					\
target_stat_scsi_tgt_port_show_attr_##_name);
static ssize_t target_stat_scsi_tgt_port_show_attr_inst(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(inst);
static ssize_t target_stat_scsi_tgt_port_show_attr_dev(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(dev);
static ssize_t target_stat_scsi_tgt_port_show_attr_indx(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(indx);
static ssize_t target_stat_scsi_tgt_port_show_attr_name(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(name);
static ssize_t target_stat_scsi_tgt_port_show_attr_port_index(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(port_index);
static ssize_t target_stat_scsi_tgt_port_show_attr_in_cmds(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(in_cmds);
static ssize_t target_stat_scsi_tgt_port_show_attr_write_mbytes(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(write_mbytes);
static ssize_t target_stat_scsi_tgt_port_show_attr_read_mbytes(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(read_mbytes);
static ssize_t target_stat_scsi_tgt_port_show_attr_hs_in_cmds(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TGT_PORT_ATTR_RO(hs_in_cmds);
CONFIGFS_EATTR_OPS(target_stat_scsi_tgt_port, se_port_stat_grps,
scsi_tgt_port_group);
static struct configfs_attribute *target_stat_scsi_tgt_port_attrs[] = ;
static struct configfs_item_operations target_stat_scsi_tgt_port_attrib_ops = ;
static struct config_item_type target_stat_scsi_tgt_port_cit = ;
CONFIGFS_EATTR_STRUCT(target_stat_scsi_transport, se_port_stat_grps);
#define DEV_STAT_SCSI_TRANSPORT_ATTR(_name, _mode)			\
static struct target_stat_scsi_transport_attribute			\
target_stat_scsi_transport_##_name =		\
__CONFIGFS_EATTR(_name, _mode,					\
target_stat_scsi_transport_show_attr_##_name,			\
target_stat_scsi_transport_store_attr_##_name);
#define DEV_STAT_SCSI_TRANSPORT_ATTR_RO(_name)				\
static struct target_stat_scsi_transport_attribute			\
target_stat_scsi_transport_##_name =		\
__CONFIGFS_EATTR_RO(_name,					\
target_stat_scsi_transport_show_attr_##_name);
static ssize_t target_stat_scsi_transport_show_attr_inst(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TRANSPORT_ATTR_RO(inst);
static ssize_t target_stat_scsi_transport_show_attr_device(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TRANSPORT_ATTR_RO(device);
static ssize_t target_stat_scsi_transport_show_attr_indx(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TRANSPORT_ATTR_RO(indx);
static ssize_t target_stat_scsi_transport_show_attr_dev_name(
struct se_port_stat_grps *pgrps, char *page)
DEV_STAT_SCSI_TRANSPORT_ATTR_RO(dev_name);
CONFIGFS_EATTR_OPS(target_stat_scsi_transport, se_port_stat_grps,
scsi_transport_group);
static struct configfs_attribute *target_stat_scsi_transport_attrs[] = ;
static struct configfs_item_operations target_stat_scsi_transport_attrib_ops = ;
static struct config_item_type target_stat_scsi_transport_cit = ;
void target_stat_setup_port_default_groups(struct se_lun *lun)
CONFIGFS_EATTR_STRUCT(target_stat_scsi_auth_intr, se_ml_stat_grps);
#define DEV_STAT_SCSI_AUTH_INTR_ATTR(_name, _mode)			\
static struct target_stat_scsi_auth_intr_attribute			\
target_stat_scsi_auth_intr_##_name =		\
__CONFIGFS_EATTR(_name, _mode,					\
target_stat_scsi_auth_intr_show_attr_##_name,			\
target_stat_scsi_auth_intr_store_attr_##_name);
#define DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(_name)				\
static struct target_stat_scsi_auth_intr_attribute			\
target_stat_scsi_auth_intr_##_name =		\
__CONFIGFS_EATTR_RO(_name,					\
target_stat_scsi_auth_intr_show_attr_##_name);
static ssize_t target_stat_scsi_auth_intr_show_attr_inst(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(inst);
static ssize_t target_stat_scsi_auth_intr_show_attr_dev(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(dev);
static ssize_t target_stat_scsi_auth_intr_show_attr_port(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(port);
static ssize_t target_stat_scsi_auth_intr_show_attr_indx(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(indx);
static ssize_t target_stat_scsi_auth_intr_show_attr_dev_or_port(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(dev_or_port);
static ssize_t target_stat_scsi_auth_intr_show_attr_intr_name(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(intr_name);
static ssize_t target_stat_scsi_auth_intr_show_attr_map_indx(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(map_indx);
static ssize_t target_stat_scsi_auth_intr_show_attr_att_count(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(att_count);
static ssize_t target_stat_scsi_auth_intr_show_attr_num_cmds(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(num_cmds);
static ssize_t target_stat_scsi_auth_intr_show_attr_read_mbytes(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(read_mbytes);
static ssize_t target_stat_scsi_auth_intr_show_attr_write_mbytes(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(write_mbytes);
static ssize_t target_stat_scsi_auth_intr_show_attr_hs_num_cmds(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(hs_num_cmds);
static ssize_t target_stat_scsi_auth_intr_show_attr_creation_time(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(creation_time);
static ssize_t target_stat_scsi_auth_intr_show_attr_row_status(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_AUTH_INTR_ATTR_RO(row_status);
CONFIGFS_EATTR_OPS(target_stat_scsi_auth_intr, se_ml_stat_grps,
scsi_auth_intr_group);
static struct configfs_attribute *target_stat_scsi_auth_intr_attrs[] = ;
static struct configfs_item_operations target_stat_scsi_auth_intr_attrib_ops = ;
static struct config_item_type target_stat_scsi_auth_intr_cit = ;
CONFIGFS_EATTR_STRUCT(target_stat_scsi_att_intr_port, se_ml_stat_grps);
#define DEV_STAT_SCSI_ATTR_INTR_PORT_ATTR(_name, _mode)			\
static struct target_stat_scsi_att_intr_port_attribute			\
target_stat_scsi_att_intr_port_##_name =		\
__CONFIGFS_EATTR(_name, _mode,					\
target_stat_scsi_att_intr_port_show_attr_##_name,		\
target_stat_scsi_att_intr_port_store_attr_##_name);
#define DEV_STAT_SCSI_ATTR_INTR_PORT_ATTR_RO(_name)			\
static struct target_stat_scsi_att_intr_port_attribute			\
target_stat_scsi_att_intr_port_##_name =		\
__CONFIGFS_EATTR_RO(_name,					\
target_stat_scsi_att_intr_port_show_attr_##_name);
static ssize_t target_stat_scsi_att_intr_port_show_attr_inst(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_ATTR_INTR_PORT_ATTR_RO(inst);
static ssize_t target_stat_scsi_att_intr_port_show_attr_dev(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_ATTR_INTR_PORT_ATTR_RO(dev);
static ssize_t target_stat_scsi_att_intr_port_show_attr_port(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_ATTR_INTR_PORT_ATTR_RO(port);
static ssize_t target_stat_scsi_att_intr_port_show_attr_indx(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_ATTR_INTR_PORT_ATTR_RO(indx);
static ssize_t target_stat_scsi_att_intr_port_show_attr_port_auth_indx(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_ATTR_INTR_PORT_ATTR_RO(port_auth_indx);
static ssize_t target_stat_scsi_att_intr_port_show_attr_port_ident(
struct se_ml_stat_grps *lgrps, char *page)
DEV_STAT_SCSI_ATTR_INTR_PORT_ATTR_RO(port_ident);
CONFIGFS_EATTR_OPS(target_stat_scsi_att_intr_port, se_ml_stat_grps,
scsi_att_intr_port_group);
static struct configfs_attribute *target_stat_scsi_ath_intr_port_attrs[] = ;
static struct configfs_item_operations target_stat_scsi_att_intr_port_attrib_ops = ;
static struct config_item_type target_stat_scsi_att_intr_port_cit = ;
void target_stat_setup_mappedlun_default_groups(struct se_lun_acl *lacl)
