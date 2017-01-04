#define D_SUBMODULE op_rfkill
void wimax_report_rfkill_hw(struct wimax_dev *wimax_dev,
enum wimax_rf_state state)
EXPORT_SYMBOL_GPL(wimax_report_rfkill_hw);
void wimax_report_rfkill_sw(struct wimax_dev *wimax_dev,
enum wimax_rf_state state)
EXPORT_SYMBOL_GPL(wimax_report_rfkill_sw);
static
int __wimax_rf_toggle_radio(struct wimax_dev *wimax_dev,
enum wimax_rf_state state)
static int wimax_rfkill_set_radio_block(void *data, bool blocked)
static const struct rfkill_ops wimax_rfkill_ops = ;
int wimax_rfkill(struct wimax_dev *wimax_dev, enum wimax_rf_state state)
EXPORT_SYMBOL(wimax_rfkill);
int wimax_rfkill_add(struct wimax_dev *wimax_dev)
void wimax_rfkill_rm(struct wimax_dev *wimax_dev)
static const struct nla_policy wimax_gnl_rfkill_policy[WIMAX_GNL_ATTR_MAX + 1] = ;
static
int wimax_gnl_doit_rfkill(struct sk_buff *skb, struct genl_info *info)
struct genl_ops wimax_gnl_rfkill = ;
