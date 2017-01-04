#define _ICP_MULTI_H_
struct pcilst_struct ;
struct pcilst_struct *inova_devices;
static void pci_card_list_init(unsigned short pci_vendor, char display);
static void pci_card_list_cleanup(unsigned short pci_vendor);
static struct pcilst_struct *find_free_pci_card_by_device(unsigned short
vendor_id,
unsigned short
device_id);
static int find_free_pci_card_by_position(unsigned short vendor_id,
unsigned short device_id,
unsigned short pci_bus,
unsigned short pci_slot,
struct pcilst_struct **card);
static struct pcilst_struct *select_and_alloc_pci_card(unsigned short vendor_id,
unsigned short device_id,
unsigned short pci_bus,
unsigned short pci_slot);
static int pci_card_alloc(struct pcilst_struct *amcc);
static int pci_card_free(struct pcilst_struct *amcc);
static void pci_card_list_display(void);
static int pci_card_data(struct pcilst_struct *amcc,
unsigned char *pci_bus, unsigned char *pci_slot,
unsigned char *pci_func, resource_size_t * io_addr,
unsigned int *irq);
static void pci_card_list_init(unsigned short pci_vendor, char display)
static void pci_card_list_cleanup(unsigned short pci_vendor)
static struct pcilst_struct *find_free_pci_card_by_device(unsigned short
vendor_id,
unsigned short
device_id)
static int find_free_pci_card_by_position(unsigned short vendor_id,
unsigned short device_id,
unsigned short pci_bus,
unsigned short pci_slot,
struct pcilst_struct **card)
static int pci_card_alloc(struct pcilst_struct *inova)
static int pci_card_free(struct pcilst_struct *inova)
static void pci_card_list_display(void)
static int pci_card_data(struct pcilst_struct *inova,
unsigned char *pci_bus, unsigned char *pci_slot,
unsigned char *pci_func, resource_size_t * io_addr,
unsigned int *irq)
static struct pcilst_struct *select_and_alloc_pci_card(unsigned short vendor_id,
unsigned short device_id,
unsigned short pci_bus,
unsigned short pci_slot)
