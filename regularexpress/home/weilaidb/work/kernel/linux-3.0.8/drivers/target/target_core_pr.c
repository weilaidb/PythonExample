struct pr_transport_id_holder ;
int core_pr_dump_initiator_port(
struct t10_pr_registration *pr_reg,
char *buf,
u32 size)
static void __core_scsi3_complete_pro_release(struct se_device *, struct se_node_acl *,
struct t10_pr_registration *, int);
static int core_scsi2_reservation_seq_non_holder(
struct se_cmd *cmd,
unsigned char *cdb,
u32 pr_reg_type)
static int core_scsi2_reservation_check(struct se_cmd *cmd, u32 *pr_reg_type)
static int core_scsi2_reservation_release(struct se_cmd *cmd)
static int core_scsi2_reservation_reserve(struct se_cmd *cmd)
static struct t10_pr_registration *core_scsi3_locate_pr_reg(struct se_device *,
struct se_node_acl *, struct se_session *);
static void core_scsi3_put_pr_reg(struct t10_pr_registration *);
int core_scsi2_emulate_crh(struct se_cmd *cmd)
static int core_scsi3_pr_seq_non_holder(
struct se_cmd *cmd,
unsigned char *cdb,
u32 pr_reg_type)
static u32 core_scsi3_pr_generation(struct se_device *dev)
static int core_scsi3_pr_reservation_check(
struct se_cmd *cmd,
u32 *pr_reg_type)
static struct t10_pr_registration *__core_scsi3_do_alloc_registration(
struct se_device *dev,
struct se_node_acl *nacl,
struct se_dev_entry *deve,
unsigned char *isid,
u64 sa_res_key,
int all_tg_pt,
int aptpl)
static int core_scsi3_lunacl_depend_item(struct se_dev_entry *);
static void core_scsi3_lunacl_undepend_item(struct se_dev_entry *);
static struct t10_pr_registration *__core_scsi3_alloc_registration(
struct se_device *dev,
struct se_node_acl *nacl,
struct se_dev_entry *deve,
unsigned char *isid,
u64 sa_res_key,
int all_tg_pt,
int aptpl)
int core_scsi3_alloc_aptpl_registration(
struct t10_reservation_template *pr_tmpl,
u64 sa_res_key,
unsigned char *i_port,
unsigned char *isid,
u32 mapped_lun,
unsigned char *t_port,
u16 tpgt,
u32 target_lun,
int res_holder,
int all_tg_pt,
u8 type)
static void core_scsi3_aptpl_reserve(
struct se_device *dev,
struct se_portal_group *tpg,
struct se_node_acl *node_acl,
struct t10_pr_registration *pr_reg)
static void __core_scsi3_add_registration(struct se_device *, struct se_node_acl *,
struct t10_pr_registration *, int, int);
static int __core_scsi3_check_aptpl_registration(
struct se_device *dev,
struct se_portal_group *tpg,
struct se_lun *lun,
u32 target_lun,
struct se_node_acl *nacl,
struct se_dev_entry *deve)
int core_scsi3_check_aptpl_registration(
struct se_device *dev,
struct se_portal_group *tpg,
struct se_lun *lun,
struct se_lun_acl *lun_acl)
static void __core_scsi3_dump_registration(
struct target_core_fabric_ops *tfo,
struct se_device *dev,
struct se_node_acl *nacl,
struct t10_pr_registration *pr_reg,
int register_type)
static void __core_scsi3_add_registration(
struct se_device *dev,
struct se_node_acl *nacl,
struct t10_pr_registration *pr_reg,
int register_type,
int register_move)
static int core_scsi3_alloc_registration(
struct se_device *dev,
struct se_node_acl *nacl,
struct se_dev_entry *deve,
unsigned char *isid,
u64 sa_res_key,
int all_tg_pt,
int aptpl,
int register_type,
int register_move)
static struct t10_pr_registration *__core_scsi3_locate_pr_reg(
struct se_device *dev,
struct se_node_acl *nacl,
unsigned char *isid)
static struct t10_pr_registration *core_scsi3_locate_pr_reg(
struct se_device *dev,
struct se_node_acl *nacl,
struct se_session *sess)
static void core_scsi3_put_pr_reg(struct t10_pr_registration *pr_reg)
static int core_scsi3_check_implict_release(
struct se_device *dev,
struct t10_pr_registration *pr_reg)
static void __core_scsi3_free_registration(
struct se_device *dev,
struct t10_pr_registration *pr_reg,
struct list_head *preempt_and_abort_list,
int dec_holders)
void core_scsi3_free_pr_reg_from_nacl(
struct se_device *dev,
struct se_node_acl *nacl)
void core_scsi3_free_all_registrations(
struct se_device *dev)
static int core_scsi3_tpg_depend_item(struct se_portal_group *tpg)
static void core_scsi3_tpg_undepend_item(struct se_portal_group *tpg)
static int core_scsi3_nodeacl_depend_item(struct se_node_acl *nacl)
static void core_scsi3_nodeacl_undepend_item(struct se_node_acl *nacl)
static int core_scsi3_lunacl_depend_item(struct se_dev_entry *se_deve)
static void core_scsi3_lunacl_undepend_item(struct se_dev_entry *se_deve)
static int core_scsi3_decode_spec_i_port(
struct se_cmd *cmd,
struct se_portal_group *tpg,
unsigned char *l_isid,
u64 sa_res_key,
int all_tg_pt,
int aptpl)
static int __core_scsi3_update_aptpl_buf(
struct se_device *dev,
unsigned char *buf,
u32 pr_aptpl_buf_len,
int clear_aptpl_metadata)
static int core_scsi3_update_aptpl_buf(
struct se_device *dev,
unsigned char *buf,
u32 pr_aptpl_buf_len,
int clear_aptpl_metadata)
static int __core_scsi3_write_aptpl_to_file(
struct se_device *dev,
unsigned char *buf,
u32 pr_aptpl_buf_len)
static int core_scsi3_update_and_write_aptpl(
struct se_device *dev,
unsigned char *in_buf,
u32 in_pr_aptpl_buf_len)
static int core_scsi3_emulate_pro_register(
struct se_cmd *cmd,
u64 res_key,
u64 sa_res_key,
int aptpl,
int all_tg_pt,
int spec_i_pt,
int ignore_key)
unsigned char *core_scsi3_pr_dump_type(int type)
static int core_scsi3_pro_reserve(
struct se_cmd *cmd,
struct se_device *dev,
int type,
int scope,
u64 res_key)
static int core_scsi3_emulate_pro_reserve(
struct se_cmd *cmd,
int type,
int scope,
u64 res_key)
static void __core_scsi3_complete_pro_release(
struct se_device *dev,
struct se_node_acl *se_nacl,
struct t10_pr_registration *pr_reg,
int explict)
static int core_scsi3_emulate_pro_release(
struct se_cmd *cmd,
int type,
int scope,
u64 res_key)
static int core_scsi3_emulate_pro_clear(
struct se_cmd *cmd,
u64 res_key)
static void __core_scsi3_complete_pro_preempt(
struct se_device *dev,
struct t10_pr_registration *pr_reg,
struct list_head *preempt_and_abort_list,
int type,
int scope,
int abort)
static void core_scsi3_release_preempt_and_abort(
struct list_head *preempt_and_abort_list,
struct t10_pr_registration *pr_reg_holder)
int core_scsi3_check_cdb_abort_and_preempt(
struct list_head *preempt_and_abort_list,
struct se_cmd *cmd)
static int core_scsi3_pro_preempt(
struct se_cmd *cmd,
int type,
int scope,
u64 res_key,
u64 sa_res_key,
int abort)
static int core_scsi3_emulate_pro_preempt(
struct se_cmd *cmd,
int type,
int scope,
u64 res_key,
u64 sa_res_key,
int abort)
static int core_scsi3_emulate_pro_register_and_move(
struct se_cmd *cmd,
u64 res_key,
u64 sa_res_key,
int aptpl,
int unreg)
static unsigned long long core_scsi3_extract_reservation_key(unsigned char *cdb)
static int core_scsi3_emulate_pr_out(struct se_cmd *cmd, unsigned char *cdb)
static int core_scsi3_pri_read_keys(struct se_cmd *cmd)
static int core_scsi3_pri_read_reservation(struct se_cmd *cmd)
static int core_scsi3_pri_report_capabilities(struct se_cmd *cmd)
static int core_scsi3_pri_read_full_status(struct se_cmd *cmd)
static int core_scsi3_emulate_pr_in(struct se_cmd *cmd, unsigned char *cdb)
int core_scsi3_emulate_pr(struct se_cmd *cmd)
static int core_pt_reservation_check(struct se_cmd *cmd, u32 *pr_res_type)
static int core_pt_seq_non_holder(
struct se_cmd *cmd,
unsigned char *cdb,
u32 pr_reg_type)
int core_setup_reservations(struct se_device *dev, int force_pt)
