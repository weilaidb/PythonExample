#define NLDR_
extern int nldr_allocate(struct nldr_object *nldr_obj,
void *priv_ref, const struct dcd_nodeprops
*node_props,
struct nldr_nodeobject **nldr_nodeobj,
bool *pf_phase_split);
extern int nldr_create(struct nldr_object **nldr,
struct dev_object *hdev_obj,
const struct nldr_attrs *pattrs);
extern void nldr_delete(struct nldr_object *nldr_obj);
extern void nldr_exit(void);
extern int nldr_get_fxn_addr(struct nldr_nodeobject *nldr_node_obj,
char *str_fxn, u32 * addr);
extern int nldr_get_rmm_manager(struct nldr_object *nldr,
struct rmm_target_obj **rmm_mgr);
extern bool nldr_init(void);
extern int nldr_load(struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase);
extern int nldr_unload(struct nldr_nodeobject *nldr_node_obj,
enum nldr_phase phase);
int nldr_find_addr(struct nldr_nodeobject *nldr_node, u32 sym_addr,
u32 offset_range, void *offset_output, char *sym_name);
