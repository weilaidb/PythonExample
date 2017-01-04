LIST_HEAD (ibmphp_ebda_pci_rsrc_head);
LIST_HEAD (ibmphp_slot_head);
static struct ebda_hpc_list *hpc_list_ptr;
static struct ebda_rsrc_list *rsrc_list_ptr;
static struct rio_table_hdr *rio_table_ptr = NULL;
static LIST_HEAD (ebda_hpc_head);
static LIST_HEAD (bus_info_head);
static LIST_HEAD (rio_vg_head);
static LIST_HEAD (rio_lo_head);
static LIST_HEAD (opt_vg_head);
static LIST_HEAD (opt_lo_head);
static void __iomem *io_mem;
static int ebda_rsrc_controller (void);
static int ebda_rsrc_rsrc (void);
static int ebda_rio_table (void);
static struct ebda_hpc_list * __init alloc_ebda_hpc_list (void)
static struct controller *alloc_ebda_hpc (u32 slot_count, u32 bus_count)
static void free_ebda_hpc (struct controller *controller)
static struct ebda_rsrc_list * __init alloc_ebda_rsrc_list (void)
static struct ebda_pci_rsrc *alloc_ebda_pci_rsrc (void)
static void __init print_bus_info (void)
static void print_lo_info (void)
static void print_vg_info (void)
static void __init print_ebda_pci_rsrc (void)
static void __init print_ibm_slot (void)
static void __init print_opt_vg (void)
static void __init print_ebda_hpc (void)
int __init ibmphp_access_ebda (void)
static int __init ebda_rio_table (void)
static struct opt_rio *search_opt_vg (u8 chassis_num)
static int __init combine_wpg_for_chassis (void)
static struct opt_rio_lo *search_opt_lo (u8 chassis_num)
static int combine_wpg_for_expansion (void)
static int first_slot_num (u8 slot_num, u8 first_slot, u8 var)
static struct opt_rio_lo * find_rxe_num (u8 slot_num)
static struct opt_rio * find_chassis_num (u8 slot_num)
static u8 calculate_first_slot (u8 slot_num)
#define SLOT_NAME_SIZE 30
static char *create_file_name (struct slot * slot_cur)
static int fillslotinfo(struct hotplug_slot *hotplug_slot)
static void release_slot(struct hotplug_slot *hotplug_slot)
static struct pci_driver ibmphp_driver;
static int __init ebda_rsrc_controller (void)
static int __init ebda_rsrc_rsrc (void)
u16 ibmphp_get_total_controllers (void)
struct slot *ibmphp_get_slot_from_physical_num (u8 physical_num)
struct bus_info *ibmphp_find_same_bus_num (u32 num)
int ibmphp_get_bus_index (u8 num)
void ibmphp_free_bus_info_queue (void)
void ibmphp_free_ebda_hpc_queue (void)
void ibmphp_free_ebda_pci_rsrc_queue (void)
static struct pci_device_id id_table[] = ;
MODULE_DEVICE_TABLE(pci, id_table);
static int ibmphp_probe (struct pci_dev *, const struct pci_device_id *);
static struct pci_driver ibmphp_driver = ;
int ibmphp_register_pci (void)
static int ibmphp_probe (struct pci_dev * dev, const struct pci_device_id *ids)
