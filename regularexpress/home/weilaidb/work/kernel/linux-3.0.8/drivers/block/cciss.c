#define CCISS_DRIVER_VERSION(maj,min,submin) ((maj<<16)|(min<<8)|(submin))
#define DRIVER_NAME "HP CISS Driver (v 3.6.26)"
#define DRIVER_VERSION CCISS_DRIVER_VERSION(3, 6, 26)
MODULE_AUTHOR("Hewlett-Packard Company");
MODULE_DESCRIPTION("Driver for HP Smart Array Controllers");
MODULE_SUPPORTED_DEVICE("HP Smart Array Controllers");
MODULE_VERSION("3.6.26");
MODULE_LICENSE("GPL");
static int cciss_tape_cmds = 6;
module_param(cciss_tape_cmds, int, 0644);
MODULE_PARM_DESC(cciss_tape_cmds,
"number of commands to allocate for tape devices (default: 6)");
static DEFINE_MUTEX(cciss_mutex);
static struct proc_dir_entry *proc_cciss;
static const struct pci_device_id cciss_pci_device_id[] = ;
MODULE_DEVICE_TABLE(pci, cciss_pci_device_id);
static struct board_type products[] = ;
#define MAX_CONFIG_WAIT 30000
#define MAX_IOCTL_CONFIG_WAIT 1000
#define MAX_CMD_RETRIES 3
#define MAX_CTLR	32
#define MAX_CTLR_ORIG 	8
static ctlr_info_t *hba[MAX_CTLR];
static struct task_struct *cciss_scan_thread;
static DEFINE_MUTEX(scan_mutex);
static LIST_HEAD(scan_q);
static void do_cciss_request(struct request_queue *q);
static irqreturn_t do_cciss_intx(int irq, void *dev_id);
static irqreturn_t do_cciss_msix_intr(int irq, void *dev_id);
static int cciss_open(struct block_device *bdev, fmode_t mode);
static int cciss_unlocked_open(struct block_device *bdev, fmode_t mode);
static int cciss_release(struct gendisk *disk, fmode_t mode);
static int do_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg);
static int cciss_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg);
static int cciss_getgeo(struct block_device *bdev, struct hd_geometry *geo);
static int cciss_revalidate(struct gendisk *disk);
static int rebuild_lun_table(ctlr_info_t *h, int first_time, int via_ioctl);
static int deregister_disk(ctlr_info_t *h, int drv_index,
int clear_all, int via_ioctl);
static void cciss_read_capacity(ctlr_info_t *h, int logvol,
sector_t *total_size, unsigned int *block_size);
static void cciss_read_capacity_16(ctlr_info_t *h, int logvol,
sector_t *total_size, unsigned int *block_size);
static void cciss_geometry_inquiry(ctlr_info_t *h, int logvol,
sector_t total_size,
unsigned int block_size, InquiryData_struct *inq_buff,
drive_info_struct *drv);
static void __devinit cciss_interrupt_mode(ctlr_info_t *);
static void start_io(ctlr_info_t *h);
static int sendcmd_withirq(ctlr_info_t *h, __u8 cmd, void *buff, size_t size,
__u8 page_code, unsigned char scsi3addr[],
int cmd_type);
static int sendcmd_withirq_core(ctlr_info_t *h, CommandList_struct *c,
int attempt_retry);
static int process_sendcmd_error(ctlr_info_t *h, CommandList_struct *c);
static int add_to_scan_list(struct ctlr_info *h);
static int scan_thread(void *data);
static int check_for_unit_attention(ctlr_info_t *h, CommandList_struct *c);
static void cciss_hba_release(struct device *dev);
static void cciss_device_release(struct device *dev);
static void cciss_free_gendisk(ctlr_info_t *h, int drv_index);
static void cciss_free_drive_info(ctlr_info_t *h, int drv_index);
static inline u32 next_command(ctlr_info_t *h);
static int __devinit cciss_find_cfg_addrs(struct pci_dev *pdev,
void __iomem *vaddr, u32 *cfg_base_addr, u64 *cfg_base_addr_index,
u64 *cfg_offset);
static int __devinit cciss_pci_find_memory_BAR(struct pci_dev *pdev,
unsigned long *memory_bar);
static inline u32 cciss_tag_discard_error_bits(ctlr_info_t *h, u32 tag);
static __devinit int write_driver_ver_to_cfgtable(
CfgTable_struct __iomem *cfgtable);
static void  calc_bucket_map(int *bucket, int num_buckets, int nsgs,
int *bucket_map);
static void cciss_put_controller_into_performant_mode(ctlr_info_t *h);
static void cciss_procinit(ctlr_info_t *h);
static void cciss_procinit(ctlr_info_t *h)
static int cciss_compat_ioctl(struct block_device *, fmode_t,
unsigned, unsigned long);
static const struct block_device_operations cciss_fops = ;
static void set_performant_mode(ctlr_info_t *h, CommandList_struct *c)
static inline void addQ(struct list_head *list, CommandList_struct *c)
static inline void removeQ(CommandList_struct *c)
static void enqueue_cmd_and_start_io(ctlr_info_t *h,
CommandList_struct *c)
static void cciss_free_sg_chain_blocks(SGDescriptor_struct **cmd_sg_list,
int nr_cmds)
static SGDescriptor_struct **cciss_allocate_sg_chain_blocks(
ctlr_info_t *h, int chainsize, int nr_cmds)
static void cciss_unmap_sg_chain_block(ctlr_info_t *h, CommandList_struct *c)
static void cciss_map_sg_chain_block(ctlr_info_t *h, CommandList_struct *c,
SGDescriptor_struct *chain_block, int len)
static const char *raid_label[] = ;
#define RAID_UNKNOWN (ARRAY_SIZE(raid_label)-1)
#define ENG_GIG 1000000000
#define ENG_GIG_FACTOR (ENG_GIG/512)
#define ENGAGE_SCSI	"engage scsi"
static void cciss_seq_show_header(struct seq_file *seq)
static void *cciss_seq_start(struct seq_file *seq, loff_t *pos)
static int cciss_seq_show(struct seq_file *seq, void *v)
static void *cciss_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void cciss_seq_stop(struct seq_file *seq, void *v)
static const struct seq_operations cciss_seq_ops = ;
static int cciss_seq_open(struct inode *inode, struct file *file)
static ssize_t
cciss_proc_write(struct file *file, const char __user *buf,
size_t length, loff_t *ppos)
static const struct file_operations cciss_proc_fops = ;
static void __devinit cciss_procinit(ctlr_info_t *h)
#define MAX_PRODUCT_NAME_LEN 19
#define to_hba(n) container_of(n, struct ctlr_info, dev)
#define to_drv(n) container_of(n, drive_info_struct, dev)
static u32 unresettable_controller[] = ;
static u32 soft_unresettable_controller[] = ;
static int ctlr_is_hard_resettable(u32 board_id)
static int ctlr_is_soft_resettable(u32 board_id)
static int ctlr_is_resettable(u32 board_id)
static ssize_t host_show_resettable(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(resettable, S_IRUGO, host_show_resettable, NULL);
static ssize_t host_store_rescan(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(rescan, S_IWUSR, NULL, host_store_rescan);
static ssize_t dev_show_unique_id(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(unique_id, S_IRUGO, dev_show_unique_id, NULL);
static ssize_t dev_show_vendor(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(vendor, S_IRUGO, dev_show_vendor, NULL);
static ssize_t dev_show_model(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(model, S_IRUGO, dev_show_model, NULL);
static ssize_t dev_show_rev(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(rev, S_IRUGO, dev_show_rev, NULL);
static ssize_t cciss_show_lunid(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(lunid, S_IRUGO, cciss_show_lunid, NULL);
static ssize_t cciss_show_raid_level(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(raid_level, S_IRUGO, cciss_show_raid_level, NULL);
static ssize_t cciss_show_usage_count(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(usage_count, S_IRUGO, cciss_show_usage_count, NULL);
static struct attribute *cciss_host_attrs[] = ;
static struct attribute_group cciss_host_attr_group = ;
static const struct attribute_group *cciss_host_attr_groups[] = ;
static struct device_type cciss_host_type = ;
static struct attribute *cciss_dev_attrs[] = ;
static struct attribute_group cciss_dev_attr_group = ;
static const struct attribute_group *cciss_dev_attr_groups[] = ;
static struct device_type cciss_dev_type = ;
static struct bus_type cciss_bus_type = ;
static void cciss_hba_release(struct device *dev)
static int cciss_create_hba_sysfs_entry(struct ctlr_info *h)
static void cciss_destroy_hba_sysfs_entry(struct ctlr_info *h)
static void cciss_device_release(struct device *dev)
static long cciss_create_ld_sysfs_entry(struct ctlr_info *h,
int drv_index)
static void cciss_destroy_ld_sysfs_entry(struct ctlr_info *h, int drv_index,
int ctlr_exiting)
static CommandList_struct *cmd_alloc(ctlr_info_t *h)
static CommandList_struct *cmd_special_alloc(ctlr_info_t *h)
static void cmd_free(ctlr_info_t *h, CommandList_struct *c)
static void cmd_special_free(ctlr_info_t *h, CommandList_struct *c)
static inline ctlr_info_t *get_host(struct gendisk *disk)
static inline drive_info_struct *get_drv(struct gendisk *disk)
static int cciss_open(struct block_device *bdev, fmode_t mode)
static int cciss_unlocked_open(struct block_device *bdev, fmode_t mode)
static int cciss_release(struct gendisk *disk, fmode_t mode)
static int do_ioctl(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
static int cciss_ioctl32_passthru(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg);
static int cciss_ioctl32_big_passthru(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg);
static int cciss_compat_ioctl(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
static int cciss_ioctl32_passthru(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
static int cciss_ioctl32_big_passthru(struct block_device *bdev, fmode_t mode,
unsigned cmd, unsigned long arg)
static int cciss_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static void check_ioctl_unit_attention(ctlr_info_t *h, CommandList_struct *c)
static int cciss_getpciinfo(ctlr_info_t *h, void __user *argp)
static int cciss_getintinfo(ctlr_info_t *h, void __user *argp)
static int cciss_setintinfo(ctlr_info_t *h, void __user *argp)
static int cciss_getnodename(ctlr_info_t *h, void __user *argp)
static int cciss_setnodename(ctlr_info_t *h, void __user *argp)
static int cciss_getheartbeat(ctlr_info_t *h, void __user *argp)
static int cciss_getbustypes(ctlr_info_t *h, void __user *argp)
static int cciss_getfirmver(ctlr_info_t *h, void __user *argp)
static int cciss_getdrivver(ctlr_info_t *h, void __user *argp)
static int cciss_getluninfo(ctlr_info_t *h,
struct gendisk *disk, void __user *argp)
static int cciss_passthru(ctlr_info_t *h, void __user *argp)
static int cciss_bigpassthru(ctlr_info_t *h, void __user *argp)
static int cciss_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static void cciss_check_queues(ctlr_info_t *h)
static void cciss_softirq_done(struct request *rq)
static inline void log_unit_to_scsi3addr(ctlr_info_t *h,
unsigned char scsi3addr[], uint32_t log_unit)
static void cciss_get_device_descr(ctlr_info_t *h, int logvol,
char *vendor, char *model, char *rev)
static void cciss_get_serial_no(ctlr_info_t *h, int logvol,
unsigned char *serial_no, int buflen)
static int cciss_add_disk(ctlr_info_t *h, struct gendisk *disk,
int drv_index)
static void cciss_update_drive_info(ctlr_info_t *h, int drv_index,
int first_time, int via_ioctl)
static int cciss_alloc_drive_info(ctlr_info_t *h, int controller_node)
static void cciss_free_drive_info(ctlr_info_t *h, int drv_index)
static void cciss_free_gendisk(ctlr_info_t *h, int drv_index)
static int cciss_add_gendisk(ctlr_info_t *h, unsigned char lunid[],
int controller_node)
static void cciss_add_controller_node(ctlr_info_t *h)
static int rebuild_lun_table(ctlr_info_t *h, int first_time,
int via_ioctl)
static void cciss_clear_drive_info(drive_info_struct *drive_info)
static int deregister_disk(ctlr_info_t *h, int drv_index,
int clear_all, int via_ioctl)
static int fill_cmd(ctlr_info_t *h, CommandList_struct *c, __u8 cmd, void *buff,
size_t size, __u8 page_code, unsigned char *scsi3addr,
int cmd_type)
static int __devinit cciss_send_reset(ctlr_info_t *h, unsigned char *scsi3addr,
u8 reset_type)
static int check_target_status(ctlr_info_t *h, CommandList_struct *c)
static int process_sendcmd_error(ctlr_info_t *h, CommandList_struct *c)
static int sendcmd_withirq_core(ctlr_info_t *h, CommandList_struct *c,
int attempt_retry)
static int sendcmd_withirq(ctlr_info_t *h, __u8 cmd, void *buff, size_t size,
__u8 page_code, unsigned char scsi3addr[],
int cmd_type)
static void cciss_geometry_inquiry(ctlr_info_t *h, int logvol,
sector_t total_size,
unsigned int block_size,
InquiryData_struct *inq_buff,
drive_info_struct *drv)
static void
cciss_read_capacity(ctlr_info_t *h, int logvol, sector_t *total_size,
unsigned int *block_size)
static void cciss_read_capacity_16(ctlr_info_t *h, int logvol,
sector_t *total_size, unsigned int *block_size)
static int cciss_revalidate(struct gendisk *disk)
static void __iomem *remap_pci_mem(ulong base, ulong size)
static void start_io(ctlr_info_t *h)
static inline void resend_cciss_cmd(ctlr_info_t *h, CommandList_struct *c)
static inline unsigned int make_status_bytes(unsigned int scsi_status_byte,
unsigned int msg_byte, unsigned int host_byte,
unsigned int driver_byte)
static inline int evaluate_target_status(ctlr_info_t *h,
CommandList_struct *cmd, int *retry_cmd)
static inline void complete_command(ctlr_info_t *h, CommandList_struct *cmd,
int timeout)
static inline u32 cciss_tag_contains_index(u32 tag)
static inline u32 cciss_tag_to_index(u32 tag)
static inline u32 cciss_tag_discard_error_bits(ctlr_info_t *h, u32 tag)
static inline void cciss_mark_tag_indexed(u32 *tag)
static inline void cciss_set_tag_index(u32 *tag, u32 index)
static void do_cciss_request(struct request_queue *q)
static inline unsigned long get_next_completion(ctlr_info_t *h)
static inline int interrupt_pending(ctlr_info_t *h)
static inline long interrupt_not_for_us(ctlr_info_t *h)
static inline int bad_tag(ctlr_info_t *h, u32 tag_index,
u32 raw_tag)
static inline void finish_cmd(ctlr_info_t *h, CommandList_struct *c,
u32 raw_tag)
static inline u32 next_command(ctlr_info_t *h)
static inline u32 process_indexed_cmd(ctlr_info_t *h, u32 raw_tag)
static inline u32 process_nonindexed_cmd(ctlr_info_t *h, u32 raw_tag)
static int ignore_bogus_interrupt(ctlr_info_t *h)
static irqreturn_t cciss_intx_discard_completions(int irq, void *dev_id)
static irqreturn_t cciss_msix_discard_completions(int irq, void *dev_id)
static irqreturn_t do_cciss_intx(int irq, void *dev_id)
static irqreturn_t do_cciss_msix_intr(int irq, void *dev_id)
static int add_to_scan_list(struct ctlr_info *h)
static void remove_from_scan_list(struct ctlr_info *h)
static int scan_thread(void *data)
static int check_for_unit_attention(ctlr_info_t *h, CommandList_struct *c)
static void print_cfg_table(ctlr_info_t *h)
static int find_PCI_BAR_index(struct pci_dev *pdev, unsigned long pci_bar_addr)
static void  calc_bucket_map(int bucket[], int num_buckets,
int nsgs, int *bucket_map)
static void __devinit cciss_wait_for_mode_change_ack(ctlr_info_t *h)
static __devinit void cciss_enter_performant_mode(ctlr_info_t *h,
u32 use_short_tags)
static void __devinit cciss_put_controller_into_performant_mode(ctlr_info_t *h)
static void __devinit cciss_interrupt_mode(ctlr_info_t *h)
static int __devinit cciss_lookup_board_id(struct pci_dev *pdev, u32 *board_id)
static inline bool cciss_board_disabled(ctlr_info_t *h)
static int __devinit cciss_pci_find_memory_BAR(struct pci_dev *pdev,
unsigned long *memory_bar)
static int __devinit cciss_wait_for_board_state(struct pci_dev *pdev,
void __iomem *vaddr, int wait_for_ready)
#define BOARD_READY 1
#define BOARD_NOT_READY 0
static int __devinit cciss_find_cfg_addrs(struct pci_dev *pdev,
void __iomem *vaddr, u32 *cfg_base_addr, u64 *cfg_base_addr_index,
u64 *cfg_offset)
static int __devinit cciss_find_cfgtables(ctlr_info_t *h)
static void __devinit cciss_get_max_perf_mode_cmds(struct ctlr_info *h)
static void __devinit cciss_find_board_params(ctlr_info_t *h)
static inline bool CISS_signature_present(ctlr_info_t *h)
static inline void cciss_enable_scsi_prefetch(ctlr_info_t *h)
static inline void cciss_p600_dma_prefetch_quirk(ctlr_info_t *h)
static int __devinit cciss_pci_init(ctlr_info_t *h)
static int alloc_cciss_hba(struct pci_dev *pdev)
static void free_hba(ctlr_info_t *h)
static __devinit int cciss_message(struct pci_dev *pdev, unsigned char opcode, unsigned char type)
#define cciss_noop(p) cciss_message(p, 3, 0)
static int cciss_controller_hard_reset(struct pci_dev *pdev,
void * __iomem vaddr, u32 use_doorbell)
static __devinit void init_driver_version(char *driver_version, int len)
static __devinit int write_driver_ver_to_cfgtable(
CfgTable_struct __iomem *cfgtable)
static __devinit void read_driver_ver_from_cfgtable(
CfgTable_struct __iomem *cfgtable, unsigned char *driver_ver)
static __devinit int controller_reset_failed(
CfgTable_struct __iomem *cfgtable)
static __devinit int cciss_kdump_hard_reset_controller(struct pci_dev *pdev)
static __devinit int cciss_init_reset_devices(struct pci_dev *pdev)
static __devinit int cciss_allocate_cmd_pool(ctlr_info_t *h)
static __devinit int cciss_allocate_scatterlists(ctlr_info_t *h)
static void cciss_free_scatterlists(ctlr_info_t *h)
static void cciss_free_cmd_pool(ctlr_info_t *h)
static int cciss_request_irq(ctlr_info_t *h,
irqreturn_t (*msixhandler)(int, void *),
irqreturn_t (*intxhandler)(int, void *))
static int __devinit cciss_kdump_soft_reset(ctlr_info_t *h)
static void cciss_undo_allocations_after_kdump_soft_reset(ctlr_info_t *h)
static int __devinit cciss_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void cciss_shutdown(struct pci_dev *pdev)
static void __devexit cciss_remove_one(struct pci_dev *pdev)
static struct pci_driver cciss_pci_driver = ;
static int __init cciss_init(void)
static void __exit cciss_cleanup(void)
module_init(cciss_init);
module_exit(cciss_cleanup);
