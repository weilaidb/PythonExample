#define DEBUG_LUN_RESET
#define DEBUG_LR(x...) printk(KERN_INFO x)
#define DEBUG_LR(x...)
struct se_tmr_req *core_tmr_alloc_req(
struct se_cmd *se_cmd,
void *fabric_tmr_ptr,
u8 function)
EXPORT_SYMBOL(core_tmr_alloc_req);
void core_tmr_release_req(
struct se_tmr_req *tmr)
static void core_tmr_handle_tas_abort(
struct se_node_acl *tmr_nacl,
struct se_cmd *cmd,
int tas,
int fe_count)
int core_tmr_lun_reset(
struct se_device *dev,
struct se_tmr_req *tmr,
struct list_head *preempt_and_abort_list,
struct se_cmd *prout_cmd)
