#define WOW_ENABLE_MAX_INTERVAL 0
#define WOW_SET_SCAN_PARAMS     0
extern unsigned int wmitimeout;
extern wait_queue_head_t arEvent;
#undef ATH_MODULE_NAME
#define ATH_MODULE_NAME pm
#define  ATH_DEBUG_PM       ATH_DEBUG_MAKE_MODULE_MASK(0)
static struct ath_debug_mask_description pm_debug_desc[] = ;
ATH_DEBUG_INSTANTIATE_MODULE_VAR(pm,
"pm",
"System Power Management",
ATH_DEBUG_MASK_DEFAULTS | ATH_DEBUG_PM,
ATH_DEBUG_DESCRIPTION_COUNT(pm_debug_desc),
pm_debug_desc);
int ar6000_exit_cut_power_state(struct ar6_softc *ar);
static void ar6k_send_asleep_event_to_app(struct ar6_softc *ar, bool asleep)
static void ar6000_wow_resume(struct ar6_softc *ar)
static void ar6000_wow_suspend(struct ar6_softc *ar)
int ar6000_suspend_ev(void *context)
int ar6000_resume_ev(void *context)
void ar6000_check_wow_status(struct ar6_softc *ar, struct sk_buff *skb, bool isEvent)
int ar6000_power_change_ev(void *context, u32 config)
int
ar6000_setup_cut_power_state(struct ar6_softc *ar,  AR6000_WLAN_STATE state)
int
ar6000_setup_deep_sleep_state(struct ar6_softc *ar, AR6000_WLAN_STATE state)
int
ar6000_update_wlan_pwr_state(struct ar6_softc *ar, AR6000_WLAN_STATE state, bool pmEvent)
int
ar6000_set_bt_hw_state(struct ar6_softc *ar, u32 enable)
int
ar6000_set_wlan_state(struct ar6_softc *ar, AR6000_WLAN_STATE state)
