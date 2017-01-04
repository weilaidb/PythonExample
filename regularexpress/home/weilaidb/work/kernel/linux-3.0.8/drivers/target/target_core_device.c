static void se_dev_start(struct se_device *dev);
static void se_dev_stop(struct se_device *dev);
int transport_get_lun_for_cmd(
struct se_cmd *se_cmd,
unsigned char *cdb,
u32 unpacked_lun)
EXPORT_SYMBOL(transport_get_lun_for_cmd);
int transport_get_lun_for_tmr(
struct se_cmd *se_cmd,
u32 unpacked_lun)
EXPORT_SYMBOL(transport_get_lun_for_tmr);
struct se_dev_entry *core_get_se_deve_from_rtpi(
struct se_node_acl *nacl,
u16 rtpi)
int core_free_device_list_for_node(
struct se_node_acl *nacl,
struct se_portal_group *tpg)
void core_dec_lacl_count(struct se_node_acl *se_nacl, struct se_cmd *se_cmd)
void core_update_device_list_access(
u32 mapped_lun,
u32 lun_access,
struct se_node_acl *nacl)
int core_update_device_list_for_node(
struct se_lun *lun,
struct se_lun_acl *lun_acl,
u32 mapped_lun,
u32 lun_access,
struct se_node_acl *nacl,
struct se_portal_group *tpg,
int enable)
void core_clear_lun_from_tpg(struct se_lun *lun, struct se_portal_group *tpg)
static struct se_port *core_alloc_port(struct se_device *dev)
static void core_export_port(
struct se_device *dev,
struct se_portal_group *tpg,
struct se_port *port,
struct se_lun *lun)
static void core_release_port(struct se_device *dev, struct se_port *port)
__releases(&dev->se_port_lock) __acquires(&dev->se_port_lock)
int core_dev_export(
struct se_device *dev,
struct se_portal_group *tpg,
struct se_lun *lun)
void core_dev_unexport(
struct se_device *dev,
struct se_portal_group *tpg,
struct se_lun *lun)
int transport_core_report_lun_response(struct se_cmd *se_cmd)
void se_release_device_for_hba(struct se_device *dev)
void se_release_vpd_for_dev(struct se_device *dev)
int se_free_virtual_device(struct se_device *dev, struct se_hba *hba)
static void se_dev_start(struct se_device *dev)
static void se_dev_stop(struct se_device *dev)
int se_dev_check_online(struct se_device *dev)
int se_dev_check_shutdown(struct se_device *dev)
void se_dev_set_default_attribs(
struct se_device *dev,
struct se_dev_limits *dev_limits)
int se_dev_set_task_timeout(struct se_device *dev, u32 task_timeout)
int se_dev_set_max_unmap_lba_count(
struct se_device *dev,
u32 max_unmap_lba_count)
int se_dev_set_max_unmap_block_desc_count(
struct se_device *dev,
u32 max_unmap_block_desc_count)
int se_dev_set_unmap_granularity(
struct se_device *dev,
u32 unmap_granularity)
int se_dev_set_unmap_granularity_alignment(
struct se_device *dev,
u32 unmap_granularity_alignment)
int se_dev_set_emulate_dpo(struct se_device *dev, int flag)
int se_dev_set_emulate_fua_write(struct se_device *dev, int flag)
int se_dev_set_emulate_fua_read(struct se_device *dev, int flag)
int se_dev_set_emulate_write_cache(struct se_device *dev, int flag)
int se_dev_set_emulate_ua_intlck_ctrl(struct se_device *dev, int flag)
int se_dev_set_emulate_tas(struct se_device *dev, int flag)
int se_dev_set_emulate_tpu(struct se_device *dev, int flag)
int se_dev_set_emulate_tpws(struct se_device *dev, int flag)
int se_dev_set_enforce_pr_isids(struct se_device *dev, int flag)
int se_dev_set_queue_depth(struct se_device *dev, u32 queue_depth)
int se_dev_set_max_sectors(struct se_device *dev, u32 max_sectors)
int se_dev_set_optimal_sectors(struct se_device *dev, u32 optimal_sectors)
int se_dev_set_block_size(struct se_device *dev, u32 block_size)
struct se_lun *core_dev_add_lun(
struct se_portal_group *tpg,
struct se_hba *hba,
struct se_device *dev,
u32 lun)
int core_dev_del_lun(
struct se_portal_group *tpg,
u32 unpacked_lun)
struct se_lun *core_get_lun_from_tpg(struct se_portal_group *tpg, u32 unpacked_lun)
static struct se_lun *core_dev_get_lun(struct se_portal_group *tpg, u32 unpacked_lun)
struct se_lun_acl *core_dev_init_initiator_node_lun_acl(
struct se_portal_group *tpg,
u32 mapped_lun,
char *initiatorname,
int *ret)
int core_dev_add_initiator_node_lun_acl(
struct se_portal_group *tpg,
struct se_lun_acl *lacl,
u32 unpacked_lun,
u32 lun_access)
int core_dev_del_initiator_node_lun_acl(
struct se_portal_group *tpg,
struct se_lun *lun,
struct se_lun_acl *lacl)
void core_dev_free_initiator_node_lun_acl(
struct se_portal_group *tpg,
struct se_lun_acl *lacl)
int core_dev_setup_virtual_lun0(void)
void core_dev_release_virtual_lun0(void)
