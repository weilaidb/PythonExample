static int mvs_find_tag(struct mvs_info *mvi, struct sas_task *task, u32 *tag)
void mvs_tag_clear(struct mvs_info *mvi, u32 tag)
void mvs_tag_free(struct mvs_info *mvi, u32 tag)
void mvs_tag_set(struct mvs_info *mvi, unsigned int tag)
inline int mvs_tag_alloc(struct mvs_info *mvi, u32 *tag_out)
void mvs_tag_init(struct mvs_info *mvi)
void mvs_hexdump(u32 size, u8 *data, u32 baseaddr)
#if (_MV_DUMP > 1)
static void mvs_hba_sb_dump(struct mvs_info *mvi, u32 tag,
enum sas_protocol proto)
static void mvs_hba_memory_dump(struct mvs_info *mvi, u32 tag,
enum sas_protocol proto)
static void mvs_hba_cq_dump(struct mvs_info *mvi)
void mvs_get_sas_addr(void *buf, u32 buflen)
struct mvs_info *mvs_find_dev_mvi(struct domain_device *dev)
int mvs_find_dev_phyno(struct domain_device *dev, int *phyno)
static inline void mvs_free_reg_set(struct mvs_info *mvi,
struct mvs_device *dev)
static inline u8 mvs_assign_reg_set(struct mvs_info *mvi,
struct mvs_device *dev)
void mvs_phys_reset(struct mvs_info *mvi, u32 phy_mask, int hard)
int mvs_phy_control(struct asd_sas_phy *sas_phy, enum phy_func func,
void *funcdata)
void __devinit mvs_set_sas_addr(struct mvs_info *mvi, int port_id,
u32 off_lo, u32 off_hi, u64 sas_addr)
static void mvs_bytes_dmaed(struct mvs_info *mvi, int i)
int mvs_slave_alloc(struct scsi_device *scsi_dev)
int mvs_slave_configure(struct scsi_device *sdev)
void mvs_scan_start(struct Scsi_Host *shost)
int mvs_scan_finished(struct Scsi_Host *shost, unsigned long time)
static int mvs_task_prep_smp(struct mvs_info *mvi,
struct mvs_task_exec_info *tei)
static u32 mvs_get_ncq_tag(struct sas_task *task, u32 *tag)
static int mvs_task_prep_ata(struct mvs_info *mvi,
struct mvs_task_exec_info *tei)
static int mvs_task_prep_ssp(struct mvs_info *mvi,
struct mvs_task_exec_info *tei, int is_tmf,
struct mvs_tmf_task *tmf)
#define	DEV_IS_GONE(mvi_dev)	((!mvi_dev || (mvi_dev->dev_type == NO_DEVICE)))
static int mvs_task_prep(struct sas_task *task, struct mvs_info *mvi, int is_tmf,
struct mvs_tmf_task *tmf, int *pass)
static struct mvs_task_list *mvs_task_alloc_list(int *num, gfp_t gfp_flags)
static inline void mvs_task_free_list(struct mvs_task_list *mvs_list)
static int mvs_task_exec(struct sas_task *task, const int num, gfp_t gfp_flags,
struct completion *completion, int is_tmf,
struct mvs_tmf_task *tmf)
static int mvs_collector_task_exec(struct sas_task *task, const int num, gfp_t gfp_flags,
struct completion *completion, int is_tmf,
struct mvs_tmf_task *tmf)
int mvs_queue_command(struct sas_task *task, const int num,
gfp_t gfp_flags)
static void mvs_slot_free(struct mvs_info *mvi, u32 rx_desc)
static void mvs_slot_task_free(struct mvs_info *mvi, struct sas_task *task,
struct mvs_slot_info *slot, u32 slot_idx)
static void mvs_update_wideport(struct mvs_info *mvi, int i)
static u32 mvs_is_phy_ready(struct mvs_info *mvi, int i)
static void *mvs_get_d2h_reg(struct mvs_info *mvi, int i, void *buf)
static u32 mvs_is_sig_fis_received(u32 irq_status)
void mvs_update_phyinfo(struct mvs_info *mvi, int i, int get_st)
static void mvs_port_notify_formed(struct asd_sas_phy *sas_phy, int lock)
static void mvs_port_notify_deformed(struct asd_sas_phy *sas_phy, int lock)
void mvs_port_formed(struct asd_sas_phy *sas_phy)
void mvs_port_deformed(struct asd_sas_phy *sas_phy)
struct mvs_device *mvs_alloc_dev(struct mvs_info *mvi)
void mvs_free_dev(struct mvs_device *mvi_dev)
int mvs_dev_found_notify(struct domain_device *dev, int lock)
int mvs_dev_found(struct domain_device *dev)
void mvs_dev_gone_notify(struct domain_device *dev)
void mvs_dev_gone(struct domain_device *dev)
static  struct sas_task *mvs_alloc_task(void)
static  void mvs_free_task(struct sas_task *task)
static void mvs_task_done(struct sas_task *task)
static void mvs_tmf_timedout(unsigned long data)
#define MVS_TASK_TIMEOUT 20
static int mvs_exec_internal_tmf_task(struct domain_device *dev,
void *parameter, u32 para_len, struct mvs_tmf_task *tmf)
static int mvs_debug_issue_ssp_tmf(struct domain_device *dev,
u8 *lun, struct mvs_tmf_task *tmf)
static int mvs_debug_I_T_nexus_reset(struct domain_device *dev)
int mvs_lu_reset(struct domain_device *dev, u8 *lun)
int mvs_I_T_nexus_reset(struct domain_device *dev)
int mvs_query_task(struct sas_task *task)
int mvs_abort_task(struct sas_task *task)
int mvs_abort_task_set(struct domain_device *dev, u8 *lun)
int mvs_clear_aca(struct domain_device *dev, u8 *lun)
int mvs_clear_task_set(struct domain_device *dev, u8 *lun)
static int mvs_sata_done(struct mvs_info *mvi, struct sas_task *task,
u32 slot_idx, int err)
static int mvs_slot_err(struct mvs_info *mvi, struct sas_task *task,
u32 slot_idx)
int mvs_slot_complete(struct mvs_info *mvi, u32 rx_desc, u32 flags)
void mvs_do_release_task(struct mvs_info *mvi,
int phy_no, struct domain_device *dev)
void mvs_release_task(struct mvs_info *mvi,
struct domain_device *dev)
static void mvs_phy_disconnected(struct mvs_phy *phy)
static void mvs_work_queue(struct work_struct *work)
static int mvs_handle_event(struct mvs_info *mvi, void *data, int handler)
static void mvs_sig_time_out(unsigned long tphy)
static void mvs_sig_remove_timer(struct mvs_phy *phy)
void mvs_int_port(struct mvs_info *mvi, int phy_no, u32 events)
int mvs_int_rx(struct mvs_info *mvi, bool self_clear)
