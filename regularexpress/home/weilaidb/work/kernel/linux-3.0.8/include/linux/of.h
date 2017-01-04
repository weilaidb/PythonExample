#define _LINUX_OF_H
typedef u32 phandle;
typedef u32 ihandle;
struct property ;
#if defined(CONFIG_SPARC)
struct of_irq_controller;
struct device_node ;
extern struct device_node *allnodes;
extern struct device_node *of_chosen;
extern rwlock_t devtree_lock;
static inline bool of_have_populated_dt(void)
static inline bool of_node_is_root(const struct device_node *node)
static inline int of_node_check_flag(struct device_node *n, unsigned long flag)
static inline void of_node_set_flag(struct device_node *n, unsigned long flag)
extern struct device_node *of_find_all_nodes(struct device_node *prev);
#if defined(CONFIG_SPARC)
static inline struct device_node *of_node_get(struct device_node *node)
static inline void of_node_put(struct device_node *node)
extern struct device_node *of_node_get(struct device_node *node);
extern void of_node_put(struct device_node *node);
static inline u64 of_read_number(const __be32 *cell, int size)
static inline unsigned long of_read_ulong(const __be32 *cell, int size)
#if !defined(OF_ROOT_NODE_ADDR_CELLS_DEFAULT)
#define OF_ROOT_NODE_ADDR_CELLS_DEFAULT 1
#define OF_ROOT_NODE_SIZE_CELLS_DEFAULT 1
#if !defined(of_compat_cmp)
#define of_compat_cmp(s1, s2, l)	strcasecmp((s1), (s2))
#define of_prop_cmp(s1, s2)		strcmp((s1), (s2))
#define of_node_cmp(s1, s2)		strcasecmp((s1), (s2))
#define OF_DYNAMIC	1
#define OF_DETACHED	2
#define OF_IS_DYNAMIC(x) test_bit(OF_DYNAMIC, &x->_flags)
#define OF_MARK_DYNAMIC(x) set_bit(OF_DYNAMIC, &x->_flags)
#define OF_BAD_ADDR	((u64)-1)
static inline int of_node_to_nid(struct device_node *np)
#define of_node_to_nid of_node_to_nid
extern struct device_node *of_find_node_by_name(struct device_node *from,
const char *name);
#define for_each_node_by_name(dn, name) \
for (dn = of_find_node_by_name(NULL, name); dn; \
dn = of_find_node_by_name(dn, name))
extern struct device_node *of_find_node_by_type(struct device_node *from,
const char *type);
#define for_each_node_by_type(dn, type) \
for (dn = of_find_node_by_type(NULL, type); dn; \
dn = of_find_node_by_type(dn, type))
extern struct device_node *of_find_compatible_node(struct device_node *from,
const char *type, const char *compat);
#define for_each_compatible_node(dn, type, compatible) \
for (dn = of_find_compatible_node(NULL, type, compatible); dn; \
dn = of_find_compatible_node(dn, type, compatible))
extern struct device_node *of_find_matching_node(struct device_node *from,
const struct of_device_id *matches);
#define for_each_matching_node(dn, matches) \
for (dn = of_find_matching_node(NULL, matches); dn; \
dn = of_find_matching_node(dn, matches))
extern struct device_node *of_find_node_by_path(const char *path);
extern struct device_node *of_find_node_by_phandle(phandle handle);
extern struct device_node *of_get_parent(const struct device_node *node);
extern struct device_node *of_get_next_parent(struct device_node *node);
extern struct device_node *of_get_next_child(const struct device_node *node,
struct device_node *prev);
#define for_each_child_of_node(parent, child) \
for (child = of_get_next_child(parent, NULL); child != NULL; \
child = of_get_next_child(parent, child))
extern struct device_node *of_find_node_with_property(
struct device_node *from, const char *prop_name);
#define for_each_node_with_property(dn, prop_name) \
for (dn = of_find_node_with_property(NULL, prop_name); dn; \
dn = of_find_node_with_property(dn, prop_name))
extern struct property *of_find_property(const struct device_node *np,
const char *name,
int *lenp);
extern int of_device_is_compatible(const struct device_node *device,
const char *);
extern int of_device_is_available(const struct device_node *device);
extern const void *of_get_property(const struct device_node *node,
const char *name,
int *lenp);
extern int of_n_addr_cells(struct device_node *np);
extern int of_n_size_cells(struct device_node *np);
extern const struct of_device_id *of_match_node(
const struct of_device_id *matches, const struct device_node *node);
extern int of_modalias_node(struct device_node *node, char *modalias, int len);
extern struct device_node *of_parse_phandle(struct device_node *np,
const char *phandle_name,
int index);
extern int of_parse_phandles_with_args(struct device_node *np,
const char *list_name, const char *cells_name, int index,
struct device_node **out_node, const void **out_args);
extern int of_machine_is_compatible(const char *compat);
extern int prom_add_property(struct device_node* np, struct property* prop);
extern int prom_remove_property(struct device_node *np, struct property *prop);
extern int prom_update_property(struct device_node *np,
struct property *newprop,
struct property *oldprop);
#if defined(CONFIG_OF_DYNAMIC)
extern void of_attach_node(struct device_node *);
extern void of_detach_node(struct device_node *);
static inline bool of_have_populated_dt(void)
