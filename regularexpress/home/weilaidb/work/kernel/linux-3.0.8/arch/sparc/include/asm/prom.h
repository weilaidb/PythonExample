#define _SPARC_PROM_H
#define OF_ROOT_NODE_ADDR_CELLS_DEFAULT	2
#define OF_ROOT_NODE_SIZE_CELLS_DEFAULT	1
#define of_compat_cmp(s1, s2, l)	strncmp((s1), (s2), (l))
#define of_prop_cmp(s1, s2)		strcasecmp((s1), (s2))
#define of_node_cmp(s1, s2)		strcmp((s1), (s2))
struct of_irq_controller ;
extern struct device_node *of_find_node_by_cpuid(int cpuid);
extern int of_set_property(struct device_node *node, const char *name, void *val, int len);
extern struct mutex of_set_property_mutex;
extern int of_getintprop_default(struct device_node *np,
const char *name,
int def);
extern int of_find_in_proplist(const char *list, const char *match, int len);
extern int of_node_to_nid(struct device_node *dp);
#define of_node_to_nid of_node_to_nid
extern void prom_build_devicetree(void);
extern void of_populate_present_mask(void);
extern void of_fill_in_cpu_data(void);
struct resource;
extern void __iomem *of_ioremap(struct resource *res, unsigned long offset, unsigned long size, char *name);
extern void of_iounmap(struct resource *res, void __iomem *base, unsigned long size);
static inline void irq_dispose_mapping(unsigned int virq)
extern struct device_node *of_console_device;
extern char *of_console_path;
extern char *of_console_options;
extern void irq_trans_init(struct device_node *dp);
extern char *build_path_component(struct device_node *dp);
