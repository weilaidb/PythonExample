#define LPFC_DEF_DEVLOSS_TMO 30
#define LPFC_MIN_DEVLOSS_TMO 1
#define LPFC_MAX_DEVLOSS_TMO 255
static void
lpfc_jedec_to_ascii(int incr, char hdw[])
static ssize_t
lpfc_drvr_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_enable_fip_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_bg_info_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_bg_guard_err_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_bg_apptag_err_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_bg_reftag_err_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_info_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_serialnum_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_temp_sensor_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_modeldesc_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_modelname_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_programtype_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_mlomgmt_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
lpfc_vportnum_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_fwrev_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_hdw_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
lpfc_option_rom_version_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_link_state_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_link_state_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
lpfc_num_discovered_ports_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int
lpfc_issue_lip(struct Scsi_Host *shost)
static int
lpfc_do_offline(struct lpfc_hba *phba, uint32_t type)
int
lpfc_selective_reset(struct lpfc_hba *phba)
static ssize_t
lpfc_issue_reset(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int
lpfc_sli4_pdev_status_reg_wait(struct lpfc_hba *phba)
static ssize_t
lpfc_sli4_pdev_reg_request(struct lpfc_hba *phba, uint32_t opcode)
static ssize_t
lpfc_nport_evt_cnt_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_board_mode_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_board_mode_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int
lpfc_get_hba_info(struct lpfc_hba *phba,
uint32_t *mxri, uint32_t *axri,
uint32_t *mrpi, uint32_t *arpi,
uint32_t *mvpi, uint32_t *avpi)
static ssize_t
lpfc_max_rpi_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_used_rpi_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_max_xri_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_used_xri_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_max_vpi_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_used_vpi_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_npiv_info_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_poll_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_poll_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
lpfc_fips_level_show(struct device *dev,  struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_fips_rev_show(struct device *dev,  struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_dss_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_sriov_hw_max_virtfn_show(struct device *dev,
struct device_attribute *attr,
char *buf)
#define lpfc_param_show(attr)	\
static ssize_t \
lpfc_##attr##_show(struct device *dev, struct device_attribute *attr, \
char *buf) \
#define lpfc_param_hex_show(attr)	\
static ssize_t \
lpfc_##attr##_show(struct device *dev, struct device_attribute *attr, \
char *buf) \
#define lpfc_param_init(attr, default, minval, maxval)	\
static int \
lpfc_##attr##_init(struct lpfc_hba *phba, uint val) \
#define lpfc_param_set(attr, default, minval, maxval)	\
static int \
lpfc_##attr##_set(struct lpfc_hba *phba, uint val) \
#define lpfc_param_store(attr)	\
static ssize_t \
lpfc_##attr##_store(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
#define lpfc_vport_param_show(attr)	\
static ssize_t \
lpfc_##attr##_show(struct device *dev, struct device_attribute *attr, \
char *buf) \
#define lpfc_vport_param_hex_show(attr)	\
static ssize_t \
lpfc_##attr##_show(struct device *dev, struct device_attribute *attr, \
char *buf) \
#define lpfc_vport_param_init(attr, default, minval, maxval)	\
static int \
lpfc_##attr##_init(struct lpfc_vport *vport, uint val) \
#define lpfc_vport_param_set(attr, default, minval, maxval)	\
static int \
lpfc_##attr##_set(struct lpfc_vport *vport, uint val) \
#define lpfc_vport_param_store(attr)	\
static ssize_t \
lpfc_##attr##_store(struct device *dev, struct device_attribute *attr, \
const char *buf, size_t count) \
#define LPFC_ATTR(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_param_init(name, defval, minval, maxval)
#define LPFC_ATTR_R(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_param_show(name)\
lpfc_param_init(name, defval, minval, maxval)\
static DEVICE_ATTR(lpfc_##name, S_IRUGO , lpfc_##name##_show, NULL)
#define LPFC_ATTR_RW(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_param_show(name)\
lpfc_param_init(name, defval, minval, maxval)\
lpfc_param_set(name, defval, minval, maxval)\
lpfc_param_store(name)\
static DEVICE_ATTR(lpfc_##name, S_IRUGO | S_IWUSR,\
lpfc_##name##_show, lpfc_##name##_store)
#define LPFC_ATTR_HEX_R(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_param_hex_show(name)\
lpfc_param_init(name, defval, minval, maxval)\
static DEVICE_ATTR(lpfc_##name, S_IRUGO , lpfc_##name##_show, NULL)
#define LPFC_ATTR_HEX_RW(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_param_hex_show(name)\
lpfc_param_init(name, defval, minval, maxval)\
lpfc_param_set(name, defval, minval, maxval)\
lpfc_param_store(name)\
static DEVICE_ATTR(lpfc_##name, S_IRUGO | S_IWUSR,\
lpfc_##name##_show, lpfc_##name##_store)
#define LPFC_VPORT_ATTR(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_vport_param_init(name, defval, minval, maxval)
#define LPFC_VPORT_ATTR_R(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_vport_param_show(name)\
lpfc_vport_param_init(name, defval, minval, maxval)\
static DEVICE_ATTR(lpfc_##name, S_IRUGO , lpfc_##name##_show, NULL)
#define LPFC_VPORT_ATTR_RW(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_vport_param_show(name)\
lpfc_vport_param_init(name, defval, minval, maxval)\
lpfc_vport_param_set(name, defval, minval, maxval)\
lpfc_vport_param_store(name)\
static DEVICE_ATTR(lpfc_##name, S_IRUGO | S_IWUSR,\
lpfc_##name##_show, lpfc_##name##_store)
#define LPFC_VPORT_ATTR_HEX_R(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_vport_param_hex_show(name)\
lpfc_vport_param_init(name, defval, minval, maxval)\
static DEVICE_ATTR(lpfc_##name, S_IRUGO , lpfc_##name##_show, NULL)
#define LPFC_VPORT_ATTR_HEX_RW(name, defval, minval, maxval, desc) \
static uint lpfc_##name = defval;\
module_param(lpfc_##name, uint, S_IRUGO);\
MODULE_PARM_DESC(lpfc_##name, desc);\
lpfc_vport_param_hex_show(name)\
lpfc_vport_param_init(name, defval, minval, maxval)\
lpfc_vport_param_set(name, defval, minval, maxval)\
lpfc_vport_param_store(name)\
static DEVICE_ATTR(lpfc_##name, S_IRUGO | S_IWUSR,\
lpfc_##name##_show, lpfc_##name##_store)
static DEVICE_ATTR(bg_info, S_IRUGO, lpfc_bg_info_show, NULL);
static DEVICE_ATTR(bg_guard_err, S_IRUGO, lpfc_bg_guard_err_show, NULL);
static DEVICE_ATTR(bg_apptag_err, S_IRUGO, lpfc_bg_apptag_err_show, NULL);
static DEVICE_ATTR(bg_reftag_err, S_IRUGO, lpfc_bg_reftag_err_show, NULL);
static DEVICE_ATTR(info, S_IRUGO, lpfc_info_show, NULL);
static DEVICE_ATTR(serialnum, S_IRUGO, lpfc_serialnum_show, NULL);
static DEVICE_ATTR(modeldesc, S_IRUGO, lpfc_modeldesc_show, NULL);
static DEVICE_ATTR(modelname, S_IRUGO, lpfc_modelname_show, NULL);
static DEVICE_ATTR(programtype, S_IRUGO, lpfc_programtype_show, NULL);
static DEVICE_ATTR(portnum, S_IRUGO, lpfc_vportnum_show, NULL);
static DEVICE_ATTR(fwrev, S_IRUGO, lpfc_fwrev_show, NULL);
static DEVICE_ATTR(hdw, S_IRUGO, lpfc_hdw_show, NULL);
static DEVICE_ATTR(link_state, S_IRUGO | S_IWUSR, lpfc_link_state_show,
lpfc_link_state_store);
static DEVICE_ATTR(option_rom_version, S_IRUGO,
lpfc_option_rom_version_show, NULL);
static DEVICE_ATTR(num_discovered_ports, S_IRUGO,
lpfc_num_discovered_ports_show, NULL);
static DEVICE_ATTR(menlo_mgmt_mode, S_IRUGO, lpfc_mlomgmt_show, NULL);
static DEVICE_ATTR(nport_evt_cnt, S_IRUGO, lpfc_nport_evt_cnt_show, NULL);
static DEVICE_ATTR(lpfc_drvr_version, S_IRUGO, lpfc_drvr_version_show, NULL);
static DEVICE_ATTR(lpfc_enable_fip, S_IRUGO, lpfc_enable_fip_show, NULL);
static DEVICE_ATTR(board_mode, S_IRUGO | S_IWUSR,
lpfc_board_mode_show, lpfc_board_mode_store);
static DEVICE_ATTR(issue_reset, S_IWUSR, NULL, lpfc_issue_reset);
static DEVICE_ATTR(max_vpi, S_IRUGO, lpfc_max_vpi_show, NULL);
static DEVICE_ATTR(used_vpi, S_IRUGO, lpfc_used_vpi_show, NULL);
static DEVICE_ATTR(max_rpi, S_IRUGO, lpfc_max_rpi_show, NULL);
static DEVICE_ATTR(used_rpi, S_IRUGO, lpfc_used_rpi_show, NULL);
static DEVICE_ATTR(max_xri, S_IRUGO, lpfc_max_xri_show, NULL);
static DEVICE_ATTR(used_xri, S_IRUGO, lpfc_used_xri_show, NULL);
static DEVICE_ATTR(npiv_info, S_IRUGO, lpfc_npiv_info_show, NULL);
static DEVICE_ATTR(lpfc_temp_sensor, S_IRUGO, lpfc_temp_sensor_show, NULL);
static DEVICE_ATTR(lpfc_fips_level, S_IRUGO, lpfc_fips_level_show, NULL);
static DEVICE_ATTR(lpfc_fips_rev, S_IRUGO, lpfc_fips_rev_show, NULL);
static DEVICE_ATTR(lpfc_dss, S_IRUGO, lpfc_dss_show, NULL);
static DEVICE_ATTR(lpfc_sriov_hw_max_virtfn, S_IRUGO,
lpfc_sriov_hw_max_virtfn_show, NULL);
static char *lpfc_soft_wwn_key = "C99G71SL8032A";
static ssize_t
lpfc_soft_wwn_enable_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(lpfc_soft_wwn_enable, S_IWUSR, NULL,
lpfc_soft_wwn_enable_store);
static ssize_t
lpfc_soft_wwpn_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_soft_wwpn_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(lpfc_soft_wwpn, S_IRUGO | S_IWUSR,\
lpfc_soft_wwpn_show, lpfc_soft_wwpn_store);
static ssize_t
lpfc_soft_wwnn_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
lpfc_soft_wwnn_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(lpfc_soft_wwnn, S_IRUGO | S_IWUSR,\
lpfc_soft_wwnn_show, lpfc_soft_wwnn_store);
static int lpfc_poll = 0;
module_param(lpfc_poll, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_poll, "FCP ring polling mode control:"
" 0 - none,"
" 1 - poll with interrupts enabled"
" 3 - poll and disable FCP ring interrupts");
static DEVICE_ATTR(lpfc_poll, S_IRUGO | S_IWUSR,
lpfc_poll_show, lpfc_poll_store);
int  lpfc_sli_mode = 0;
module_param(lpfc_sli_mode, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_sli_mode, "SLI mode selector:"
" 0 - auto (SLI-3 if supported),"
" 2 - select SLI-2 even on SLI-3 capable HBAs,"
" 3 - select SLI-3");
int lpfc_enable_npiv = 1;
module_param(lpfc_enable_npiv, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_enable_npiv, "Enable NPIV functionality");
lpfc_param_show(enable_npiv);
lpfc_param_init(enable_npiv, 1, 0, 1);
static DEVICE_ATTR(lpfc_enable_npiv, S_IRUGO, lpfc_enable_npiv_show, NULL);
int lpfc_enable_rrq;
module_param(lpfc_enable_rrq, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_enable_rrq, "Enable RRQ functionality");
lpfc_param_show(enable_rrq);
lpfc_param_init(enable_rrq, 0, 0, 1);
static DEVICE_ATTR(lpfc_enable_rrq, S_IRUGO, lpfc_enable_rrq_show, NULL);
LPFC_ATTR_R(suppress_link_up, LPFC_INITIALIZE_LINK, LPFC_INITIALIZE_LINK,
LPFC_DELAY_INIT_LINK_INDEFINITELY,
"Suppress Link Up at initialization");
static ssize_t
lpfc_iocb_hw_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(iocb_hw, S_IRUGO,
lpfc_iocb_hw_show, NULL);
static ssize_t
lpfc_txq_hw_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(txq_hw, S_IRUGO,
lpfc_txq_hw_show, NULL);
static ssize_t
lpfc_txcmplq_hw_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(txcmplq_hw, S_IRUGO,
lpfc_txcmplq_hw_show, NULL);
int lpfc_iocb_cnt = 2;
module_param(lpfc_iocb_cnt, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_iocb_cnt,
"Number of IOCBs alloc for ELS, CT, and ABTS: 1k to 5k IOCBs");
lpfc_param_show(iocb_cnt);
lpfc_param_init(iocb_cnt, 2, 1, 5);
static DEVICE_ATTR(lpfc_iocb_cnt, S_IRUGO,
lpfc_iocb_cnt_show, NULL);
static int lpfc_nodev_tmo = LPFC_DEF_DEVLOSS_TMO;
static int lpfc_devloss_tmo = LPFC_DEF_DEVLOSS_TMO;
module_param(lpfc_nodev_tmo, int, 0);
MODULE_PARM_DESC(lpfc_nodev_tmo,
"Seconds driver will hold I/O waiting "
"for a device to come back");
static ssize_t
lpfc_nodev_tmo_show(struct device *dev, struct device_attribute *attr,
char *buf)
static int
lpfc_nodev_tmo_init(struct lpfc_vport *vport, int val)
static void
lpfc_update_rport_devloss_tmo(struct lpfc_vport *vport)
static int
lpfc_nodev_tmo_set(struct lpfc_vport *vport, int val)
lpfc_vport_param_store(nodev_tmo)
static DEVICE_ATTR(lpfc_nodev_tmo, S_IRUGO | S_IWUSR,
lpfc_nodev_tmo_show, lpfc_nodev_tmo_store);
module_param(lpfc_devloss_tmo, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_devloss_tmo,
"Seconds driver will hold I/O waiting "
"for a device to come back");
lpfc_vport_param_init(devloss_tmo, LPFC_DEF_DEVLOSS_TMO,
LPFC_MIN_DEVLOSS_TMO, LPFC_MAX_DEVLOSS_TMO)
lpfc_vport_param_show(devloss_tmo)
static int
lpfc_devloss_tmo_set(struct lpfc_vport *vport, int val)
lpfc_vport_param_store(devloss_tmo)
static DEVICE_ATTR(lpfc_devloss_tmo, S_IRUGO | S_IWUSR,
lpfc_devloss_tmo_show, lpfc_devloss_tmo_store);
LPFC_VPORT_ATTR_HEX_RW(log_verbose, 0x0, 0x0, 0xffffffff,
"Verbose logging bit-mask");
LPFC_VPORT_ATTR_R(enable_da_id, 0, 0, 1,
"Deregister nameserver objects before LOGO");
LPFC_VPORT_ATTR_R(lun_queue_depth, 30, 1, 128,
"Max number of FCP commands we can queue to a specific LUN");
LPFC_VPORT_ATTR_R(tgt_queue_depth, 65535, 10, 65535,
"Max number of FCP commands we can queue to a specific target port");
LPFC_ATTR_R(hba_queue_depth, 8192, 32, 8192,
"Max number of FCP commands we can queue to a lpfc HBA");
LPFC_VPORT_ATTR_R(peer_port_login, 0, 0, 1,
"Allow peer ports on the same physical port to login to each "
"other.");
static int lpfc_restrict_login = 1;
module_param(lpfc_restrict_login, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_restrict_login,
"Restrict virtual ports login to remote initiators.");
lpfc_vport_param_show(restrict_login);
static int
lpfc_restrict_login_init(struct lpfc_vport *vport, int val)
static int
lpfc_restrict_login_set(struct lpfc_vport *vport, int val)
lpfc_vport_param_store(restrict_login);
static DEVICE_ATTR(lpfc_restrict_login, S_IRUGO | S_IWUSR,
lpfc_restrict_login_show, lpfc_restrict_login_store);
LPFC_VPORT_ATTR_R(scan_down, 1, 0, 1,
"Start scanning for devices from highest ALPA to lowest");
static ssize_t
lpfc_topology_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int lpfc_topology = 0;
module_param(lpfc_topology, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_topology, "Select Fibre Channel topology");
lpfc_param_show(topology)
lpfc_param_init(topology, 0, 0, 6)
static DEVICE_ATTR(lpfc_topology, S_IRUGO | S_IWUSR,
lpfc_topology_show, lpfc_topology_store);
static ssize_t
lpfc_static_vport_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(lpfc_static_vport, S_IRUGO,
lpfc_static_vport_show, NULL);
static ssize_t
lpfc_stat_data_ctrl_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
lpfc_stat_data_ctrl_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(lpfc_stat_data_ctrl, S_IRUGO | S_IWUSR,
lpfc_stat_data_ctrl_show, lpfc_stat_data_ctrl_store);
#define STAT_DATA_SIZE_PER_TARGET(NUM_BUCKETS) ((NUM_BUCKETS) * 11 + 18)
#define MAX_STAT_DATA_SIZE_PER_TARGET \
STAT_DATA_SIZE_PER_TARGET(LPFC_MAX_BUCKET_COUNT)
static ssize_t
sysfs_drvr_stat_data_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_drvr_stat_data_attr = ;
static ssize_t
lpfc_link_speed_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int lpfc_link_speed = 0;
module_param(lpfc_link_speed, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_link_speed, "Select link speed");
lpfc_param_show(link_speed)
static int
lpfc_link_speed_init(struct lpfc_hba *phba, int val)
static DEVICE_ATTR(lpfc_link_speed, S_IRUGO | S_IWUSR,
lpfc_link_speed_show, lpfc_link_speed_store);
static ssize_t
lpfc_aer_support_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int lpfc_aer_support = 1;
module_param(lpfc_aer_support, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_aer_support, "Enable PCIe device AER support");
lpfc_param_show(aer_support)
static int
lpfc_aer_support_init(struct lpfc_hba *phba, int val)
static DEVICE_ATTR(lpfc_aer_support, S_IRUGO | S_IWUSR,
lpfc_aer_support_show, lpfc_aer_support_store);
static ssize_t
lpfc_aer_cleanup_state(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(lpfc_aer_state_cleanup, S_IWUSR, NULL,
lpfc_aer_cleanup_state);
static ssize_t
lpfc_sriov_nr_virtfn_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int lpfc_sriov_nr_virtfn = LPFC_DEF_VFN_PER_PFN;
module_param(lpfc_sriov_nr_virtfn, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(lpfc_sriov_nr_virtfn, "Enable PCIe device SR-IOV virtual fn");
lpfc_param_show(sriov_nr_virtfn)
static int
lpfc_sriov_nr_virtfn_init(struct lpfc_hba *phba, int val)
static DEVICE_ATTR(lpfc_sriov_nr_virtfn, S_IRUGO | S_IWUSR,
lpfc_sriov_nr_virtfn_show, lpfc_sriov_nr_virtfn_store);
LPFC_VPORT_ATTR_R(fcp_class, 3, 2, 3,
"Select Fibre Channel class of service for FCP sequences");
LPFC_VPORT_ATTR_RW(use_adisc, 0, 0, 1,
"Use ADISC on rediscovery to authenticate FCP devices");
static int lpfc_max_scsicmpl_time;
module_param(lpfc_max_scsicmpl_time, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_max_scsicmpl_time,
"Use command completion time to control queue depth");
lpfc_vport_param_show(max_scsicmpl_time);
lpfc_vport_param_init(max_scsicmpl_time, 0, 0, 60000);
static int
lpfc_max_scsicmpl_time_set(struct lpfc_vport *vport, int val)
lpfc_vport_param_store(max_scsicmpl_time);
static DEVICE_ATTR(lpfc_max_scsicmpl_time, S_IRUGO | S_IWUSR,
lpfc_max_scsicmpl_time_show,
lpfc_max_scsicmpl_time_store);
LPFC_ATTR_R(ack0, 0, 0, 1, "Enable ACK0 support");
LPFC_ATTR_RW(cr_delay, 0, 0, 63, "A count of milliseconds after which an "
"interrupt response is generated");
LPFC_ATTR_RW(cr_count, 1, 1, 255, "A count of I/O completions after which an "
"interrupt response is generated");
LPFC_ATTR_R(multi_ring_support, 1, 1, 2, "Determines number of primary "
"SLI rings to spread IOCB entries across");
LPFC_ATTR_R(multi_ring_rctl, FC_RCTL_DD_UNSOL_DATA, 1,
255, "Identifies RCTL for additional ring configuration");
LPFC_ATTR_R(multi_ring_type, FC_TYPE_IP, 1,
255, "Identifies TYPE for additional ring configuration");
LPFC_VPORT_ATTR_RW(fdmi_on, 0, 0, 2, "Enable FDMI support");
LPFC_VPORT_ATTR(discovery_threads, 32, 1, 64, "Maximum number of ELS commands "
"during discovery");
LPFC_VPORT_ATTR_R(max_luns, 255, 0, 65535, "Maximum allowed LUN");
LPFC_ATTR_RW(poll_tmo, 10, 1, 255,
"Milliseconds driver will wait between polling FCP ring");
LPFC_ATTR_R(use_msi, 2, 0, 2, "Use Message Signaled Interrupts (1) or "
"MSI-X (2), if possible");
LPFC_ATTR_R(fcp_imax, LPFC_FP_DEF_IMAX, LPFC_MIM_IMAX, LPFC_DMULT_CONST,
"Set the maximum number of fast-path FCP interrupts per second");
LPFC_ATTR_R(fcp_wq_count, LPFC_FP_WQN_DEF, LPFC_FP_WQN_MIN, LPFC_FP_WQN_MAX,
"Set the number of fast-path FCP work queues, if possible");
LPFC_ATTR_R(fcp_eq_count, LPFC_FP_EQN_DEF, LPFC_FP_EQN_MIN, LPFC_FP_EQN_MAX,
"Set the number of fast-path FCP event queues, if possible");
LPFC_ATTR_R(enable_hba_reset, 1, 0, 1, "Enable HBA resets from the driver.");
LPFC_ATTR_R(enable_hba_heartbeat, 0, 0, 1, "Enable HBA Heartbeat.");
LPFC_ATTR_R(enable_bg, 0, 0, 1, "Enable BlockGuard Support");
unsigned int lpfc_prot_mask = SHOST_DIF_TYPE1_PROTECTION |
SHOST_DIX_TYPE0_PROTECTION |
SHOST_DIX_TYPE1_PROTECTION;
module_param(lpfc_prot_mask, uint, S_IRUGO);
MODULE_PARM_DESC(lpfc_prot_mask, "host protection mask");
unsigned char lpfc_prot_guard = SHOST_DIX_GUARD_IP;
module_param(lpfc_prot_guard, byte, S_IRUGO);
MODULE_PARM_DESC(lpfc_prot_guard, "host protection guard type");
int lpfc_delay_discovery;
module_param(lpfc_delay_discovery, int, S_IRUGO);
MODULE_PARM_DESC(lpfc_delay_discovery,
"Delay NPort discovery when Clean Address bit is cleared. "
"Allowed values: 0,1.");
LPFC_ATTR_R(sg_seg_cnt, LPFC_DEFAULT_SG_SEG_CNT, LPFC_DEFAULT_SG_SEG_CNT,
LPFC_MAX_SG_SEG_CNT, "Max Scatter Gather Segment Count");
LPFC_ATTR_R(prot_sg_seg_cnt, LPFC_DEFAULT_PROT_SG_SEG_CNT,
LPFC_DEFAULT_PROT_SG_SEG_CNT, LPFC_MAX_PROT_SG_SEG_CNT,
"Max Protection Scatter Gather Segment Count");
struct device_attribute *lpfc_hba_attrs[] = ;
struct device_attribute *lpfc_vport_attrs[] = ;
static ssize_t
sysfs_ctlreg_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
sysfs_ctlreg_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_ctlreg_attr = ;
static void
sysfs_mbox_idle(struct lpfc_hba *phba)
static ssize_t
sysfs_mbox_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t
sysfs_mbox_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute sysfs_mbox_attr = ;
int
lpfc_alloc_sysfs_attr(struct lpfc_vport *vport)
void
lpfc_free_sysfs_attr(struct lpfc_vport *vport)
static void
lpfc_get_host_port_id(struct Scsi_Host *shost)
static void
lpfc_get_host_port_type(struct Scsi_Host *shost)
static void
lpfc_get_host_port_state(struct Scsi_Host *shost)
static void
lpfc_get_host_speed(struct Scsi_Host *shost)
static void
lpfc_get_host_fabric_name (struct Scsi_Host *shost)
static struct fc_host_statistics *
lpfc_get_stats(struct Scsi_Host *shost)
static void
lpfc_reset_stats(struct Scsi_Host *shost)
static struct lpfc_nodelist *
lpfc_get_node_by_target(struct scsi_target *starget)
static void
lpfc_get_starget_port_id(struct scsi_target *starget)
static void
lpfc_get_starget_node_name(struct scsi_target *starget)
static void
lpfc_get_starget_port_name(struct scsi_target *starget)
static void
lpfc_set_rport_loss_tmo(struct fc_rport *rport, uint32_t timeout)
#define lpfc_rport_show_function(field, format_string, sz, cast)	\
static ssize_t								\
lpfc_show_rport_##field (struct device *dev,				\
struct device_attribute *attr,			\
char *buf)					\
#define lpfc_rport_rd_attr(field, format_string, sz)			\
lpfc_rport_show_function(field, format_string, sz, )		\
static FC_RPORT_ATTR(field, S_IRUGO, lpfc_show_rport_##field, NULL)
static void
lpfc_set_vport_symbolic_name(struct fc_vport *fc_vport)
static void
lpfc_hba_log_verbose_init(struct lpfc_hba *phba, uint32_t verbose)
struct fc_function_template lpfc_transport_functions = ;
struct fc_function_template lpfc_vport_transport_functions = ;
void
lpfc_get_cfgparam(struct lpfc_hba *phba)
void
lpfc_get_vport_cfgparam(struct lpfc_vport *vport)
