#define TCODE_PHY_PACKET		0x10
#define PCI_DEVICE_ID_TI_PCILYNX	0x8000
static char driver_name[] = KBUILD_MODNAME;
struct pcl ;
struct packet ;
struct packet_buffer ;
struct pcilynx ;
static inline struct pcilynx *
lynx_get(struct pcilynx *lynx)
static void
lynx_release(struct kref *kref)
static inline void
lynx_put(struct pcilynx *lynx)
struct client ;
static DEFINE_MUTEX(card_mutex);
static LIST_HEAD(card_list);
static int
packet_buffer_init(struct packet_buffer *buffer, size_t capacity)
static void
packet_buffer_destroy(struct packet_buffer *buffer)
static int
packet_buffer_get(struct client *client, char __user *data, size_t user_length)
static void
packet_buffer_put(struct packet_buffer *buffer, void *data, size_t length)
static inline void
reg_write(struct pcilynx *lynx, int offset, u32 data)
static inline u32
reg_read(struct pcilynx *lynx, int offset)
static inline void
reg_set_bits(struct pcilynx *lynx, int offset, u32 mask)
static inline void
run_pcl(struct pcilynx *lynx, dma_addr_t pcl_bus,
int dmachan)
static int
set_phy_reg(struct pcilynx *lynx, int addr, int val)
static int
nosy_open(struct inode *inode, struct file *file)
static int
nosy_release(struct inode *inode, struct file *file)
static unsigned int
nosy_poll(struct file *file, poll_table *pt)
static ssize_t
nosy_read(struct file *file, char __user *buffer, size_t count, loff_t *offset)
static long
nosy_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations nosy_ops = ;
#define PHY_PACKET_SIZE 12
static void
packet_irq_handler(struct pcilynx *lynx)
static void
bus_reset_irq_handler(struct pcilynx *lynx)
static irqreturn_t
irq_handler(int irq, void *device)
static void
remove_card(struct pci_dev *dev)
#define RCV_BUFFER_SIZE (16 * 1024)
static int __devinit
add_card(struct pci_dev *dev, const struct pci_device_id *unused)
static struct pci_device_id pci_table[] __devinitdata = ;
static struct pci_driver lynx_pci_driver = ;
MODULE_AUTHOR("Kristian Hoegsberg");
MODULE_DESCRIPTION("Snoop mode driver for TI pcilynx 1394 controllers");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pci_table);
static int __init nosy_init(void)
static void __exit nosy_cleanup(void)
module_init(nosy_init);
module_exit(nosy_cleanup);
