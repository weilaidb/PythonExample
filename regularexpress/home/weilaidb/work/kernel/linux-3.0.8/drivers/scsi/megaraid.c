#define MEGARAID_MODULE_VERSION "2.00.4"
MODULE_AUTHOR ("sju@lsil.com");
MODULE_DESCRIPTION ("LSI Logic MegaRAID legacy driver");
MODULE_LICENSE ("GPL");
MODULE_VERSION(MEGARAID_MODULE_VERSION);
static DEFINE_MUTEX(megadev_mutex);
static unsigned int max_cmd_per_lun = DEF_CMD_PER_LUN;
module_param(max_cmd_per_lun, uint, 0);
MODULE_PARM_DESC(max_cmd_per_lun, "Maximum number of commands which can be issued to a single LUN (default=DEF_CMD_PER_LUN=63)");
static unsigned short int max_sectors_per_io = MAX_SECTORS_PER_IO;
module_param(max_sectors_per_io, ushort, 0);
MODULE_PARM_DESC(max_sectors_per_io, "Maximum number of sectors per I/O request (default=MAX_SECTORS_PER_IO=128)");
static unsigned short int max_mbox_busy_wait = MBOX_BUSY_WAIT;
module_param(max_mbox_busy_wait, ushort, 0);
MODULE_PARM_DESC(max_mbox_busy_wait, "Maximum wait for mailbox in microseconds if busy (default=MBOX_BUSY_WAIT=10)");
#define RDINDOOR(adapter)	readl((adapter)->mmio_base + 0x20)
#define RDOUTDOOR(adapter)	readl((adapter)->mmio_base + 0x2C)
#define WRINDOOR(adapter,value)	 writel(value, (adapter)->mmio_base + 0x20)
#define WROUTDOOR(adapter,value) writel(value, (adapter)->mmio_base + 0x2C)
static int hba_count;
static adapter_t *hba_soft_state[MAX_CONTROLLERS];
static struct proc_dir_entry *mega_proc_dir_entry;
static struct mega_hbas mega_hbas[MAX_CONTROLLERS];
static long
megadev_unlocked_ioctl(struct file *filep, unsigned int cmd, unsigned long arg);
static const struct file_operations megadev_fops = ;
static struct mcontroller mcontroller[MAX_CONTROLLERS];
static u32 driver_ver = 0x02000000;
static int major;
#define IS_RAID_CH(hba, ch)	(((hba)->mega_ch_class >> (ch)) & 0x01)
static int trace_level;
static int
mega_setup_mailbox(adapter_t *adapter)
static int
mega_query_adapter(adapter_t *adapter)
static inline void
mega_runpendq(adapter_t *adapter)
static int
megaraid_queue_lck(Scsi_Cmnd *scmd, void (*done)(Scsi_Cmnd *))
static DEF_SCSI_QCMD(megaraid_queue)
static inline scb_t *
mega_allocate_scb(adapter_t *adapter, Scsi_Cmnd *cmd)
static inline int
mega_get_ldrv_num(adapter_t *adapter, Scsi_Cmnd *cmd, int channel)
static scb_t *
mega_build_cmd(adapter_t *adapter, Scsi_Cmnd *cmd, int *busy)
static mega_passthru *
mega_prepare_passthru(adapter_t *adapter, scb_t *scb, Scsi_Cmnd *cmd,
int channel, int target)
static mega_ext_passthru *
mega_prepare_extpassthru(adapter_t *adapter, scb_t *scb, Scsi_Cmnd *cmd,
int channel, int target)
static void
__mega_runpendq(adapter_t *adapter)
static int
issue_scb(adapter_t *adapter, scb_t *scb)
static inline int
mega_busywait_mbox (adapter_t *adapter)
static int
issue_scb_block(adapter_t *adapter, u_char *raw_mbox)
static irqreturn_t
megaraid_isr_iomapped(int irq, void *devp)
static irqreturn_t
megaraid_isr_memmapped(int irq, void *devp)
static void
mega_cmd_done(adapter_t *adapter, u8 completed[], int nstatus, int status)
static void
mega_rundoneq (adapter_t *adapter)
static void
mega_free_scb(adapter_t *adapter, scb_t *scb)
static int
__mega_busywait_mbox (adapter_t *adapter)
static int
mega_build_sglist(adapter_t *adapter, scb_t *scb, u32 *buf, u32 *len)
static void
mega_8_to_40ld(mraid_inquiry *inquiry, mega_inquiry3 *enquiry3,
mega_product_info *product_info)
static inline void
mega_free_sgl(adapter_t *adapter)
const char *
megaraid_info(struct Scsi_Host *host)
static int
megaraid_abort(Scsi_Cmnd *cmd)
static int
megaraid_reset(struct scsi_cmnd *cmd)
static int
megaraid_abort_and_reset(adapter_t *adapter, Scsi_Cmnd *cmd, int aor)
static inline int
make_local_pdev(adapter_t *adapter, struct pci_dev **pdev)
static inline void
free_local_pdev(struct pci_dev *pdev)
static inline void *
mega_allocate_inquiry(dma_addr_t *dma_handle, struct pci_dev *pdev)
static inline void
mega_free_inquiry(void *inquiry, dma_addr_t dma_handle, struct pci_dev *pdev)
#define CREATE_READ_PROC(string, func)	create_proc_read_entry(string,	\
S_IRUSR | S_IFREG,		\
controller_proc_dir_entry,	\
func, adapter)
static void
mega_create_proc_entry(int index, struct proc_dir_entry *parent)
static int
proc_read_config(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_read_stat(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_read_mbox(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_rebuild_rate(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_battery(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_pdrv_ch0(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_pdrv_ch1(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_pdrv_ch2(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_pdrv_ch3(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_pdrv(adapter_t *adapter, char *page, int channel)
static int
mega_print_inquiry(char *page, char *scsi_inq)
static int
proc_rdrv_10(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_rdrv_20(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_rdrv_30(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_rdrv_40(char *page, char **start, off_t offset, int count, int *eof,
void *data)
static int
proc_rdrv(adapter_t *adapter, char *page, int start, int end )
static inline void mega_create_proc_entry(int index, struct proc_dir_entry *parent)
static int
megaraid_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
static int
mega_init_scb(adapter_t *adapter)
static int
megadev_open (struct inode *inode, struct file *filep)
static int
megadev_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static long
megadev_unlocked_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static int
mega_m_to_n(void __user *arg, nitioctl_t *uioc)
static int
mega_n_to_m(void __user *arg, megacmd_t *mc)
static int
mega_is_bios_enabled(adapter_t *adapter)
static void
mega_enum_raid_scsi(adapter_t *adapter)
static void
mega_get_boot_drv(adapter_t *adapter)
static int
mega_support_random_del(adapter_t *adapter)
static int
mega_support_ext_cdb(adapter_t *adapter)
static int
mega_del_logdrv(adapter_t *adapter, int logdrv)
static int
mega_do_del_logdrv(adapter_t *adapter, int logdrv)
static void
mega_get_max_sgl(adapter_t *adapter)
static int
mega_support_cluster(adapter_t *adapter)
static int
mega_adapinq(adapter_t *adapter, dma_addr_t dma_handle)
static int
mega_internal_dev_inquiry(adapter_t *adapter, u8 ch, u8 tgt,
dma_addr_t buf_dma_handle)
static int
mega_internal_command(adapter_t *adapter, megacmd_t *mc, mega_passthru *pthru)
static void
mega_internal_done(Scsi_Cmnd *scmd)
static struct scsi_host_template megaraid_template = ;
static int __devinit
megaraid_probe_one(struct pci_dev *pdev, const struct pci_device_id *id)
static void
__megaraid_shutdown(adapter_t *adapter)
static void __devexit
megaraid_remove_one(struct pci_dev *pdev)
static void
megaraid_shutdown(struct pci_dev *pdev)
static struct pci_device_id megaraid_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, megaraid_pci_tbl);
static struct pci_driver megaraid_pci_driver = ;
static int __init megaraid_init(void)
static void __exit megaraid_exit(void)
module_init(megaraid_init);
module_exit(megaraid_exit);
