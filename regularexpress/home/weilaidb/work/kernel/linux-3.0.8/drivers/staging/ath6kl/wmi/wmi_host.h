#define _WMI_HOST_H_
struct wmi_stats ;
#define SSID_IE_LEN_INDEX 13
#define SIGNAL_QUALITY_THRESHOLD_LEVELS 6
#define SIGNAL_QUALITY_UPPER_THRESHOLD_LEVELS SIGNAL_QUALITY_THRESHOLD_LEVELS
#define SIGNAL_QUALITY_LOWER_THRESHOLD_LEVELS SIGNAL_QUALITY_THRESHOLD_LEVELS
typedef struct sq_threshold_params_s  SQ_THRESHOLD_PARAMS;
#define A_BAND_24GHZ           0
#define A_BAND_5GHZ            1
#define A_NUM_BANDS            2
struct wmi_t ;
#define INIT_WMI_LOCK(w)    A_CSECT_INIT(&(w)->wmi_lock)
#define LOCK_WMI(w)         A_CSECT_ENTER(&(w)->wmi_lock);
#define UNLOCK_WMI(w)       A_CSECT_LEAVE(&(w)->wmi_lock);
#define DELETE_WMI_LOCK(w)  A_CSECT_DELETE(&(w)->wmi_lock);
#define LOCK_WMI(w)     A_MUTEX_LOCK(&(w)->wmi_lock);
#define UNLOCK_WMI(w)   A_MUTEX_UNLOCK(&(w)->wmi_lock);
