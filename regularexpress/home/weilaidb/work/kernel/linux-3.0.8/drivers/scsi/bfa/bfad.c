BFA_TRC_FILE(LDRV, BFAD);
DEFINE_MUTEX(bfad_mutex);
LIST_HEAD(bfad_list);
static int	bfad_inst;
static int      num_sgpgs_parm;
int		supported_fc4s;
char		*host_name, *os_name, *os_patch;
int		num_rports, num_ios, num_tms;
int		num_fcxps, num_ufbufs;
int		reqq_size, rspq_size, num_sgpgs;
int		rport_del_timeout = BFA_FCS_RPORT_DEF_DEL_TIMEOUT;
int		bfa_lun_queue_depth = BFAD_LUN_QUEUE_DEPTH;
int		bfa_io_max_sge = BFAD_IO_MAX_SGE;
int		bfa_log_level = 3;
int		ioc_auto_recover = BFA_TRUE;
int		bfa_linkup_delay = -1;
int		fdmi_enable = BFA_TRUE;
int		pcie_max_read_reqsz;
int		bfa_debugfs_enable = 1;
int		msix_disable_cb = 0, msix_disable_ct = 0;
u32	bfi_image_ct_fc_size, bfi_image_ct_cna_size, bfi_image_cb_fc_size;
u32     *bfi_image_ct_fc, *bfi_image_ct_cna, *bfi_image_cb_fc;
#define BFAD_FW_FILE_CT_FC      "ctfw_fc.bin"
#define BFAD_FW_FILE_CT_CNA     "ctfw_cna.bin"
#define BFAD_FW_FILE_CB_FC      "cbfw_fc.bin"
static u32 *bfad_load_fwimg(struct pci_dev *pdev);
static void bfad_free_fwimg(void);
static void bfad_read_firmware(struct pci_dev *pdev, u32 **bfi_image,
u32 *bfi_image_size, char *fw_name);
static const char *msix_name_ct[] = ;
static const char *msix_name_cb[] = ;
MODULE_FIRMWARE(BFAD_FW_FILE_CT_FC);
MODULE_FIRMWARE(BFAD_FW_FILE_CT_CNA);
MODULE_FIRMWARE(BFAD_FW_FILE_CB_FC);
module_param(os_name, charp, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(os_name, "OS name of the hba host machine");
module_param(os_patch, charp, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(os_patch, "OS patch level of the hba host machine");
module_param(host_name, charp, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(host_name, "Hostname of the hba host machine");
module_param(num_rports, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(num_rports, "Max number of rports supported per port "
"(physical/logical), default=1024");
module_param(num_ios, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(num_ios, "Max number of ioim requests, default=2000");
module_param(num_tms, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(num_tms, "Max number of task im requests, default=128");
module_param(num_fcxps, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(num_fcxps, "Max number of fcxp requests, default=64");
module_param(num_ufbufs, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(num_ufbufs, "Max number of unsolicited frame "
"buffers, default=64");
module_param(reqq_size, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(reqq_size, "Max number of request queue elements, "
"default=256");
module_param(rspq_size, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(rspq_size, "Max number of response queue elements, "
"default=64");
module_param(num_sgpgs, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(num_sgpgs, "Number of scatter/gather pages, default=2048");
module_param(rport_del_timeout, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(rport_del_timeout, "Rport delete timeout, default=90 secs, "
"Range[>0]");
module_param(bfa_lun_queue_depth, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(bfa_lun_queue_depth, "Lun queue depth, default=32, Range[>0]");
module_param(bfa_io_max_sge, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(bfa_io_max_sge, "Max io scatter/gather elements, default=255");
module_param(bfa_log_level, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(bfa_log_level, "Driver log level, default=3, "
"Range[Critical:1|Error:2|Warning:3|Info:4]");
module_param(ioc_auto_recover, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ioc_auto_recover, "IOC auto recovery, default=1, "
"Range[off:0|on:1]");
module_param(bfa_linkup_delay, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(bfa_linkup_delay, "Link up delay, default=30 secs for "
"boot port. Otherwise 10 secs in RHEL4 & 0 for "
"[RHEL5, SLES10, ESX40] Range[>0]");
module_param(msix_disable_cb, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(msix_disable_cb, "Disable Message Signaled Interrupts "
"for Brocade-415/425/815/825 cards, default=0, "
" Range[false:0|true:1]");
module_param(msix_disable_ct, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(msix_disable_ct, "Disable Message Signaled Interrupts "
"if possible for Brocade-1010/1020/804/1007/902/1741 "
"cards, default=0, Range[false:0|true:1]");
module_param(fdmi_enable, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(fdmi_enable, "Enables fdmi registration, default=1, "
"Range[false:0|true:1]");
module_param(pcie_max_read_reqsz, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(pcie_max_read_reqsz, "PCIe max read request size, default=0 "
"(use system setting), Range[128|256|512|1024|2048|4096]");
module_param(bfa_debugfs_enable, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(bfa_debugfs_enable, "Enables debugfs feature, default=1,"
" Range[false:0|true:1]");
static void
bfad_sm_uninit(struct bfad_s *bfad, enum bfad_sm_event event);
static void
bfad_sm_created(struct bfad_s *bfad, enum bfad_sm_event event);
static void
bfad_sm_initializing(struct bfad_s *bfad, enum bfad_sm_event event);
static void
bfad_sm_operational(struct bfad_s *bfad, enum bfad_sm_event event);
static void
bfad_sm_stopping(struct bfad_s *bfad, enum bfad_sm_event event);
static void
bfad_sm_failed(struct bfad_s *bfad, enum bfad_sm_event event);
static void
bfad_sm_fcs_exit(struct bfad_s *bfad, enum bfad_sm_event event);
static void
bfad_sm_uninit(struct bfad_s *bfad, enum bfad_sm_event event)
static void
bfad_sm_created(struct bfad_s *bfad, enum bfad_sm_event event)
static void
bfad_sm_initializing(struct bfad_s *bfad, enum bfad_sm_event event)
static void
bfad_sm_failed(struct bfad_s *bfad, enum bfad_sm_event event)
static void
bfad_sm_operational(struct bfad_s *bfad, enum bfad_sm_event event)
static void
bfad_sm_fcs_exit(struct bfad_s *bfad, enum bfad_sm_event event)
static void
bfad_sm_stopping(struct bfad_s *bfad, enum bfad_sm_event event)
void
bfad_hcb_comp(void *arg, bfa_status_t status)
void
bfa_cb_init(void *drv, bfa_status_t init_status)
struct bfad_port_s *
bfa_fcb_lport_new(struct bfad_s *bfad, struct bfa_fcs_lport_s *port,
enum bfa_lport_role roles, struct bfad_vf_s *vf_drv,
struct bfad_vport_s *vp_drv)
void
bfa_fcb_lport_delete(struct bfad_s *bfad, enum bfa_lport_role roles,
struct bfad_vf_s *vf_drv, struct bfad_vport_s *vp_drv)
bfa_status_t
bfa_fcb_rport_alloc(struct bfad_s *bfad, struct bfa_fcs_rport_s **rport,
struct bfad_rport_s **rport_drv)
void
bfa_fcb_pbc_vport_create(struct bfad_s *bfad, struct bfi_pbc_vport_s pbc_vport)
void
bfad_hal_mem_release(struct bfad_s *bfad)
void
bfad_update_hal_cfg(struct bfa_iocfc_cfg_s *bfa_cfg)
bfa_status_t
bfad_hal_mem_alloc(struct bfad_s *bfad)
bfa_status_t
bfad_vport_create(struct bfad_s *bfad, u16 vf_id,
struct bfa_lport_cfg_s *port_cfg, struct device *dev)
void
bfad_bfa_tmo(unsigned long data)
void
bfad_init_timer(struct bfad_s *bfad)
int
bfad_pci_init(struct pci_dev *pdev, struct bfad_s *bfad)
void
bfad_pci_uninit(struct pci_dev *pdev, struct bfad_s *bfad)
bfa_status_t
bfad_drv_init(struct bfad_s *bfad)
void
bfad_drv_uninit(struct bfad_s *bfad)
void
bfad_drv_start(struct bfad_s *bfad)
void
bfad_fcs_stop(struct bfad_s *bfad)
void
bfad_stop(struct bfad_s *bfad)
bfa_status_t
bfad_cfg_pport(struct bfad_s *bfad, enum bfa_lport_role role)
void
bfad_uncfg_pport(struct bfad_s *bfad)
bfa_status_t
bfad_start_ops(struct bfad_s *bfad)
int
bfad_worker(void *ptr)
irqreturn_t
bfad_intx(int irq, void *dev_id)
static irqreturn_t
bfad_msix(int irq, void *dev_id)
static void
bfad_init_msix_entry(struct bfad_s *bfad, struct msix_entry *msix_entries,
int mask, int max_bit)
int
bfad_install_msix_handler(struct bfad_s *bfad)
int
bfad_setup_intr(struct bfad_s *bfad)
void
bfad_remove_intr(struct bfad_s *bfad)
int
bfad_pci_probe(struct pci_dev *pdev, const struct pci_device_id *pid)
void
bfad_pci_remove(struct pci_dev *pdev)
struct pci_device_id bfad_id_table[] = ;
MODULE_DEVICE_TABLE(pci, bfad_id_table);
static struct pci_driver bfad_pci_driver = ;
static int __init
bfad_init(void)
static void __exit
bfad_exit(void)
static void
bfad_read_firmware(struct pci_dev *pdev, u32 **bfi_image,
u32 *bfi_image_size, char *fw_name)
static u32 *
bfad_load_fwimg(struct pci_dev *pdev)
static void
bfad_free_fwimg(void)
module_init(bfad_init);
module_exit(bfad_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Brocade Fibre Channel HBA Driver" BFAD_PROTO_NAME);
MODULE_AUTHOR("Brocade Communications Systems, Inc.");
MODULE_VERSION(BFAD_DRIVER_VERSION);
