#define CNTRL_SIGNALING_INTERFACE_
#define DSA_REQ 11
#define DSA_RSP 12
#define DSA_ACK 13
#define DSC_REQ 14
#define DSC_RSP 15
#define DSC_ACK 16
#define DSD_REQ 17
#define DSD_RSP 18
#define DSD_ACK 19
#define MAX_CLASSIFIERS_IN_SF  4
#define MAX_STRING_LEN 20
#define MAX_PHS_LENGTHS 255
#define VENDOR_PHS_PARAM_LENGTH 10
#define MAX_NUM_ACTIVE_BS 10
#define AUTH_TOKEN_LENGTH	10
#define NUM_HARQ_CHANNELS	16
#define VENDOR_CLASSIFIER_PARAM_LENGTH 1
#define  VENDOR_SPECIF_QOS_PARAM 1
#define VENDOR_PHS_PARAM_LENGTH	10
#define MBS_CONTENTS_ID_LENGTH	10
#define GLOBAL_SF_CLASSNAME_LENGTH 6
#define TYPE_OF_SERVICE_LENGTH				3
#define IP_MASKED_SRC_ADDRESS_LENGTH			32
#define IP_MASKED_DEST_ADDRESS_LENGTH		32
#define PROTOCOL_SRC_PORT_RANGE_LENGTH		4
#define PROTOCOL_DEST_PORT_RANGE_LENGTH		4
#define ETHERNET_DEST_MAC_ADDR_LENGTH		12
#define ETHERNET_SRC_MAC_ADDR_LENGTH		12
#define NUM_ETHERTYPE_BYTES  3
#define NUM_IPV6_FLOWLABLE_BYTES 3
struct _stCPacketClassificationRuleSI;
typedef struct _stCPacketClassificationRuleSI CCPacketClassificationRuleSI,stCPacketClassificationRuleSI, *pstCPacketClassificationRuleSI;
typedef struct _stPhsRuleSI stPhsRuleSI,*pstPhsRuleSI;
typedef stPhsRuleSI CPhsRuleSI;
struct _stConvergenceSLTypes;
typedef struct _stConvergenceSLTypes stConvergenceSLTypes,CConvergenceSLTypes, *pstConvergenceSLTypes;
typedef struct _stServiceFlowParamSI stServiceFlowParamSI, *pstServiceFlowParamSI;
typedef stServiceFlowParamSI CServiceFlowParamSI;
typedef struct _stLocalSFAddRequeststLocalSFAddRequest, *pstLocalSFAddRequest;
typedef struct _stLocalSFAddIndicationstLocalSFAddIndication;
typedef struct _stLocalSFAddIndication *pstLocalSFAddIndication;
typedef struct _stLocalSFAddIndication stLocalSFChangeRequest, *pstLocalSFChangeRequest;
typedef struct _stLocalSFAddIndication stLocalSFChangeIndication, *pstLocalSFChangeIndication;
typedef struct _stLocalSFDeleteRequeststLocalSFDeleteRequest, *pstLocalSFDeleteRequest;
typedef struct stLocalSFDeleteIndicationstLocalSFDeleteIndication;
typedef struct _stIM_SFHostNotify
stIM_SFHostNotify;
