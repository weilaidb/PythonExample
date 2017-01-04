static int core_alua_check_transition(int state, int *primary);
static int core_alua_set_tg_pt_secondary_state(
struct t10_alua_tg_pt_gp_member *tg_pt_gp_mem,
struct se_port *port, int explict, int offline);
int core_emulate_report_target_port_groups(struct se_cmd *cmd)
int core_emulate_set_target_port_groups(struct se_cmd *cmd)
static inline int core_alua_state_nonoptimized(
struct se_cmd *cmd,
unsigned char *cdb,
int nonop_delay_msecs,
u8 *alua_ascq)
static inline int core_alua_state_standby(
struct se_cmd *cmd,
unsigned char *cdb,
u8 *alua_ascq)
static inline int core_alua_state_unavailable(
struct se_cmd *cmd,
unsigned char *cdb,
u8 *alua_ascq)
static inline int core_alua_state_transition(
struct se_cmd *cmd,
unsigned char *cdb,
u8 *alua_ascq)
static int core_alua_state_check_nop(
struct se_cmd *cmd,
unsigned char *cdb,
u8 *alua_ascq)
static int core_alua_state_check(
struct se_cmd *cmd,
unsigned char *cdb,
u8 *alua_ascq)
static int core_alua_check_transition(int state, int *primary)
static char *core_alua_dump_state(int state)
char *core_alua_dump_status(int status)
int core_alua_check_nonop_delay(
struct se_cmd *cmd)
EXPORT_SYMBOL(core_alua_check_nonop_delay);
static int core_alua_write_tpg_metadata(
const char *path,
unsigned char *md_buf,
u32 md_buf_len)
static int core_alua_update_tpg_primary_metadata(
struct t10_alua_tg_pt_gp *tg_pt_gp,
int primary_state,
unsigned char *md_buf)
static int core_alua_do_transition_tg_pt(
struct t10_alua_tg_pt_gp *tg_pt_gp,
struct se_port *l_port,
struct se_node_acl *nacl,
unsigned char *md_buf,
int new_state,
int explict)
int core_alua_do_port_transition(
struct t10_alua_tg_pt_gp *l_tg_pt_gp,
struct se_device *l_dev,
struct se_port *l_port,
struct se_node_acl *l_nacl,
int new_state,
int explict)
static int core_alua_update_tpg_secondary_metadata(
struct t10_alua_tg_pt_gp_member *tg_pt_gp_mem,
struct se_port *port,
unsigned char *md_buf,
u32 md_buf_len)
static int core_alua_set_tg_pt_secondary_state(
struct t10_alua_tg_pt_gp_member *tg_pt_gp_mem,
struct se_port *port,
int explict,
int offline)
struct t10_alua_lu_gp *
core_alua_allocate_lu_gp(const char *name, int def_group)
int core_alua_set_lu_gp_id(struct t10_alua_lu_gp *lu_gp, u16 lu_gp_id)
static struct t10_alua_lu_gp_member *
core_alua_allocate_lu_gp_mem(struct se_device *dev)
void core_alua_free_lu_gp(struct t10_alua_lu_gp *lu_gp)
void core_alua_free_lu_gp_mem(struct se_device *dev)
struct t10_alua_lu_gp *core_alua_get_lu_gp_by_name(const char *name)
void core_alua_put_lu_gp_from_name(struct t10_alua_lu_gp *lu_gp)
void __core_alua_attach_lu_gp_mem(
struct t10_alua_lu_gp_member *lu_gp_mem,
struct t10_alua_lu_gp *lu_gp)
void __core_alua_drop_lu_gp_mem(
struct t10_alua_lu_gp_member *lu_gp_mem,
struct t10_alua_lu_gp *lu_gp)
struct t10_alua_tg_pt_gp *core_alua_allocate_tg_pt_gp(
struct se_subsystem_dev *su_dev,
const char *name,
int def_group)
int core_alua_set_tg_pt_gp_id(
struct t10_alua_tg_pt_gp *tg_pt_gp,
u16 tg_pt_gp_id)
struct t10_alua_tg_pt_gp_member *core_alua_allocate_tg_pt_gp_mem(
struct se_port *port)
void core_alua_free_tg_pt_gp(
struct t10_alua_tg_pt_gp *tg_pt_gp)
void core_alua_free_tg_pt_gp_mem(struct se_port *port)
static struct t10_alua_tg_pt_gp *core_alua_get_tg_pt_gp_by_name(
struct se_subsystem_dev *su_dev,
const char *name)
static void core_alua_put_tg_pt_gp_from_name(
struct t10_alua_tg_pt_gp *tg_pt_gp)
void __core_alua_attach_tg_pt_gp_mem(
struct t10_alua_tg_pt_gp_member *tg_pt_gp_mem,
struct t10_alua_tg_pt_gp *tg_pt_gp)
static void __core_alua_drop_tg_pt_gp_mem(
struct t10_alua_tg_pt_gp_member *tg_pt_gp_mem,
struct t10_alua_tg_pt_gp *tg_pt_gp)
ssize_t core_alua_show_tg_pt_gp_info(struct se_port *port, char *page)
ssize_t core_alua_store_tg_pt_gp_info(
struct se_port *port,
const char *page,
size_t count)
ssize_t core_alua_show_access_type(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
ssize_t core_alua_store_access_type(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
ssize_t core_alua_show_nonop_delay_msecs(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
ssize_t core_alua_store_nonop_delay_msecs(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
ssize_t core_alua_show_trans_delay_msecs(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
ssize_t core_alua_store_trans_delay_msecs(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
ssize_t core_alua_show_preferred_bit(
struct t10_alua_tg_pt_gp *tg_pt_gp,
char *page)
ssize_t core_alua_store_preferred_bit(
struct t10_alua_tg_pt_gp *tg_pt_gp,
const char *page,
size_t count)
ssize_t core_alua_show_offline_bit(struct se_lun *lun, char *page)
ssize_t core_alua_store_offline_bit(
struct se_lun *lun,
const char *page,
size_t count)
ssize_t core_alua_show_secondary_status(
struct se_lun *lun,
char *page)
ssize_t core_alua_store_secondary_status(
struct se_lun *lun,
const char *page,
size_t count)
ssize_t core_alua_show_secondary_write_metadata(
struct se_lun *lun,
char *page)
ssize_t core_alua_store_secondary_write_metadata(
struct se_lun *lun,
const char *page,
size_t count)
int core_setup_alua(struct se_device *dev, int force_pt)
