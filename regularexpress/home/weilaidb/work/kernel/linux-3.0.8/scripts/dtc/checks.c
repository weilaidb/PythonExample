#define TRACE(c, ...) \
do  while (0)
#define TRACE(c, fmt, ...)	do  while (0)
enum checklevel ;
enum checkstatus ;
struct check;
typedef void (*tree_check_fn)(struct check *c, struct node *dt);
typedef void (*node_check_fn)(struct check *c, struct node *dt, struct node *node);
typedef void (*prop_check_fn)(struct check *c, struct node *dt,
struct node *node, struct property *prop);
struct check ;
#define CHECK(nm, tfn, nfn, pfn, d, lvl, ...) \
static struct check *nm##_prereqs[] = ; \
static struct check nm = ;
#define TREE_CHECK(nm, d, lvl, ...) \
CHECK(nm, check_##nm, NULL, NULL, d, lvl, __VA_ARGS__)
#define NODE_CHECK(nm, d, lvl, ...) \
CHECK(nm, NULL, check_##nm, NULL, d, lvl, __VA_ARGS__)
#define PROP_CHECK(nm, d, lvl, ...) \
CHECK(nm, NULL, NULL, check_##nm, d, lvl, __VA_ARGS__)
#define BATCH_CHECK(nm, lvl, ...) \
CHECK(nm, NULL, NULL, NULL, NULL, lvl, __VA_ARGS__)
static inline void check_msg(struct check *c, const char *fmt, ...) __attribute__((format (printf, 2, 3)));
static inline void check_msg(struct check *c, const char *fmt, ...)
#define FAIL(c, ...) \
do  while (0)
static void check_nodes_props(struct check *c, struct node *dt, struct node *node)
static int run_check(struct check *c, struct node *dt)
static void check_is_string(struct check *c, struct node *root,
struct node *node)
#define CHECK_IS_STRING(nm, propname, lvl) \
CHECK(nm, NULL, check_is_string, NULL, (propname), (lvl))
static void check_is_cell(struct check *c, struct node *root,
struct node *node)
#define CHECK_IS_CELL(nm, propname, lvl) \
CHECK(nm, NULL, check_is_cell, NULL, (propname), (lvl))
static void check_duplicate_node_names(struct check *c, struct node *dt,
struct node *node)
NODE_CHECK(duplicate_node_names, NULL, ERROR);
static void check_duplicate_property_names(struct check *c, struct node *dt,
struct node *node)
NODE_CHECK(duplicate_property_names, NULL, ERROR);
#define LOWERCASE	"abcdefghijklmnopqrstuvwxyz"
#define UPPERCASE	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DIGITS		"0123456789"
#define PROPNODECHARS	LOWERCASE UPPERCASE DIGITS ",._+*#?-"
static void check_node_name_chars(struct check *c, struct node *dt,
struct node *node)
NODE_CHECK(node_name_chars, PROPNODECHARS "@", ERROR);
static void check_node_name_format(struct check *c, struct node *dt,
struct node *node)
NODE_CHECK(node_name_format, NULL, ERROR, &node_name_chars);
static void check_property_name_chars(struct check *c, struct node *dt,
struct node *node, struct property *prop)
PROP_CHECK(property_name_chars, PROPNODECHARS, ERROR);
#define DESCLABEL_FMT	"%s%s%s%s%s"
#define DESCLABEL_ARGS(node,prop,mark)		\
((mark) ? "value of " : ""),		\
((prop) ? "'" : ""), \
((prop) ? (prop)->name : ""), \
((prop) ? "' in " : ""), (node)->fullpath
static void check_duplicate_label(struct check *c, struct node *dt,
const char *label, struct node *node,
struct property *prop, struct marker *mark)
static void check_duplicate_label_node(struct check *c, struct node *dt,
struct node *node)
static void check_duplicate_label_prop(struct check *c, struct node *dt,
struct node *node, struct property *prop)
CHECK(duplicate_label, NULL, check_duplicate_label_node,
check_duplicate_label_prop, NULL, ERROR);
static void check_explicit_phandles(struct check *c, struct node *root,
struct node *node, struct property *prop)
PROP_CHECK(explicit_phandles, NULL, ERROR);
static void check_name_properties(struct check *c, struct node *root,
struct node *node)
CHECK_IS_STRING(name_is_string, "name", ERROR);
NODE_CHECK(name_properties, NULL, ERROR, &name_is_string);
static void fixup_phandle_references(struct check *c, struct node *dt,
struct node *node, struct property *prop)
CHECK(phandle_references, NULL, NULL, fixup_phandle_references, NULL, ERROR,
&duplicate_node_names, &explicit_phandles);
static void fixup_path_references(struct check *c, struct node *dt,
struct node *node, struct property *prop)
CHECK(path_references, NULL, NULL, fixup_path_references, NULL, ERROR,
&duplicate_node_names);
CHECK_IS_CELL(address_cells_is_cell, "#address-cells", WARN);
CHECK_IS_CELL(size_cells_is_cell, "#size-cells", WARN);
CHECK_IS_CELL(interrupt_cells_is_cell, "#interrupt-cells", WARN);
CHECK_IS_STRING(device_type_is_string, "device_type", WARN);
CHECK_IS_STRING(model_is_string, "model", WARN);
CHECK_IS_STRING(status_is_string, "status", WARN);
static void fixup_addr_size_cells(struct check *c, struct node *dt,
struct node *node)
CHECK(addr_size_cells, NULL, fixup_addr_size_cells, NULL, NULL, WARN,
&address_cells_is_cell, &size_cells_is_cell);
#define node_addr_cells(n) \
(((n)->addr_cells == -1) ? 2 : (n)->addr_cells)
#define node_size_cells(n) \
(((n)->size_cells == -1) ? 1 : (n)->size_cells)
static void check_reg_format(struct check *c, struct node *dt,
struct node *node)
NODE_CHECK(reg_format, NULL, WARN, &addr_size_cells);
static void check_ranges_format(struct check *c, struct node *dt,
struct node *node)
NODE_CHECK(ranges_format, NULL, WARN, &addr_size_cells);
static void check_avoid_default_addr_size(struct check *c, struct node *dt,
struct node *node)
NODE_CHECK(avoid_default_addr_size, NULL, WARN, &addr_size_cells);
static void check_obsolete_chosen_interrupt_controller(struct check *c,
struct node *dt)
TREE_CHECK(obsolete_chosen_interrupt_controller, NULL, WARN);
static struct check *check_table[] = ;
void process_checks(int force, struct boot_info *bi)
