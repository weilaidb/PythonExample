#define attn_on(sl)  ibmphp_hpc_writeslot (sl, HPC_SLOT_ATTNON)
#define attn_off(sl) ibmphp_hpc_writeslot (sl, HPC_SLOT_ATTNOFF)
#define attn_LED_blink(sl) ibmphp_hpc_writeslot (sl, HPC_SLOT_BLINKLED)
#define get_ctrl_revision(sl, rev) ibmphp_hpc_readslot (sl, READ_REVLEVEL, rev)
#define get_hpc_options(sl, opt) ibmphp_hpc_readslot (sl, READ_HPCOPTIONS, opt)
#define DRIVER_VERSION	"0.6"
#define DRIVER_DESC	"IBM Hot Plug PCI Controller Driver"
int ibmphp_debug;
static int debug;
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC (debug, "Debugging mode enabled or not");
MODULE_LICENSE ("GPL");
MODULE_DESCRIPTION (DRIVER_DESC);
struct pci_bus *ibmphp_pci_bus;
static int max_slots;
static int irqs[16];
static int init_flag;
static inline int get_cur_bus_info(struct slot **sl)
static inline int slot_update(struct slot **sl)
static int __init get_max_slots (void)
int ibmphp_init_devno(struct slot **cur_slot)
static inline int power_on(struct slot *slot_cur)
static inline int power_off(struct slot *slot_cur)
static int set_attention_status(struct hotplug_slot *hotplug_slot, u8 value)
static int get_attention_status(struct hotplug_slot *hotplug_slot, u8 * value)
static int get_latch_status(struct hotplug_slot *hotplug_slot, u8 * value)
static int get_power_status(struct hotplug_slot *hotplug_slot, u8 * value)
static int get_adapter_present(struct hotplug_slot *hotplug_slot, u8 * value)
static int get_max_bus_speed(struct slot *slot)
static int __init init_ops(void)
static int validate(struct slot *slot_cur, int opn)
int ibmphp_update_slot_info(struct slot *slot_cur)
static struct pci_func *ibm_slot_find(u8 busno, u8 device, u8 function)
static void free_slots(void)
static void ibm_unconfigure_device(struct pci_func *func)
static u8 bus_structure_fixup(u8 busno)
static int ibm_configure_device(struct pci_func *func)
static int is_bus_empty(struct slot * slot_cur)
static int set_bus(struct slot * slot_cur)
static int check_limitations(struct slot *slot_cur)
static inline void print_card_capability(struct slot *slot_cur)
static int enable_slot(struct hotplug_slot *hs)
static int ibmphp_disable_slot(struct hotplug_slot *hotplug_slot)
int ibmphp_do_disable_slot(struct slot *slot_cur)
struct hotplug_slot_ops ibmphp_hotplug_slot_ops = ;
static void ibmphp_unload(void)
static int __init ibmphp_init(void)
static void __exit ibmphp_exit(void)
module_init(ibmphp_init);
module_exit(ibmphp_exit);
