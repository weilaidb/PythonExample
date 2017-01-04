static char *ips = NULL;
module_param(ips, charp, 0);
#define IPS_VERSION_HIGH        IPS_VER_MAJOR_STRING "." IPS_VER_MINOR_STRING
#define IPS_VERSION_LOW         "." IPS_VER_BUILD_STRING " "
#if !defined(__i386__) && !defined(__ia64__) && !defined(__x86_64__)
#warning "This driver has only been tested on the x86/ia64/x86_64 platforms"
#define IPS_DMA_DIR(scb) ((!scb->scsi_cmd || ips_is_passthru(scb->scsi_cmd) || \
DMA_NONE == scb->scsi_cmd->sc_data_direction) ? \
PCI_DMA_BIDIRECTIONAL : \
scb->scsi_cmd->sc_data_direction)
#define METHOD_TRACE(s, i)    if (ips_debug >= (i+10)) printk(KERN_NOTICE s "\n");
#define DEBUG(i, s)           if (ips_debug >= i) printk(KERN_NOTICE s "\n");
#define DEBUG_VAR(i, s, v...) if (ips_debug >= i) printk(KERN_NOTICE s "\n", v);
#define METHOD_TRACE(s, i)
#define DEBUG(i, s)
#define DEBUG_VAR(i, s, v...)
static int ips_detect(struct scsi_host_template *);
static int ips_release(struct Scsi_Host *);
static int ips_eh_abort(struct scsi_cmnd *);
static int ips_eh_reset(struct scsi_cmnd *);
static int ips_queue(struct Scsi_Host *, struct scsi_cmnd *);
static const char *ips_info(struct Scsi_Host *);
static irqreturn_t do_ipsintr(int, void *);
static int ips_hainit(ips_ha_t *);
static int ips_map_status(ips_ha_t *, ips_scb_t *, ips_stat_t *);
static int ips_send_wait(ips_ha_t *, ips_scb_t *, int, int);
static int ips_send_cmd(ips_ha_t *, ips_scb_t *);
static int ips_online(ips_ha_t *, ips_scb_t *);
static int ips_inquiry(ips_ha_t *, ips_scb_t *);
static int ips_rdcap(ips_ha_t *, ips_scb_t *);
static int ips_msense(ips_ha_t *, ips_scb_t *);
static int ips_reqsen(ips_ha_t *, ips_scb_t *);
static int ips_deallocatescbs(ips_ha_t *, int);
static int ips_allocatescbs(ips_ha_t *);
static int ips_reset_copperhead(ips_ha_t *);
static int ips_reset_copperhead_memio(ips_ha_t *);
static int ips_reset_morpheus(ips_ha_t *);
static int ips_issue_copperhead(ips_ha_t *, ips_scb_t *);
static int ips_issue_copperhead_memio(ips_ha_t *, ips_scb_t *);
static int ips_issue_i2o(ips_ha_t *, ips_scb_t *);
static int ips_issue_i2o_memio(ips_ha_t *, ips_scb_t *);
static int ips_isintr_copperhead(ips_ha_t *);
static int ips_isintr_copperhead_memio(ips_ha_t *);
static int ips_isintr_morpheus(ips_ha_t *);
static int ips_wait(ips_ha_t *, int, int);
static int ips_write_driver_status(ips_ha_t *, int);
static int ips_read_adapter_status(ips_ha_t *, int);
static int ips_read_subsystem_parameters(ips_ha_t *, int);
static int ips_read_config(ips_ha_t *, int);
static int ips_clear_adapter(ips_ha_t *, int);
static int ips_readwrite_page5(ips_ha_t *, int, int);
static int ips_init_copperhead(ips_ha_t *);
static int ips_init_copperhead_memio(ips_ha_t *);
static int ips_init_morpheus(ips_ha_t *);
static int ips_isinit_copperhead(ips_ha_t *);
static int ips_isinit_copperhead_memio(ips_ha_t *);
static int ips_isinit_morpheus(ips_ha_t *);
static int ips_erase_bios(ips_ha_t *);
static int ips_program_bios(ips_ha_t *, char *, uint32_t, uint32_t);
static int ips_verify_bios(ips_ha_t *, char *, uint32_t, uint32_t);
static int ips_erase_bios_memio(ips_ha_t *);
static int ips_program_bios_memio(ips_ha_t *, char *, uint32_t, uint32_t);
static int ips_verify_bios_memio(ips_ha_t *, char *, uint32_t, uint32_t);
static int ips_flash_copperhead(ips_ha_t *, ips_passthru_t *, ips_scb_t *);
static int ips_flash_bios(ips_ha_t *, ips_passthru_t *, ips_scb_t *);
static int ips_flash_firmware(ips_ha_t *, ips_passthru_t *, ips_scb_t *);
static void ips_free_flash_copperhead(ips_ha_t * ha);
static void ips_get_bios_version(ips_ha_t *, int);
static void ips_identify_controller(ips_ha_t *);
static void ips_chkstatus(ips_ha_t *, IPS_STATUS *);
static void ips_enable_int_copperhead(ips_ha_t *);
static void ips_enable_int_copperhead_memio(ips_ha_t *);
static void ips_enable_int_morpheus(ips_ha_t *);
static int ips_intr_copperhead(ips_ha_t *);
static int ips_intr_morpheus(ips_ha_t *);
static void ips_next(ips_ha_t *, int);
static void ipsintr_blocking(ips_ha_t *, struct ips_scb *);
static void ipsintr_done(ips_ha_t *, struct ips_scb *);
static void ips_done(ips_ha_t *, ips_scb_t *);
static void ips_free(ips_ha_t *);
static void ips_init_scb(ips_ha_t *, ips_scb_t *);
static void ips_freescb(ips_ha_t *, ips_scb_t *);
static void ips_setup_funclist(ips_ha_t *);
static void ips_statinit(ips_ha_t *);
static void ips_statinit_memio(ips_ha_t *);
static void ips_fix_ffdc_time(ips_ha_t *, ips_scb_t *, time_t);
static void ips_ffdc_reset(ips_ha_t *, int);
static void ips_ffdc_time(ips_ha_t *);
static uint32_t ips_statupd_copperhead(ips_ha_t *);
static uint32_t ips_statupd_copperhead_memio(ips_ha_t *);
static uint32_t ips_statupd_morpheus(ips_ha_t *);
static ips_scb_t *ips_getscb(ips_ha_t *);
static void ips_putq_scb_head(ips_scb_queue_t *, ips_scb_t *);
static void ips_putq_wait_tail(ips_wait_queue_t *, struct scsi_cmnd *);
static void ips_putq_copp_tail(ips_copp_queue_t *,
ips_copp_wait_item_t *);
static ips_scb_t *ips_removeq_scb_head(ips_scb_queue_t *);
static ips_scb_t *ips_removeq_scb(ips_scb_queue_t *, ips_scb_t *);
static struct scsi_cmnd *ips_removeq_wait_head(ips_wait_queue_t *);
static struct scsi_cmnd *ips_removeq_wait(ips_wait_queue_t *,
struct scsi_cmnd *);
static ips_copp_wait_item_t *ips_removeq_copp(ips_copp_queue_t *,
ips_copp_wait_item_t *);
static ips_copp_wait_item_t *ips_removeq_copp_head(ips_copp_queue_t *);
static int ips_is_passthru(struct scsi_cmnd *);
static int ips_make_passthru(ips_ha_t *, struct scsi_cmnd *, ips_scb_t *, int);
static int ips_usrcmd(ips_ha_t *, ips_passthru_t *, ips_scb_t *);
static void ips_cleanup_passthru(ips_ha_t *, ips_scb_t *);
static void ips_scmd_buf_write(struct scsi_cmnd * scmd, void *data,
unsigned int count);
static void ips_scmd_buf_read(struct scsi_cmnd * scmd, void *data,
unsigned int count);
static int ips_proc_info(struct Scsi_Host *, char *, char **, off_t, int, int);
static int ips_host_info(ips_ha_t *, char *, off_t, int);
static void copy_mem_info(IPS_INFOSTR *, char *, int);
static int copy_info(IPS_INFOSTR *, char *, ...);
static int ips_abort_init(ips_ha_t * ha, int index);
static int ips_init_phase2(int index);
static int ips_init_phase1(struct pci_dev *pci_dev, int *indexPtr);
static int ips_register_scsi(int index);
static int  ips_poll_for_flush_complete(ips_ha_t * ha);
static void ips_flush_and_reset(ips_ha_t *ha);
static const char ips_name[] = "ips";
static struct Scsi_Host *ips_sh[IPS_MAX_ADAPTERS];
static ips_ha_t *ips_ha[IPS_MAX_ADAPTERS];
static unsigned int ips_next_controller;
static unsigned int ips_num_controllers;
static unsigned int ips_released_controllers;
static int ips_hotplug;
static int ips_cmd_timeout = 60;
static int ips_reset_timeout = 60 * 5;
static int ips_force_memio = 1;
static int ips_force_i2o = 1;
static int ips_ioctlsize = IPS_IOCTL_SIZE;
static int ips_cd_boot;
static char *ips_FlashData = NULL;
static dma_addr_t ips_flashbusaddr;
static long ips_FlashDataInUse;
static uint32_t MaxLiteCmds = 32;
static struct scsi_host_template ips_driver_template = ;
static struct  pci_device_id  ips_pci_table[] = ;
MODULE_DEVICE_TABLE( pci, ips_pci_table );
static char ips_hot_plug_name[] = "ips";
static int __devinit  ips_insert_device(struct pci_dev *pci_dev, const struct pci_device_id *ent);
static void __devexit ips_remove_device(struct pci_dev *pci_dev);
static struct pci_driver ips_pci_driver = ;
static int ips_halt(struct notifier_block *nb, ulong event, void *buf);
#define MAX_ADAPTER_NAME 15
static char ips_adapter_name[][30] = ;
static struct notifier_block ips_notifier = ;
static char ips_command_direction[] = ;
static int
ips_setup(char *ips_str)
__setup("ips=", ips_setup);
static int
ips_detect(struct scsi_host_template * SHT)
static void
ips_setup_funclist(ips_ha_t * ha)
static int
ips_release(struct Scsi_Host *sh)
static int
ips_halt(struct notifier_block *nb, ulong event, void *buf)
int ips_eh_abort(struct scsi_cmnd *SC)
static int __ips_eh_reset(struct scsi_cmnd *SC)
static int ips_eh_reset(struct scsi_cmnd *SC)
static int ips_queue_lck(struct scsi_cmnd *SC, void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(ips_queue)
static int ips_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[])
static int
ips_slave_configure(struct scsi_device * SDptr)
static irqreturn_t
do_ipsintr(int irq, void *dev_id)
int
ips_intr_copperhead(ips_ha_t * ha)
int
ips_intr_morpheus(ips_ha_t * ha)
static const char *
ips_info(struct Scsi_Host *SH)
static int
ips_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset,
int length, int func)
static int ips_is_passthru(struct scsi_cmnd *SC)
static int
ips_alloc_passthru_buffer(ips_ha_t * ha, int length)
static int
ips_make_passthru(ips_ha_t *ha, struct scsi_cmnd *SC, ips_scb_t *scb, int intr)
static int
ips_flash_copperhead(ips_ha_t * ha, ips_passthru_t * pt, ips_scb_t * scb)
static int
ips_flash_bios(ips_ha_t * ha, ips_passthru_t * pt, ips_scb_t * scb)
static int
ips_fill_scb_sg_single(ips_ha_t * ha, dma_addr_t busaddr,
ips_scb_t * scb, int indx, unsigned int e_len)
static int
ips_flash_firmware(ips_ha_t * ha, ips_passthru_t * pt, ips_scb_t * scb)
static void
ips_free_flash_copperhead(ips_ha_t * ha)
static int
ips_usrcmd(ips_ha_t * ha, ips_passthru_t * pt, ips_scb_t * scb)
static void
ips_cleanup_passthru(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_host_info(ips_ha_t * ha, char *ptr, off_t offset, int len)
static void
copy_mem_info(IPS_INFOSTR * info, char *data, int len)
static int
copy_info(IPS_INFOSTR * info, char *fmt, ...)
static void
ips_identify_controller(ips_ha_t * ha)
static void
ips_get_bios_version(ips_ha_t * ha, int intr)
static int
ips_hainit(ips_ha_t * ha)
static void
ips_next(ips_ha_t * ha, int intr)
static void
ips_putq_scb_head(ips_scb_queue_t * queue, ips_scb_t * item)
static ips_scb_t *
ips_removeq_scb_head(ips_scb_queue_t * queue)
static ips_scb_t *
ips_removeq_scb(ips_scb_queue_t * queue, ips_scb_t * item)
static void ips_putq_wait_tail(ips_wait_queue_t *queue, struct scsi_cmnd *item)
static struct scsi_cmnd *ips_removeq_wait_head(ips_wait_queue_t *queue)
static struct scsi_cmnd *ips_removeq_wait(ips_wait_queue_t *queue,
struct scsi_cmnd *item)
static void
ips_putq_copp_tail(ips_copp_queue_t * queue, ips_copp_wait_item_t * item)
static ips_copp_wait_item_t *
ips_removeq_copp_head(ips_copp_queue_t * queue)
static ips_copp_wait_item_t *
ips_removeq_copp(ips_copp_queue_t * queue, ips_copp_wait_item_t * item)
static void
ipsintr_blocking(ips_ha_t * ha, ips_scb_t * scb)
static void
ipsintr_done(ips_ha_t * ha, ips_scb_t * scb)
static void
ips_done(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_map_status(ips_ha_t * ha, ips_scb_t * scb, ips_stat_t * sp)
static int
ips_send_wait(ips_ha_t * ha, ips_scb_t * scb, int timeout, int intr)
static void
ips_scmd_buf_write(struct scsi_cmnd *scmd, void *data, unsigned int count)
static void
ips_scmd_buf_read(struct scsi_cmnd *scmd, void *data, unsigned int count)
static int
ips_send_cmd(ips_ha_t * ha, ips_scb_t * scb)
static void
ips_chkstatus(ips_ha_t * ha, IPS_STATUS * pstatus)
static int
ips_online(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_inquiry(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_rdcap(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_msense(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_reqsen(ips_ha_t * ha, ips_scb_t * scb)
static void
ips_free(ips_ha_t * ha)
static int
ips_deallocatescbs(ips_ha_t * ha, int cmds)
static int
ips_allocatescbs(ips_ha_t * ha)
static void
ips_init_scb(ips_ha_t * ha, ips_scb_t * scb)
static ips_scb_t *
ips_getscb(ips_ha_t * ha)
static void
ips_freescb(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_isinit_copperhead(ips_ha_t * ha)
static int
ips_isinit_copperhead_memio(ips_ha_t * ha)
static int
ips_isinit_morpheus(ips_ha_t * ha)
static void
ips_flush_and_reset(ips_ha_t *ha)
static int
ips_poll_for_flush_complete(ips_ha_t * ha)
static void
ips_enable_int_copperhead(ips_ha_t * ha)
static void
ips_enable_int_copperhead_memio(ips_ha_t * ha)
static void
ips_enable_int_morpheus(ips_ha_t * ha)
static int
ips_init_copperhead(ips_ha_t * ha)
static int
ips_init_copperhead_memio(ips_ha_t * ha)
static int
ips_init_morpheus(ips_ha_t * ha)
static int
ips_reset_copperhead(ips_ha_t * ha)
static int
ips_reset_copperhead_memio(ips_ha_t * ha)
static int
ips_reset_morpheus(ips_ha_t * ha)
static void
ips_statinit(ips_ha_t * ha)
static void
ips_statinit_memio(ips_ha_t * ha)
static uint32_t
ips_statupd_copperhead(ips_ha_t * ha)
static uint32_t
ips_statupd_copperhead_memio(ips_ha_t * ha)
static uint32_t
ips_statupd_morpheus(ips_ha_t * ha)
static int
ips_issue_copperhead(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_issue_copperhead_memio(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_issue_i2o(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_issue_i2o_memio(ips_ha_t * ha, ips_scb_t * scb)
static int
ips_isintr_copperhead(ips_ha_t * ha)
static int
ips_isintr_copperhead_memio(ips_ha_t * ha)
static int
ips_isintr_morpheus(ips_ha_t * ha)
static int
ips_wait(ips_ha_t * ha, int time, int intr)
static int
ips_write_driver_status(ips_ha_t * ha, int intr)
static int
ips_read_adapter_status(ips_ha_t * ha, int intr)
static int
ips_read_subsystem_parameters(ips_ha_t * ha, int intr)
static int
ips_read_config(ips_ha_t * ha, int intr)
static int
ips_readwrite_page5(ips_ha_t * ha, int write, int intr)
static int
ips_clear_adapter(ips_ha_t * ha, int intr)
static void
ips_ffdc_reset(ips_ha_t * ha, int intr)
static void
ips_ffdc_time(ips_ha_t * ha)
static void
ips_fix_ffdc_time(ips_ha_t * ha, ips_scb_t * scb, time_t current_time)
static int
ips_erase_bios(ips_ha_t * ha)
static int
ips_erase_bios_memio(ips_ha_t * ha)
static int
ips_program_bios(ips_ha_t * ha, char *buffer, uint32_t buffersize,
uint32_t offset)
static int
ips_program_bios_memio(ips_ha_t * ha, char *buffer, uint32_t buffersize,
uint32_t offset)
static int
ips_verify_bios(ips_ha_t * ha, char *buffer, uint32_t buffersize,
uint32_t offset)
static int
ips_verify_bios_memio(ips_ha_t * ha, char *buffer, uint32_t buffersize,
uint32_t offset)
static int
ips_abort_init(ips_ha_t * ha, int index)
static void
ips_shift_controllers(int lowindex, int highindex)
static void
ips_order_controllers(void)
static int
ips_register_scsi(int index)
static void __devexit
ips_remove_device(struct pci_dev *pci_dev)
static int __init
ips_module_init(void)
static void __exit
ips_module_exit(void)
module_init(ips_module_init);
module_exit(ips_module_exit);
static int __devinit
ips_insert_device(struct pci_dev *pci_dev, const struct pci_device_id *ent)
static int
ips_init_phase1(struct pci_dev *pci_dev, int *indexPtr)
static int
ips_init_phase2(int index)
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("IBM ServeRAID Adapter Driver " IPS_VER_STRING);
MODULE_VERSION(IPS_VER_STRING);
