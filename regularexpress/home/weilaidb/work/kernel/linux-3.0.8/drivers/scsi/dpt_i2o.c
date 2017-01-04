MODULE_AUTHOR("Deanna Bonds, with _lots_ of help from Mark Salyzyn");
MODULE_DESCRIPTION("Adaptec I2O RAID Driver");
static DEFINE_MUTEX(adpt_mutex);
static dpt_sig_S DPTI_sig = ;
static DEFINE_MUTEX(adpt_configuration_lock);
static struct i2o_sys_tbl *sys_tbl;
static dma_addr_t sys_tbl_pa;
static int sys_tbl_ind;
static int sys_tbl_len;
static adpt_hba* hba_chain = NULL;
static int hba_count = 0;
static struct class *adpt_sysfs_class;
static long adpt_unlocked_ioctl(struct file *, unsigned int, unsigned long);
static long compat_adpt_ioctl(struct file *, unsigned int, unsigned long);
static const struct file_operations adpt_fops = ;
struct adpt_i2o_post_wait_data
;
static struct adpt_i2o_post_wait_data *adpt_post_wait_queue = NULL;
static u32 adpt_post_wait_id = 0;
static DEFINE_SPINLOCK(adpt_post_wait_lock);
static inline int dpt_dma64(adpt_hba *pHba)
static inline u32 dma_high(dma_addr_t addr)
static inline u32 dma_low(dma_addr_t addr)
static u8 adpt_read_blink_led(adpt_hba* host)
static struct pci_device_id dptids[] = ;
MODULE_DEVICE_TABLE(pci,dptids);
static int adpt_detect(struct scsi_host_template* sht)
static int adpt_release(struct Scsi_Host *host)
static void adpt_inquiry(adpt_hba* pHba)
static int adpt_slave_configure(struct scsi_device * device)
static int adpt_queue_lck(struct scsi_cmnd * cmd, void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(adpt_queue)
static int adpt_bios_param(struct scsi_device *sdev, struct block_device *dev,
sector_t capacity, int geom[])
static const char *adpt_info(struct Scsi_Host *host)
static int adpt_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset,
int length, int inout)
static u32 adpt_cmd_to_context(struct scsi_cmnd *cmd)
static struct scsi_cmnd *
adpt_cmd_from_context(adpt_hba * pHba, u32 context)
static u32 adpt_ioctl_to_context(adpt_hba * pHba, void *reply)
static void *adpt_ioctl_from_context(adpt_hba *pHba, u32 context)
static int adpt_abort(struct scsi_cmnd * cmd)
#define I2O_DEVICE_RESET 0x27
static int adpt_device_reset(struct scsi_cmnd* cmd)
#define I2O_HBA_BUS_RESET 0x87
static int adpt_bus_reset(struct scsi_cmnd* cmd)
static int __adpt_reset(struct scsi_cmnd* cmd)
static int adpt_reset(struct scsi_cmnd* cmd)
static int adpt_hba_reset(adpt_hba* pHba)
static void adpt_i2o_sys_shutdown(void)
static int adpt_install_hba(struct scsi_host_template* sht, struct pci_dev* pDev)
static void adpt_i2o_delete_hba(adpt_hba* pHba)
static struct adpt_device* adpt_find_device(adpt_hba* pHba, u32 chan, u32 id, u32 lun)
static int adpt_i2o_post_wait(adpt_hba* pHba, u32* msg, int len, int timeout)
static s32 adpt_i2o_post_this(adpt_hba* pHba, u32* data, int len)
static void adpt_i2o_post_wait_complete(u32 context, int status)
static s32 adpt_i2o_reset_hba(adpt_hba* pHba)
static int adpt_i2o_parse_lct(adpt_hba* pHba)
static int adpt_i2o_install_device(adpt_hba* pHba, struct i2o_device *d)
static int adpt_open(struct inode *inode, struct file *file)
static int adpt_close(struct inode *inode, struct file *file)
static int adpt_i2o_passthru(adpt_hba* pHba, u32 __user *arg)
#if defined __ia64__
static void adpt_ia64_info(sysInfo_S* si)
#if defined __sparc__
static void adpt_sparc_info(sysInfo_S* si)
#if defined __alpha__
static void adpt_alpha_info(sysInfo_S* si)
#if defined __i386__
static void adpt_i386_info(sysInfo_S* si)
static int adpt_system_info(void __user *buffer)
static int adpt_ioctl(struct inode *inode, struct file *file, uint cmd, ulong arg)
static long adpt_unlocked_ioctl(struct file *file, uint cmd, ulong arg)
static long compat_adpt_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static irqreturn_t adpt_isr(int irq, void *dev_id)
static s32 adpt_scsi_to_i2o(adpt_hba* pHba, struct scsi_cmnd* cmd, struct adpt_device* d)
static s32 adpt_scsi_host_alloc(adpt_hba* pHba, struct scsi_host_template *sht)
static s32 adpt_i2o_to_scsi(void __iomem *reply, struct scsi_cmnd* cmd)
static s32 adpt_rescan(adpt_hba* pHba)
static s32 adpt_i2o_reparse_lct(adpt_hba* pHba)
static void adpt_fail_posted_scbs(adpt_hba* pHba)
static int adpt_i2o_activate_hba(adpt_hba* pHba)
static int adpt_i2o_online_hba(adpt_hba* pHba)
static s32 adpt_send_nop(adpt_hba*pHba,u32 m)
static s32 adpt_i2o_init_outbound_q(adpt_hba* pHba)
static s32 adpt_i2o_status_get(adpt_hba* pHba)
static int adpt_i2o_lct_get(adpt_hba* pHba)
static int adpt_i2o_build_sys_table(void)
static void adpt_i2o_report_hba_unit(adpt_hba* pHba, struct i2o_device *d)
static const char *adpt_i2o_get_class_name(int class)
static s32 adpt_i2o_hrt_get(adpt_hba* pHba)
static int adpt_i2o_query_scalar(adpt_hba* pHba, int tid,
int group, int field, void *buf, int buflen)
static int adpt_i2o_issue_params(int cmd, adpt_hba* pHba, int tid,
void *opblk_va,  dma_addr_t opblk_pa, int oplen,
void *resblk_va, dma_addr_t resblk_pa, int reslen)
static s32 adpt_i2o_quiesce_hba(adpt_hba* pHba)
static int adpt_i2o_enable_hba(adpt_hba* pHba)
static int adpt_i2o_systab_send(adpt_hba* pHba)
static static void adpt_delay(int millisec)
static struct scsi_host_template driver_template = ;
static int __init adpt_init(void)
static void __exit adpt_exit(void)
module_init(adpt_init);
module_exit(adpt_exit);
MODULE_LICENSE("GPL");
