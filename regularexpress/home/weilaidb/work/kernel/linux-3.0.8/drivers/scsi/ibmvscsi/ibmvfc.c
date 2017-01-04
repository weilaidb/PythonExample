static unsigned int init_timeout = IBMVFC_INIT_TIMEOUT;
static unsigned int default_timeout = IBMVFC_DEFAULT_TIMEOUT;
static unsigned int max_lun = IBMVFC_MAX_LUN;
static unsigned int max_targets = IBMVFC_MAX_TARGETS;
static unsigned int max_requests = IBMVFC_MAX_REQUESTS_DEFAULT;
static unsigned int disc_threads = IBMVFC_MAX_DISC_THREADS;
static unsigned int ibmvfc_debug = IBMVFC_DEBUG;
static unsigned int log_level = IBMVFC_DEFAULT_LOG_LEVEL;
static LIST_HEAD(ibmvfc_head);
static DEFINE_SPINLOCK(ibmvfc_driver_lock);
static struct scsi_transport_template *ibmvfc_transport_template;
MODULE_DESCRIPTION("IBM Virtual Fibre Channel Driver");
MODULE_AUTHOR("Brian King <brking@linux.vnet.ibm.com>");
MODULE_LICENSE("GPL");
MODULE_VERSION(IBMVFC_DRIVER_VERSION);
module_param_named(init_timeout, init_timeout, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(init_timeout, "Initialization timeout in seconds. "
"[Default=" __stringify(IBMVFC_INIT_TIMEOUT) "]");
module_param_named(default_timeout, default_timeout, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(default_timeout,
"Default timeout in seconds for initialization and EH commands. "
"[Default=" __stringify(IBMVFC_DEFAULT_TIMEOUT) "]");
module_param_named(max_requests, max_requests, uint, S_IRUGO);
MODULE_PARM_DESC(max_requests, "Maximum requests for this adapter. "
"[Default=" __stringify(IBMVFC_MAX_REQUESTS_DEFAULT) "]");
module_param_named(max_lun, max_lun, uint, S_IRUGO);
MODULE_PARM_DESC(max_lun, "Maximum allowed LUN. "
"[Default=" __stringify(IBMVFC_MAX_LUN) "]");
module_param_named(max_targets, max_targets, uint, S_IRUGO);
MODULE_PARM_DESC(max_targets, "Maximum allowed targets. "
"[Default=" __stringify(IBMVFC_MAX_TARGETS) "]");
module_param_named(disc_threads, disc_threads, uint, S_IRUGO);
MODULE_PARM_DESC(disc_threads, "Number of device discovery threads to use. "
"[Default=" __stringify(IBMVFC_MAX_DISC_THREADS) "]");
module_param_named(debug, ibmvfc_debug, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable driver debug information. "
"[Default=" __stringify(IBMVFC_DEBUG) "]");
module_param_named(log_level, log_level, uint, 0);
MODULE_PARM_DESC(log_level, "Set to 0 - 4 for increasing verbosity of device driver. "
"[Default=" __stringify(IBMVFC_DEFAULT_LOG_LEVEL) "]");
static const struct  cmd_status [] = ;
static void ibmvfc_npiv_login(struct ibmvfc_host *);
static void ibmvfc_tgt_send_prli(struct ibmvfc_target *);
static void ibmvfc_tgt_send_plogi(struct ibmvfc_target *);
static void ibmvfc_tgt_query_target(struct ibmvfc_target *);
static void ibmvfc_npiv_logout(struct ibmvfc_host *);
static const char *unknown_error = "unknown error";
static void ibmvfc_trc_start(struct ibmvfc_event *evt)
static void ibmvfc_trc_end(struct ibmvfc_event *evt)
#define ibmvfc_trc_start(evt) do  while (0)
#define ibmvfc_trc_end(evt) do  while (0)
static int ibmvfc_get_err_index(u16 status, u16 error)
static const char *ibmvfc_get_cmd_error(u16 status, u16 error)
static int ibmvfc_get_err_result(struct ibmvfc_cmd *vfc_cmd)
static int ibmvfc_retry_cmd(u16 status, u16 error)
static const char *unknown_fc_explain = "unknown fc explain";
static const struct  ls_explain [] = ;
static const struct  gs_explain [] = ;
static const char *ibmvfc_get_ls_explain(u16 status)
static const char *ibmvfc_get_gs_explain(u16 status)
static const struct  fc_type [] = ;
static const char *unknown_fc_type = "unknown fc type";
static const char *ibmvfc_get_fc_type(u16 status)
static void ibmvfc_set_tgt_action(struct ibmvfc_target *tgt,
enum ibmvfc_target_action action)
static int ibmvfc_set_host_state(struct ibmvfc_host *vhost,
enum ibmvfc_host_state state)
static void ibmvfc_set_host_action(struct ibmvfc_host *vhost,
enum ibmvfc_host_action action)
static void ibmvfc_reinit_host(struct ibmvfc_host *vhost)
static void ibmvfc_link_down(struct ibmvfc_host *vhost,
enum ibmvfc_host_state state)
static void ibmvfc_init_host(struct ibmvfc_host *vhost)
static int ibmvfc_send_crq(struct ibmvfc_host *vhost, u64 word1, u64 word2)
static int ibmvfc_send_crq_init(struct ibmvfc_host *vhost)
static int ibmvfc_send_crq_init_complete(struct ibmvfc_host *vhost)
static void ibmvfc_release_crq_queue(struct ibmvfc_host *vhost)
static int ibmvfc_reenable_crq_queue(struct ibmvfc_host *vhost)
static int ibmvfc_reset_crq(struct ibmvfc_host *vhost)
static int ibmvfc_valid_event(struct ibmvfc_event_pool *pool,
struct ibmvfc_event *evt)
static void ibmvfc_free_event(struct ibmvfc_event *evt)
static void ibmvfc_scsi_eh_done(struct ibmvfc_event *evt)
static void ibmvfc_fail_request(struct ibmvfc_event *evt, int error_code)
static void ibmvfc_purge_requests(struct ibmvfc_host *vhost, int error_code)
static void ibmvfc_hard_reset_host(struct ibmvfc_host *vhost)
static void __ibmvfc_reset_host(struct ibmvfc_host *vhost)
static void ibmvfc_reset_host(struct ibmvfc_host *vhost)
static int ibmvfc_retry_host_init(struct ibmvfc_host *vhost)
static struct ibmvfc_target *__ibmvfc_get_target(struct scsi_target *starget)
static struct ibmvfc_target *ibmvfc_get_target(struct scsi_target *starget)
static void ibmvfc_get_host_speed(struct Scsi_Host *shost)
static void ibmvfc_get_host_port_state(struct Scsi_Host *shost)
static void ibmvfc_set_rport_dev_loss_tmo(struct fc_rport *rport, u32 timeout)
static void ibmvfc_release_tgt(struct kref *kref)
static void ibmvfc_get_starget_node_name(struct scsi_target *starget)
static void ibmvfc_get_starget_port_name(struct scsi_target *starget)
static void ibmvfc_get_starget_port_id(struct scsi_target *starget)
static int ibmvfc_wait_while_resetting(struct ibmvfc_host *vhost)
static int ibmvfc_issue_fc_host_lip(struct Scsi_Host *shost)
static void ibmvfc_gather_partition_info(struct ibmvfc_host *vhost)
static void ibmvfc_set_login_info(struct ibmvfc_host *vhost)
static int ibmvfc_init_event_pool(struct ibmvfc_host *vhost)
static void ibmvfc_free_event_pool(struct ibmvfc_host *vhost)
static struct ibmvfc_event *ibmvfc_get_event(struct ibmvfc_host *vhost)
static void ibmvfc_init_event(struct ibmvfc_event *evt,
void (*done) (struct ibmvfc_event *), u8 format)
static void ibmvfc_map_sg_list(struct scsi_cmnd *scmd, int nseg,
struct srp_direct_buf *md)
static int ibmvfc_map_sg_data(struct scsi_cmnd *scmd,
struct ibmvfc_event *evt,
struct ibmvfc_cmd *vfc_cmd, struct device *dev)
static void ibmvfc_timeout(struct ibmvfc_event *evt)
static int ibmvfc_send_event(struct ibmvfc_event *evt,
struct ibmvfc_host *vhost, unsigned long timeout)
static void ibmvfc_log_error(struct ibmvfc_event *evt)
static void ibmvfc_relogin(struct scsi_device *sdev)
static void ibmvfc_scsi_done(struct ibmvfc_event *evt)
static inline int ibmvfc_host_chkready(struct ibmvfc_host *vhost)
static int ibmvfc_queuecommand_lck(struct scsi_cmnd *cmnd,
void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(ibmvfc_queuecommand)
static void ibmvfc_sync_completion(struct ibmvfc_event *evt)
static void ibmvfc_bsg_timeout_done(struct ibmvfc_event *evt)
static int ibmvfc_bsg_timeout(struct fc_bsg_job *job)
static int ibmvfc_bsg_plogi(struct ibmvfc_host *vhost, unsigned int port_id)
static int ibmvfc_bsg_request(struct fc_bsg_job *job)
static int ibmvfc_reset_device(struct scsi_device *sdev, int type, char *desc)
static int ibmvfc_match_rport(struct ibmvfc_event *evt, void *rport)
static int ibmvfc_match_target(struct ibmvfc_event *evt, void *device)
static int ibmvfc_match_lun(struct ibmvfc_event *evt, void *device)
static int ibmvfc_wait_for_ops(struct ibmvfc_host *vhost, void *device,
int (*match) (struct ibmvfc_event *, void *))
static int ibmvfc_cancel_all(struct scsi_device *sdev, int type)
static int ibmvfc_match_key(struct ibmvfc_event *evt, void *key)
static int ibmvfc_abort_task_set(struct scsi_device *sdev)
static int ibmvfc_eh_abort_handler(struct scsi_cmnd *cmd)
static int ibmvfc_eh_device_reset_handler(struct scsi_cmnd *cmd)
static void ibmvfc_dev_cancel_all_reset(struct scsi_device *sdev, void *data)
static int ibmvfc_eh_target_reset_handler(struct scsi_cmnd *cmd)
static int ibmvfc_eh_host_reset_handler(struct scsi_cmnd *cmd)
static void ibmvfc_terminate_rport_io(struct fc_rport *rport)
static const struct ibmvfc_async_desc ae_desc [] = ;
static const struct ibmvfc_async_desc unknown_ae = ;
static const struct ibmvfc_async_desc *ibmvfc_get_ae_desc(u64 ae)
static const struct  link_desc [] = ;
static const char *ibmvfc_get_link_state(enum ibmvfc_ae_link_state state)
static void ibmvfc_handle_async(struct ibmvfc_async_crq *crq,
struct ibmvfc_host *vhost)
static void ibmvfc_handle_crq(struct ibmvfc_crq *crq, struct ibmvfc_host *vhost)
static int ibmvfc_scan_finished(struct Scsi_Host *shost, unsigned long time)
static int ibmvfc_slave_alloc(struct scsi_device *sdev)
static int ibmvfc_target_alloc(struct scsi_target *starget)
static int ibmvfc_slave_configure(struct scsi_device *sdev)
static int ibmvfc_change_queue_depth(struct scsi_device *sdev, int qdepth,
int reason)
static int ibmvfc_change_queue_type(struct scsi_device *sdev, int tag_type)
static ssize_t ibmvfc_show_host_partition_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ibmvfc_show_host_device_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ibmvfc_show_host_loc_code(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ibmvfc_show_host_drc_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ibmvfc_show_host_npiv_version(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ibmvfc_show_host_capabilities(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ibmvfc_show_log_level(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ibmvfc_store_log_level(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(partition_name, S_IRUGO, ibmvfc_show_host_partition_name, NULL);
static DEVICE_ATTR(device_name, S_IRUGO, ibmvfc_show_host_device_name, NULL);
static DEVICE_ATTR(port_loc_code, S_IRUGO, ibmvfc_show_host_loc_code, NULL);
static DEVICE_ATTR(drc_name, S_IRUGO, ibmvfc_show_host_drc_name, NULL);
static DEVICE_ATTR(npiv_version, S_IRUGO, ibmvfc_show_host_npiv_version, NULL);
static DEVICE_ATTR(capabilities, S_IRUGO, ibmvfc_show_host_capabilities, NULL);
static DEVICE_ATTR(log_level, S_IRUGO | S_IWUSR,
ibmvfc_show_log_level, ibmvfc_store_log_level);
static ssize_t ibmvfc_read_trace(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute ibmvfc_trace_attr = ;
static struct device_attribute *ibmvfc_attrs[] = ;
static struct scsi_host_template driver_template = ;
static struct ibmvfc_async_crq *ibmvfc_next_async_crq(struct ibmvfc_host *vhost)
static struct ibmvfc_crq *ibmvfc_next_crq(struct ibmvfc_host *vhost)
static irqreturn_t ibmvfc_interrupt(int irq, void *dev_instance)
static void ibmvfc_tasklet(void *data)
static void ibmvfc_init_tgt(struct ibmvfc_target *tgt,
void (*job_step) (struct ibmvfc_target *))
static int ibmvfc_retry_tgt_init(struct ibmvfc_target *tgt,
void (*job_step) (struct ibmvfc_target *))
static const struct  prli_rsp [] = ;
static int ibmvfc_get_prli_rsp(u16 flags)
static void ibmvfc_tgt_prli_done(struct ibmvfc_event *evt)
static void ibmvfc_tgt_send_prli(struct ibmvfc_target *tgt)
static void ibmvfc_tgt_plogi_done(struct ibmvfc_event *evt)
static void ibmvfc_tgt_send_plogi(struct ibmvfc_target *tgt)
static void ibmvfc_tgt_implicit_logout_done(struct ibmvfc_event *evt)
static void ibmvfc_tgt_implicit_logout(struct ibmvfc_target *tgt)
static int ibmvfc_adisc_needs_plogi(struct ibmvfc_passthru_mad *mad,
struct ibmvfc_target *tgt)
static void ibmvfc_tgt_adisc_done(struct ibmvfc_event *evt)
static void ibmvfc_init_passthru(struct ibmvfc_event *evt)
static void ibmvfc_tgt_adisc_cancel_done(struct ibmvfc_event *evt)
static void ibmvfc_adisc_timeout(struct ibmvfc_target *tgt)
static void ibmvfc_tgt_adisc(struct ibmvfc_target *tgt)
static void ibmvfc_tgt_query_target_done(struct ibmvfc_event *evt)
static void ibmvfc_tgt_query_target(struct ibmvfc_target *tgt)
static int ibmvfc_alloc_target(struct ibmvfc_host *vhost, u64 scsi_id)
static int ibmvfc_alloc_targets(struct ibmvfc_host *vhost)
static void ibmvfc_discover_targets_done(struct ibmvfc_event *evt)
static void ibmvfc_discover_targets(struct ibmvfc_host *vhost)
static void ibmvfc_npiv_login_done(struct ibmvfc_event *evt)
static void ibmvfc_npiv_login(struct ibmvfc_host *vhost)
;
static void ibmvfc_npiv_logout_done(struct ibmvfc_event *evt)
static void ibmvfc_npiv_logout(struct ibmvfc_host *vhost)
static int ibmvfc_dev_init_to_do(struct ibmvfc_host *vhost)
static int __ibmvfc_work_to_do(struct ibmvfc_host *vhost)
static int ibmvfc_work_to_do(struct ibmvfc_host *vhost)
static void ibmvfc_log_ae(struct ibmvfc_host *vhost, int events)
static void ibmvfc_tgt_add_rport(struct ibmvfc_target *tgt)
static void ibmvfc_do_work(struct ibmvfc_host *vhost)
static int ibmvfc_work(void *data)
static int ibmvfc_init_crq(struct ibmvfc_host *vhost)
static void ibmvfc_free_mem(struct ibmvfc_host *vhost)
static int ibmvfc_alloc_mem(struct ibmvfc_host *vhost)
static void ibmvfc_rport_add_thread(struct work_struct *work)
static int ibmvfc_probe(struct vio_dev *vdev, const struct vio_device_id *id)
static int ibmvfc_remove(struct vio_dev *vdev)
static int ibmvfc_resume(struct device *dev)
static unsigned long ibmvfc_get_desired_dma(struct vio_dev *vdev)
static struct vio_device_id ibmvfc_device_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, ibmvfc_device_table);
static struct dev_pm_ops ibmvfc_pm_ops = ;
static struct vio_driver ibmvfc_driver = ;
static struct fc_function_template ibmvfc_transport_functions = ;
static int __init ibmvfc_module_init(void)
static void __exit ibmvfc_module_exit(void)
module_init(ibmvfc_module_init);
module_exit(ibmvfc_module_exit);
