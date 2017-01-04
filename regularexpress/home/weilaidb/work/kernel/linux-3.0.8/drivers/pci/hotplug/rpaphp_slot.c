static void rpaphp_release_slot(struct hotplug_slot *hotplug_slot)
void dealloc_slot_struct(struct slot *slot)
struct slot *alloc_slot_struct(struct device_node *dn,
int drc_index, char *drc_name, int power_domain)
static int is_registered(struct slot *slot)
int rpaphp_deregister_slot(struct slot *slot)
EXPORT_SYMBOL_GPL(rpaphp_deregister_slot);
int rpaphp_register_slot(struct slot *slot)
