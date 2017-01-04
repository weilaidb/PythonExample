static int flags = 0;
static void update_resources (struct bus_node *bus_cur, int type, int rangeno);
static int once_over (void);
static int remove_ranges (struct bus_node *, struct bus_node *);
static int update_bridge_ranges (struct bus_node **);
static int add_bus_range (int type, struct range_node *, struct bus_node *);
static void fix_resources (struct bus_node *);
static struct bus_node *find_bus_wprev (u8, struct bus_node **, u8);
static LIST_HEAD(gbuses);
static struct bus_node * __init alloc_error_bus (struct ebda_pci_rsrc * curr, u8 busno, int flag)
static struct resource_node * __init alloc_resources (struct ebda_pci_rsrc * curr)
static int __init alloc_bus_range (struct bus_node **new_bus, struct range_node **new_range, struct ebda_pci_rsrc *curr, int flag, u8 first_bus)
int __init ibmphp_rsrc_init (void)
static int add_bus_range (int type, struct range_node *range, struct bus_node *bus_cur)
static void update_resources (struct bus_node *bus_cur, int type, int rangeno)
static void fix_me (struct resource_node *res, struct bus_node *bus_cur, struct range_node *range)
static void fix_resources (struct bus_node *bus_cur)
int ibmphp_add_resource (struct resource_node *res)
int ibmphp_remove_resource (struct resource_node *res)
static struct range_node * find_range (struct bus_node *bus_cur, struct resource_node * res)
int ibmphp_check_resource (struct resource_node *res, u8 bridge)
int ibmphp_remove_bus (struct bus_node *bus, u8 parent_busno)
static int remove_ranges (struct bus_node *bus_cur, struct bus_node *bus_prev)
int ibmphp_find_resource (struct bus_node *bus, u32 start_address, struct resource_node **res, int flag)
void ibmphp_free_resources (void)
static int __init once_over (void)
int ibmphp_add_pfmem_from_mem (struct resource_node *pfmem)
struct bus_node *ibmphp_find_res_bus (u8 bus_number)
static struct bus_node *find_bus_wprev (u8 bus_number, struct bus_node **prev, u8 flag)
void ibmphp_print_test (void)
static int range_exists_already (struct range_node * range, struct bus_node * bus_cur, u8 type)
static int __init update_bridge_ranges (struct bus_node **bus)
