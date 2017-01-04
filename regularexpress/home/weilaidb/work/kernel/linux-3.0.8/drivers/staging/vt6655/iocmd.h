#define __IOCMD_H__
#define MAGIC_CODE	                 0x3142
#define IOCTL_CMD_TEST	            (SIOCDEVPRIVATE + 0)
#define IOCTL_CMD_SET			    (SIOCDEVPRIVATE + 1)
#define IOCTL_CMD_HOSTAPD           (SIOCDEVPRIVATE + 2)
#define IOCTL_CMD_WPA               (SIOCDEVPRIVATE + 3)
typedef enum tagWMAC_CMD  WMAC_CMD, *PWMAC_CMD;
typedef enum tagWZONETYPE WZONETYPE;
#define ADHOC	0
#define INFRA	1
#define BOTH	2
#define AP	    3
#define ADHOC_STARTED	   1
#define ADHOC_JOINTED	   2
#define PHY80211a 	    0
#define PHY80211b       1
#define PHY80211g       2
#define SSID_ID                0
#define SSID_MAXLEN            32
#define BSSID_LEN              6
#define WEP_NKEYS              4
#define WEP_KEYMAXLEN          29
#define WEP_40BIT_LEN          5
#define WEP_104BIT_LEN         13
#define WEP_232BIT_LEN         16
typedef struct tagSCmdRequest  SCmdRequest, *PSCmdRequest;
typedef struct tagSCmdScan  SCmdScan, *PSCmdScan;
typedef struct tagSCmdBSSJoin  SCmdBSSJoin, *PSCmdBSSJoin;
typedef struct tagSCmdZoneTypeSet  SCmdZoneTypeSet, *PSCmdZoneTypeSet;
typedef struct tagSWPAResult  SWPAResult, *PSWPAResult;
typedef struct tagSCmdStartAP  SCmdStartAP, *PSCmdStartAP;
typedef struct tagSCmdSetWEP  SCmdSetWEP, *PSCmdSetWEP;
typedef struct tagSBSSIDItem  SBSSIDItem;
typedef struct tagSBSSIDList  SBSSIDList, *PSBSSIDList;
typedef struct tagSCmdLinkStatus  SCmdLinkStatus, *PSCmdLinkStatus;
typedef struct tagSDot11MIBCount  SDot11MIBCount, *PSDot11MIBCount;
typedef struct tagSStatMIBCount  SStatMIBCount, *PSStatMIBCount;
typedef struct tagSNodeItem  SNodeItem;
typedef struct tagSNodeList  SNodeList, *PSNodeList;
typedef struct tagSCmdValue  SCmdValue,  *PSCmdValue;
enum ;
#define VIAWGET_HOSTAPD_GENERIC_ELEMENT_HDR_LEN \
((int) (&((struct viawget_hostapd_param *) 0)->u.generic_elem.data))
struct viawget_hostapd_param ;
