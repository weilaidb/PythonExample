u8 sas_get_fabric_proto_ident(struct se_portal_group *se_tpg)
EXPORT_SYMBOL(sas_get_fabric_proto_ident);
u32 sas_get_pr_transport_id(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int *format_code,
unsigned char *buf)
EXPORT_SYMBOL(sas_get_pr_transport_id);
u32 sas_get_pr_transport_id_len(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int *format_code)
EXPORT_SYMBOL(sas_get_pr_transport_id_len);
char *sas_parse_pr_out_transport_id(
struct se_portal_group *se_tpg,
const char *buf,
u32 *out_tid_len,
char **port_nexus_ptr)
EXPORT_SYMBOL(sas_parse_pr_out_transport_id);
u8 fc_get_fabric_proto_ident(struct se_portal_group *se_tpg)
EXPORT_SYMBOL(fc_get_fabric_proto_ident);
u32 fc_get_pr_transport_id_len(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int *format_code)
EXPORT_SYMBOL(fc_get_pr_transport_id_len);
u32 fc_get_pr_transport_id(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int *format_code,
unsigned char *buf)
EXPORT_SYMBOL(fc_get_pr_transport_id);
char *fc_parse_pr_out_transport_id(
struct se_portal_group *se_tpg,
const char *buf,
u32 *out_tid_len,
char **port_nexus_ptr)
EXPORT_SYMBOL(fc_parse_pr_out_transport_id);
u8 iscsi_get_fabric_proto_ident(struct se_portal_group *se_tpg)
EXPORT_SYMBOL(iscsi_get_fabric_proto_ident);
u32 iscsi_get_pr_transport_id(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int *format_code,
unsigned char *buf)
EXPORT_SYMBOL(iscsi_get_pr_transport_id);
u32 iscsi_get_pr_transport_id_len(
struct se_portal_group *se_tpg,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int *format_code)
EXPORT_SYMBOL(iscsi_get_pr_transport_id_len);
char *iscsi_parse_pr_out_transport_id(
struct se_portal_group *se_tpg,
const char *buf,
u32 *out_tid_len,
char **port_nexus_ptr)
EXPORT_SYMBOL(iscsi_parse_pr_out_transport_id);
