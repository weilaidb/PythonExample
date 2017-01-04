static DEFINE_MUTEX(_ctl_mutex);
static struct fasync_struct *async_queue;
static DECLARE_WAIT_QUEUE_HEAD(ctl_poll_wait);
static int _ctl_send_release(struct MPT2SAS_ADAPTER *ioc, u8 buffer_type,
u8 *issue_reset);
enum block_state ;
static struct _sas_device *
_ctl_sas_device_find_by_handle(struct MPT2SAS_ADAPTER *ioc, u16 handle)
static void
_ctl_display_some_debug(struct MPT2SAS_ADAPTER *ioc, u16 smid,
char *calling_function_name, MPI2DefaultReply_t *mpi_reply)
u8
mpt2sas_ctl_done(struct MPT2SAS_ADAPTER *ioc, u16 smid, u8 msix_index,
u32 reply)
static int
_ctl_check_event_type(struct MPT2SAS_ADAPTER *ioc, u16 event)
void
mpt2sas_ctl_add_to_event_log(struct MPT2SAS_ADAPTER *ioc,
Mpi2EventNotificationReply_t *mpi_reply)
u8
mpt2sas_ctl_event_callback(struct MPT2SAS_ADAPTER *ioc, u8 msix_index,
u32 reply)
static int
_ctl_verify_adapter(int ioc_number, struct MPT2SAS_ADAPTER **iocpp)
void
mpt2sas_ctl_reset_handler(struct MPT2SAS_ADAPTER *ioc, int reset_phase)
static int
_ctl_fasync(int fd, struct file *filep, int mode)
static int
_ctl_release(struct inode *inode, struct file *filep)
static unsigned int
_ctl_poll(struct file *filep, poll_table *wait)
static int
_ctl_set_task_mid(struct MPT2SAS_ADAPTER *ioc, struct mpt2_ioctl_command *karg,
Mpi2SCSITaskManagementRequest_t *tm_request)
static long
_ctl_do_mpt_command(struct MPT2SAS_ADAPTER *ioc,
struct mpt2_ioctl_command karg, void __user *mf, enum block_state state)
static long
_ctl_getiocinfo(void __user *arg)
static long
_ctl_eventquery(void __user *arg)
static long
_ctl_eventenable(void __user *arg)
static long
_ctl_eventreport(void __user *arg)
static long
_ctl_do_reset(void __user *arg)
static int
_ctl_btdh_search_sas_device(struct MPT2SAS_ADAPTER *ioc,
struct mpt2_ioctl_btdh_mapping *btdh)
static int
_ctl_btdh_search_raid_device(struct MPT2SAS_ADAPTER *ioc,
struct mpt2_ioctl_btdh_mapping *btdh)
static long
_ctl_btdh_mapping(void __user *arg)
static u8
_ctl_diag_capability(struct MPT2SAS_ADAPTER *ioc, u8 buffer_type)
static long
_ctl_diag_register_2(struct MPT2SAS_ADAPTER *ioc,
struct mpt2_diag_register *diag_register)
void
mpt2sas_enable_diag_buffer(struct MPT2SAS_ADAPTER *ioc, u8 bits_to_register)
static long
_ctl_diag_register(void __user *arg, enum block_state state)
static long
_ctl_diag_unregister(void __user *arg)
static long
_ctl_diag_query(void __user *arg)
static int
_ctl_send_release(struct MPT2SAS_ADAPTER *ioc, u8 buffer_type, u8 *issue_reset)
static long
_ctl_diag_release(void __user *arg, enum block_state state)
static long
_ctl_diag_read_buffer(void __user *arg, enum block_state state)
static long
_ctl_ioctl_main(struct file *file, unsigned int cmd, void __user *arg)
static long
_ctl_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long
_ctl_compat_mpt_command(struct file *file, unsigned cmd, unsigned long arg)
static long
_ctl_ioctl_compat(struct file *file, unsigned cmd, unsigned long arg)
static ssize_t
_ctl_version_fw_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_fw, S_IRUGO, _ctl_version_fw_show, NULL);
static ssize_t
_ctl_version_bios_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_bios, S_IRUGO, _ctl_version_bios_show, NULL);
static ssize_t
_ctl_version_mpi_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_mpi, S_IRUGO, _ctl_version_mpi_show, NULL);
static ssize_t
_ctl_version_product_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_product, S_IRUGO,
_ctl_version_product_show, NULL);
static ssize_t
_ctl_version_nvdata_persistent_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(version_nvdata_persistent, S_IRUGO,
_ctl_version_nvdata_persistent_show, NULL);
static ssize_t
_ctl_version_nvdata_default_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(version_nvdata_default, S_IRUGO,
_ctl_version_nvdata_default_show, NULL);
static ssize_t
_ctl_board_name_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(board_name, S_IRUGO, _ctl_board_name_show, NULL);
static ssize_t
_ctl_board_assembly_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(board_assembly, S_IRUGO,
_ctl_board_assembly_show, NULL);
static ssize_t
_ctl_board_tracer_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(board_tracer, S_IRUGO,
_ctl_board_tracer_show, NULL);
static ssize_t
_ctl_io_delay_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(io_delay, S_IRUGO,
_ctl_io_delay_show, NULL);
static ssize_t
_ctl_device_delay_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(device_delay, S_IRUGO,
_ctl_device_delay_show, NULL);
static ssize_t
_ctl_fw_queue_depth_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(fw_queue_depth, S_IRUGO,
_ctl_fw_queue_depth_show, NULL);
static ssize_t
_ctl_host_sas_address_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(host_sas_address, S_IRUGO,
_ctl_host_sas_address_show, NULL);
static ssize_t
_ctl_logging_level_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static ssize_t
_ctl_logging_level_store(struct device *cdev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(logging_level, S_IRUGO | S_IWUSR,
_ctl_logging_level_show, _ctl_logging_level_store);
static ssize_t
_ctl_fwfault_debug_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t
_ctl_fwfault_debug_store(struct device *cdev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(fwfault_debug, S_IRUGO | S_IWUSR,
_ctl_fwfault_debug_show, _ctl_fwfault_debug_store);
static ssize_t
_ctl_ioc_reset_count_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ioc_reset_count, S_IRUGO,
_ctl_ioc_reset_count_show, NULL);
struct DIAG_BUFFER_START ;
static ssize_t
_ctl_host_trace_buffer_size_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(host_trace_buffer_size, S_IRUGO,
_ctl_host_trace_buffer_size_show, NULL);
static ssize_t
_ctl_host_trace_buffer_show(struct device *cdev, struct device_attribute *attr,
char *buf)
static ssize_t
_ctl_host_trace_buffer_store(struct device *cdev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(host_trace_buffer, S_IRUGO | S_IWUSR,
_ctl_host_trace_buffer_show, _ctl_host_trace_buffer_store);
static ssize_t
_ctl_host_trace_buffer_enable_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t
_ctl_host_trace_buffer_enable_store(struct device *cdev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(host_trace_buffer_enable, S_IRUGO | S_IWUSR,
_ctl_host_trace_buffer_enable_show, _ctl_host_trace_buffer_enable_store);
struct device_attribute *mpt2sas_host_attrs[] = ;
static ssize_t
_ctl_device_sas_address_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(sas_address, S_IRUGO, _ctl_device_sas_address_show, NULL);
static ssize_t
_ctl_device_handle_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(sas_device_handle, S_IRUGO, _ctl_device_handle_show, NULL);
struct device_attribute *mpt2sas_dev_attrs[] = ;
static const struct file_operations ctl_fops = ;
static struct miscdevice ctl_dev = ;
void
mpt2sas_ctl_init(void)
void
mpt2sas_ctl_exit(void)
