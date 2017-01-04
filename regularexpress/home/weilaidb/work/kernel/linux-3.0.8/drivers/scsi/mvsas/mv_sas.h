#define _MV_SAS_H_
#define DRV_NAME		"mvsas"
#define DRV_VERSION		"0.8.2"
#define _MV_DUMP		0
#define MVS_ID_NOT_MAPPED	0x7f
#define WIDE_PORT_MAX_PHY		4
#define	MV_DISABLE_NCQ	0
#define mv_printk(fmt, arg ...)	\
printk(KERN_DEBUG"%s %d:" fmt, __FILE__, __LINE__, ## arg)
#define mv_dprintk(format, arg...)	\
printk(KERN_DEBUG"%s %d:" format, __FILE__, __LINE__, ## arg)
#define mv_dprintk(format, arg...)
#define MV_MAX_U32			0xffffffff
extern struct mvs_tgt_initiator mvs_tgt;
extern struct mvs_info *tgt_mvi;
extern const struct mvs_dispatch mvs_64xx_dispatch;
extern const struct mvs_dispatch mvs_94xx_dispatch;
extern struct kmem_cache *mvs_task_list_cache;
#define DEV_IS_EXPANDER(type)	\
((type == EDGE_DEV) || (type == FANOUT_DEV))
#define bit(n) ((u32)1 << n)
#define for_each_phy(__lseq_mask, __mc, __lseq)			\
for ((__mc) = (__lseq_mask), (__lseq) = 0;		\
(__mc) != 0 ;		\
(++__lseq), (__mc) >>= 1)
#define MV_INIT_DELAYED_WORK(w, f, d)	INIT_DELAYED_WORK(w, f)
#define UNASSOC_D2H_FIS(id)		\
((void *) mvi->rx_fis + 0x100 * id)
#define SATA_RECEIVED_FIS_LIST(reg_set)	\
((void *) mvi->rx_fis + mvi->chip->fis_offs + 0x100 * reg_set)
#define SATA_RECEIVED_SDB_FIS(reg_set)	\
(SATA_RECEIVED_FIS_LIST(reg_set) + 0x58)
#define SATA_RECEIVED_D2H_FIS(reg_set)	\
(SATA_RECEIVED_FIS_LIST(reg_set) + 0x40)
#define SATA_RECEIVED_PIO_FIS(reg_set)	\
(SATA_RECEIVED_FIS_LIST(reg_set) + 0x20)
#define SATA_RECEIVED_DMA_FIS(reg_set)	\
(SATA_RECEIVED_FIS_LIST(reg_set) + 0x00)
enum dev_status ;
struct mvs_info;
struct mvs_dispatch ;
struct mvs_chip_info ;
#define MVS_CHIP_SLOT_SZ	(1U << mvi->chip->slot_width)
#define MVS_RX_FISL_SZ		\
(mvi->chip->fis_offs + (mvi->chip->fis_count * 0x100))
#define MVS_CHIP_DISP		(mvi->chip->dispatch)
struct mvs_err_info ;
struct mvs_cmd_hdr ;
struct mvs_port ;
struct mvs_phy ;
struct mvs_device ;
struct mvs_slot_info ;
struct mvs_info ;
struct mvs_prv_info;
struct mvs_wq ;
struct mvs_task_exec_info ;
struct mvs_task_list ;
void mvs_get_sas_addr(void *buf, u32 buflen);
void mvs_tag_clear(struct mvs_info *mvi, u32 tag);
void mvs_tag_free(struct mvs_info *mvi, u32 tag);
void mvs_tag_set(struct mvs_info *mvi, unsigned int tag);
int mvs_tag_alloc(struct mvs_info *mvi, u32 *tag_out);
void mvs_tag_init(struct mvs_info *mvi);
void mvs_iounmap(void __iomem *regs);
int mvs_ioremap(struct mvs_info *mvi, int bar, int bar_ex);
void mvs_phys_reset(struct mvs_info *mvi, u32 phy_mask, int hard);
int mvs_phy_control(struct asd_sas_phy *sas_phy, enum phy_func func,
void *funcdata);
void __devinit mvs_set_sas_addr(struct mvs_info *mvi, int port_id,
u32 off_lo, u32 off_hi, u64 sas_addr);
int mvs_slave_alloc(struct scsi_device *scsi_dev);
int mvs_slave_configure(struct scsi_device *sdev);
void mvs_scan_start(struct Scsi_Host *shost);
int mvs_scan_finished(struct Scsi_Host *shost, unsigned long time);
int mvs_queue_command(struct sas_task *task, const int num,
gfp_t gfp_flags);
int mvs_abort_task(struct sas_task *task);
int mvs_abort_task_set(struct domain_device *dev, u8 *lun);
int mvs_clear_aca(struct domain_device *dev, u8 *lun);
int mvs_clear_task_set(struct domain_device *dev, u8 * lun);
void mvs_port_formed(struct asd_sas_phy *sas_phy);
void mvs_port_deformed(struct asd_sas_phy *sas_phy);
int mvs_dev_found(struct domain_device *dev);
void mvs_dev_gone(struct domain_device *dev);
int mvs_lu_reset(struct domain_device *dev, u8 *lun);
int mvs_slot_complete(struct mvs_info *mvi, u32 rx_desc, u32 flags);
int mvs_I_T_nexus_reset(struct domain_device *dev);
int mvs_query_task(struct sas_task *task);
void mvs_release_task(struct mvs_info *mvi,
struct domain_device *dev);
void mvs_do_release_task(struct mvs_info *mvi, int phy_no,
struct domain_device *dev);
void mvs_int_port(struct mvs_info *mvi, int phy_no, u32 events);
void mvs_update_phyinfo(struct mvs_info *mvi, int i, int get_st);
int mvs_int_rx(struct mvs_info *mvi, bool self_clear);
void mvs_hexdump(u32 size, u8 *data, u32 baseaddr);
