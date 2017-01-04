#define __BFAD_DRV_H__
#define BFAD_DRIVER_NAME	"bfa"
#define BFAD_DRIVER_VERSION    BFA_DRIVER_VERSION
#define BFAD_DRIVER_VERSION    "2.3.2.3"
#define BFAD_PROTO_NAME FCPI_NAME
#define BFAD_IRQ_FLAGS IRQF_SHARED
#define FC_PORTSPEED_8GBIT 0x10
#define BFAD_MSIX_ON				0x00000001
#define BFAD_HAL_INIT_DONE			0x00000002
#define BFAD_DRV_INIT_DONE			0x00000004
#define BFAD_CFG_PPORT_DONE			0x00000008
#define BFAD_HAL_START_DONE			0x00000010
#define BFAD_PORT_ONLINE			0x00000020
#define BFAD_RPORT_ONLINE			0x00000040
#define BFAD_FCS_INIT_DONE			0x00000080
#define BFAD_HAL_INIT_FAIL			0x00000100
#define BFAD_FC4_PROBE_DONE			0x00000200
#define BFAD_PORT_DELETE			0x00000001
#define SCSI_SCAN_DELAY		HZ
#define BFAD_STOP_TIMEOUT	30
#define BFAD_SUSPEND_TIMEOUT	BFAD_STOP_TIMEOUT
#define BFAD_LUN_QUEUE_DEPTH	32
#define BFAD_IO_MAX_SGE		SG_ALL
#define bfad_isr_t irq_handler_t
#define MAX_MSIX_ENTRY 22
struct bfad_msix_s ;
enum ;
enum bfad_port_pvb_type ;
struct bfad_port_s ;
struct bfad_vport_s ;
struct bfad_vf_s ;
struct bfad_cfg_param_s ;
union bfad_tmp_buf ;
struct bfad_s ;
enum bfad_sm_event ;
struct bfad_rport_s ;
struct bfad_buf_info ;
struct bfad_fcxp ;
struct bfad_hal_comp ;
#define nextLowerInt(x)                         \
do  while (0)
#define BFA_LOG(level, bfad, mask, fmt, arg...)				\
do  while (0)
bfa_status_t	bfad_vport_create(struct bfad_s *bfad, u16 vf_id,
struct bfa_lport_cfg_s *port_cfg,
struct device *dev);
bfa_status_t	bfad_vf_create(struct bfad_s *bfad, u16 vf_id,
struct bfa_lport_cfg_s *port_cfg);
bfa_status_t	bfad_cfg_pport(struct bfad_s *bfad, enum bfa_lport_role role);
bfa_status_t	bfad_drv_init(struct bfad_s *bfad);
bfa_status_t	bfad_start_ops(struct bfad_s *bfad);
void		bfad_drv_start(struct bfad_s *bfad);
void		bfad_uncfg_pport(struct bfad_s *bfad);
void		bfad_stop(struct bfad_s *bfad);
void		bfad_fcs_stop(struct bfad_s *bfad);
void		bfad_remove_intr(struct bfad_s *bfad);
void		bfad_hal_mem_release(struct bfad_s *bfad);
void		bfad_hcb_comp(void *arg, bfa_status_t status);
int		bfad_setup_intr(struct bfad_s *bfad);
void		bfad_remove_intr(struct bfad_s *bfad);
void		bfad_update_hal_cfg(struct bfa_iocfc_cfg_s *bfa_cfg);
bfa_status_t	bfad_hal_mem_alloc(struct bfad_s *bfad);
void		bfad_bfa_tmo(unsigned long data);
void		bfad_init_timer(struct bfad_s *bfad);
int		bfad_pci_init(struct pci_dev *pdev, struct bfad_s *bfad);
void		bfad_pci_uninit(struct pci_dev *pdev, struct bfad_s *bfad);
void		bfad_drv_uninit(struct bfad_s *bfad);
int		bfad_worker(void *ptr);
void		bfad_debugfs_init(struct bfad_port_s *port);
void		bfad_debugfs_exit(struct bfad_port_s *port);
void bfad_pci_remove(struct pci_dev *pdev);
int bfad_pci_probe(struct pci_dev *pdev, const struct pci_device_id *pid);
void bfad_rport_online_wait(struct bfad_s *bfad);
int bfad_get_linkup_delay(struct bfad_s *bfad);
int bfad_install_msix_handler(struct bfad_s *bfad);
extern struct idr bfad_im_port_index;
extern struct pci_device_id bfad_id_table[];
extern struct list_head bfad_list;
extern char	*os_name;
extern char	*os_patch;
extern char	*host_name;
extern int	num_rports;
extern int	num_ios;
extern int	num_tms;
extern int	num_fcxps;
extern int	num_ufbufs;
extern int	reqq_size;
extern int	rspq_size;
extern int	num_sgpgs;
extern int      rport_del_timeout;
extern int      bfa_lun_queue_depth;
extern int      bfa_io_max_sge;
extern int      bfa_log_level;
extern int      ioc_auto_recover;
extern int      bfa_linkup_delay;
extern int      msix_disable_cb;
extern int      msix_disable_ct;
extern int      fdmi_enable;
extern int      supported_fc4s;
extern int	pcie_max_read_reqsz;
extern int bfa_debugfs_enable;
extern struct mutex bfad_mutex;
