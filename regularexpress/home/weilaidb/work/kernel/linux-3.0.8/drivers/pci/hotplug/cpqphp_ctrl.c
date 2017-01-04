static u32 configure_new_device(struct controller* ctrl, struct pci_func *func,
u8 behind_bridge, struct resource_lists *resources);
static int configure_new_function(struct controller* ctrl, struct pci_func *func,
u8 behind_bridge, struct resource_lists *resources);
static void interrupt_event_handler(struct controller *ctrl);
static struct task_struct *cpqhp_event_thread;
static unsigned long pushbutton_pending;
static void long_delay(int delay)
#define WRONG_BUS_FREQUENCY 0x07
static u8 handle_switch_change(u8 change, struct controller * ctrl)
static struct slot *cpqhp_find_slot(struct controller *ctrl, u8 device)
static u8 handle_presence_change(u16 change, struct controller * ctrl)
static u8 handle_power_fault(u8 change, struct controller * ctrl)
static int sort_by_size(struct pci_resource **head)
static int sort_by_max_size(struct pci_resource **head)
static struct pci_resource *do_pre_bridge_resource_split(struct pci_resource **head,
struct pci_resource **orig_head, u32 alignment)
static struct pci_resource *do_bridge_resource_split(struct pci_resource **head, u32 alignment)
static struct pci_resource *get_io_resource(struct pci_resource **head, u32 size)
static struct pci_resource *get_max_resource(struct pci_resource **head, u32 size)
static struct pci_resource *get_resource(struct pci_resource **head, u32 size)
int cpqhp_resource_sort_and_combine(struct pci_resource **head)
irqreturn_t cpqhp_ctrl_intr(int IRQ, void *data)
struct pci_func *cpqhp_slot_create(u8 busnumber)
static int slot_remove(struct pci_func * old_slot)
static int bridge_slot_remove(struct pci_func *bridge)
struct pci_func *cpqhp_slot_find(u8 bus, u8 device, u8 index)
static int is_bridge(struct pci_func * func)
static u8 set_controller_speed(struct controller *ctrl, u8 adapter_speed, u8 hp_slot)
static u32 board_replaced(struct pci_func *func, struct controller *ctrl)
static u32 board_added(struct pci_func *func, struct controller *ctrl)
static u32 remove_board(struct pci_func * func, u32 replace_flag, struct controller * ctrl)
static void pushbutton_helper_thread(unsigned long data)
static int event_thread(void* data)
int cpqhp_event_start_thread(void)
void cpqhp_event_stop_thread(void)
static int update_slot_info(struct controller *ctrl, struct slot *slot)
static void interrupt_event_handler(struct controller *ctrl)
void cpqhp_pushbutton_thread(unsigned long slot)
int cpqhp_process_SI(struct controller *ctrl, struct pci_func *func)
int cpqhp_process_SS(struct controller *ctrl, struct pci_func *func)
static void switch_leds(struct controller *ctrl, const int num_of_slots,
u32 *work_LED, const int direction)
int cpqhp_hardware_test(struct controller *ctrl, int test_num)
static u32 configure_new_device(struct controller * ctrl, struct pci_func * func,
u8 behind_bridge, struct resource_lists * resources)
static int configure_new_function(struct controller *ctrl, struct pci_func *func,
u8 behind_bridge,
struct resource_lists *resources)
