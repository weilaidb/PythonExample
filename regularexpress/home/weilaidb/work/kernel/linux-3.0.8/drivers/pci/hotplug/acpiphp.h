#define _ACPIPHP_H
#define dbg(format, arg...)					\
do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format, MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format, MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format, MY_NAME , ## arg)
struct acpiphp_bridge;
struct acpiphp_slot;
struct slot ;
static inline const char *slot_name(struct slot *slot)
struct acpiphp_bridge ;
struct acpiphp_slot ;
struct acpiphp_func ;
struct acpiphp_attention_info
;
#define ACPI_PCI_HOST_HID		"PNP0A03"
#define BRIDGE_TYPE_HOST		0
#define BRIDGE_TYPE_P2P			1
#define ACPI_STA_PRESENT		(0x00000001)
#define ACPI_STA_ENABLED		(0x00000002)
#define ACPI_STA_SHOW_IN_UI		(0x00000004)
#define ACPI_STA_FUNCTIONING		(0x00000008)
#define ACPI_STA_ALL			(0x0000000f)
#define BRIDGE_HAS_STA		(0x00000001)
#define BRIDGE_HAS_EJ0		(0x00000002)
#define BRIDGE_HAS_HPP		(0x00000004)
#define BRIDGE_HAS_PS0		(0x00000010)
#define BRIDGE_HAS_PS1		(0x00000020)
#define BRIDGE_HAS_PS2		(0x00000040)
#define BRIDGE_HAS_PS3		(0x00000080)
#define SLOT_POWEREDON		(0x00000001)
#define SLOT_ENABLED		(0x00000002)
#define SLOT_MULTIFUNCTION	(0x00000004)
#define FUNC_HAS_STA		(0x00000001)
#define FUNC_HAS_EJ0		(0x00000002)
#define FUNC_HAS_PS0		(0x00000010)
#define FUNC_HAS_PS1		(0x00000020)
#define FUNC_HAS_PS2		(0x00000040)
#define FUNC_HAS_PS3		(0x00000080)
#define FUNC_HAS_DCK            (0x00000100)
extern int acpiphp_register_attention(struct acpiphp_attention_info*info);
extern int acpiphp_unregister_attention(struct acpiphp_attention_info *info);
extern int acpiphp_register_hotplug_slot(struct acpiphp_slot *slot);
extern void acpiphp_unregister_hotplug_slot(struct acpiphp_slot *slot);
extern int acpiphp_glue_init (void);
extern void acpiphp_glue_exit (void);
extern int acpiphp_get_num_slots (void);
typedef int (*acpiphp_callback)(struct acpiphp_slot *slot, void *data);
extern int acpiphp_enable_slot (struct acpiphp_slot *slot);
extern int acpiphp_disable_slot (struct acpiphp_slot *slot);
extern int acpiphp_eject_slot (struct acpiphp_slot *slot);
extern u8 acpiphp_get_power_status (struct acpiphp_slot *slot);
extern u8 acpiphp_get_attention_status (struct acpiphp_slot *slot);
extern u8 acpiphp_get_latch_status (struct acpiphp_slot *slot);
extern u8 acpiphp_get_adapter_status (struct acpiphp_slot *slot);
extern int acpiphp_debug;
