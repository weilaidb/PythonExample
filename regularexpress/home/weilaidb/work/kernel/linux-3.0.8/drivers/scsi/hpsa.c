#define HPSA_DRIVER_VERSION "2.0.2-1"
#define DRIVER_NAME "HP HPSA Driver (v " HPSA_DRIVER_VERSION ")"
#define MAX_CONFIG_WAIT 30000
#define MAX_IOCTL_CONFIG_WAIT 1000
#define MAX_CMD_RETRIES 3
MODULE_AUTHOR("Hewlett-Packard Company");
MODULE_DESCRIPTION("Driver for HP Smart Array Controller version " \
HPSA_DRIVER_VERSION);
MODULE_SUPPORTED_DEVICE("HP Smart Array Controllers");
MODULE_VERSION(HPSA_DRIVER_VERSION);
MODULE_LICENSE("GPL");
static int hpsa_allow_any;
module_param(hpsa_allow_any, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(hpsa_allow_any,
"Allow hpsa driver to access unknown HP Smart Array hardware");
static int hpsa_simple_mode;
module_param(hpsa_simple_mode, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(hpsa_simple_mode,
"Use 'simple mode' rather than 'performant mode'");
static const struct pci_device_id hpsa_pci_device_id[] = ;
MODULE_DEVICE_TABLE(pci, hpsa_pci_device_id);
static struct board_type products[] = ;
static int number_of_controllers;
static irqreturn_t do_hpsa_intr_intx(int irq, void *dev_id);
static irqreturn_t do_hpsa_intr_msi(int irq, void *dev_id);
static int hpsa_ioctl(struct scsi_device *dev, int cmd, void *arg);
static void start_io(struct ctlr_info *h);
static int hpsa_compat_ioctl(struct scsi_device *dev, int cmd, void *arg);
static void cmd_free(struct ctlr_info *h, struct CommandList *c);
static void cmd_special_free(struct ctlr_info *h, struct CommandList *c);
static struct CommandList *cmd_alloc(struct ctlr_info *h);
static struct CommandList *cmd_special_alloc(struct ctlr_info *h);
static void fill_cmd(struct CommandList *c, u8 cmd, struct ctlr_info *h,
void *buff, size_t size, u8 page_code, unsigned char *scsi3addr,
int cmd_type);
static int hpsa_scsi_queue_command(struct Scsi_Host *h, struct scsi_cmnd *cmd);
static void hpsa_scan_start(struct Scsi_Host *);
static int hpsa_scan_finished(struct Scsi_Host *sh,
unsigned long elapsed_time);
static int hpsa_change_queue_depth(struct scsi_device *sdev,
int qdepth, int reason);
static int hpsa_eh_device_reset_handler(struct scsi_cmnd *scsicmd);
static int hpsa_slave_alloc(struct scsi_device *sdev);
static void hpsa_slave_destroy(struct scsi_device *sdev);
static void hpsa_update_scsi_devices(struct ctlr_info *h, int hostno);
static int check_for_unit_attention(struct ctlr_info *h,
struct CommandList *c);
static void check_ioctl_unit_attention(struct ctlr_info *h,
struct CommandList *c);
static void calc_bucket_map(int *bucket, int num_buckets,
int nsgs, int *bucket_map);
static __devinit void hpsa_put_ctlr_into_performant_mode(struct ctlr_info *h);
static inline u32 next_command(struct ctlr_info *h);
static int __devinit hpsa_find_cfg_addrs(struct pci_dev *pdev,
void __iomem *vaddr, u32 *cfg_base_addr, u64 *cfg_base_addr_index,
u64 *cfg_offset);
static int __devinit hpsa_pci_find_memory_BAR(struct pci_dev *pdev,
unsigned long *memory_bar);
static int __devinit hpsa_lookup_board_id(struct pci_dev *pdev, u32 *board_id);
static int __devinit hpsa_wait_for_board_state(struct pci_dev *pdev,
void __iomem *vaddr, int wait_for_ready);
#define BOARD_NOT_READY 0
#define BOARD_READY 1
static inline struct ctlr_info *sdev_to_hba(struct scsi_device *sdev)
static inline struct ctlr_info *shost_to_hba(struct Scsi_Host *sh)
static int check_for_unit_attention(struct ctlr_info *h,
struct CommandList *c)
static ssize_t host_store_rescan(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t host_show_firmware_revision(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t host_show_commands_outstanding(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t host_show_transport_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static u32 unresettable_controller[] = ;
static u32 soft_unresettable_controller[] = ;
static int ctlr_is_hard_resettable(u32 board_id)
static int ctlr_is_soft_resettable(u32 board_id)
static int ctlr_is_resettable(u32 board_id)
static ssize_t host_show_resettable(struct device *dev,
struct device_attribute *attr, char *buf)
static inline int is_logical_dev_addr_mode(unsigned char scsi3addr[])
static const char *raid_label[] = ;
#define RAID_UNKNOWN (ARRAY_SIZE(raid_label) - 1)
static ssize_t raid_level_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t lunid_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t unique_id_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(raid_level, S_IRUGO, raid_level_show, NULL);
static DEVICE_ATTR(lunid, S_IRUGO, lunid_show, NULL);
static DEVICE_ATTR(unique_id, S_IRUGO, unique_id_show, NULL);
static DEVICE_ATTR(rescan, S_IWUSR, NULL, host_store_rescan);
static DEVICE_ATTR(firmware_revision, S_IRUGO,
host_show_firmware_revision, NULL);
static DEVICE_ATTR(commands_outstanding, S_IRUGO,
host_show_commands_outstanding, NULL);
static DEVICE_ATTR(transport_mode, S_IRUGO,
host_show_transport_mode, NULL);
static DEVICE_ATTR(resettable, S_IRUGO,
host_show_resettable, NULL);
static struct device_attribute *hpsa_sdev_attrs[] = ;
static struct device_attribute *hpsa_shost_attrs[] = ;
static struct scsi_host_template hpsa_driver_template = ;
static inline void addQ(struct list_head *list, struct CommandList *c)
static inline u32 next_command(struct ctlr_info *h)
static void set_performant_mode(struct ctlr_info *h, struct CommandList *c)
static void enqueue_cmd_and_start_io(struct ctlr_info *h,
struct CommandList *c)
static inline void removeQ(struct CommandList *c)
static inline int is_hba_lunid(unsigned char scsi3addr[])
static inline int is_scsi_rev_5(struct ctlr_info *h)
static int hpsa_find_target_lun(struct ctlr_info *h,
unsigned char scsi3addr[], int bus, int *target, int *lun)
static int hpsa_scsi_add_entry(struct ctlr_info *h, int hostno,
struct hpsa_scsi_dev_t *device,
struct hpsa_scsi_dev_t *added[], int *nadded)
static void hpsa_scsi_replace_entry(struct ctlr_info *h, int hostno,
int entry, struct hpsa_scsi_dev_t *new_entry,
struct hpsa_scsi_dev_t *added[], int *nadded,
struct hpsa_scsi_dev_t *removed[], int *nremoved)
static void hpsa_scsi_remove_entry(struct ctlr_info *h, int hostno, int entry,
struct hpsa_scsi_dev_t *removed[], int *nremoved)
#define SCSI3ADDR_EQ(a, b) ( \
(a)[7] == (b)[7] && \
(a)[6] == (b)[6] && \
(a)[5] == (b)[5] && \
(a)[4] == (b)[4] && \
(a)[3] == (b)[3] && \
(a)[2] == (b)[2] && \
(a)[1] == (b)[1] && \
(a)[0] == (b)[0])
static void fixup_botched_add(struct ctlr_info *h,
struct hpsa_scsi_dev_t *added)
static inline int device_is_the_same(struct hpsa_scsi_dev_t *dev1,
struct hpsa_scsi_dev_t *dev2)
static int hpsa_scsi_find_entry(struct hpsa_scsi_dev_t *needle,
struct hpsa_scsi_dev_t *haystack[], int haystack_size,
int *index)
static void adjust_hpsa_scsi_table(struct ctlr_info *h, int hostno,
struct hpsa_scsi_dev_t *sd[], int nsds)
static struct hpsa_scsi_dev_t *lookup_hpsa_scsi_dev(struct ctlr_info *h,
int bus, int target, int lun)
static int hpsa_slave_alloc(struct scsi_device *sdev)
static void hpsa_slave_destroy(struct scsi_device *sdev)
static void hpsa_free_sg_chain_blocks(struct ctlr_info *h)
static int hpsa_allocate_sg_chain_blocks(struct ctlr_info *h)
static void hpsa_map_sg_chain_block(struct ctlr_info *h,
struct CommandList *c)
static void hpsa_unmap_sg_chain_block(struct ctlr_info *h,
struct CommandList *c)
static void complete_scsi_command(struct CommandList *cp)
static int hpsa_scsi_detect(struct ctlr_info *h)
static void hpsa_pci_unmap(struct pci_dev *pdev,
struct CommandList *c, int sg_used, int data_direction)
static void hpsa_map_one(struct pci_dev *pdev,
struct CommandList *cp,
unsigned char *buf,
size_t buflen,
int data_direction)
static inline void hpsa_scsi_do_simple_cmd_core(struct ctlr_info *h,
struct CommandList *c)
static void hpsa_scsi_do_simple_cmd_with_retry(struct ctlr_info *h,
struct CommandList *c, int data_direction)
static void hpsa_scsi_interpret_error(struct CommandList *cp)
static int hpsa_scsi_do_inquiry(struct ctlr_info *h, unsigned char *scsi3addr,
unsigned char page, unsigned char *buf,
unsigned char bufsize)
static int hpsa_send_reset(struct ctlr_info *h, unsigned char *scsi3addr)
static void hpsa_get_raid_level(struct ctlr_info *h,
unsigned char *scsi3addr, unsigned char *raid_level)
static int hpsa_get_device_id(struct ctlr_info *h, unsigned char *scsi3addr,
unsigned char *device_id, int buflen)
static int hpsa_scsi_do_report_luns(struct ctlr_info *h, int logical,
struct ReportLUNdata *buf, int bufsize,
int extended_response)
static inline int hpsa_scsi_do_report_phys_luns(struct ctlr_info *h,
struct ReportLUNdata *buf,
int bufsize, int extended_response)
static inline int hpsa_scsi_do_report_log_luns(struct ctlr_info *h,
struct ReportLUNdata *buf, int bufsize)
static inline void hpsa_set_bus_target_lun(struct hpsa_scsi_dev_t *device,
int bus, int target, int lun)
static int hpsa_update_device_info(struct ctlr_info *h,
unsigned char scsi3addr[], struct hpsa_scsi_dev_t *this_device,
unsigned char *is_OBDR_device)
static unsigned char *msa2xxx_model[] = ;
static int is_msa2xxx(struct ctlr_info *h, struct hpsa_scsi_dev_t *device)
static void figure_bus_target_lun(struct ctlr_info *h,
u8 *lunaddrbytes, int *bus, int *target, int *lun,
struct hpsa_scsi_dev_t *device)
static int add_msa2xxx_enclosure_device(struct ctlr_info *h,
struct hpsa_scsi_dev_t *tmpdevice,
struct hpsa_scsi_dev_t *this_device, u8 *lunaddrbytes,
int bus, int target, int lun, unsigned long lunzerobits[],
int *nmsa2xxx_enclosures)
static int hpsa_gather_lun_info(struct ctlr_info *h,
int reportlunsize,
struct ReportLUNdata *physdev, u32 *nphysicals,
struct ReportLUNdata *logdev, u32 *nlogicals)
u8 *figure_lunaddrbytes(struct ctlr_info *h, int raid_ctlr_position, int i,
int nphysicals, int nlogicals, struct ReportLUNdata *physdev_list,
struct ReportLUNdata *logdev_list)
static void hpsa_update_scsi_devices(struct ctlr_info *h, int hostno)
static int hpsa_scatter_gather(struct ctlr_info *h,
struct CommandList *cp,
struct scsi_cmnd *cmd)
static int hpsa_scsi_queue_command_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(hpsa_scsi_queue_command)
static void hpsa_scan_start(struct Scsi_Host *sh)
static int hpsa_scan_finished(struct Scsi_Host *sh,
unsigned long elapsed_time)
static int hpsa_change_queue_depth(struct scsi_device *sdev,
int qdepth, int reason)
static void hpsa_unregister_scsi(struct ctlr_info *h)
static int hpsa_register_scsi(struct ctlr_info *h)
static int wait_for_device_to_become_ready(struct ctlr_info *h,
unsigned char lunaddr[])
static int hpsa_eh_device_reset_handler(struct scsi_cmnd *scsicmd)
static struct CommandList *cmd_alloc(struct ctlr_info *h)
static struct CommandList *cmd_special_alloc(struct ctlr_info *h)
static void cmd_free(struct ctlr_info *h, struct CommandList *c)
static void cmd_special_free(struct ctlr_info *h, struct CommandList *c)
static int hpsa_ioctl32_passthru(struct scsi_device *dev, int cmd, void *arg)
static int hpsa_ioctl32_big_passthru(struct scsi_device *dev,
int cmd, void *arg)
static int hpsa_compat_ioctl(struct scsi_device *dev, int cmd, void *arg)
static int hpsa_getpciinfo_ioctl(struct ctlr_info *h, void __user *argp)
static int hpsa_getdrivver_ioctl(struct ctlr_info *h, void __user *argp)
static int hpsa_passthru_ioctl(struct ctlr_info *h, void __user *argp)
static int hpsa_big_passthru_ioctl(struct ctlr_info *h, void __user *argp)
static void check_ioctl_unit_attention(struct ctlr_info *h,
struct CommandList *c)
static int hpsa_ioctl(struct scsi_device *dev, int cmd, void *arg)
static int __devinit hpsa_send_host_reset(struct ctlr_info *h,
unsigned char *scsi3addr, u8 reset_type)
static void fill_cmd(struct CommandList *c, u8 cmd, struct ctlr_info *h,
void *buff, size_t size, u8 page_code, unsigned char *scsi3addr,
int cmd_type)
static void __iomem *remap_pci_mem(ulong base, ulong size)
static void start_io(struct ctlr_info *h)
static inline unsigned long get_next_completion(struct ctlr_info *h)
static inline bool interrupt_pending(struct ctlr_info *h)
static inline long interrupt_not_for_us(struct ctlr_info *h)
static inline int bad_tag(struct ctlr_info *h, u32 tag_index,
u32 raw_tag)
static inline void finish_cmd(struct CommandList *c, u32 raw_tag)
static inline u32 hpsa_tag_contains_index(u32 tag)
static inline u32 hpsa_tag_to_index(u32 tag)
static inline u32 hpsa_tag_discard_error_bits(struct ctlr_info *h, u32 tag)
static inline u32 process_indexed_cmd(struct ctlr_info *h,
u32 raw_tag)
static inline u32 process_nonindexed_cmd(struct ctlr_info *h,
u32 raw_tag)
static int ignore_bogus_interrupt(struct ctlr_info *h)
static irqreturn_t hpsa_intx_discard_completions(int irq, void *dev_id)
static irqreturn_t hpsa_msix_discard_completions(int irq, void *dev_id)
static irqreturn_t do_hpsa_intr_intx(int irq, void *dev_id)
static irqreturn_t do_hpsa_intr_msi(int irq, void *dev_id)
static __devinit int hpsa_message(struct pci_dev *pdev, unsigned char opcode,
unsigned char type)
#define hpsa_noop(p) hpsa_message(p, 3, 0)
static int hpsa_controller_hard_reset(struct pci_dev *pdev,
void * __iomem vaddr, u32 use_doorbell)
static __devinit void init_driver_version(char *driver_version, int len)
static __devinit int write_driver_ver_to_cfgtable(
struct CfgTable __iomem *cfgtable)
static __devinit void read_driver_ver_from_cfgtable(
struct CfgTable __iomem *cfgtable, unsigned char *driver_ver)
static __devinit int controller_reset_failed(
struct CfgTable __iomem *cfgtable)
static __devinit int hpsa_kdump_hard_reset_controller(struct pci_dev *pdev)
static void print_cfg_table(struct device *dev, struct CfgTable *tb)
static int find_PCI_BAR_index(struct pci_dev *pdev, unsigned long pci_bar_addr)
static void __devinit hpsa_interrupt_mode(struct ctlr_info *h)
static int __devinit hpsa_lookup_board_id(struct pci_dev *pdev, u32 *board_id)
static inline bool hpsa_board_disabled(struct pci_dev *pdev)
static int __devinit hpsa_pci_find_memory_BAR(struct pci_dev *pdev,
unsigned long *memory_bar)
static int __devinit hpsa_wait_for_board_state(struct pci_dev *pdev,
void __iomem *vaddr, int wait_for_ready)
static int __devinit hpsa_find_cfg_addrs(struct pci_dev *pdev,
void __iomem *vaddr, u32 *cfg_base_addr, u64 *cfg_base_addr_index,
u64 *cfg_offset)
static int __devinit hpsa_find_cfgtables(struct ctlr_info *h)
static void __devinit hpsa_get_max_perf_mode_cmds(struct ctlr_info *h)
static void __devinit hpsa_find_board_params(struct ctlr_info *h)
static inline bool hpsa_CISS_signature_present(struct ctlr_info *h)
static inline void hpsa_enable_scsi_prefetch(struct ctlr_info *h)
static inline void hpsa_p600_dma_prefetch_quirk(struct ctlr_info *h)
static void __devinit hpsa_wait_for_mode_change_ack(struct ctlr_info *h)
static int __devinit hpsa_enter_simple_mode(struct ctlr_info *h)
static int __devinit hpsa_pci_init(struct ctlr_info *h)
static void __devinit hpsa_hba_inquiry(struct ctlr_info *h)
static __devinit int hpsa_init_reset_devices(struct pci_dev *pdev)
static __devinit int hpsa_allocate_cmd_pool(struct ctlr_info *h)
static void hpsa_free_cmd_pool(struct ctlr_info *h)
static int hpsa_request_irq(struct ctlr_info *h,
irqreturn_t (*msixhandler)(int, void *),
irqreturn_t (*intxhandler)(int, void *))
static int __devinit hpsa_kdump_soft_reset(struct ctlr_info *h)
static void hpsa_undo_allocations_after_kdump_soft_reset(struct ctlr_info *h)
static int __devinit hpsa_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void hpsa_flush_cache(struct ctlr_info *h)
static void hpsa_shutdown(struct pci_dev *pdev)
static void __devexit hpsa_remove_one(struct pci_dev *pdev)
static int hpsa_suspend(__attribute__((unused)) struct pci_dev *pdev,
__attribute__((unused)) pm_message_t state)
static int hpsa_resume(__attribute__((unused)) struct pci_dev *pdev)
static struct pci_driver hpsa_pci_driver = ;
static void  calc_bucket_map(int bucket[], int num_buckets,
int nsgs, int *bucket_map)
static __devinit void hpsa_enter_performant_mode(struct ctlr_info *h,
u32 use_short_tags)
static __devinit void hpsa_put_ctlr_into_performant_mode(struct ctlr_info *h)
static int __init hpsa_init(void)
static void __exit hpsa_cleanup(void)
module_init(hpsa_init);
module_exit(hpsa_cleanup);
