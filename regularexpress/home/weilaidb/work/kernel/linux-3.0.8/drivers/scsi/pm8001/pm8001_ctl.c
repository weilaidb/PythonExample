static ssize_t pm8001_ctl_mpi_interface_rev_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static
DEVICE_ATTR(interface_rev, S_IRUGO, pm8001_ctl_mpi_interface_rev_show, NULL);
static ssize_t pm8001_ctl_fw_version_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(fw_version, S_IRUGO, pm8001_ctl_fw_version_show, NULL);
static ssize_t pm8001_ctl_max_out_io_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(max_out_io, S_IRUGO, pm8001_ctl_max_out_io_show, NULL);
static ssize_t pm8001_ctl_max_devices_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(max_devices, S_IRUGO, pm8001_ctl_max_devices_show, NULL);
static ssize_t pm8001_ctl_max_sg_list_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(max_sg_list, S_IRUGO, pm8001_ctl_max_sg_list_show, NULL);
#define SAS_1_0 0x1
#define SAS_1_1 0x2
#define SAS_2_0 0x4
static ssize_t
show_sas_spec_support_status(unsigned int mode, char *buf)
static ssize_t pm8001_ctl_sas_spec_support_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(sas_spec_support, S_IRUGO,
pm8001_ctl_sas_spec_support_show, NULL);
static ssize_t pm8001_ctl_host_sas_address_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(host_sas_address, S_IRUGO,
pm8001_ctl_host_sas_address_show, NULL);
static ssize_t pm8001_ctl_logging_level_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static ssize_t pm8001_ctl_logging_level_store(struct device *cdev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(logging_level, S_IRUGO | S_IWUSR,
pm8001_ctl_logging_level_show, pm8001_ctl_logging_level_store);
static ssize_t pm8001_ctl_aap_log_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(aap_log, S_IRUGO, pm8001_ctl_aap_log_show, NULL);
static ssize_t pm8001_ctl_iop_log_show(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(iop_log, S_IRUGO, pm8001_ctl_iop_log_show, NULL);
#define FLASH_CMD_NONE      0x00
#define FLASH_CMD_UPDATE    0x01
#define FLASH_CMD_SET_NVMD    0x02
struct flash_command ;
static struct flash_command flash_command_table[] =
;
struct error_fw ;
static struct error_fw flash_error_table[] =
;
static int pm8001_set_nvmd(struct pm8001_hba_info *pm8001_ha)
static int pm8001_update_flash(struct pm8001_hba_info *pm8001_ha)
static ssize_t pm8001_store_update_fw(struct device *cdev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pm8001_show_update_fw(struct device *cdev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(update_fw, S_IRUGO|S_IWUGO,
pm8001_show_update_fw, pm8001_store_update_fw);
struct device_attribute *pm8001_host_attrs[] = ;
