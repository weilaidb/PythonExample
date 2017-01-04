#undef DEBUG
#define MM_MAXCARDS 4
#define MM_RAHEAD 2
#define MM_BLKSIZE 1024
#define MM_HARDSECT 512
#define MM_SHIFT 6
#define DRIVER_NAME	"umem"
#define DRIVER_VERSION	"v2.3"
#define DRIVER_AUTHOR	"San Mehat, Johannes Erdfelt, NeilBrown"
#define DRIVER_DESC	"Micro Memory(tm) PCI memory board block driver"
static int debug;
#define HW_TRACE(x)
#define DEBUG_LED_ON_TRANSFER	0x01
#define DEBUG_BATTERY_POLLING	0x02
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug bitmask");
static int pci_read_cmd = 0x0C;
module_param(pci_read_cmd, int, 0);
MODULE_PARM_DESC(pci_read_cmd, "PCI read command");
static int pci_write_cmd = 0x0F;
module_param(pci_write_cmd, int, 0);
MODULE_PARM_DESC(pci_write_cmd, "PCI write command");
static int pci_cmds;
static int major_nr;
struct cardinfo ;
static struct cardinfo cards[MM_MAXCARDS];
static struct timer_list battery_timer;
static int num_cards;
static struct gendisk *mm_gendisk[MM_MAXCARDS];
static void check_batteries(struct cardinfo *card);
static int get_userbit(struct cardinfo *card, int bit)
static int set_userbit(struct cardinfo *card, int bit, unsigned char state)
static void set_led(struct cardinfo *card, int shift, unsigned char state)
static void dump_regs(struct cardinfo *card)
static void dump_dmastat(struct cardinfo *card, unsigned int dmastat)
static void mm_start_io(struct cardinfo *card)
static int add_bio(struct cardinfo *card);
static void activate(struct cardinfo *card)
static inline void reset_page(struct mm_page *page)
static int add_bio(struct cardinfo *card)
static void process_page(unsigned long data)
static int mm_make_request(struct request_queue *q, struct bio *bio)
static irqreturn_t mm_interrupt(int irq, void *__card)
static void set_fault_to_battery_status(struct cardinfo *card)
static void init_battery_timer(void);
static int check_battery(struct cardinfo *card, int battery, int status)
static void check_batteries(struct cardinfo *card)
static void check_all_batteries(unsigned long ptr)
static void init_battery_timer(void)
static void del_battery_timer(void)
static int mm_revalidate(struct gendisk *disk)
static int mm_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const struct block_device_operations mm_fops = ;
static int __devinit mm_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void mm_pci_remove(struct pci_dev *dev)
static const struct pci_device_id mm_pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, mm_pci_ids);
static struct pci_driver mm_pci_driver = ;
static int __init mm_init(void)
static void __exit mm_cleanup(void)
module_init(mm_init);
module_exit(mm_cleanup);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
