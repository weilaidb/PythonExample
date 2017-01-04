#define D_SUBMODULE id_table
static DEFINE_SPINLOCK(wimax_id_table_lock);
static struct list_head wimax_id_table = LIST_HEAD_INIT(wimax_id_table);
void wimax_id_table_add(struct wimax_dev *wimax_dev)
struct wimax_dev *wimax_dev_get_by_genl_info(
struct genl_info *info, int ifindex)
void wimax_id_table_rm(struct wimax_dev *wimax_dev)
void wimax_id_table_release(void)
