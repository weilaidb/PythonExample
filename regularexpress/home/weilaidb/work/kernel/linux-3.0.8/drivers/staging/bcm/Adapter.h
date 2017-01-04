#define	__ADAPTER_H__
#define MAX_FRAGMENTEDIP_CLASSIFICATION_ENTRIES 256
struct _LEADER
__attribute__((packed));
typedef struct _LEADER LEADER,*PLEADER;
struct _PACKETTOSEND
__attribute__((packed));
typedef struct _PACKETTOSEND PACKETTOSEND, *PPACKETTOSEND;
struct _CONTROL_PACKET
__attribute__((packed));
typedef struct _CONTROL_PACKET CONTROL_PACKET,*PCONTROL_PACKET;
struct link_request
__attribute__((packed));
typedef struct link_request LINK_REQUEST, *PLINK_REQUEST;
typedef struct _ADD_CONNECTION
ADD_CONNECTION,*PADD_CONNECTION;
typedef struct _CLASSIFICATION_RULE
CLASSIFICATION_RULE,*PCLASSIFICATION_RULE;
typedef struct _CLASSIFICATION_ONLY
CLASSIFICATION_ONLY, *PCLASSIFICATION_ONLY;
#define MAX_IP_RANGE_LENGTH 4
#define MAX_PORT_RANGE 4
#define MAX_PROTOCOL_LENGTH   32
#define IPV6_ADDRESS_SIZEINBYTES 0x10
typedef union _U_IP_ADDRESS
U_IP_ADDRESS;
struct _packet_info;
typedef struct _S_HDR_SUPRESSION_CONTEXTINFO
S_HDR_SUPRESSION_CONTEXTINFO;
typedef struct _S_CLASSIFIER_RULE
S_CLASSIFIER_RULE;
typedef struct _S_FRAGMENTED_PACKET_INFO
S_FRAGMENTED_PACKET_INFO,*PS_FRAGMENTED_PACKET_INFO;
struct _packet_info
;
typedef struct _packet_info PacketInfo;
typedef struct _PER_TARANG_DATA
PER_TARANG_DATA, *PPER_TARANG_DATA;
typedef struct _TARGET_PARAMS
STARGETPARAMS, *PSTARGETPARAMS;
typedef struct _STTARGETDSXBUFFER
STTARGETDSXBUFFER, *PSTTARGETDSXBUFFER;
typedef INT (*FP_FLASH_WRITE)(struct _MINI_ADAPTER*,UINT,PVOID);
typedef INT (*FP_FLASH_WRITE_STATUS)(struct _MINI_ADAPTER*,UINT,PVOID);
struct _MINI_ADAPTER
;
typedef struct _MINI_ADAPTER MINI_ADAPTER, *PMINI_ADAPTER;
#define GET_BCM_ADAPTER(net_dev)	netdev_priv(net_dev)
struct _ETH_HEADER_STRUC __attribute__((packed));
typedef struct _ETH_HEADER_STRUC ETH_HEADER_STRUC, *PETH_HEADER_STRUC;
typedef struct FirmwareInfo
__attribute__((packed)) FIRMWARE_INFO, *PFIRMWARE_INFO;
extern struct net_device *gblpnetdev;
typedef struct _cntl_pktcntl_pkt;
typedef LINK_REQUEST CONTROL_MESSAGE;
typedef struct _DDR_SETTING
DDR_SETTING, *PDDR_SETTING;
typedef DDR_SETTING DDR_SET_NODE, *PDDR_SET_NODE;
INT
InitAdapter(PMINI_ADAPTER psAdapter);
#define BCM_REQUEST_READ  0x2
#define BCM_REQUEST_WRITE 0x1
#define EP2_MPS_REG  0x0F0110A0
#define EP2_MPS 	 0x40
#define EP2_CFG_REG  0x0F0110A8
#define EP2_CFG_INT  0x27
#define EP2_CFG_BULK 0x25
#define EP4_MPS_REG  0x0F0110F0
#define EP4_MPS      0x8C
#define EP4_CFG_REG  0x0F0110F8
#define ISO_MPS_REG  0x0F0110C8
#define ISO_MPS      0x00000000
#define EP1 0
#define EP2 1
#define EP3 2
#define EP4 3
#define EP5 4
#define EP6 5
typedef enum eInterface_setting
INTERFACE_SETTING;
