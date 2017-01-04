static struct of_pdt_ops *of_pdt_prom_ops __initdata;
void __initdata (*of_pdt_build_more)(struct device_node *dp,
struct device_node ***nextp);
#if defined(CONFIG_SPARC)
unsigned int of_pdt_unique_id __initdata;
#define of_pdt_incr_unique_id(p) do  while (0)
static char * __init of_pdt_build_full_name(struct device_node *dp)
static inline void of_pdt_incr_unique_id(void *p)
static inline void irq_trans_init(struct device_node *dp)
static char * __init of_pdt_build_full_name(struct device_node *dp)
static struct property * __init of_pdt_build_one_prop(phandle node, char *prev,
char *special_name,
void *special_val,
int special_len)
static struct property * __init of_pdt_build_prop_list(phandle node)
static char * __init of_pdt_get_one_property(phandle node, const char *name)
static struct device_node * __init of_pdt_create_node(phandle node,
struct device_node *parent)
static struct device_node * __init of_pdt_build_tree(struct device_node *parent,
phandle node,
struct device_node ***nextp)
void __init of_pdt_build_devicetree(phandle root_node, struct of_pdt_ops *ops)
