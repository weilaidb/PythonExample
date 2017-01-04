#define SMART2_DRIVER_VERSION(maj,min,submin) ((maj<<16)|(min<<8)|(submin))
#define DRIVER_NAME "Compaq SMART2 Driver (v 2.6.0)"
#define DRIVER_VERSION SMART2_DRIVER_VERSION(2,6,0)
MODULE_AUTHOR("Compaq Computer Corporation");
MODULE_DESCRIPTION("Driver for Compaq Smart2 Array Controllers version 2.6.0");
MODULE_LICENSE("GPL");
#define READ_AHEAD	128
#define NR_CMDS		128
#define MAX_CTLR	8
#define CTLR_SHIFT	8
#define CPQARRAY_DMA_MASK	0xFFFFFFFF
static DEFINE_MUTEX(cpqarray_mutex);
static int nr_ctlr;
static ctlr_info_t *hba[MAX_CTLR];
static int eisa[8];
#define NR_PRODUCTS ARRAY_SIZE(products)
static struct board_type products[] = ;
static const struct pci_device_id cpqarray_pci_device_id[] =
;
MODULE_DEVICE_TABLE(pci, cpqarray_pci_device_id);
static struct gendisk *ida_gendisk[MAX_CTLR][NWD];
#define DBG(s)	do  while(0)
#define DBGINFO(s) do  while(0)
#define DBGP(s)  do  while(0)
#define DBGPX(s) do  while(0)
static int cpqarray_pci_init(ctlr_info_t *c, struct pci_dev *pdev);
static void __iomem *remap_pci_mem(ulong base, ulong size);
static int cpqarray_eisa_detect(void);
static int pollcomplete(int ctlr);
static void getgeometry(int ctlr);
static void start_fwbk(int ctlr);
static cmdlist_t * cmd_alloc(ctlr_info_t *h, int get_from_pool);
static void cmd_free(ctlr_info_t *h, cmdlist_t *c, int got_from_pool);
static void free_hba(int i);
static int alloc_cpqarray_hba(void);
static int sendcmd(
__u8	cmd,
int	ctlr,
void	*buff,
size_t	size,
unsigned int blk,
unsigned int blkcnt,
unsigned int log_unit );
static int ida_unlocked_open(struct block_device *bdev, fmode_t mode);
static int ida_release(struct gendisk *disk, fmode_t mode);
static int ida_ioctl(struct block_device *bdev, fmode_t mode, unsigned int cmd, unsigned long arg);
static int ida_getgeo(struct block_device *bdev, struct hd_geometry *geo);
static int ida_ctlr_ioctl(ctlr_info_t *h, int dsk, ida_ioctl_t *io);
static void do_ida_request(struct request_queue *q);
static void start_io(ctlr_info_t *h);
static inline void addQ(cmdlist_t **Qptr, cmdlist_t *c);
static inline cmdlist_t *removeQ(cmdlist_t **Qptr, cmdlist_t *c);
static inline void complete_command(cmdlist_t *cmd, int timeout);
static irqreturn_t do_ida_intr(int irq, void *dev_id);
static void ida_timer(unsigned long tdata);
static int ida_revalidate(struct gendisk *disk);
static int revalidate_allvol(ctlr_info_t *host);
static int cpqarray_register_ctlr(int ctlr, struct pci_dev *pdev);
static void ida_procinit(int i);
static void ida_procinit(int i)
static inline drv_info_t *get_drv(struct gendisk *disk)
static inline ctlr_info_t *get_host(struct gendisk *disk)
static const struct block_device_operations ida_fops  = ;
static struct proc_dir_entry *proc_array;
static const struct file_operations ida_proc_fops;
static void __init ida_procinit(int i)
static int ida_proc_show(struct seq_file *m, void *v)
static int ida_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ida_proc_fops = ;
module_param_array(eisa, int, NULL, 0);
static void release_io_mem(ctlr_info_t *c)
static void __devexit cpqarray_remove_one(int i)
static void __devexit cpqarray_remove_one_pci (struct pci_dev *pdev)
static void __devexit cpqarray_remove_one_eisa (int i)
static int __devinit cpqarray_register_ctlr( int i, struct pci_dev *pdev)
static int __devinit cpqarray_init_one( struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_driver cpqarray_pci_driver = ;
static int __init cpqarray_init(void)
static int alloc_cpqarray_hba(void)
static void free_hba(int i)
static int cpqarray_pci_init(ctlr_info_t *c, struct pci_dev *pdev)
static void __iomem *remap_pci_mem(ulong base, ulong size)
static int cpqarray_setup(char *str)
__setup("smart2=", cpqarray_setup);
static int __devinit cpqarray_eisa_detect(void)
static int ida_open(struct block_device *bdev, fmode_t mode)
static int ida_unlocked_open(struct block_device *bdev, fmode_t mode)
static int ida_release(struct gendisk *disk, fmode_t mode)
static inline void addQ(cmdlist_t **Qptr, cmdlist_t *c)
static inline cmdlist_t *removeQ(cmdlist_t **Qptr, cmdlist_t *c)
static void do_ida_request(struct request_queue *q)
static void start_io(ctlr_info_t *h)
static inline void complete_command(cmdlist_t *cmd, int timeout)
static irqreturn_t do_ida_intr(int irq, void *dev_id)
static void ida_timer(unsigned long tdata)
static int ida_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int ida_locked_ioctl(struct block_device *bdev, fmode_t mode, unsigned int cmd, unsigned long arg)
static int ida_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long param)
static int ida_ctlr_ioctl(ctlr_info_t *h, int dsk, ida_ioctl_t *io)
static cmdlist_t * cmd_alloc(ctlr_info_t *h, int get_from_pool)
static void cmd_free(ctlr_info_t *h, cmdlist_t *c, int got_from_pool)
static int sendcmd(
__u8	cmd,
int	ctlr,
void	*buff,
size_t	size,
unsigned int blk,
unsigned int blkcnt,
unsigned int log_unit )
static int revalidate_allvol(ctlr_info_t *host)
static int ida_revalidate(struct gendisk *disk)
static int pollcomplete(int ctlr)
static void start_fwbk(int ctlr)
static void getgeometry(int ctlr)
static void __exit cpqarray_exit(void)
module_init(cpqarray_init)
module_exit(cpqarray_exit)
