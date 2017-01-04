#define LNC_MCR_OFFSET		0xD0
#define LNC_MDR_OFFSET		0xD4
#define LNC_MESSAGE_READ_OPCODE	0xD0
#define LNC_MESSAGE_WRITE_OPCODE 0xE0
#define LNC_MESSAGE_BYTE_WRITE_ENABLES	0xF
#define LNC_BUNIT_PORT	0x3
#define LNC_BRAR0L	0x10
#define LNC_BRAR0H	0x11
#define LNC_BRAR1L	0x12
#define LNC_BRAR1H	0x13
#define LNC_BRAR2L	0x14
#define LNC_BRAR2H	0x15
#define MRST_NUM_RAR 3
struct rar_addr ;
struct client ;
static DEFINE_MUTEX(rar_mutex);
static DEFINE_MUTEX(lnc_reg_mutex);
struct rar_device ;
static struct rar_device my_rar_device;
static struct rar_device *alloc_rar_device(void)
static void free_rar_device(struct rar_device *rar)
static struct rar_device *_rar_to_device(int rar, int *off)
static struct rar_device *rar_to_device(int rar, int *off)
static struct client *rar_to_client(int rar)
static int rar_read_addr(struct pci_dev *pdev, int offset, dma_addr_t *addr)
static int rar_set_addr(struct pci_dev *pdev,
int offset,
dma_addr_t addr)
static int init_rar_params(struct rar_device *rar)
int rar_get_address(int rar_index, dma_addr_t *start, dma_addr_t *end)
EXPORT_SYMBOL(rar_get_address);
int rar_lock(int rar_index)
EXPORT_SYMBOL(rar_lock);
int register_rar(int num, int (*callback)(unsigned long data),
unsigned long data)
EXPORT_SYMBOL(register_rar);
void unregister_rar(int num)
EXPORT_SYMBOL(unregister_rar);
static void rar_callback(struct rar_device *rar)
static int rar_probe(struct pci_dev *dev, const struct pci_device_id *id)
const struct pci_device_id rar_pci_id_tbl[] = ;
MODULE_DEVICE_TABLE(pci, rar_pci_id_tbl);
const struct pci_device_id *my_id_table = rar_pci_id_tbl;
static struct pci_driver rar_pci_driver = ;
static int __init rar_init_handler(void)
static void __exit rar_exit_handler(void)
module_init(rar_init_handler);
module_exit(rar_exit_handler);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Intel Restricted Access Region Register Driver");
