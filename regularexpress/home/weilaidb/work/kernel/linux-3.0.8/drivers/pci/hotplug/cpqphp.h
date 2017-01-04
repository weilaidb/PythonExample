#define _CPQPHP_H
#define MY_NAME	"cpqphp"
#define dbg(fmt, arg...) do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format , MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format , MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format , MY_NAME , ## arg)
struct smbios_system_slot  __attribute__ ((packed));
enum smbios_system_slot_offsets ;
struct smbios_generic  __attribute__ ((packed));
enum smbios_generic_offsets ;
struct smbios_entry_point  __attribute__ ((packed));
enum smbios_entry_point_offsets ;
struct ctrl_reg  __attribute__ ((packed));
enum ctrl_offsets ;
struct hrt  __attribute__ ((packed));
enum hrt_offsets ;
struct slot_rt  __attribute__ ((packed));
enum slot_rt_offsets ;
struct pci_func ;
struct slot ;
struct pci_resource ;
struct event_info ;
struct controller ;
struct irq_mapping ;
struct resource_lists ;
#define ROM_PHY_ADDR			0x0F0000
#define ROM_PHY_LEN			0x00ffff
#define PCI_HPC_ID			0xA0F7
#define PCI_SUB_HPC_ID			0xA2F7
#define PCI_SUB_HPC_ID2			0xA2F8
#define PCI_SUB_HPC_ID3			0xA2F9
#define PCI_SUB_HPC_ID_INTC		0xA2FA
#define PCI_SUB_HPC_ID4			0xA2FD
#define INT_BUTTON_IGNORE		0
#define INT_PRESENCE_ON			1
#define INT_PRESENCE_OFF		2
#define INT_SWITCH_CLOSE		3
#define INT_SWITCH_OPEN			4
#define INT_POWER_FAULT			5
#define INT_POWER_FAULT_CLEAR		6
#define INT_BUTTON_PRESS		7
#define INT_BUTTON_RELEASE		8
#define INT_BUTTON_CANCEL		9
#define STATIC_STATE			0
#define BLINKINGON_STATE		1
#define BLINKINGOFF_STATE		2
#define POWERON_STATE			3
#define POWEROFF_STATE			4
#define PCISLOT_INTERLOCK_CLOSED	0x00000001
#define PCISLOT_ADAPTER_PRESENT		0x00000002
#define PCISLOT_POWERED			0x00000004
#define PCISLOT_66_MHZ_OPERATION	0x00000008
#define PCISLOT_64_BIT_OPERATION	0x00000010
#define PCISLOT_REPLACE_SUPPORTED	0x00000020
#define PCISLOT_ADD_SUPPORTED		0x00000040
#define PCISLOT_INTERLOCK_SUPPORTED	0x00000080
#define PCISLOT_66_MHZ_SUPPORTED	0x00000100
#define PCISLOT_64_BIT_SUPPORTED	0x00000200
#define PCI_TO_PCI_BRIDGE_CLASS		0x00060400
#define INTERLOCK_OPEN			0x00000002
#define ADD_NOT_SUPPORTED		0x00000003
#define CARD_FUNCTIONING		0x00000005
#define ADAPTER_NOT_SAME		0x00000006
#define NO_ADAPTER_PRESENT		0x00000009
#define NOT_ENOUGH_RESOURCES		0x0000000B
#define DEVICE_TYPE_NOT_SUPPORTED	0x0000000C
#define POWER_FAILURE			0x0000000E
#define REMOVE_NOT_SUPPORTED		0x00000003
#define msg_initialization_err	"Initialization failure, error=%d\n"
#define msg_HPC_rev_error	"Unsupported revision of the PCI hot plug controller found.\n"
#define msg_HPC_non_compaq_or_intel	"The PCI hot plug controller is not supported by this driver.\n"
#define msg_HPC_not_supported	"this system is not supported by this version of cpqphpd. Upgrade to a newer version of cpqphpd\n"
#define msg_unable_to_save	"unable to store PCI hot plug add resource information. This system must be rebooted before adding any PCI devices.\n"
#define msg_button_on		"PCI slot #%d - powering on due to button press.\n"
#define msg_button_off		"PCI slot #%d - powering off due to button press.\n"
#define msg_button_cancel	"PCI slot #%d - action canceled due to button press.\n"
#define msg_button_ignore	"PCI slot #%d - button press ignored.  (action in progress...)\n"
extern void cpqhp_initialize_debugfs(void);
extern void cpqhp_shutdown_debugfs(void);
extern void cpqhp_create_debugfs_files(struct controller *ctrl);
extern void cpqhp_remove_debugfs_files(struct controller *ctrl);
extern void cpqhp_pushbutton_thread(unsigned long event_pointer);
extern irqreturn_t cpqhp_ctrl_intr(int IRQ, void *data);
extern int cpqhp_find_available_resources(struct controller *ctrl,
void __iomem *rom_start);
extern int cpqhp_event_start_thread(void);
extern void cpqhp_event_stop_thread(void);
extern struct pci_func *cpqhp_slot_create(unsigned char busnumber);
extern struct pci_func *cpqhp_slot_find(unsigned char bus, unsigned char device,
unsigned char index);
extern int cpqhp_process_SI(struct controller *ctrl, struct pci_func *func);
extern int cpqhp_process_SS(struct controller *ctrl, struct pci_func *func);
extern int cpqhp_hardware_test(struct controller *ctrl, int test_num);
extern int	cpqhp_resource_sort_and_combine	(struct pci_resource **head);
extern int cpqhp_set_irq(u8 bus_num, u8 dev_num, u8 int_pin, u8 irq_num);
extern int cpqhp_get_bus_dev(struct controller *ctrl, u8 *bus_num, u8 *dev_num,
u8 slot);
extern int cpqhp_save_config(struct controller *ctrl, int busnumber,
int is_hot_plug);
extern int cpqhp_save_base_addr_length(struct controller *ctrl,
struct pci_func *func);
extern int cpqhp_save_used_resources(struct controller *ctrl,
struct pci_func *func);
extern int cpqhp_configure_board(struct controller *ctrl,
struct pci_func *func);
extern int cpqhp_save_slot_config(struct controller *ctrl,
struct pci_func *new_slot);
extern int cpqhp_valid_replace(struct controller *ctrl, struct pci_func *func);
extern void cpqhp_destroy_board_resources(struct pci_func *func);
extern int cpqhp_return_board_resources	(struct pci_func *func,
struct resource_lists *resources);
extern void cpqhp_destroy_resource_list(struct resource_lists *resources);
extern int cpqhp_configure_device(struct controller *ctrl,
struct pci_func *func);
extern int cpqhp_unconfigure_device(struct pci_func *func);
extern int cpqhp_debug;
extern int cpqhp_legacy_mode;
extern struct controller *cpqhp_ctrl_list;
extern struct pci_func *cpqhp_slot_list[256];
extern struct irq_routing_table *cpqhp_routing_table;
extern u8 cpqhp_nic_irq;
extern u8 cpqhp_disk_irq;
static inline const char *slot_name(struct slot *slot)
static inline void return_resource(struct pci_resource **head,
struct pci_resource *node)
static inline void set_SOGO(struct controller *ctrl)
static inline void amber_LED_on(struct controller *ctrl, u8 slot)
static inline void amber_LED_off(struct controller *ctrl, u8 slot)
static inline int read_amber_LED(struct controller *ctrl, u8 slot)
static inline void green_LED_on(struct controller *ctrl, u8 slot)
static inline void green_LED_off(struct controller *ctrl, u8 slot)
static inline void green_LED_blink(struct controller *ctrl, u8 slot)
static inline void slot_disable(struct controller *ctrl, u8 slot)
static inline void slot_enable(struct controller *ctrl, u8 slot)
static inline u8 is_slot_enabled(struct controller *ctrl, u8 slot)
static inline u8 read_slot_enable(struct controller *ctrl)
static inline u8 get_controller_speed(struct controller *ctrl)
static inline u8 get_adapter_speed(struct controller *ctrl, u8 hp_slot)
static inline void enable_slot_power(struct controller *ctrl, u8 slot)
static inline void disable_slot_power(struct controller *ctrl, u8 slot)
static inline int cpq_get_attention_status(struct controller *ctrl, struct slot *slot)
static inline int get_slot_enabled(struct controller *ctrl, struct slot *slot)
static inline int cpq_get_latch_status(struct controller *ctrl,
struct slot *slot)
static inline int get_presence_status(struct controller *ctrl,
struct slot *slot)
static inline int wait_for_ctrl_irq(struct controller *ctrl)
static inline int cpqhp_routing_table_length(void)
