static void
bfad_im_get_starget_port_id(struct scsi_target *starget)
static void
bfad_im_get_starget_node_name(struct scsi_target *starget)
static void
bfad_im_get_starget_port_name(struct scsi_target *starget)
static void
bfad_im_get_host_port_id(struct Scsi_Host *shost)
static void
bfad_im_get_host_port_type(struct Scsi_Host *shost)
static void
bfad_im_get_host_port_state(struct Scsi_Host *shost)
static void
bfad_im_get_host_active_fc4s(struct Scsi_Host *shost)
static void
bfad_im_get_host_speed(struct Scsi_Host *shost)
static void
bfad_im_get_host_fabric_name(struct Scsi_Host *shost)
static struct fc_host_statistics *
bfad_im_get_stats(struct Scsi_Host *shost)
static void
bfad_im_reset_stats(struct Scsi_Host *shost)
static void
bfad_im_get_rport_loss_tmo(struct fc_rport *rport)
static void
bfad_im_set_rport_loss_tmo(struct fc_rport *rport, u32 timeout)
static int
bfad_im_vport_create(struct fc_vport *fc_vport, bool disable)
static int
bfad_im_vport_delete(struct fc_vport *fc_vport)
static int
bfad_im_vport_disable(struct fc_vport *fc_vport, bool disable)
struct fc_function_template bfad_im_fc_function_template = ;
struct fc_function_template bfad_im_vport_fc_function_template = ;
static ssize_t
bfad_im_serial_num_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_model_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_model_desc_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_node_name_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_symbolic_name_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_hw_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_drv_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_optionrom_version_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
bfad_im_fw_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_num_of_ports_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_drv_name_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
bfad_im_num_of_discovered_ports_show(struct device *dev,
struct device_attribute *attr, char *buf)
static          DEVICE_ATTR(serial_number, S_IRUGO,
bfad_im_serial_num_show, NULL);
static          DEVICE_ATTR(model, S_IRUGO, bfad_im_model_show, NULL);
static          DEVICE_ATTR(model_description, S_IRUGO,
bfad_im_model_desc_show, NULL);
static          DEVICE_ATTR(node_name, S_IRUGO, bfad_im_node_name_show, NULL);
static          DEVICE_ATTR(symbolic_name, S_IRUGO,
bfad_im_symbolic_name_show, NULL);
static          DEVICE_ATTR(hardware_version, S_IRUGO,
bfad_im_hw_version_show, NULL);
static          DEVICE_ATTR(driver_version, S_IRUGO,
bfad_im_drv_version_show, NULL);
static          DEVICE_ATTR(option_rom_version, S_IRUGO,
bfad_im_optionrom_version_show, NULL);
static          DEVICE_ATTR(firmware_version, S_IRUGO,
bfad_im_fw_version_show, NULL);
static          DEVICE_ATTR(number_of_ports, S_IRUGO,
bfad_im_num_of_ports_show, NULL);
static          DEVICE_ATTR(driver_name, S_IRUGO, bfad_im_drv_name_show, NULL);
static          DEVICE_ATTR(number_of_discovered_ports, S_IRUGO,
bfad_im_num_of_discovered_ports_show, NULL);
struct device_attribute *bfad_im_host_attrs[] = ;
struct device_attribute *bfad_im_vport_attrs[] = ;
