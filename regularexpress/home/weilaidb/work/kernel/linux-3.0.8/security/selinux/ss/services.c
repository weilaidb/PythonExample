extern void selnl_notify_policyload(u32 seqno);
int selinux_policycap_netpeer;
int selinux_policycap_openperm;
static DEFINE_RWLOCK(policy_rwlock);
static struct sidtab sidtab;
struct policydb policydb;
int ss_initialized;
static u32 latest_granting;
static int context_struct_to_string(struct context *context, char **scontext,
u32 *scontext_len);
static void context_struct_compute_av(struct context *scontext,
struct context *tcontext,
u16 tclass,
struct av_decision *avd);
struct selinux_mapping ;
static struct selinux_mapping *current_mapping;
static u16 current_mapping_size;
static int selinux_set_mapping(struct policydb *pol,
struct security_class_mapping *map,
struct selinux_mapping **out_map_p,
u16 *out_map_size)
static u16 unmap_class(u16 tclass)
static u16 map_class(u16 pol_value)
static void map_decision(u16 tclass, struct av_decision *avd,
int allow_unknown)
int security_mls_enabled(void)
static int constraint_expr_eval(struct context *scontext,
struct context *tcontext,
struct context *xcontext,
struct constraint_expr *cexpr)
static int dump_masked_av_helper(void *k, void *d, void *args)
static void security_dump_masked_av(struct context *scontext,
struct context *tcontext,
u16 tclass,
u32 permissions,
const char *reason)
static void type_attribute_bounds_av(struct context *scontext,
struct context *tcontext,
u16 tclass,
struct av_decision *avd)
static void context_struct_compute_av(struct context *scontext,
struct context *tcontext,
u16 tclass,
struct av_decision *avd)
static int security_validtrans_handle_fail(struct context *ocontext,
struct context *ncontext,
struct context *tcontext,
u16 tclass)
int security_validate_transition(u32 oldsid, u32 newsid, u32 tasksid,
u16 orig_tclass)
int security_bounded_transition(u32 old_sid, u32 new_sid)
static void avd_init(struct av_decision *avd)
void security_compute_av(u32 ssid,
u32 tsid,
u16 orig_tclass,
struct av_decision *avd)
void security_compute_av_user(u32 ssid,
u32 tsid,
u16 tclass,
struct av_decision *avd)
static int context_struct_to_string(struct context *context, char **scontext, u32 *scontext_len)
const char *security_get_initial_sid_context(u32 sid)
static int security_sid_to_context_core(u32 sid, char **scontext,
u32 *scontext_len, int force)
int security_sid_to_context(u32 sid, char **scontext, u32 *scontext_len)
int security_sid_to_context_force(u32 sid, char **scontext, u32 *scontext_len)
static int string_to_context_struct(struct policydb *pol,
struct sidtab *sidtabp,
char *scontext,
u32 scontext_len,
struct context *ctx,
u32 def_sid)
static int security_context_to_sid_core(const char *scontext, u32 scontext_len,
u32 *sid, u32 def_sid, gfp_t gfp_flags,
int force)
int security_context_to_sid(const char *scontext, u32 scontext_len, u32 *sid)
int security_context_to_sid_default(const char *scontext, u32 scontext_len,
u32 *sid, u32 def_sid, gfp_t gfp_flags)
int security_context_to_sid_force(const char *scontext, u32 scontext_len,
u32 *sid)
static int compute_sid_handle_invalid_context(
struct context *scontext,
struct context *tcontext,
u16 tclass,
struct context *newcontext)
static void filename_compute_type(struct policydb *p, struct context *newcontext,
u32 stype, u32 ttype, u16 tclass,
const char *objname)
static int security_compute_sid(u32 ssid,
u32 tsid,
u16 orig_tclass,
u32 specified,
const char *objname,
u32 *out_sid,
bool kern)
int security_transition_sid(u32 ssid, u32 tsid, u16 tclass,
const struct qstr *qstr, u32 *out_sid)
int security_transition_sid_user(u32 ssid, u32 tsid, u16 tclass,
const char *objname, u32 *out_sid)
int security_member_sid(u32 ssid,
u32 tsid,
u16 tclass,
u32 *out_sid)
int security_change_sid(u32 ssid,
u32 tsid,
u16 tclass,
u32 *out_sid)
static int clone_sid(u32 sid,
struct context *context,
void *arg)
static inline int convert_context_handle_invalid_context(struct context *context)
struct convert_context_args ;
static int convert_context(u32 key,
struct context *c,
void *p)
static void security_load_policycaps(void)
extern void selinux_complete_init(void);
static int security_preserve_bools(struct policydb *p);
int security_load_policy(void *data, size_t len)
size_t security_policydb_len(void)
int security_port_sid(u8 protocol, u16 port, u32 *out_sid)
int security_netif_sid(char *name, u32 *if_sid)
static int match_ipv6_addrmask(u32 *input, u32 *addr, u32 *mask)
int security_node_sid(u16 domain,
void *addrp,
u32 addrlen,
u32 *out_sid)
#define SIDS_NEL 25
int security_get_user_sids(u32 fromsid,
char *username,
u32 **sids,
u32 *nel)
int security_genfs_sid(const char *fstype,
char *path,
u16 orig_sclass,
u32 *sid)
int security_fs_use(
const char *fstype,
unsigned int *behavior,
u32 *sid)
int security_get_bools(int *len, char ***names, int **values)
int security_set_bools(int len, int *values)
int security_get_bool_value(int bool)
static int security_preserve_bools(struct policydb *p)
int security_sid_mls_copy(u32 sid, u32 mls_sid, u32 *new_sid)
int security_net_peersid_resolve(u32 nlbl_sid, u32 nlbl_type,
u32 xfrm_sid,
u32 *peer_sid)
static int get_classes_callback(void *k, void *d, void *args)
int security_get_classes(char ***classes, int *nclasses)
static int get_permissions_callback(void *k, void *d, void *args)
int security_get_permissions(char *class, char ***perms, int *nperms)
int security_get_reject_unknown(void)
int security_get_allow_unknown(void)
int security_policycap_supported(unsigned int req_cap)
struct selinux_audit_rule ;
void selinux_audit_rule_free(void *vrule)
int selinux_audit_rule_init(u32 field, u32 op, char *rulestr, void **vrule)
int selinux_audit_rule_known(struct audit_krule *rule)
int selinux_audit_rule_match(u32 sid, u32 field, u32 op, void *vrule,
struct audit_context *actx)
static int (*aurule_callback)(void) = audit_update_lsm_rules;
static int aurule_avc_callback(u32 event, u32 ssid, u32 tsid,
u16 class, u32 perms, u32 *retained)
static int __init aurule_init(void)
__initcall(aurule_init);
static void security_netlbl_cache_add(struct netlbl_lsm_secattr *secattr,
u32 sid)
int security_netlbl_secattr_to_sid(struct netlbl_lsm_secattr *secattr,
u32 *sid)
int security_netlbl_sid_to_secattr(u32 sid, struct netlbl_lsm_secattr *secattr)
int security_read_policy(void **data, size_t *len)
