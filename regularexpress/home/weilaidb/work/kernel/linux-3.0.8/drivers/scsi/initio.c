#define SENSE_SIZE		14
#define i91u_MAXQUEUE		2
#define i91u_REVID "Initio INI-9X00U/UW SCSI device driver; Revision: 1.04a"
#define I950_DEVICE_ID	0x9500
#define I940_DEVICE_ID	0x9400
#define I935_DEVICE_ID	0x9401
#define I920_DEVICE_ID	0x0002
static unsigned int i91u_debug = DEBUG_DEFAULT;
static int initio_tag_enable = 1;
static int setup_debug = 0;
static void i91uSCBPost(u8 * pHcb, u8 * pScb);
static struct pci_device_id i91u_pci_devices[] = ;
MODULE_DEVICE_TABLE(pci, i91u_pci_devices);
#define DEBUG_INTERRUPT 0
#define DEBUG_QUEUE     0
#define DEBUG_STATE     0
#define INT_DISC	0
static struct scsi_ctrl_blk *initio_find_busy_scb(struct initio_host * host, u16 tarlun);
static struct scsi_ctrl_blk *initio_find_done_scb(struct initio_host * host);
static int tulip_main(struct initio_host * host);
static int initio_next_state(struct initio_host * host);
static int initio_state_1(struct initio_host * host);
static int initio_state_2(struct initio_host * host);
static int initio_state_3(struct initio_host * host);
static int initio_state_4(struct initio_host * host);
static int initio_state_5(struct initio_host * host);
static int initio_state_6(struct initio_host * host);
static int initio_state_7(struct initio_host * host);
static int initio_xfer_data_in(struct initio_host * host);
static int initio_xfer_data_out(struct initio_host * host);
static int initio_xpad_in(struct initio_host * host);
static int initio_xpad_out(struct initio_host * host);
static int initio_status_msg(struct initio_host * host);
static int initio_msgin(struct initio_host * host);
static int initio_msgin_sync(struct initio_host * host);
static int initio_msgin_accept(struct initio_host * host);
static int initio_msgout_reject(struct initio_host * host);
static int initio_msgin_extend(struct initio_host * host);
static int initio_msgout_ide(struct initio_host * host);
static int initio_msgout_abort_targ(struct initio_host * host);
static int initio_msgout_abort_tag(struct initio_host * host);
static int initio_bus_device_reset(struct initio_host * host);
static void initio_select_atn(struct initio_host * host, struct scsi_ctrl_blk * scb);
static void initio_select_atn3(struct initio_host * host, struct scsi_ctrl_blk * scb);
static void initio_select_atn_stop(struct initio_host * host, struct scsi_ctrl_blk * scb);
static int int_initio_busfree(struct initio_host * host);
static int int_initio_scsi_rst(struct initio_host * host);
static int int_initio_bad_seq(struct initio_host * host);
static int int_initio_resel(struct initio_host * host);
static int initio_sync_done(struct initio_host * host);
static int wdtr_done(struct initio_host * host);
static int wait_tulip(struct initio_host * host);
static int initio_wait_done_disc(struct initio_host * host);
static int initio_wait_disc(struct initio_host * host);
static void tulip_scsi(struct initio_host * host);
static int initio_post_scsi_rst(struct initio_host * host);
static void initio_se2_ew_en(unsigned long base);
static void initio_se2_ew_ds(unsigned long base);
static int initio_se2_rd_all(unsigned long base);
static void initio_se2_update_all(unsigned long base);
static void initio_read_eeprom(unsigned long base);
static NVRAM i91unvram;
static NVRAM *i91unvramp;
static u8 i91udftNvRam[64] =
;
static u8 initio_rate_tbl[8] =
;
static void initio_do_pause(unsigned amount)
static void initio_se2_instr(unsigned long base, u8 instr)
void initio_se2_ew_en(unsigned long base)
void initio_se2_ew_ds(unsigned long base)
static u16 initio_se2_rd(unsigned long base, u8 addr)
static void initio_se2_wr(unsigned long base, u8 addr, u16 val)
static int initio_se2_rd_all(unsigned long base)
static void initio_se2_update_all(unsigned long base)
static void initio_read_eeprom(unsigned long base)
static void initio_stop_bm(struct initio_host * host)
static int initio_reset_scsi(struct initio_host * host, int seconds)
static void initio_init(struct initio_host * host, u8 *bios_addr)
static struct scsi_ctrl_blk *initio_alloc_scb(struct initio_host *host)
static void initio_release_scb(struct initio_host * host, struct scsi_ctrl_blk * cmnd)
static void initio_append_pend_scb(struct initio_host * host, struct scsi_ctrl_blk * scbp)
static void initio_push_pend_scb(struct initio_host * host, struct scsi_ctrl_blk * scbp)
static struct scsi_ctrl_blk *initio_find_first_pend_scb(struct initio_host * host)
static void initio_unlink_pend_scb(struct initio_host * host, struct scsi_ctrl_blk * scb)
static void initio_append_busy_scb(struct initio_host * host, struct scsi_ctrl_blk * scbp)
static struct scsi_ctrl_blk *initio_pop_busy_scb(struct initio_host * host)
static void initio_unlink_busy_scb(struct initio_host * host, struct scsi_ctrl_blk * scb)
struct scsi_ctrl_blk *initio_find_busy_scb(struct initio_host * host, u16 tarlun)
static void initio_append_done_scb(struct initio_host * host, struct scsi_ctrl_blk * scbp)
struct scsi_ctrl_blk *initio_find_done_scb(struct initio_host * host)
static int initio_abort_srb(struct initio_host * host, struct scsi_cmnd *srbp)
static int initio_bad_seq(struct initio_host * host)
static void initio_exec_scb(struct initio_host * host, struct scsi_ctrl_blk * scb)
static int initio_isr(struct initio_host * host)
static int tulip_main(struct initio_host * host)
static void tulip_scsi(struct initio_host * host)
static int initio_next_state(struct initio_host * host)
static int initio_state_1(struct initio_host * host)
static int initio_state_2(struct initio_host * host)
static int initio_state_3(struct initio_host * host)
static int initio_state_4(struct initio_host * host)
static int initio_state_5(struct initio_host * host)
static int initio_state_6(struct initio_host * host)
int initio_state_7(struct initio_host * host)
static int initio_xfer_data_in(struct initio_host * host)
static int initio_xfer_data_out(struct initio_host * host)
int initio_xpad_in(struct initio_host * host)
int initio_xpad_out(struct initio_host * host)
int initio_status_msg(struct initio_host * host)
int int_initio_busfree(struct initio_host * host)
static int int_initio_scsi_rst(struct initio_host * host)
int int_initio_resel(struct initio_host * host)
static int int_initio_bad_seq(struct initio_host * host)
static int initio_msgout_abort_targ(struct initio_host * host)
static int initio_msgout_abort_tag(struct initio_host * host)
static int initio_msgin(struct initio_host * host)
static int initio_msgout_reject(struct initio_host * host)
static int initio_msgout_ide(struct initio_host * host)
static int initio_msgin_extend(struct initio_host * host)
static int initio_msgin_sync(struct initio_host * host)
static int wdtr_done(struct initio_host * host)
static int initio_sync_done(struct initio_host * host)
static int initio_post_scsi_rst(struct initio_host * host)
static void initio_select_atn_stop(struct initio_host * host, struct scsi_ctrl_blk * scb)
static void initio_select_atn(struct initio_host * host, struct scsi_ctrl_blk * scb)
static void initio_select_atn3(struct initio_host * host, struct scsi_ctrl_blk * scb)
int initio_bus_device_reset(struct initio_host * host)
static int initio_msgin_accept(struct initio_host * host)
static int wait_tulip(struct initio_host * host)
static int initio_wait_disc(struct initio_host * host)
static int initio_wait_done_disc(struct initio_host * host)
static irqreturn_t i91u_intr(int irqno, void *dev_id)
static void initio_build_scb(struct initio_host * host, struct scsi_ctrl_blk * cblk, struct scsi_cmnd * cmnd)
static int i91u_queuecommand_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(i91u_queuecommand)
static int i91u_bus_reset(struct scsi_cmnd * cmnd)
static int i91u_biosparam(struct scsi_device *sdev, struct block_device *dev,
sector_t capacity, int *info_array)
static void i91u_unmap_scb(struct pci_dev *pci_dev, struct scsi_cmnd *cmnd)
static void i91uSCBPost(u8 * host_mem, u8 * cblk_mem)
static struct scsi_host_template initio_template = ;
static int initio_probe_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void initio_remove_one(struct pci_dev *pdev)
MODULE_LICENSE("GPL");
static struct pci_device_id initio_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, initio_pci_tbl);
static struct pci_driver initio_pci_driver = ;
static int __init initio_init_driver(void)
static void __exit initio_exit_driver(void)
MODULE_DESCRIPTION("Initio INI-9X00U/UW SCSI device driver");
MODULE_AUTHOR("Initio Corporation");
MODULE_LICENSE("GPL");
module_init(initio_init_driver);
module_exit(initio_exit_driver);
