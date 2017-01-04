static void core_clear_initiator_node_from_tpg(
struct se_node_acl *nacl,
struct se_portal_group *tpg)
struct se_node_acl *__core_tpg_get_initiator_node_acl(
struct se_portal_group *tpg,
const char *initiatorname)
struct se_node_acl *core_tpg_get_initiator_node_acl(
struct se_portal_group *tpg,
unsigned char *initiatorname)
void core_tpg_add_node_to_devs(
struct se_node_acl *acl,
struct se_portal_group *tpg)
static int core_set_queue_depth_for_node(
struct se_portal_group *tpg,
struct se_node_acl *acl)
static int core_create_device_list_for_node(struct se_node_acl *nacl)
struct se_node_acl *core_tpg_check_initiator_node_acl(
struct se_portal_group *tpg,
unsigned char *initiatorname)
EXPORT_SYMBOL(core_tpg_check_initiator_node_acl);
void core_tpg_wait_for_nacl_pr_ref(struct se_node_acl *nacl)
void core_tpg_clear_object_luns(struct se_portal_group *tpg)
EXPORT_SYMBOL(core_tpg_clear_object_luns);
struct se_node_acl *core_tpg_add_initiator_node_acl(
struct se_portal_group *tpg,
struct se_node_acl *se_nacl,
const char *initiatorname,
u32 queue_depth)
EXPORT_SYMBOL(core_tpg_add_initiator_node_acl);
int core_tpg_del_initiator_node_acl(
struct se_portal_group *tpg,
struct se_node_acl *acl,
int force)
EXPORT_SYMBOL(core_tpg_del_initiator_node_acl);
int core_tpg_set_initiator_node_queue_depth(
struct se_portal_group *tpg,
unsigned char *initiatorname,
u32 queue_depth,
int force)
EXPORT_SYMBOL(core_tpg_set_initiator_node_queue_depth);
static int core_tpg_setup_virtual_lun0(struct se_portal_group *se_tpg)
static void core_tpg_release_virtual_lun0(struct se_portal_group *se_tpg)
int core_tpg_register(
struct target_core_fabric_ops *tfo,
struct se_wwn *se_wwn,
struct se_portal_group *se_tpg,
void *tpg_fabric_ptr,
int se_tpg_type)
EXPORT_SYMBOL(core_tpg_register);
int core_tpg_deregister(struct se_portal_group *se_tpg)
EXPORT_SYMBOL(core_tpg_deregister);
struct se_lun *core_tpg_pre_addlun(
struct se_portal_group *tpg,
u32 unpacked_lun)
int core_tpg_post_addlun(
struct se_portal_group *tpg,
struct se_lun *lun,
u32 lun_access,
void *lun_ptr)
static void core_tpg_shutdown_lun(
struct se_portal_group *tpg,
struct se_lun *lun)
struct se_lun *core_tpg_pre_dellun(
struct se_portal_group *tpg,
u32 unpacked_lun,
int *ret)
int core_tpg_post_dellun(
struct se_portal_group *tpg,
struct se_lun *lun)
