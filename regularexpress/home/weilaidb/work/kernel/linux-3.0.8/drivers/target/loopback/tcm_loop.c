#define to_tcm_loop_hba(hba)	container_of(hba, struct tcm_loop_hba, dev)
static struct target_fabric_configfs *tcm_loop_fabric_configfs;
static struct kmem_cache *tcm_loop_cmd_cache;
static int tcm_loop_hba_no_cnt;
static struct se_cmd *tcm_loop_allocate_core_cmd(
struct tcm_loop_hba *tl_hba,
struct se_portal_group *se_tpg,
struct scsi_cmnd *sc)
static int tcm_loop_new_cmd_map(struct se_cmd *se_cmd)
static void tcm_loop_check_stop_free(struct se_cmd *se_cmd)
static void tcm_loop_deallocate_core_cmd(struct se_cmd *se_cmd)
static int tcm_loop_proc_info(struct Scsi_Host *host, char *buffer,
char **start, off_t offset,
int length, int inout)
static int tcm_loop_driver_probe(struct device *);
static int tcm_loop_driver_remove(struct device *);
static int pseudo_lld_bus_match(struct device *dev,
struct device_driver *dev_driver)
static struct bus_type tcm_loop_lld_bus = ;
static struct device_driver tcm_loop_driverfs = ;
struct device *tcm_loop_primary;
static int tcm_loop_change_queue_depth(
struct scsi_device *sdev,
int depth,
int reason)
static int tcm_loop_queuecommand(
struct Scsi_Host *sh,
struct scsi_cmnd *sc)
static int tcm_loop_device_reset(struct scsi_cmnd *sc)
static int tcm_loop_slave_alloc(struct scsi_device *sd)
static int tcm_loop_slave_configure(struct scsi_device *sd)
static struct scsi_host_template tcm_loop_driver_template = ;
static int tcm_loop_driver_probe(struct device *dev)
static int tcm_loop_driver_remove(struct device *dev)
static void tcm_loop_release_adapter(struct device *dev)
static int tcm_loop_setup_hba_bus(struct tcm_loop_hba *tl_hba, int tcm_loop_host_id)
static int tcm_loop_alloc_core_bus(void)
static void tcm_loop_release_core_bus(void)
static char *tcm_loop_get_fabric_name(void)
static u8 tcm_loop_get_fabric_proto_ident(struct se_portal_group *se_tpg)
static char *tcm_loop_get_endpoint_wwn(struct se_portal_group *se_tpg)
static u16 tcm_loop_get_tag(struct se_portal_group *se_tpg)
static u32 tcm_loop_get_default_depth(struct se_portal_group *se_tpg)
static u32 tcm_loop_get_pr_transport_id(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int *format_code,
unsigned char *buf)
static u32 tcm_loop_get_pr_transport_id_len(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int *format_code)
static char *tcm_loop_parse_pr_out_transport_id(
struct se_portal_group *se_tpg,
const char *buf,
u32 *out_tid_len,
char **port_nexus_ptr)
static int tcm_loop_check_demo_mode(struct se_portal_group *se_tpg)
static int tcm_loop_check_demo_mode_cache(struct se_portal_group *se_tpg)
static int tcm_loop_check_demo_mode_write_protect(struct se_portal_group *se_tpg)
static int tcm_loop_check_prod_mode_write_protect(struct se_portal_group *se_tpg)
static struct se_node_acl *tcm_loop_tpg_alloc_fabric_acl(
struct se_portal_group *se_tpg)
static void tcm_loop_tpg_release_fabric_acl(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl)
static u32 tcm_loop_get_inst_index(struct se_portal_group *se_tpg)
static void tcm_loop_new_cmd_failure(struct se_cmd *se_cmd)
static int tcm_loop_is_state_remove(struct se_cmd *se_cmd)
static int tcm_loop_sess_logged_in(struct se_session *se_sess)
static u32 tcm_loop_sess_get_index(struct se_session *se_sess)
static void tcm_loop_set_default_node_attributes(struct se_node_acl *se_acl)
static u32 tcm_loop_get_task_tag(struct se_cmd *se_cmd)
static int tcm_loop_get_cmd_state(struct se_cmd *se_cmd)
static int tcm_loop_shutdown_session(struct se_session *se_sess)
static void tcm_loop_close_session(struct se_session *se_sess)
;
static void tcm_loop_stop_session(
struct se_session *se_sess,
int sess_sleep,
int conn_sleep)
static void tcm_loop_fall_back_to_erl0(struct se_session *se_sess)
static int tcm_loop_write_pending(struct se_cmd *se_cmd)
static int tcm_loop_write_pending_status(struct se_cmd *se_cmd)
static int tcm_loop_queue_data_in(struct se_cmd *se_cmd)
static int tcm_loop_queue_status(struct se_cmd *se_cmd)
static int tcm_loop_queue_tm_rsp(struct se_cmd *se_cmd)
static u16 tcm_loop_set_fabric_sense_len(struct se_cmd *se_cmd, u32 sense_length)
static u16 tcm_loop_get_fabric_sense_len(void)
static char *tcm_loop_dump_proto_id(struct tcm_loop_hba *tl_hba)
static int tcm_loop_port_link(
struct se_portal_group *se_tpg,
struct se_lun *lun)
static void tcm_loop_port_unlink(
struct se_portal_group *se_tpg,
struct se_lun *se_lun)
static int tcm_loop_make_nexus(
struct tcm_loop_tpg *tl_tpg,
const char *name)
static int tcm_loop_drop_nexus(
struct tcm_loop_tpg *tpg)
static ssize_t tcm_loop_tpg_show_nexus(
struct se_portal_group *se_tpg,
char *page)
static ssize_t tcm_loop_tpg_store_nexus(
struct se_portal_group *se_tpg,
const char *page,
size_t count)
TF_TPG_BASE_ATTR(tcm_loop, nexus, S_IRUGO | S_IWUSR);
static struct configfs_attribute *tcm_loop_tpg_attrs[] = ;
struct se_portal_group *tcm_loop_make_naa_tpg(
struct se_wwn *wwn,
struct config_group *group,
const char *name)
void tcm_loop_drop_naa_tpg(
struct se_portal_group *se_tpg)
struct se_wwn *tcm_loop_make_scsi_hba(
struct target_fabric_configfs *tf,
struct config_group *group,
const char *name)
void tcm_loop_drop_scsi_hba(
struct se_wwn *wwn)
static ssize_t tcm_loop_wwn_show_attr_version(
struct target_fabric_configfs *tf,
char *page)
TF_WWN_ATTR_RO(tcm_loop, version);
static struct configfs_attribute *tcm_loop_wwn_attrs[] = ;
static int tcm_loop_register_configfs(void)
static void tcm_loop_deregister_configfs(void)
static int __init tcm_loop_fabric_init(void)
static void __exit tcm_loop_fabric_exit(void)
MODULE_DESCRIPTION("TCM loopback virtual Linux/SCSI fabric module");
MODULE_AUTHOR("Nicholas A. Bellinger <nab@risingtidesystems.com>");
MODULE_LICENSE("GPL");
module_init(tcm_loop_fabric_init);
module_exit(tcm_loop_fabric_exit);
