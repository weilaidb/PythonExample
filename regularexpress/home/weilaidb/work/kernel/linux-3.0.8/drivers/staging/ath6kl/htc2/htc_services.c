void HTCControlTxComplete(void *Context, struct htc_packet *pPacket)
void HTCControlRecv(void *Context, struct htc_packet *pPacket)
int HTCSendSetupComplete(struct htc_target *target)
int HTCConnectService(HTC_HANDLE               HTCHandle,
struct htc_service_connect_req  *pConnectReq,
struct htc_service_connect_resp *pConnectResp)
static void AddToEndpointDistList(struct htc_target *target, struct htc_endpoint_credit_dist *pEpDist)
static void HTCDefaultCreditInit(void                     *Context,
struct htc_endpoint_credit_dist *pEPList,
int                      TotalCredits)
void HTCDefaultCreditDist(void                     *Context,
struct htc_endpoint_credit_dist *pEPDistList,
HTC_CREDIT_DIST_REASON   Reason)
void HTCSetCreditDistribution(HTC_HANDLE               HTCHandle,
void                     *pCreditDistContext,
HTC_CREDIT_DIST_CALLBACK CreditDistFunc,
HTC_CREDIT_INIT_CALLBACK CreditInitFunc,
HTC_SERVICE_ID           ServicePriorityOrder[],
int                      ListLength)
