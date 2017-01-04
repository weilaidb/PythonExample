#define _PPC64PHP_H
#define DR_INDICATOR 9002
#define DR_ENTITY_SENSE 9003
#define POWER_ON	100
#define POWER_OFF	0
#define LED_OFF		0
#define LED_ON		1
#define LED_ID		2
#define LED_ACTION	3
#define EMPTY           0
#define PRESENT         1
#define MY_NAME "rpaphp"
extern int rpaphp_debug;
#define dbg(format, arg...)					\
do  while (0)
#define err(format, arg...) printk(KERN_ERR "%s: " format, MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format, MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format, MY_NAME , ## arg)
#define	NOT_VALID	3
#define	NOT_CONFIGURED	2
#define	CONFIGURED	1
#define	EMPTY		0
struct slot ;
extern struct hotplug_slot_ops rpaphp_hotplug_slot_ops;
extern struct list_head rpaphp_slot_head;
extern int rpaphp_enable_slot(struct slot *slot);
extern int rpaphp_get_sensor_state(struct slot *slot, int *state);
extern int rpaphp_add_slot(struct device_node *dn);
extern int rpaphp_get_drc_props(struct device_node *dn, int *drc_index,
char **drc_name, char **drc_type, int *drc_power_domain);
extern void dealloc_slot_struct(struct slot *slot);
extern struct slot *alloc_slot_struct(struct device_node *dn, int drc_index, char *drc_name, int power_domain);
extern int rpaphp_register_slot(struct slot *slot);
extern int rpaphp_deregister_slot(struct slot *slot);
