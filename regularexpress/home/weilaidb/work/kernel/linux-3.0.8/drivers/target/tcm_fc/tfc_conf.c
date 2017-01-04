struct target_fabric_configfs *ft_configfs;
LIST_HEAD(ft_lport_list);
DEFINE_MUTEX(ft_lport_lock);
unsigned int ft_debug_logging;
module_param_named(debug_logging, ft_debug_logging, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(debug_logging, "a bit mask of logging levels");
static ssize_t ft_parse_wwn(const char *name, u64 *wwn, int strict)
ssize_t ft_format_wwn(char *buf, size_t len, u64 wwn)
static ssize_t ft_wwn_show(void *arg, char *buf)
static ssize_t ft_wwn_store(void *arg, const char *buf, size_t len)
static ssize_t ft_nacl_show_port_name(
struct se_node_acl *se_nacl,
char *page)
static ssize_t ft_nacl_store_port_name(
struct se_node_acl *se_nacl,
const char *page,
size_t count)
TF_NACL_BASE_ATTR(ft, port_name, S_IRUGO | S_IWUSR);
static ssize_t ft_nacl_show_node_name(
struct se_node_acl *se_nacl,
char *page)
static ssize_t ft_nacl_store_node_name(
struct se_node_acl *se_nacl,
const char *page,
size_t count)
TF_NACL_BASE_ATTR(ft, node_name, S_IRUGO | S_IWUSR);
static struct configfs_attribute *ft_nacl_base_attrs[] = ;
static struct se_node_acl *ft_add_acl(
struct se_portal_group *se_tpg,
struct config_group *group,
const char *name)
static void ft_del_acl(struct se_node_acl *se_acl)
struct ft_node_acl *ft_acl_get(struct ft_tpg *tpg, struct fc_rport_priv *rdata)
struct se_node_acl *ft_tpg_alloc_fabric_acl(struct se_portal_group *se_tpg)
static void ft_tpg_release_fabric_acl(struct se_portal_group *se_tpg,
struct se_node_acl *se_acl)
static struct se_portal_group *ft_add_tpg(
struct se_wwn *wwn,
struct config_group *group,
const char *name)
static void ft_del_tpg(struct se_portal_group *se_tpg)
struct ft_tpg *ft_lport_find_tpg(struct fc_lport *lport)
static struct se_wwn *ft_add_lport(
struct target_fabric_configfs *tf,
struct config_group *group,
const char *name)
static void ft_del_lport(struct se_wwn *wwn)
static ssize_t ft_wwn_show_attr_version(
struct target_fabric_configfs *tf,
char *page)
TF_WWN_ATTR_RO(ft, version);
static struct configfs_attribute *ft_wwn_attrs[] = ;
static char *ft_get_fabric_name(void)
static char *ft_get_fabric_wwn(struct se_portal_group *se_tpg)
static u16 ft_get_tag(struct se_portal_group *se_tpg)
static u32 ft_get_default_depth(struct se_portal_group *se_tpg)
static int ft_check_false(struct se_portal_group *se_tpg)
static void ft_set_default_node_attr(struct se_node_acl *se_nacl)
static u16 ft_get_fabric_sense_len(void)
static u16 ft_set_fabric_sense_len(struct se_cmd *se_cmd, u32 sense_len)
static u32 ft_tpg_get_inst_index(struct se_portal_group *se_tpg)
static struct target_core_fabric_ops ft_fabric_ops = ;
int ft_register_configfs(void)
void ft_deregister_configfs(void)
static struct notifier_block ft_notifier = ;
static int __init ft_init(void)
static void __exit ft_exit(void)
MODULE_DESCRIPTION("FC TCM fabric driver " FT_VERSION);
MODULE_LICENSE("GPL");
module_init(ft_init);
module_exit(ft_exit);
