static int qla24xx_vport_disable(struct fc_vport *, bool);
static ssize_t
qla2x00_sysfs_read_fw_dump(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
qla2x00_sysfs_write_fw_dump(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_fw_dump_attr = ;
static ssize_t
qla2x00_sysfs_read_nvram(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
qla2x00_sysfs_write_nvram(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_nvram_attr = ;
static ssize_t
qla2x00_sysfs_read_optrom(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
qla2x00_sysfs_write_optrom(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_optrom_attr = ;
static ssize_t
qla2x00_sysfs_write_optrom_ctl(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_optrom_ctl_attr = ;
static ssize_t
qla2x00_sysfs_read_vpd(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
qla2x00_sysfs_write_vpd(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_vpd_attr = ;
static ssize_t
qla2x00_sysfs_read_sfp(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_sfp_attr = ;
static ssize_t
qla2x00_sysfs_write_reset(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_reset_attr = ;
static ssize_t
qla2x00_sysfs_write_edc(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_edc_attr = ;
static ssize_t
qla2x00_sysfs_write_edc_status(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
qla2x00_sysfs_read_edc_status(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_edc_status_attr = ;
static ssize_t
qla2x00_sysfs_read_xgmac_stats(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_xgmac_stats_attr = ;
static ssize_t
qla2x00_sysfs_read_dcbx_tlv(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_dcbx_tlv_attr = ;
static struct sysfs_entry  bin_file_entries[] = ;
void
qla2x00_alloc_sysfs_attr(scsi_qla_host_t *vha)
void
qla2x00_free_sysfs_attr(scsi_qla_host_t *vha)
static ssize_t
qla2x00_drvr_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_fw_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_serial_num_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_isp_name_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_isp_id_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_model_name_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_model_desc_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_pci_info_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_link_state_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_zio_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_zio_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
qla2x00_zio_timer_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_zio_timer_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
qla2x00_beacon_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_beacon_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
qla2x00_optrom_bios_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_optrom_efi_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_optrom_fcode_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_optrom_fw_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_optrom_gold_fw_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_total_isp_aborts_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla24xx_84xx_fw_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_mpi_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_phy_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_flash_block_size_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_vlan_id_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_vn_port_mac_address_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_fabric_param_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
qla2x00_thermal_temp_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
qla2x00_fw_state_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(driver_version, S_IRUGO, qla2x00_drvr_version_show, NULL);
static DEVICE_ATTR(fw_version, S_IRUGO, qla2x00_fw_version_show, NULL);
static DEVICE_ATTR(serial_num, S_IRUGO, qla2x00_serial_num_show, NULL);
static DEVICE_ATTR(isp_name, S_IRUGO, qla2x00_isp_name_show, NULL);
static DEVICE_ATTR(isp_id, S_IRUGO, qla2x00_isp_id_show, NULL);
static DEVICE_ATTR(model_name, S_IRUGO, qla2x00_model_name_show, NULL);
static DEVICE_ATTR(model_desc, S_IRUGO, qla2x00_model_desc_show, NULL);
static DEVICE_ATTR(pci_info, S_IRUGO, qla2x00_pci_info_show, NULL);
static DEVICE_ATTR(link_state, S_IRUGO, qla2x00_link_state_show, NULL);
static DEVICE_ATTR(zio, S_IRUGO | S_IWUSR, qla2x00_zio_show, qla2x00_zio_store);
static DEVICE_ATTR(zio_timer, S_IRUGO | S_IWUSR, qla2x00_zio_timer_show,
qla2x00_zio_timer_store);
static DEVICE_ATTR(beacon, S_IRUGO | S_IWUSR, qla2x00_beacon_show,
qla2x00_beacon_store);
static DEVICE_ATTR(optrom_bios_version, S_IRUGO,
qla2x00_optrom_bios_version_show, NULL);
static DEVICE_ATTR(optrom_efi_version, S_IRUGO,
qla2x00_optrom_efi_version_show, NULL);
static DEVICE_ATTR(optrom_fcode_version, S_IRUGO,
qla2x00_optrom_fcode_version_show, NULL);
static DEVICE_ATTR(optrom_fw_version, S_IRUGO, qla2x00_optrom_fw_version_show,
NULL);
static DEVICE_ATTR(optrom_gold_fw_version, S_IRUGO,
qla2x00_optrom_gold_fw_version_show, NULL);
static DEVICE_ATTR(84xx_fw_version, S_IRUGO, qla24xx_84xx_fw_version_show,
NULL);
static DEVICE_ATTR(total_isp_aborts, S_IRUGO, qla2x00_total_isp_aborts_show,
NULL);
static DEVICE_ATTR(mpi_version, S_IRUGO, qla2x00_mpi_version_show, NULL);
static DEVICE_ATTR(phy_version, S_IRUGO, qla2x00_phy_version_show, NULL);
static DEVICE_ATTR(flash_block_size, S_IRUGO, qla2x00_flash_block_size_show,
NULL);
static DEVICE_ATTR(vlan_id, S_IRUGO, qla2x00_vlan_id_show, NULL);
static DEVICE_ATTR(vn_port_mac_address, S_IRUGO,
qla2x00_vn_port_mac_address_show, NULL);
static DEVICE_ATTR(fabric_param, S_IRUGO, qla2x00_fabric_param_show, NULL);
static DEVICE_ATTR(fw_state, S_IRUGO, qla2x00_fw_state_show, NULL);
static DEVICE_ATTR(thermal_temp, S_IRUGO, qla2x00_thermal_temp_show, NULL);
struct device_attribute *qla2x00_host_attrs[] = ;
static void
qla2x00_get_host_port_id(struct Scsi_Host *shost)
static void
qla2x00_get_host_speed(struct Scsi_Host *shost)
static void
qla2x00_get_host_port_type(struct Scsi_Host *shost)
static void
qla2x00_get_starget_node_name(struct scsi_target *starget)
static void
qla2x00_get_starget_port_name(struct scsi_target *starget)
static void
qla2x00_get_starget_port_id(struct scsi_target *starget)
static void
qla2x00_set_rport_loss_tmo(struct fc_rport *rport, uint32_t timeout)
static void
qla2x00_dev_loss_tmo_callbk(struct fc_rport *rport)
static void
qla2x00_terminate_rport_io(struct fc_rport *rport)
static int
qla2x00_issue_lip(struct Scsi_Host *shost)
static struct fc_host_statistics *
qla2x00_get_fc_host_stats(struct Scsi_Host *shost)
static void
qla2x00_get_host_symbolic_name(struct Scsi_Host *shost)
static void
qla2x00_set_host_system_hostname(struct Scsi_Host *shost)
static void
qla2x00_get_host_fabric_name(struct Scsi_Host *shost)
static void
qla2x00_get_host_port_state(struct Scsi_Host *shost)
static int
qla24xx_vport_create(struct fc_vport *fc_vport, bool disable)
static int
qla24xx_vport_delete(struct fc_vport *fc_vport)
static int
qla24xx_vport_disable(struct fc_vport *fc_vport, bool disable)
struct fc_function_template qla2xxx_transport_functions = ;
struct fc_function_template qla2xxx_transport_vport_functions = ;
void
qla2x00_init_host_attr(scsi_qla_host_t *vha)
