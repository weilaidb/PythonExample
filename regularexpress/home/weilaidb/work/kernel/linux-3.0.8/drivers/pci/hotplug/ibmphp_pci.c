static int configure_device(struct pci_func *);
static int configure_bridge(struct pci_func **, u8);
static struct res_needed *scan_behind_bridge(struct pci_func *, u8);
static int add_new_bus (struct bus_node *, struct resource_node *, struct resource_node *, struct resource_node *, u8);
static u8 find_sec_number (u8 primary_busno, u8 slotno);
static void assign_alt_irq (struct pci_func * cur_func, u8 class_code)
int ibmphp_configure_card (struct pci_func *func, u8 slotno)
static int configure_device (struct pci_func *func)
static int configure_bridge (struct pci_func **func_passed, u8 slotno)
static struct res_needed *scan_behind_bridge (struct pci_func * func, u8 busno)
static int unconfigure_boot_device (u8 busno, u8 device, u8 function)
static int unconfigure_boot_bridge (u8 busno, u8 device, u8 function)
static int unconfigure_boot_card (struct slot *slot_cur)
int ibmphp_unconfigure_card (struct slot **slot_cur, int the_end)
static int add_new_bus (struct bus_node *bus, struct resource_node *io, struct resource_node *mem, struct resource_node *pfmem, u8 parent_busno)
static u8 find_sec_number (u8 primary_busno, u8 slotno)
