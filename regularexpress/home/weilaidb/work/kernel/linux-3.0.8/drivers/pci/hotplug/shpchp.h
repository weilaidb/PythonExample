#define _SHPCHP_H
#if !defined(MODULE)
#define MY_NAME	"shpchp"
#define MY_NAME	THIS_MODULE->name
extern int shpchp_poll_mode;
extern int shpchp_poll_time;
extern int shpchp_debug;
extern struct workqueue_struct *shpchp_wq;
extern struct workqueue_struct *shpchp_ordered_wq;
#define dbg(format, arg...)						\
do  while (0)
#define err(format, arg...)						\
printk(KERN_ERR "%s: " format, MY_NAME , ## arg)
#define info(format, arg...)						\
printk(KERN_INFO "%s: " format, MY_NAME , ## arg)
#define warn(format, arg...)						\
printk(KERN_WARNING "%s: " format, MY_NAME , ## arg)
#define ctrl_dbg(ctrl, format, arg...)					\
do  while (0)
#define ctrl_err(ctrl, format, arg...)					\
dev_err(&ctrl->pci_dev->dev, format, ## arg)
#define ctrl_info(ctrl, format, arg...)					\
dev_info(&ctrl->pci_dev->dev, format, ## arg)
#define ctrl_warn(ctrl, format, arg...)					\
dev_warn(&ctrl->pci_dev->dev, format, ## arg)
#define SLOT_NAME_SIZE 10
struct slot ;
struct event_info ;
struct controller ;
#define PCI_DEVICE_ID_AMD_GOLAM_7450	0x7450
#define PCI_DEVICE_ID_AMD_POGO_7458	0x7458
#define PCIX_MEM_BASE_LIMIT_OFFSET	0x1C
#define PCIX_MISCII_OFFSET		0x48
#define PCIX_MISC_BRIDGE_ERRORS_OFFSET	0x80
#define PERRNONFATALENABLE_MASK		0x00040000
#define PERRFATALENABLE_MASK		0x00080000
#define PERRFLOODENABLE_MASK		0x00100000
#define SERRNONFATALENABLE_MASK		0x00200000
#define SERRFATALENABLE_MASK		0x00400000
#define PERR_OBSERVED_MASK		0x00000001
#define RSE_MASK			0x40000000
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
#define INTERLOCK_OPEN			0x00000002
#define ADD_NOT_SUPPORTED		0x00000003
#define CARD_FUNCTIONING		0x00000005
#define ADAPTER_NOT_SAME		0x00000006
#define NO_ADAPTER_PRESENT		0x00000009
#define NOT_ENOUGH_RESOURCES		0x0000000B
#define DEVICE_TYPE_NOT_SUPPORTED	0x0000000C
#define WRONG_BUS_FREQUENCY		0x0000000D
#define POWER_FAILURE			0x0000000E
extern int __must_check shpchp_create_ctrl_files(struct controller *ctrl);
extern void shpchp_remove_ctrl_files(struct controller *ctrl);
extern int shpchp_sysfs_enable_slot(struct slot *slot);
extern int shpchp_sysfs_disable_slot(struct slot *slot);
extern u8 shpchp_handle_attention_button(u8 hp_slot, struct controller *ctrl);
extern u8 shpchp_handle_switch_change(u8 hp_slot, struct controller *ctrl);
extern u8 shpchp_handle_presence_change(u8 hp_slot, struct controller *ctrl);
extern u8 shpchp_handle_power_fault(u8 hp_slot, struct controller *ctrl);
extern int shpchp_configure_device(struct slot *p_slot);
extern int shpchp_unconfigure_device(struct slot *p_slot);
extern void cleanup_slots(struct controller *ctrl);
extern void shpchp_queue_pushbutton_work(struct work_struct *work);
extern int shpc_init( struct controller *ctrl, struct pci_dev *pdev);
static inline const char *slot_name(struct slot *slot)
static inline int get_hp_hw_control_from_firmware(struct pci_dev *dev)
#define get_hp_hw_control_from_firmware(dev) (0)
struct ctrl_reg  __attribute__ ((packed));
enum ctrl_offsets ;
static inline struct slot *get_slot(struct hotplug_slot *hotplug_slot)
static inline struct slot *shpchp_find_slot(struct controller *ctrl, u8 device)
static inline void amd_pogo_errata_save_misc_reg(struct slot *p_slot)
static inline void amd_pogo_errata_restore_misc_reg(struct slot *p_slot)
struct hpc_ops ;
