#define GDTH_STATISTICS
static DEFINE_MUTEX(gdth_mutex);
static void gdth_delay(int milliseconds);
static void gdth_eval_mapping(u32 size, u32 *cyls, int *heads, int *secs);
static irqreturn_t gdth_interrupt(int irq, void *dev_id);
static irqreturn_t __gdth_interrupt(gdth_ha_str *ha,
int gdth_from_wait, int* pIndex);
static int gdth_sync_event(gdth_ha_str *ha, int service, u8 index,
Scsi_Cmnd *scp);
static int gdth_async_event(gdth_ha_str *ha);
static void gdth_log_event(gdth_evt_data *dvr, char *buffer);
static void gdth_putq(gdth_ha_str *ha, Scsi_Cmnd *scp, u8 priority);
static void gdth_next(gdth_ha_str *ha);
static int gdth_fill_raw_cmd(gdth_ha_str *ha, Scsi_Cmnd *scp, u8 b);
static int gdth_special_cmd(gdth_ha_str *ha, Scsi_Cmnd *scp);
static gdth_evt_str *gdth_store_event(gdth_ha_str *ha, u16 source,
u16 idx, gdth_evt_data *evt);
static int gdth_read_event(gdth_ha_str *ha, int handle, gdth_evt_str *estr);
static void gdth_readapp_event(gdth_ha_str *ha, u8 application,
gdth_evt_str *estr);
static void gdth_clear_events(void);
static void gdth_copy_internal_data(gdth_ha_str *ha, Scsi_Cmnd *scp,
char *buffer, u16 count);
static int gdth_internal_cache_cmd(gdth_ha_str *ha, Scsi_Cmnd *scp);
static int gdth_fill_cache_cmd(gdth_ha_str *ha, Scsi_Cmnd *scp, u16 hdrive);
static void gdth_enable_int(gdth_ha_str *ha);
static int gdth_test_busy(gdth_ha_str *ha);
static int gdth_get_cmd_index(gdth_ha_str *ha);
static void gdth_release_event(gdth_ha_str *ha);
static int gdth_wait(gdth_ha_str *ha, int index,u32 time);
static int gdth_internal_cmd(gdth_ha_str *ha, u8 service, u16 opcode,
u32 p1, u64 p2,u64 p3);
static int gdth_search_drives(gdth_ha_str *ha);
static int gdth_analyse_hdrive(gdth_ha_str *ha, u16 hdrive);
static const char *gdth_ctr_name(gdth_ha_str *ha);
static int gdth_open(struct inode *inode, struct file *filep);
static int gdth_close(struct inode *inode, struct file *filep);
static long gdth_unlocked_ioctl(struct file *filep, unsigned int cmd,
unsigned long arg);
static void gdth_flush(gdth_ha_str *ha);
static int gdth_queuecommand(struct Scsi_Host *h, struct scsi_cmnd *cmd);
static int __gdth_queuecommand(gdth_ha_str *ha, struct scsi_cmnd *scp,
struct gdth_cmndinfo *cmndinfo);
static void gdth_scsi_done(struct scsi_cmnd *scp);
static u8   DebugState = DEBUG_GDTH;
#define MAX_SERBUF 160
static void ser_init(void);
static void ser_puts(char *str);
static void ser_putc(char c);
static int  ser_printk(const char *fmt, ...);
static char strbuf[MAX_SERBUF+1];
#define COM_BASE 0x2f8
#define COM_BASE 0x3f8
static void ser_init()
static void ser_puts(char *str)
static void ser_putc(char c)
static int ser_printk(const char *fmt, ...)
#define TRACE(a)
#define TRACE2(a)
#define TRACE3(a)
#define TRACE(a)
#define TRACE2(a)
#define TRACE3(a)
#define TRACE(a)
#define TRACE2(a)
#define TRACE3(a)
static u32 max_rq=0, max_index=0, max_sg=0;
static u32 max_int_coal=0;
static u32 act_ints=0, act_ios=0, act_stats=0, act_rq=0;
static struct timer_list gdth_timer;
#define PTR2USHORT(a)   (u16)(unsigned long)(a)
#define GDTOFFSOF(a,b)  (size_t)&(((a*)0)->b)
#define INDEX_OK(i,t)   ((i)<ARRAY_SIZE(t))
#define BUS_L2P(a,b)    ((b)>(a)->virt_bus ? (b-1):(b))
static u8   gdth_drq_tab[4] = ;
#if defined(CONFIG_EISA) || defined(CONFIG_ISA)
static u8   gdth_irq_tab[6] = ;
static u8   gdth_polling;
static int      gdth_ctr_count  = 0;
static LIST_HEAD(gdth_instances);
static u8   gdth_write_through = FALSE;
static gdth_evt_str ebuffer[MAX_EVENTS];
static int elastidx;
static int eoldidx;
static int major;
#define DIN     1
#define DOU     2
#define DNO     DIN
#define DUN     DIN
static u8 gdth_direction_tab[0x100] = ;
static int irq[MAXHA] __initdata =
;
static int disable __initdata = 0;
static int reserve_mode = 1;
static int reserve_list[MAX_RES_ARGS] =
;
static int reverse_scan = 0;
static int hdr_channel = 0;
static int max_ids = MAXID;
static int rescan = 0;
static int shared_access = 1;
static int probe_eisa_isa = 0;
static int force_dma32 = 0;
module_param_array(irq, int, NULL, 0);
module_param(disable, int, 0);
module_param(reserve_mode, int, 0);
module_param_array(reserve_list, int, NULL, 0);
module_param(reverse_scan, int, 0);
module_param(hdr_channel, int, 0);
module_param(max_ids, int, 0);
module_param(rescan, int, 0);
module_param(shared_access, int, 0);
module_param(probe_eisa_isa, int, 0);
module_param(force_dma32, int, 0);
MODULE_AUTHOR("Achim Leubner");
MODULE_LICENSE("GPL");
static const struct file_operations gdth_fops = ;
static gdth_ha_str *gdth_find_ha(int hanum)
static struct gdth_cmndinfo *gdth_get_cmndinfo(gdth_ha_str *ha)
static void gdth_put_cmndinfo(struct gdth_cmndinfo *priv)
static void gdth_delay(int milliseconds)
static void gdth_scsi_done(struct scsi_cmnd *scp)
int __gdth_execute(struct scsi_device *sdev, gdth_cmd_str *gdtcmd, char *cmnd,
int timeout, u32 *info)
int gdth_execute(struct Scsi_Host *shost, gdth_cmd_str *gdtcmd, char *cmnd,
int timeout, u32 *info)
static void gdth_eval_mapping(u32 size, u32 *cyls, int *heads, int *secs)
static int __init gdth_search_eisa(u16 eisa_adr)
static int __init gdth_search_isa(u32 bios_adr)
static bool gdth_search_vortex(u16 device)
static int gdth_pci_probe_one(gdth_pci_str *pcistr, gdth_ha_str **ha_out);
static int gdth_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void gdth_pci_remove_one(struct pci_dev *pdev);
static void gdth_remove_one(gdth_ha_str *ha);
static const struct pci_device_id gdthtable[] = ;
MODULE_DEVICE_TABLE(pci, gdthtable);
static struct pci_driver gdth_pci_driver = ;
static void __devexit gdth_pci_remove_one(struct pci_dev *pdev)
static int __devinit gdth_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __init gdth_init_eisa(u16 eisa_adr,gdth_ha_str *ha)
static int __init gdth_init_isa(u32 bios_adr,gdth_ha_str *ha)
static int __devinit gdth_init_pci(struct pci_dev *pdev, gdth_pci_str *pcistr,
gdth_ha_str *ha)
static void __devinit gdth_enable_int(gdth_ha_str *ha)
static u8 gdth_get_status(gdth_ha_str *ha)
static int gdth_test_busy(gdth_ha_str *ha)
static int gdth_get_cmd_index(gdth_ha_str *ha)
static void gdth_set_sema0(gdth_ha_str *ha)
static void gdth_copy_command(gdth_ha_str *ha)
static void gdth_release_event(gdth_ha_str *ha)
static int gdth_wait(gdth_ha_str *ha, int index, u32 time)
static int gdth_internal_cmd(gdth_ha_str *ha, u8 service, u16 opcode,
u32 p1, u64 p2, u64 p3)
static int __devinit gdth_search_drives(gdth_ha_str *ha)
static int gdth_analyse_hdrive(gdth_ha_str *ha, u16 hdrive)
static void gdth_putq(gdth_ha_str *ha, Scsi_Cmnd *scp, u8 priority)
static void gdth_next(gdth_ha_str *ha)
static void gdth_copy_internal_data(gdth_ha_str *ha, Scsi_Cmnd *scp,
char *buffer, u16 count)
static int gdth_internal_cache_cmd(gdth_ha_str *ha, Scsi_Cmnd *scp)
static int gdth_fill_cache_cmd(gdth_ha_str *ha, Scsi_Cmnd *scp, u16 hdrive)
static int gdth_fill_raw_cmd(gdth_ha_str *ha, Scsi_Cmnd *scp, u8 b)
static int gdth_special_cmd(gdth_ha_str *ha, Scsi_Cmnd *scp)
static gdth_evt_str *gdth_store_event(gdth_ha_str *ha, u16 source,
u16 idx, gdth_evt_data *evt)
static int gdth_read_event(gdth_ha_str *ha, int handle, gdth_evt_str *estr)
static void gdth_readapp_event(gdth_ha_str *ha,
u8 application, gdth_evt_str *estr)
static void gdth_clear_events(void)
static irqreturn_t __gdth_interrupt(gdth_ha_str *ha,
int gdth_from_wait, int* pIndex)
static irqreturn_t gdth_interrupt(int irq, void *dev_id)
static int gdth_sync_event(gdth_ha_str *ha, int service, u8 index,
Scsi_Cmnd *scp)
static char *async_cache_tab[] = ;
static int gdth_async_event(gdth_ha_str *ha)
static void gdth_log_event(gdth_evt_data *dvr, char *buffer)
static u8	gdth_timer_running;
static void gdth_timeout(unsigned long data)
static void gdth_timer_init(void)
static inline void gdth_timer_init(void)
static void __init internal_setup(char *str,int *ints)
int __init option_setup(char *str)
static const char *gdth_ctr_name(gdth_ha_str *ha)
static const char *gdth_info(struct Scsi_Host *shp)
static enum blk_eh_timer_return gdth_timed_out(struct scsi_cmnd *scp)
static int gdth_eh_bus_reset(Scsi_Cmnd *scp)
static int gdth_bios_param(struct scsi_device *sdev,struct block_device *bdev,sector_t cap,int *ip)
static int gdth_queuecommand_lck(struct scsi_cmnd *scp,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(gdth_queuecommand)
static int __gdth_queuecommand(gdth_ha_str *ha, struct scsi_cmnd *scp,
struct gdth_cmndinfo *cmndinfo)
static int gdth_open(struct inode *inode, struct file *filep)
static int gdth_close(struct inode *inode, struct file *filep)
static int ioc_event(void __user *arg)
static int ioc_lockdrv(void __user *arg)
static int ioc_resetdrv(void __user *arg, char *cmnd)
static int ioc_general(void __user *arg, char *cmnd)
static int ioc_hdrlist(void __user *arg, char *cmnd)
static int ioc_rescan(void __user *arg, char *cmnd)
static int gdth_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static long gdth_unlocked_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static void gdth_flush(gdth_ha_str *ha)
static int gdth_slave_configure(struct scsi_device *sdev)
static struct scsi_host_template gdth_template = ;
static int __init gdth_isa_probe_one(u32 isa_bios)
static int __init gdth_eisa_probe_one(u16 eisa_slot)
static int __devinit gdth_pci_probe_one(gdth_pci_str *pcistr,
gdth_ha_str **ha_out)
static void gdth_remove_one(gdth_ha_str *ha)
static int gdth_halt(struct notifier_block *nb, unsigned long event, void *buf)
static struct notifier_block gdth_notifier = ;
static int __init gdth_init(void)
static void __exit gdth_exit(void)
module_init(gdth_init);
module_exit(gdth_exit);
__setup("gdth=", option_setup);
