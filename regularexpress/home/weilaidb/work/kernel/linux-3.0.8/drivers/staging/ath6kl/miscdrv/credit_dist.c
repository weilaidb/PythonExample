#define ATH_MODULE_NAME misc
#define NO_VO_SERVICE 1
#define CONFIG_GIVE_LOW_PRIORITY_STREAMS_MIN_CREDITS 1
#define DATA_SVCS_USED 3
#define DATA_SVCS_USED 4
static void RedistributeCredits(struct common_credit_state_info *pCredInfo,
struct htc_endpoint_credit_dist *pEPDistList);
static void SeekCredits(struct common_credit_state_info *pCredInfo,
struct htc_endpoint_credit_dist *pEPDistList);
static INLINE void ReduceCredits(struct common_credit_state_info *pCredInfo,
struct htc_endpoint_credit_dist  *pEpDist,
int                       Limit)
#define GiveCredits(pCredInfo,pEpDist,credits)      \
static void ar6000_credit_init(void                     *Context,
struct htc_endpoint_credit_dist *pEPList,
int                      TotalCredits)
static void ar6000_credit_distribute(void                     *Context,
struct htc_endpoint_credit_dist *pEPDistList,
HTC_CREDIT_DIST_REASON   Reason)
static void RedistributeCredits(struct common_credit_state_info *pCredInfo,
struct htc_endpoint_credit_dist *pEPDistList)
static void SeekCredits(struct common_credit_state_info *pCredInfo,
struct htc_endpoint_credit_dist *pEPDist)
int ar6000_setup_credit_dist(HTC_HANDLE HTCHandle, struct common_credit_state_info *pCredInfo)
