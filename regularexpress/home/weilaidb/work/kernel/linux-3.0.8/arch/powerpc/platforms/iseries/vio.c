#define FIRST_VTY	0
#define NUM_VTYS	1
#define FIRST_VSCSI	(FIRST_VTY + NUM_VTYS)
#define NUM_VSCSIS	1
#define FIRST_VLAN	(FIRST_VSCSI + NUM_VSCSIS)
#define NUM_VLANS	HVMAXARCHITECTEDVIRTUALLANS
#define FIRST_VIODASD	(FIRST_VLAN + NUM_VLANS)
#define NUM_VIODASDS	HVMAXARCHITECTEDVIRTUALDISKS
#define FIRST_VIOCD	(FIRST_VIODASD + NUM_VIODASDS)
#define NUM_VIOCDS	HVMAXARCHITECTEDVIRTUALCDROMS
#define FIRST_VIOTAPE	(FIRST_VIOCD + NUM_VIOCDS)
#define NUM_VIOTAPES	HVMAXARCHITECTEDVIRTUALTAPES
struct vio_waitevent ;
struct vio_resource ;
static struct property *new_property(const char *name, int length,
const void *value)
static void free_property(struct property *np)
static struct device_node *new_node(const char *path,
struct device_node *parent)
static void free_node(struct device_node *np)
static int add_string_property(struct device_node *np, const char *name,
const char *value)
static int add_raw_property(struct device_node *np, const char *name,
int length, const void *value)
static struct device_node *do_device_node(struct device_node *parent,
const char *name, u32 reg, u32 unit, const char *type,
const char *compat, struct vio_resource *res)
struct vio_dev *vio_create_viodasd(u32 unit)
EXPORT_SYMBOL_GPL(vio_create_viodasd);
static void __init handle_block_event(struct HvLpEvent *event)
static void __init probe_disk(struct device_node *vio_root, u32 unit)
static void __init get_viodasd_info(struct device_node *vio_root)
static void __init handle_cd_event(struct HvLpEvent *event)
static void __init get_viocd_info(struct device_node *vio_root)
static void __init handle_tape_event(struct HvLpEvent *event)
static void __init get_viotape_info(struct device_node *vio_root)
static int __init iseries_vio_init(void)
arch_initcall(iseries_vio_init);
