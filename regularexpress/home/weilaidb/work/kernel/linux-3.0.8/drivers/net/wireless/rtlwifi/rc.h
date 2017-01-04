#define __RTL_RC_H__
#define B_MODE_MAX_RIX 3
#define G_MODE_MAX_RIX 11
#define A_MODE_MAX_RIX 7
#define N_MODE_MCS7_RIX 7
#define N_MODE_MCS15_RIX 15
struct rtl_rate_priv ;
int rtl_rate_control_register(void);
void rtl_rate_control_unregister(void);
