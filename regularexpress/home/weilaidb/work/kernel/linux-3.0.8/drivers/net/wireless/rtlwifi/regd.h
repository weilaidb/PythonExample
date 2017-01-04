#define __RTL_REGD_H__
struct country_code_to_enum_rd ;
enum country_code_type_t ;
int rtl_regd_init(struct ieee80211_hw *hw,
int (*reg_notifier) (struct wiphy *wiphy,
struct regulatory_request *request));
int rtl_reg_notifier(struct wiphy *wiphy, struct regulatory_request *request);
