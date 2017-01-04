#undef ID_MASK
#undef N_DATA
static char *main_revision = "$Revision: 1.55.4.6 $";
static int major;
static int dbgmask;
MODULE_DESCRIPTION("Kernel driver for Eicon DIVA Server cards");
MODULE_AUTHOR("Cytronics & Melware, Eicon Networks");
MODULE_LICENSE("GPL");
module_param(dbgmask, int, 0);
MODULE_PARM_DESC(dbgmask, "initial debug mask");
static char *DRIVERNAME =
"Eicon DIVA Server driver (http:
static char *DRIVERLNAME = "divas";
static char *DEVNAME = "Divas";
char *DRIVERRELEASE_DIVAS = "2.0";
extern irqreturn_t diva_os_irq_wrapper(int irq, void *context);
extern int create_divas_proc(void);
extern void remove_divas_proc(void);
extern void diva_get_vserial_number(PISDN_ADAPTER IoAdapter, char *buf);
extern int divasfunc_init(int dbgmask);
extern void divasfunc_exit(void);
typedef struct _diva_os_thread_dpc  diva_os_thread_dpc_t;
#if !defined(PCI_DEVICE_ID_EICON_MAESTRAP_2)
#define PCI_DEVICE_ID_EICON_MAESTRAP_2       0xE015
#if !defined(PCI_DEVICE_ID_EICON_4BRI_VOIP)
#define PCI_DEVICE_ID_EICON_4BRI_VOIP        0xE016
#if !defined(PCI_DEVICE_ID_EICON_4BRI_2_VOIP)
#define PCI_DEVICE_ID_EICON_4BRI_2_VOIP      0xE017
#if !defined(PCI_DEVICE_ID_EICON_BRI2M_2)
#define PCI_DEVICE_ID_EICON_BRI2M_2          0xE018
#if !defined(PCI_DEVICE_ID_EICON_MAESTRAP_2_VOIP)
#define PCI_DEVICE_ID_EICON_MAESTRAP_2_VOIP  0xE019
#if !defined(PCI_DEVICE_ID_EICON_2F)
#define PCI_DEVICE_ID_EICON_2F               0xE01A
#if !defined(PCI_DEVICE_ID_EICON_BRI2M_2_VOIP)
#define PCI_DEVICE_ID_EICON_BRI2M_2_VOIP     0xE01B
static struct pci_device_id divas_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, divas_pci_tbl);
static int divas_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void __devexit divas_remove_one(struct pci_dev *pdev);
static struct pci_driver diva_pci_driver = ;
static char *getrev(const char *revision)
void diva_log_info(unsigned char *format, ...)
void divas_get_version(char *p)
byte diva_os_get_pci_bus(void *pci_dev_handle)
byte diva_os_get_pci_func(void *pci_dev_handle)
unsigned long divasa_get_pci_irq(unsigned char bus, unsigned char func,
void *pci_dev_handle)
unsigned long divasa_get_pci_bar(unsigned char bus, unsigned char func,
int bar, void *pci_dev_handle)
void PCIwrite(byte bus, byte func, int offset, void *data, int length,
void *pci_dev_handle)
void PCIread(byte bus, byte func, int offset, void *data, int length,
void *pci_dev_handle)
static void *diva_pci_alloc_consistent(struct pci_dev *hwdev,
size_t size,
dma_addr_t * dma_handle,
void **addr_handle)
void diva_init_dma_map(void *hdev,
struct _diva_dma_map_entry **ppmap, int nentries)
void diva_free_dma_map(void *hdev, struct _diva_dma_map_entry *pmap)
int
diva_os_register_io_port(void *adapter, int on, unsigned long port,
unsigned long length, const char *name, int id)
void __iomem *divasa_remap_pci_bar(diva_os_xdi_adapter_t *a, int id, unsigned long bar, unsigned long area_length)
void divasa_unmap_pci_bar(void __iomem *bar)
byte __inline__ inpp(void __iomem *addr)
word __inline__ inppw(void __iomem *addr)
void __inline__ inppw_buffer(void __iomem *addr, void *P, int length)
void __inline__ outppw_buffer(void __iomem *addr, void *P, int length)
void __inline__ outppw(void __iomem *addr, word w)
void __inline__ outpp(void __iomem *addr, word p)
int diva_os_register_irq(void *context, byte irq, const char *name)
void diva_os_remove_irq(void *context, byte irq)
static void diva_os_dpc_proc(unsigned long context)
int diva_os_initialize_soft_isr(diva_os_soft_isr_t * psoft_isr,
diva_os_soft_isr_callback_t callback,
void *callback_context)
int diva_os_schedule_soft_isr(diva_os_soft_isr_t * psoft_isr)
int diva_os_cancel_soft_isr(diva_os_soft_isr_t * psoft_isr)
void diva_os_remove_soft_isr(diva_os_soft_isr_t * psoft_isr)
static int
xdi_copy_to_user(void *os_handle, void __user *dst, const void *src, int length)
static int
xdi_copy_from_user(void *os_handle, void *dst, const void __user *src, int length)
static int divas_open(struct inode *inode, struct file *file)
static int divas_release(struct inode *inode, struct file *file)
static ssize_t divas_write(struct file *file, const char __user *buf,
size_t count, loff_t * ppos)
static ssize_t divas_read(struct file *file, char __user *buf,
size_t count, loff_t * ppos)
static unsigned int divas_poll(struct file *file, poll_table * wait)
static const struct file_operations divas_fops = ;
static void divas_unregister_chrdev(void)
static int DIVA_INIT_FUNCTION divas_register_chrdev(void)
static int __devinit divas_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit divas_remove_one(struct pci_dev *pdev)
static int DIVA_INIT_FUNCTION divas_init(void)
static void DIVA_EXIT_FUNCTION divas_exit(void)
module_init(divas_init);
module_exit(divas_exit);
