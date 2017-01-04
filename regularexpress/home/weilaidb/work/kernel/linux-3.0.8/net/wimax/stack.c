#define D_SUBMODULE stack
static char wimax_debug_params[128];
module_param_string(debug, wimax_debug_params, sizeof(wimax_debug_params),
0644);
MODULE_PARM_DESC(debug,
"String of space-separated NAME:VALUE pairs, where NAMEs "
"are the different debug submodules and VALUE are the "
"initial debug value to set.");
static
struct sk_buff *wimax_gnl_re_state_change_alloc(
struct wimax_dev *wimax_dev,
enum wimax_st new_state, enum wimax_st old_state,
void **header)
static
int wimax_gnl_re_state_change_send(
struct wimax_dev *wimax_dev, struct sk_buff *report_skb,
void *header)
static
void __check_new_state(enum wimax_st old_state, enum wimax_st new_state,
unsigned allowed_states_bm)
void __wimax_state_change(struct wimax_dev *wimax_dev, enum wimax_st new_state)
void wimax_state_change(struct wimax_dev *wimax_dev, enum wimax_st new_state)
EXPORT_SYMBOL_GPL(wimax_state_change);
enum wimax_st wimax_state_get(struct wimax_dev *wimax_dev)
EXPORT_SYMBOL_GPL(wimax_state_get);
void wimax_dev_init(struct wimax_dev *wimax_dev)
EXPORT_SYMBOL_GPL(wimax_dev_init);
extern struct genl_ops
wimax_gnl_msg_from_user,
wimax_gnl_reset,
wimax_gnl_rfkill,
wimax_gnl_state_get;
static
struct genl_ops *wimax_gnl_ops[] = ;
static
size_t wimax_addr_scnprint(char *addr_str, size_t addr_str_size,
unsigned char *addr, size_t addr_len)
int wimax_dev_add(struct wimax_dev *wimax_dev, struct net_device *net_dev)
EXPORT_SYMBOL_GPL(wimax_dev_add);
void wimax_dev_rm(struct wimax_dev *wimax_dev)
EXPORT_SYMBOL_GPL(wimax_dev_rm);
struct d_level D_LEVEL[] = ;
size_t D_LEVEL_SIZE = ARRAY_SIZE(D_LEVEL);
struct genl_family wimax_gnl_family = ;
struct genl_multicast_group wimax_gnl_mcg = ;
static
int __init wimax_subsys_init(void)
module_init(wimax_subsys_init);
static
void __exit wimax_subsys_exit(void)
module_exit(wimax_subsys_exit);
MODULE_AUTHOR("Intel Corporation <linux-wimax@intel.com>");
MODULE_DESCRIPTION("Linux WiMAX stack");
MODULE_LICENSE("GPL");
