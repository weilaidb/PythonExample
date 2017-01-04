static int max_id = 64;
static int max_channel = 3;
static int init_timeout = 300;
static int login_timeout = 60;
static int info_timeout = 30;
static int abort_timeout = 60;
static int reset_timeout = 60;
static int max_requests = IBMVSCSI_MAX_REQUESTS_DEFAULT;
static int max_events = IBMVSCSI_MAX_REQUESTS_DEFAULT + 2;
static int fast_fail = 1;
static int client_reserve = 1;
static struct scsi_transport_template *ibmvscsi_transport_template;
#define IBMVSCSI_VERSION "1.5.9"
static struct ibmvscsi_ops *ibmvscsi_ops;
MODULE_DESCRIPTION("IBM Virtual SCSI");
MODULE_AUTHOR("Dave Boutcher");
MODULE_LICENSE("GPL");
MODULE_VERSION(IBMVSCSI_VERSION);
module_param_named(max_id, max_id, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(max_id, "Largest ID value for each channel");
module_param_named(max_channel, max_channel, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(max_channel, "Largest channel value");
module_param_named(init_timeout, init_timeout, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(init_timeout, "Initialization timeout in seconds");
module_param_named(max_requests, max_requests, int, S_IRUGO);
MODULE_PARM_DESC(max_requests, "Maximum requests for this adapter");
module_param_named(fast_fail, fast_fail, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(fast_fail, "Enable fast fail. [Default=1]");
module_param_named(client_reserve, client_reserve, int, S_IRUGO );
MODULE_PARM_DESC(client_reserve, "Attempt client managed reserve/release");
static int initialize_event_pool(struct event_pool *pool,
int size, struct ibmvscsi_host_data *hostdata)
static void release_event_pool(struct event_pool *pool,
struct ibmvscsi_host_data *hostdata)
static int valid_event_struct(struct event_pool *pool,
struct srp_event_struct *evt)
static void free_event_struct(struct event_pool *pool,
struct srp_event_struct *evt)
static struct srp_event_struct *get_event_struct(struct event_pool *pool)
static void init_event_struct(struct srp_event_struct *evt_struct,
void (*done) (struct srp_event_struct *),
u8 format,
int timeout)
static void set_srp_direction(struct scsi_cmnd *cmd,
struct srp_cmd *srp_cmd,
int numbuf)
static void unmap_cmd_data(struct srp_cmd *cmd,
struct srp_event_struct *evt_struct,
struct device *dev)
static int map_sg_list(struct scsi_cmnd *cmd, int nseg,
struct srp_direct_buf *md)
static int map_sg_data(struct scsi_cmnd *cmd,
struct srp_event_struct *evt_struct,
struct srp_cmd *srp_cmd, struct device *dev)
static int map_data_for_srp_cmd(struct scsi_cmnd *cmd,
struct srp_event_struct *evt_struct,
struct srp_cmd *srp_cmd, struct device *dev)
static void purge_requests(struct ibmvscsi_host_data *hostdata, int error_code)
static void ibmvscsi_reset_host(struct ibmvscsi_host_data *hostdata)
static void ibmvscsi_timeout(struct srp_event_struct *evt_struct)
static int ibmvscsi_send_srp_event(struct srp_event_struct *evt_struct,
struct ibmvscsi_host_data *hostdata,
unsigned long timeout)
static void handle_cmd_rsp(struct srp_event_struct *evt_struct)
static inline u16 lun_from_dev(struct scsi_device *dev)
static int ibmvscsi_queuecommand_lck(struct scsi_cmnd *cmnd,
void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(ibmvscsi_queuecommand)
static int map_persist_bufs(struct ibmvscsi_host_data *hostdata)
static void unmap_persist_bufs(struct ibmvscsi_host_data *hostdata)
static void login_rsp(struct srp_event_struct *evt_struct)
static int send_srp_login(struct ibmvscsi_host_data *hostdata)
;
static void capabilities_rsp(struct srp_event_struct *evt_struct)
static void send_mad_capabilities(struct ibmvscsi_host_data *hostdata)
;
static void fast_fail_rsp(struct srp_event_struct *evt_struct)
static int enable_fast_fail(struct ibmvscsi_host_data *hostdata)
static void adapter_info_rsp(struct srp_event_struct *evt_struct)
static void send_mad_adapter_info(struct ibmvscsi_host_data *hostdata)
;
static void init_adapter(struct ibmvscsi_host_data *hostdata)
static void sync_completion(struct srp_event_struct *evt_struct)
static int ibmvscsi_eh_abort_handler(struct scsi_cmnd *cmd)
static int ibmvscsi_eh_device_reset_handler(struct scsi_cmnd *cmd)
static int ibmvscsi_eh_host_reset_handler(struct scsi_cmnd *cmd)
void ibmvscsi_handle_crq(struct viosrp_crq *crq,
struct ibmvscsi_host_data *hostdata)
static int ibmvscsi_do_host_config(struct ibmvscsi_host_data *hostdata,
unsigned char *buffer, int length)
static int ibmvscsi_slave_configure(struct scsi_device *sdev)
static int ibmvscsi_change_queue_depth(struct scsi_device *sdev, int qdepth,
int reason)
static ssize_t show_host_vhost_loc(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ibmvscsi_host_vhost_loc = ;
static ssize_t show_host_vhost_name(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ibmvscsi_host_vhost_name = ;
static ssize_t show_host_srp_version(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ibmvscsi_host_srp_version = ;
static ssize_t show_host_partition_name(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute ibmvscsi_host_partition_name = ;
static ssize_t show_host_partition_number(struct device *dev,
struct device_attribute *attr,
char *buf)
static struct device_attribute ibmvscsi_host_partition_number = ;
static ssize_t show_host_mad_version(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ibmvscsi_host_mad_version = ;
static ssize_t show_host_os_type(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ibmvscsi_host_os_type = ;
static ssize_t show_host_config(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute ibmvscsi_host_config = ;
static struct device_attribute *ibmvscsi_attrs[] = ;
static struct scsi_host_template driver_template = ;
static unsigned long ibmvscsi_get_desired_dma(struct vio_dev *vdev)
static void ibmvscsi_do_work(struct ibmvscsi_host_data *hostdata)
static int ibmvscsi_work_to_do(struct ibmvscsi_host_data *hostdata)
static int ibmvscsi_work(void *data)
static int ibmvscsi_probe(struct vio_dev *vdev, const struct vio_device_id *id)
static int ibmvscsi_remove(struct vio_dev *vdev)
static int ibmvscsi_resume(struct device *dev)
static struct vio_device_id ibmvscsi_device_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(vio, ibmvscsi_device_table);
static struct dev_pm_ops ibmvscsi_pm_ops = ;
static struct vio_driver ibmvscsi_driver = ;
static struct srp_function_template ibmvscsi_transport_functions = ;
int __init ibmvscsi_module_init(void)
void __exit ibmvscsi_module_exit(void)
module_init(ibmvscsi_module_init);
module_exit(ibmvscsi_module_exit);
