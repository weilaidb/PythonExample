static union pnp_bios_install_struct *pnp_bios_install = NULL;
int pnp_bios_present(void)
struct pnp_dev_node_info node_info;
static struct completion unload_sem;
static int pnp_dock_event(int dock, struct pnp_docking_station_info *info)
static int pnp_dock_thread(void *unused)
static int pnpbios_get_resources(struct pnp_dev *dev)
static int pnpbios_set_resources(struct pnp_dev *dev)
static void pnpbios_zero_data_stream(struct pnp_bios_node *node)
static int pnpbios_disable_resources(struct pnp_dev *dev)
struct pnp_protocol pnpbios_protocol = ;
static int __init insert_device(struct pnp_bios_node *node)
static void __init build_devlist(void)
static int pnpbios_disabled;
int pnpbios_dont_use_current_config;
static int __init pnpbios_setup(char *str)
__setup("pnpbios=", pnpbios_setup);
#define PNP_SIGNATURE   (('$' << 0) + ('P' << 8) + ('n' << 16) + ('P' << 24))
static int __init pnpbios_probe_system(void)
static int __init exploding_pnp_bios(const struct dmi_system_id *d)
static struct dmi_system_id pnpbios_dmi_table[] __initdata = ;
static int __init pnpbios_init(void)
fs_initcall(pnpbios_init);
static int __init pnpbios_thread_init(void)
module_init(pnpbios_thread_init);
EXPORT_SYMBOL(pnpbios_protocol);
