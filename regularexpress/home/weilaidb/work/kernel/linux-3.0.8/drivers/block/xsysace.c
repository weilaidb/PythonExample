#undef DEBUG
#if defined(CONFIG_OF)
MODULE_AUTHOR("Grant Likely <grant.likely@secretlab.ca>");
MODULE_DESCRIPTION("Xilinx SystemACE device driver");
MODULE_LICENSE("GPL");
#define ACE_BUSMODE (0x00)
#define ACE_STATUS (0x04)
#define ACE_STATUS_CFGLOCK      (0x00000001)
#define ACE_STATUS_MPULOCK      (0x00000002)
#define ACE_STATUS_CFGERROR     (0x00000004)
#define ACE_STATUS_CFCERROR     (0x00000008)
#define ACE_STATUS_CFDETECT     (0x00000010)
#define ACE_STATUS_DATABUFRDY   (0x00000020)
#define ACE_STATUS_DATABUFMODE  (0x00000040)
#define ACE_STATUS_CFGDONE      (0x00000080)
#define ACE_STATUS_RDYFORCFCMD  (0x00000100)
#define ACE_STATUS_CFGMODEPIN   (0x00000200)
#define ACE_STATUS_CFGADDR_MASK (0x0000e000)
#define ACE_STATUS_CFBSY        (0x00020000)
#define ACE_STATUS_CFRDY        (0x00040000)
#define ACE_STATUS_CFDWF        (0x00080000)
#define ACE_STATUS_CFDSC        (0x00100000)
#define ACE_STATUS_CFDRQ        (0x00200000)
#define ACE_STATUS_CFCORR       (0x00400000)
#define ACE_STATUS_CFERR        (0x00800000)
#define ACE_ERROR (0x08)
#define ACE_CFGLBA (0x0c)
#define ACE_MPULBA (0x10)
#define ACE_SECCNTCMD (0x14)
#define ACE_SECCNTCMD_RESET      (0x0100)
#define ACE_SECCNTCMD_IDENTIFY   (0x0200)
#define ACE_SECCNTCMD_READ_DATA  (0x0300)
#define ACE_SECCNTCMD_WRITE_DATA (0x0400)
#define ACE_SECCNTCMD_ABORT      (0x0600)
#define ACE_VERSION (0x16)
#define ACE_VERSION_REVISION_MASK (0x00FF)
#define ACE_VERSION_MINOR_MASK    (0x0F00)
#define ACE_VERSION_MAJOR_MASK    (0xF000)
#define ACE_CTRL (0x18)
#define ACE_CTRL_FORCELOCKREQ   (0x0001)
#define ACE_CTRL_LOCKREQ        (0x0002)
#define ACE_CTRL_FORCECFGADDR   (0x0004)
#define ACE_CTRL_FORCECFGMODE   (0x0008)
#define ACE_CTRL_CFGMODE        (0x0010)
#define ACE_CTRL_CFGSTART       (0x0020)
#define ACE_CTRL_CFGSEL         (0x0040)
#define ACE_CTRL_CFGRESET       (0x0080)
#define ACE_CTRL_DATABUFRDYIRQ  (0x0100)
#define ACE_CTRL_ERRORIRQ       (0x0200)
#define ACE_CTRL_CFGDONEIRQ     (0x0400)
#define ACE_CTRL_RESETIRQ       (0x0800)
#define ACE_CTRL_CFGPROG        (0x1000)
#define ACE_CTRL_CFGADDR_MASK   (0xe000)
#define ACE_FATSTAT (0x1c)
#define ACE_NUM_MINORS 16
#define ACE_SECTOR_SIZE (512)
#define ACE_FIFO_SIZE (32)
#define ACE_BUF_PER_SECTOR (ACE_SECTOR_SIZE / ACE_FIFO_SIZE)
#define ACE_BUS_WIDTH_8  0
#define ACE_BUS_WIDTH_16 1
struct ace_reg_ops;
struct ace_device ;
static DEFINE_MUTEX(xsysace_mutex);
static int ace_major;
struct ace_reg_ops ;
static u16 ace_in_8(struct ace_device *ace, int reg)
static void ace_out_8(struct ace_device *ace, int reg, u16 val)
static void ace_datain_8(struct ace_device *ace)
static void ace_dataout_8(struct ace_device *ace)
static struct ace_reg_ops ace_reg_8_ops = ;
static u16 ace_in_be16(struct ace_device *ace, int reg)
static void ace_out_be16(struct ace_device *ace, int reg, u16 val)
static void ace_datain_be16(struct ace_device *ace)
static void ace_dataout_be16(struct ace_device *ace)
static u16 ace_in_le16(struct ace_device *ace, int reg)
static void ace_out_le16(struct ace_device *ace, int reg, u16 val)
static void ace_datain_le16(struct ace_device *ace)
static void ace_dataout_le16(struct ace_device *ace)
static struct ace_reg_ops ace_reg_be16_ops = ;
static struct ace_reg_ops ace_reg_le16_ops = ;
static inline u16 ace_in(struct ace_device *ace, int reg)
static inline u32 ace_in32(struct ace_device *ace, int reg)
static inline void ace_out(struct ace_device *ace, int reg, u16 val)
static inline void ace_out32(struct ace_device *ace, int reg, u32 val)
#if defined(DEBUG)
static void ace_dump_mem(void *base, int len)
static inline void ace_dump_mem(void *base, int len)
static void ace_dump_regs(struct ace_device *ace)
void ace_fix_driveid(u16 *id)
#define ACE_TASK_IDLE      0
#define ACE_TASK_IDENTIFY  1
#define ACE_TASK_READ      2
#define ACE_TASK_WRITE     3
#define ACE_FSM_NUM_TASKS  4
#define ACE_FSM_STATE_IDLE               0
#define ACE_FSM_STATE_REQ_LOCK           1
#define ACE_FSM_STATE_WAIT_LOCK          2
#define ACE_FSM_STATE_WAIT_CFREADY       3
#define ACE_FSM_STATE_IDENTIFY_PREPARE   4
#define ACE_FSM_STATE_IDENTIFY_TRANSFER  5
#define ACE_FSM_STATE_IDENTIFY_COMPLETE  6
#define ACE_FSM_STATE_REQ_PREPARE        7
#define ACE_FSM_STATE_REQ_TRANSFER       8
#define ACE_FSM_STATE_REQ_COMPLETE       9
#define ACE_FSM_STATE_ERROR             10
#define ACE_FSM_NUM_STATES              11
static inline void ace_fsm_yield(struct ace_device *ace)
static inline void ace_fsm_yieldirq(struct ace_device *ace)
struct request *ace_get_next_request(struct request_queue * q)
static void ace_fsm_dostate(struct ace_device *ace)
static void ace_fsm_tasklet(unsigned long data)
static void ace_stall_timer(unsigned long data)
static int ace_interrupt_checkstate(struct ace_device *ace)
static irqreturn_t ace_interrupt(int irq, void *dev_id)
static void ace_request(struct request_queue * q)
static unsigned int ace_check_events(struct gendisk *gd, unsigned int clearing)
static int ace_revalidate_disk(struct gendisk *gd)
static int ace_open(struct block_device *bdev, fmode_t mode)
static int ace_release(struct gendisk *disk, fmode_t mode)
static int ace_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const struct block_device_operations ace_fops = ;
static int __devinit ace_setup(struct ace_device *ace)
static void __devexit ace_teardown(struct ace_device *ace)
static int __devinit
ace_alloc(struct device *dev, int id, resource_size_t physaddr,
int irq, int bus_width)
static void __devexit ace_free(struct device *dev)
static int __devinit ace_probe(struct platform_device *dev)
static int __devexit ace_remove(struct platform_device *dev)
static struct platform_driver ace_platform_driver = ;
#if defined(CONFIG_OF)
static int __devinit ace_of_probe(struct platform_device *op)
static int __devexit ace_of_remove(struct platform_device *op)
static const struct of_device_id ace_of_match[] __devinitconst = ;
MODULE_DEVICE_TABLE(of, ace_of_match);
static struct platform_driver ace_of_driver = ;
static inline int __init ace_of_register(void)
static inline void __exit ace_of_unregister(void)
static inline int __init ace_of_register(void)
static inline void __exit ace_of_unregister(void)
static int __init ace_init(void)
static void __exit ace_exit(void)
module_init(ace_init);
module_exit(ace_exit);
