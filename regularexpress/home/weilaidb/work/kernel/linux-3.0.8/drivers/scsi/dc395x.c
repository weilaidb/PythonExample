#define DC395X_NAME	"dc395x"
#define DC395X_BANNER	"Tekram DC395(U/UW/F), DC315(U) - ASIC TRM-S1040"
#define DC395X_VERSION	"v2.05, 2004/03/08"
#define DBG_KG		0x0001
#define DBG_0		0x0002
#define DBG_1		0x0004
#define DBG_SG		0x0020
#define DBG_FIFO	0x0040
#define DBG_PIO		0x0080
#define dprintkl(level, format, arg...)  \
printk(level DC395X_NAME ": " format , ## arg)
#define dprintkdbg(type, format, arg...) \
do  while (0)
#define debug_enabled(type)	((DEBUG_MASK) & (type))
#define dprintkdbg(type, format, arg...) \
do  while (0)
#define debug_enabled(type)	(0)
#define PCI_VENDOR_ID_TEKRAM                    0x1DE1
#define PCI_DEVICE_ID_TEKRAM_TRMS1040           0x0391
#define DC395x_LOCK_IO(dev,flags)		spin_lock_irqsave(((struct Scsi_Host *)dev)->host_lock, flags)
#define DC395x_UNLOCK_IO(dev,flags)		spin_unlock_irqrestore(((struct Scsi_Host *)dev)->host_lock, flags)
#define DC395x_read8(acb,address)		(u8)(inb(acb->io_port_base + (address)))
#define DC395x_read16(acb,address)		(u16)(inw(acb->io_port_base + (address)))
#define DC395x_read32(acb,address)		(u32)(inl(acb->io_port_base + (address)))
#define DC395x_write8(acb,address,value)	outb((value), acb->io_port_base + (address))
#define DC395x_write16(acb,address,value)	outw((value), acb->io_port_base + (address))
#define DC395x_write32(acb,address,value)	outl((value), acb->io_port_base + (address))
#define RES_TARGET		0x000000FF
#define RES_TARGET_LNX  STATUS_MASK
#define RES_ENDMSG		0x0000FF00
#define RES_DID			0x00FF0000
#define RES_DRV			0xFF000000
#define MK_RES(drv,did,msg,tgt) ((int)(drv)<<24 | (int)(did)<<16 | (int)(msg)<<8 | (int)(tgt))
#define MK_RES_LNX(drv,did,msg,tgt) ((int)(drv)<<24 | (int)(did)<<16 | (int)(msg)<<8 | (int)(tgt)<<1)
#define SET_RES_TARGET(who,tgt)
#define SET_RES_TARGET_LNX(who,tgt)
#define SET_RES_MSG(who,msg)
#define SET_RES_DID(who,did)
#define SET_RES_DRV(who,drv)
#define TAG_NONE 255
#define SEGMENTX_LEN	(sizeof(struct SGentry)*DC395x_MAX_SG_LISTENTRY)
struct SGentry ;
struct NVRamTarget ;
struct NvRamType ;
struct ScsiReqBlk ;
struct DeviceCtlBlk ;
struct AdapterCtlBlk ;
static void data_out_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void data_in_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void command_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void status_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void msgout_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void msgin_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void data_out_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void data_in_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void command_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void status_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void msgout_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void msgin_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void nop0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void nop1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status);
static void set_basic_config(struct AdapterCtlBlk *acb);
static void cleanup_after_transfer(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb);
static void reset_scsi_bus(struct AdapterCtlBlk *acb);
static void data_io_transfer(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb, u16 io_dir);
static void disconnect(struct AdapterCtlBlk *acb);
static void reselect(struct AdapterCtlBlk *acb);
static u8 start_scsi(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb);
static inline void enable_msgout_abort(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb);
static void build_srb(struct scsi_cmnd *cmd, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb);
static void doing_srb_done(struct AdapterCtlBlk *acb, u8 did_code,
struct scsi_cmnd *cmd, u8 force);
static void scsi_reset_detect(struct AdapterCtlBlk *acb);
static void pci_unmap_srb(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb);
static void pci_unmap_srb_sense(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb);
static void srb_done(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb);
static void request_sense(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb);
static void set_xfer_rate(struct AdapterCtlBlk *acb,
struct DeviceCtlBlk *dcb);
static void waiting_timeout(unsigned long ptr);
static u16 current_sync_offset = 0;
static void *dc395x_scsi_phase0[] = ;
static void *dc395x_scsi_phase1[] = ;
static u8 clock_period[] = ;
static u16 clock_speed[] = ;
#define CFG_ADAPTER_ID		0
#define CFG_MAX_SPEED		1
#define CFG_DEV_MODE		2
#define CFG_ADAPTER_MODE	3
#define CFG_TAGS		4
#define CFG_RESET_DELAY		5
#define CFG_NUM			6
#define CFG_PARAM_UNSET -1
struct ParameterData ;
static struct ParameterData __devinitdata cfg_data[] = ;
static int use_safe_settings = 0;
module_param_named(safe, use_safe_settings, bool, 0);
MODULE_PARM_DESC(safe, "Use safe and slow settings only. Default: false");
module_param_named(adapter_id, cfg_data[CFG_ADAPTER_ID].value, int, 0);
MODULE_PARM_DESC(adapter_id, "Adapter SCSI ID. Default 7 (0-15)");
module_param_named(max_speed, cfg_data[CFG_MAX_SPEED].value, int, 0);
MODULE_PARM_DESC(max_speed, "Maximum bus speed. Default 1 (0-7) Speeds: 0=20, 1=13.3, 2=10, 3=8, 4=6.7, 5=5.8, 6=5, 7=4 Mhz");
module_param_named(dev_mode, cfg_data[CFG_DEV_MODE].value, int, 0);
MODULE_PARM_DESC(dev_mode, "Device mode.");
module_param_named(adapter_mode, cfg_data[CFG_ADAPTER_MODE].value, int, 0);
MODULE_PARM_DESC(adapter_mode, "Adapter mode.");
module_param_named(tags, cfg_data[CFG_TAGS].value, int, 0);
MODULE_PARM_DESC(tags, "Number of tags (1<<x). Default 3 (0-5)");
module_param_named(reset_delay, cfg_data[CFG_RESET_DELAY].value, int, 0);
MODULE_PARM_DESC(reset_delay, "Reset delay in seconds. Default 1 (0-180)");
static void __devinit set_safe_settings(void)
static void __devinit fix_settings(void)
static char __devinitdata eeprom_index_to_delay_map[] =
;
static void __devinit eeprom_index_to_delay(struct NvRamType *eeprom)
static int __devinit delay_to_eeprom_index(int delay)
static void __devinit eeprom_override(struct NvRamType *eeprom)
static unsigned int list_size(struct list_head *head)
static struct DeviceCtlBlk *dcb_get_next(struct list_head *head,
struct DeviceCtlBlk *pos)
static void free_tag(struct DeviceCtlBlk *dcb, struct ScsiReqBlk *srb)
static inline struct ScsiReqBlk *find_cmd(struct scsi_cmnd *cmd,
struct list_head *head)
static struct ScsiReqBlk *srb_get_free(struct AdapterCtlBlk *acb)
static void srb_free_insert(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb)
static void srb_waiting_insert(struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static void srb_waiting_append(struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static void srb_going_append(struct DeviceCtlBlk *dcb, struct ScsiReqBlk *srb)
static void srb_going_remove(struct DeviceCtlBlk *dcb, struct ScsiReqBlk *srb)
static void srb_waiting_remove(struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static void srb_going_to_waiting_move(struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static void srb_waiting_to_going_move(struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static void waiting_set_timer(struct AdapterCtlBlk *acb, unsigned long to)
static void waiting_process_next(struct AdapterCtlBlk *acb)
static void waiting_timeout(unsigned long ptr)
static struct DeviceCtlBlk *find_dcb(struct AdapterCtlBlk *acb, u8 id, u8 lun)
static void send_srb(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb)
static void build_srb(struct scsi_cmnd *cmd, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static int dc395x_queue_command_lck(struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(dc395x_queue_command)
static int dc395x_bios_param(struct scsi_device *sdev,
struct block_device *bdev, sector_t capacity, int *info)
static void dump_register_info(struct AdapterCtlBlk *acb,
struct DeviceCtlBlk *dcb, struct ScsiReqBlk *srb)
static inline void clear_fifo(struct AdapterCtlBlk *acb, char *txt)
static void reset_dev_param(struct AdapterCtlBlk *acb)
static int __dc395x_eh_bus_reset(struct scsi_cmnd *cmd)
static int dc395x_eh_bus_reset(struct scsi_cmnd *cmd)
static int dc395x_eh_abort(struct scsi_cmnd *cmd)
static void build_sdtr(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static void build_wdtr(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static u8 start_scsi(struct AdapterCtlBlk* acb, struct DeviceCtlBlk* dcb,
struct ScsiReqBlk* srb)
#define DC395x_ENABLE_MSGOUT \
DC395x_write16 (acb, TRM_S1040_SCSI_CONTROL, DO_SETATN); \
srb->state |= SRB_MSGOUT
static inline void enable_msgout_abort(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb)
static void dc395x_handle_interrupt(struct AdapterCtlBlk *acb,
u16 scsi_status)
static irqreturn_t dc395x_interrupt(int irq, void *dev_id)
static void msgout_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void msgout_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void command_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void command_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void sg_verify_length(struct ScsiReqBlk *srb)
static void sg_update_list(struct ScsiReqBlk *srb, u32 left)
static void sg_subtract_one(struct ScsiReqBlk *srb)
static void cleanup_after_transfer(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb)
#define DC395x_LASTPIO 4
static void data_out_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void data_out_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void data_in_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void data_in_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void data_io_transfer(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb, u16 io_dir)
static void status_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void status_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static inline u8 msgin_completed(u8 * msgbuf, u32 len)
static inline void msgin_reject(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb)
static struct ScsiReqBlk *msgin_qtag(struct AdapterCtlBlk *acb,
struct DeviceCtlBlk *dcb, u8 tag)
static inline void reprogram_regs(struct AdapterCtlBlk *acb,
struct DeviceCtlBlk *dcb)
static void msgin_set_async(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb)
static void msgin_set_sync(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb)
static inline void msgin_set_nowide(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb)
static void msgin_set_wide(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb)
static void msgin_phase0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void msgin_phase1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void nop0(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void nop1(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb,
u16 *pscsi_status)
static void set_xfer_rate(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb)
static void disconnect(struct AdapterCtlBlk *acb)
static void reselect(struct AdapterCtlBlk *acb)
static inline u8 tagq_blacklist(char *name)
static void disc_tagq_set(struct DeviceCtlBlk *dcb, struct ScsiInqData *ptr)
static void add_dev(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb,
struct ScsiInqData *ptr)
static void pci_unmap_srb(struct AdapterCtlBlk *acb, struct ScsiReqBlk *srb)
static void pci_unmap_srb_sense(struct AdapterCtlBlk *acb,
struct ScsiReqBlk *srb)
static void srb_done(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static void doing_srb_done(struct AdapterCtlBlk *acb, u8 did_flag,
struct scsi_cmnd *cmd, u8 force)
static void reset_scsi_bus(struct AdapterCtlBlk *acb)
static void set_basic_config(struct AdapterCtlBlk *acb)
static void scsi_reset_detect(struct AdapterCtlBlk *acb)
static void request_sense(struct AdapterCtlBlk *acb, struct DeviceCtlBlk *dcb,
struct ScsiReqBlk *srb)
static struct DeviceCtlBlk *device_alloc(struct AdapterCtlBlk *acb,
u8 target, u8 lun)
static void adapter_add_device(struct AdapterCtlBlk *acb,
struct DeviceCtlBlk *dcb)
static void adapter_remove_device(struct AdapterCtlBlk *acb,
struct DeviceCtlBlk *dcb)
static void adapter_remove_and_free_device(struct AdapterCtlBlk *acb,
struct DeviceCtlBlk *dcb)
static void adapter_remove_and_free_all_devices(struct AdapterCtlBlk* acb)
static int dc395x_slave_alloc(struct scsi_device *scsi_device)
static void dc395x_slave_destroy(struct scsi_device *scsi_device)
static void __devinit trms1040_wait_30us(unsigned long io_port)
static void __devinit trms1040_write_cmd(unsigned long io_port, u8 cmd, u8 addr)
static void __devinit trms1040_set_data(unsigned long io_port, u8 addr, u8 byte)
static void __devinit trms1040_write_all(struct NvRamType *eeprom, unsigned long io_port)
static u8 __devinit trms1040_get_data(unsigned long io_port, u8 addr)
static void __devinit trms1040_read_all(struct NvRamType *eeprom, unsigned long io_port)
static void __devinit check_eeprom(struct NvRamType *eeprom, unsigned long io_port)
static void __devinit print_eeprom_settings(struct NvRamType *eeprom)
static void adapter_sg_tables_free(struct AdapterCtlBlk *acb)
static int __devinit adapter_sg_tables_alloc(struct AdapterCtlBlk *acb)
static void __devinit adapter_print_config(struct AdapterCtlBlk *acb)
static void __devinit adapter_init_params(struct AdapterCtlBlk *acb)
static void __devinit adapter_init_scsi_host(struct Scsi_Host *host)
static void __devinit adapter_init_chip(struct AdapterCtlBlk *acb)
static int __devinit adapter_init(struct AdapterCtlBlk *acb,
unsigned long io_port, u32 io_port_len, unsigned int irq)
static void adapter_uninit_chip(struct AdapterCtlBlk *acb)
static void adapter_uninit(struct AdapterCtlBlk *acb)
#undef SPRINTF
#define SPRINTF(args...) pos += sprintf(pos, args)
#undef YESNO
#define YESNO(YN) \
if (YN) SPRINTF(" Yes ");\
else SPRINTF(" No  ")
static int dc395x_proc_info(struct Scsi_Host *host, char *buffer,
char **start, off_t offset, int length, int inout)
static struct scsi_host_template dc395x_driver_template = ;
static void banner_display(void)
static int __devinit dc395x_init_one(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit dc395x_remove_one(struct pci_dev *dev)
static struct pci_device_id dc395x_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, dc395x_pci_table);
static struct pci_driver dc395x_driver = ;
static int __init dc395x_module_init(void)
static void __exit dc395x_module_exit(void)
module_init(dc395x_module_init);
module_exit(dc395x_module_exit);
MODULE_AUTHOR("C.L. Huang / Erich Chen / Kurt Garloff");
MODULE_DESCRIPTION("SCSI host adapter driver for Tekram TRM-S1040 based adapters: Tekram DC395 and DC315 series");
MODULE_LICENSE("GPL");
