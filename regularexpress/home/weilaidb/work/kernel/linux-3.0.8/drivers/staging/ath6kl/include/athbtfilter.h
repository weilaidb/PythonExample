#define ATHBTFILTER_H_
#define ATH_DEBUG_INFO  (1 << 2)
#define ATH_DEBUG_INF    ATH_DEBUG_INFO
typedef enum _ATHBT_HCI_CTRL_TYPE  ATHBT_HCI_CTRL_TYPE;
typedef enum _ATHBT_STATE_INDICATION  ATHBT_STATE_INDICATION;
typedef void   (*ATHBT_FILTER_CMD_EVENTS_FN)(void *pContext, ATHBT_HCI_CTRL_TYPE Type, unsigned char *pBuffer, int Length);
typedef void   (*ATHBT_FILTER_DATA_FN)(void *pContext, unsigned char *pBuffer, int Length);
typedef enum _ATHBT_STATE  ATHBT_STATE;
typedef void   (*ATHBT_INDICATE_STATE_FN)(void *pContext, ATHBT_STATE_INDICATION Indication, ATHBT_STATE State, unsigned char LMPVersion);
struct athbt_filter_instance ;
#define AthBtFilterHciCommand(instance,packet,length)          \
if ((instance)->FilterEnabled)
#define AthBtFilterHciEvent(instance,packet,length)            \
if ((instance)->FilterEnabled)
#define AthBtFilterHciAclDataOut(instance,packet,length)     \
if ((instance)->FilterEnabled)
#define AthBtFilterHciAclDataIn(instance,packet,length)      \
if ((instance)->FilterEnabled)
#define AthBtIndicateState(instance,indication,state)           \
if ((instance)->FilterEnabled)
int     AthBtFilter_Attach(ATH_BT_FILTER_INSTANCE *pInstance, unsigned int flags);
void    AthBtFilter_Detach(ATH_BT_FILTER_INSTANCE *pInstance);
