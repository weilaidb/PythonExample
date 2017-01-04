struct cc_workarea ;
void dlpar_free_cc_property(struct property *prop)
static struct property *dlpar_parse_cc_property(struct cc_workarea *ccwa)
static struct device_node *dlpar_parse_cc_node(struct cc_workarea *ccwa)
static void dlpar_free_one_cc_node(struct device_node *dn)
void dlpar_free_cc_nodes(struct device_node *dn)
#define NEXT_SIBLING    1
#define NEXT_CHILD      2
#define NEXT_PROPERTY   3
#define PREV_PARENT     4
#define MORE_MEMORY     5
#define CALL_AGAIN	-2
#define ERR_CFG_USE     -9003
struct device_node *dlpar_configure_connector(u32 drc_index)
static struct device_node *derive_parent(const char *path)
int dlpar_attach_node(struct device_node *dn)
int dlpar_detach_node(struct device_node *dn)
#define DR_ENTITY_SENSE		9003
#define DR_ENTITY_PRESENT	1
#define DR_ENTITY_UNUSABLE	2
#define ALLOCATION_STATE	9003
#define ALLOC_UNUSABLE		0
#define ALLOC_USABLE		1
#define ISOLATION_STATE		9001
#define ISOLATE			0
#define UNISOLATE		1
int dlpar_acquire_drc(u32 drc_index)
int dlpar_release_drc(u32 drc_index)
static int dlpar_online_cpu(struct device_node *dn)
static ssize_t dlpar_cpu_probe(const char *buf, size_t count)
static int dlpar_offline_cpu(struct device_node *dn)
static ssize_t dlpar_cpu_release(const char *buf, size_t count)
static int __init pseries_dlpar_init(void)
machine_device_initcall(pseries, pseries_dlpar_init);
