#define _PM8001_SAS_H_
#define DRV_NAME		"pm8001"
#define DRV_VERSION		"0.1.36"
#define PM8001_FAIL_LOGGING	0x01
#define PM8001_INIT_LOGGING	0x02
#define PM8001_DISC_LOGGING	0x04
#define PM8001_IO_LOGGING	0x08
#define PM8001_EH_LOGGING	0x10
#define PM8001_IOCTL_LOGGING	0x20
#define PM8001_MSG_LOGGING	0x40
#define pm8001_printk(format, arg...)	printk(KERN_INFO "%s %d:" format,\
__func__, __LINE__, ## arg)
#define PM8001_CHECK_LOGGING(HBA, LEVEL, CMD)	\
do  while (0);
#define PM8001_EH_DBG(HBA, CMD)			\
PM8001_CHECK_LOGGING(HBA, PM8001_EH_LOGGING, CMD)
#define PM8001_INIT_DBG(HBA, CMD)		\
PM8001_CHECK_LOGGING(HBA, PM8001_INIT_LOGGING, CMD)
#define PM8001_DISC_DBG(HBA, CMD)		\
PM8001_CHECK_LOGGING(HBA, PM8001_DISC_LOGGING, CMD)
#define PM8001_IO_DBG(HBA, CMD)		\
PM8001_CHECK_LOGGING(HBA, PM8001_IO_LOGGING, CMD)
#define PM8001_FAIL_DBG(HBA, CMD)		\
PM8001_CHECK_LOGGING(HBA, PM8001_FAIL_LOGGING, CMD)
#define PM8001_IOCTL_DBG(HBA, CMD)		\
PM8001_CHECK_LOGGING(HBA, PM8001_IOCTL_LOGGING, CMD)
#define PM8001_MSG_DBG(HBA, CMD)		\
PM8001_CHECK_LOGGING(HBA, PM8001_MSG_LOGGING, CMD)
#define PM8001_USE_TASKLET
#define PM8001_USE_MSIX
#define PM8001_READ_VPD
#define DEV_IS_EXPANDER(type)	((type == EDGE_DEV) || (type == FANOUT_DEV))
#define PM8001_NAME_LENGTH		32
extern struct list_head hba_list;
extern const struct pm8001_dispatch pm8001_8001_dispatch;
struct pm8001_hba_info;
struct pm8001_ccb_info;
struct pm8001_device;
struct pm8001_tmf_task ;
struct pm8001_ioctl_payload ;
struct pm8001_dispatch ;
struct pm8001_chip_info ;
#define PM8001_CHIP_DISP	(pm8001_ha->chip->dispatch)
struct pm8001_port ;
struct pm8001_phy ;
struct pm8001_device ;
struct pm8001_prd_imt ;
struct pm8001_prd  __attribute__ ((packed));
struct pm8001_ccb_info ;
struct mpi_mem ;
struct mpi_mem_req ;
struct main_cfg_table ;
struct general_status_table ;
struct inbound_queue_table ;
struct outbound_queue_table ;
struct pm8001_hba_memspace ;
struct pm8001_hba_info ;
struct pm8001_work ;
struct pm8001_fw_image_header  __attribute__((packed, aligned(4)));
#define FLASH_UPDATE_COMPLETE_PENDING_REBOOT	0x00
#define FLASH_UPDATE_IN_PROGRESS		0x01
#define FLASH_UPDATE_HDR_ERR			0x02
#define FLASH_UPDATE_OFFSET_ERR			0x03
#define FLASH_UPDATE_CRC_ERR			0x04
#define FLASH_UPDATE_LENGTH_ERR			0x05
#define FLASH_UPDATE_HW_ERR			0x06
#define FLASH_UPDATE_DNLD_NOT_SUPPORTED		0x10
#define FLASH_UPDATE_DISABLED			0x11
struct fw_flash_updata_info ;
struct fw_control_info ;
struct fw_control_ex ;
extern struct workqueue_struct *pm8001_wq;
int pm8001_tag_alloc(struct pm8001_hba_info *pm8001_ha, u32 *tag_out);
void pm8001_tag_init(struct pm8001_hba_info *pm8001_ha);
u32 pm8001_get_ncq_tag(struct sas_task *task, u32 *tag);
void pm8001_ccb_free(struct pm8001_hba_info *pm8001_ha, u32 ccb_idx);
void pm8001_ccb_task_free(struct pm8001_hba_info *pm8001_ha,
struct sas_task *task, struct pm8001_ccb_info *ccb, u32 ccb_idx);
int pm8001_phy_control(struct asd_sas_phy *sas_phy, enum phy_func func,
void *funcdata);
int pm8001_slave_alloc(struct scsi_device *scsi_dev);
int pm8001_slave_configure(struct scsi_device *sdev);
void pm8001_scan_start(struct Scsi_Host *shost);
int pm8001_scan_finished(struct Scsi_Host *shost, unsigned long time);
int pm8001_queue_command(struct sas_task *task, const int num,
gfp_t gfp_flags);
int pm8001_abort_task(struct sas_task *task);
int pm8001_abort_task_set(struct domain_device *dev, u8 *lun);
int pm8001_clear_aca(struct domain_device *dev, u8 *lun);
int pm8001_clear_task_set(struct domain_device *dev, u8 *lun);
int pm8001_dev_found(struct domain_device *dev);
void pm8001_dev_gone(struct domain_device *dev);
int pm8001_lu_reset(struct domain_device *dev, u8 *lun);
int pm8001_I_T_nexus_reset(struct domain_device *dev);
int pm8001_query_task(struct sas_task *task);
int pm8001_mem_alloc(struct pci_dev *pdev, void **virt_addr,
dma_addr_t *pphys_addr, u32 *pphys_addr_hi, u32 *pphys_addr_lo,
u32 mem_size, u32 align);
extern struct device_attribute *pm8001_host_attrs[];
