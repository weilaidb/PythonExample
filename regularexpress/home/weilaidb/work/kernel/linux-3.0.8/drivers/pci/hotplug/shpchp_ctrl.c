static void interrupt_event_handler(struct work_struct *work);
static int shpchp_enable_slot(struct slot *p_slot);
static int shpchp_disable_slot(struct slot *p_slot);
static int queue_interrupt_event(struct slot *p_slot, u32 event_type)
u8 shpchp_handle_attention_button(u8 hp_slot, struct controller *ctrl)
u8 shpchp_handle_switch_change(u8 hp_slot, struct controller *ctrl)
u8 shpchp_handle_presence_change(u8 hp_slot, struct controller *ctrl)
u8 shpchp_handle_power_fault(u8 hp_slot, struct controller *ctrl)
static int change_bus_speed(struct controller *ctrl, struct slot *p_slot,
enum pci_bus_speed speed)
static int fix_bus_speed(struct controller *ctrl, struct slot *pslot,
u8 flag, enum pci_bus_speed asp, enum pci_bus_speed bsp,
enum pci_bus_speed msp)
static int board_added(struct slot *p_slot)
static int remove_board(struct slot *p_slot)
struct pushbutton_work_info ;
static void shpchp_pushbutton_thread(struct work_struct *work)
void shpchp_queue_pushbutton_work(struct work_struct *work)
static int update_slot_info (struct slot *slot)
static void handle_button_press_event(struct slot *p_slot)
static void interrupt_event_handler(struct work_struct *work)
static int shpchp_enable_slot (struct slot *p_slot)
static int shpchp_disable_slot (struct slot *p_slot)
int shpchp_sysfs_enable_slot(struct slot *p_slot)
int shpchp_sysfs_disable_slot(struct slot *p_slot)
