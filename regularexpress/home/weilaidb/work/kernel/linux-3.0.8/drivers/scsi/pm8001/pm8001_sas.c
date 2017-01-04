static int pm8001_find_tag(struct sas_task *task, u32 *tag)
static void pm8001_tag_clear(struct pm8001_hba_info *pm8001_ha, u32 tag)
static void pm8001_tag_free(struct pm8001_hba_info *pm8001_ha, u32 tag)
static void pm8001_tag_set(struct pm8001_hba_info *pm8001_ha, u32 tag)
inline int pm8001_tag_alloc(struct pm8001_hba_info *pm8001_ha, u32 *tag_out)
void pm8001_tag_init(struct pm8001_hba_info *pm8001_ha)
int pm8001_mem_alloc(struct pci_dev *pdev, void **virt_addr,
dma_addr_t *pphys_addr, u32 *pphys_addr_hi,
u32 *pphys_addr_lo, u32 mem_size, u32 align)
static
struct pm8001_hba_info *pm8001_find_ha_by_dev(struct domain_device *dev)
int pm8001_phy_control(struct asd_sas_phy *sas_phy, enum phy_func func,
void *funcdata)
int pm8001_slave_alloc(struct scsi_device *scsi_dev)
void pm8001_scan_start(struct Scsi_Host *shost)
int pm8001_scan_finished(struct Scsi_Host *shost, unsigned long time)
static int pm8001_task_prep_smp(struct pm8001_hba_info *pm8001_ha,
struct pm8001_ccb_info *ccb)
u32 pm8001_get_ncq_tag(struct sas_task *task, u32 *tag)
static int pm8001_task_prep_ata(struct pm8001_hba_info *pm8001_ha,
struct pm8001_ccb_info *ccb)
static int pm8001_task_prep_ssp_tm(struct pm8001_hba_info *pm8001_ha,
struct pm8001_ccb_info *ccb, struct pm8001_tmf_task *tmf)
static int pm8001_task_prep_ssp(struct pm8001_hba_info *pm8001_ha,
struct pm8001_ccb_info *ccb)
int pm8001_slave_configure(struct scsi_device *sdev)
static int sas_find_local_port_id(struct domain_device *dev)
#define DEV_IS_GONE(pm8001_dev)	\
((!pm8001_dev || (pm8001_dev->dev_type == NO_DEVICE)))
static int pm8001_task_exec(struct sas_task *task, const int num,
gfp_t gfp_flags, int is_tmf, struct pm8001_tmf_task *tmf)
int pm8001_queue_command(struct sas_task *task, const int num,
gfp_t gfp_flags)
void pm8001_ccb_free(struct pm8001_hba_info *pm8001_ha, u32 ccb_idx)
void pm8001_ccb_task_free(struct pm8001_hba_info *pm8001_ha,
struct sas_task *task, struct pm8001_ccb_info *ccb, u32 ccb_idx)
struct pm8001_device *pm8001_alloc_dev(struct pm8001_hba_info *pm8001_ha)
static void pm8001_free_dev(struct pm8001_device *pm8001_dev)
static int pm8001_dev_found_notify(struct domain_device *dev)
int pm8001_dev_found(struct domain_device *dev)
static struct sas_task *pm8001_alloc_task(void)
static void pm8001_free_task(struct sas_task *task)
static void pm8001_task_done(struct sas_task *task)
static void pm8001_tmf_timedout(unsigned long data)
#define PM8001_TASK_TIMEOUT 20
static int pm8001_exec_internal_tmf_task(struct domain_device *dev,
void *parameter, u32 para_len, struct pm8001_tmf_task *tmf)
static int
pm8001_exec_internal_task_abort(struct pm8001_hba_info *pm8001_ha,
struct pm8001_device *pm8001_dev, struct domain_device *dev, u32 flag,
u32 task_tag)
static void pm8001_dev_gone_notify(struct domain_device *dev)
void pm8001_dev_gone(struct domain_device *dev)
static int pm8001_issue_ssp_tmf(struct domain_device *dev,
u8 *lun, struct pm8001_tmf_task *tmf)
int pm8001_I_T_nexus_reset(struct domain_device *dev)
int pm8001_lu_reset(struct domain_device *dev, u8 *lun)
int pm8001_query_task(struct sas_task *task)
int pm8001_abort_task(struct sas_task *task)
int pm8001_abort_task_set(struct domain_device *dev, u8 *lun)
int pm8001_clear_aca(struct domain_device *dev, u8 *lun)
int pm8001_clear_task_set(struct domain_device *dev, u8 *lun)
