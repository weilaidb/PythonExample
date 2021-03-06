#define __INC_DOT11D_H
typedef struct _CHNL_TXPOWER_TRIPLE CHNL_TXPOWER_TRIPLE, *PCHNL_TXPOWER_TRIPLE;
typedef enum _DOT11D_STATE DOT11D_STATE;
typedef struct _RT_DOT11D_INFO RT_DOT11D_INFO, *PRT_DOT11D_INFO;
#define eqMacAddr(a,b)		( ((a)[0]==(b)[0] && (a)[1]==(b)[1] && (a)[2]==(b)[2] && (a)[3]==(b)[3] && (a)[4]==(b)[4] && (a)[5]==(b)[5]) ? 1:0 )
#define cpMacAddr(des,src)	      ((des)[0]=(src)[0],(des)[1]=(src)[1],(des)[2]=(src)[2],(des)[3]=(src)[3],(des)[4]=(src)[4],(des)[5]=(src)[5])
#define GET_DOT11D_INFO(__pIeeeDev) ((PRT_DOT11D_INFO)((__pIeeeDev)->pDot11dInfo))
#define IS_DOT11D_ENABLE(__pIeeeDev) GET_DOT11D_INFO(__pIeeeDev)->bEnabled
#define IS_COUNTRY_IE_VALID(__pIeeeDev) (GET_DOT11D_INFO(__pIeeeDev)->CountryIeLen > 0)
#define IS_EQUAL_CIE_SRC(__pIeeeDev, __pTa) eqMacAddr(GET_DOT11D_INFO(__pIeeeDev)->CountryIeSrcAddr, __pTa)
#define UPDATE_CIE_SRC(__pIeeeDev, __pTa) cpMacAddr(GET_DOT11D_INFO(__pIeeeDev)->CountryIeSrcAddr, __pTa)
#define IS_COUNTRY_IE_CHANGED(__pIeeeDev, __Ie) \
(((__Ie).Length == 0 || (__Ie).Length != GET_DOT11D_INFO(__pIeeeDev)->CountryIeLen) ? \
FALSE : \
(!memcmp(GET_DOT11D_INFO(__pIeeeDev)->CountryIeBuf, (__Ie).Octet, (__Ie).Length)))
#define CIE_WATCHDOG_TH 1
#define GET_CIE_WATCHDOG(__pIeeeDev) GET_DOT11D_INFO(__pIeeeDev)->CountryIeWatchdog
#define RESET_CIE_WATCHDOG(__pIeeeDev) GET_CIE_WATCHDOG(__pIeeeDev) = 0
#define UPDATE_CIE_WATCHDOG(__pIeeeDev) ++GET_CIE_WATCHDOG(__pIeeeDev)
#define IS_DOT11D_STATE_DONE(__pIeeeDev) (GET_DOT11D_INFO(__pIeeeDev)->State == DOT11D_STATE_DONE)
void
Dot11d_Init(
struct ieee80211_device *dev
);
void
Dot11d_Reset(
struct ieee80211_device *dev
);
void
Dot11d_UpdateCountryIe(
struct ieee80211_device *dev,
u8 *		pTaddr,
u16	CoutryIeLen,
u8 * pCoutryIe
);
u8
DOT11D_GetMaxTxPwrInDbm(
struct ieee80211_device *dev,
u8 Channel
);
void
DOT11D_ScanComplete(
struct ieee80211_device * dev
);
int IsLegalChannel(
struct ieee80211_device * dev,
u8 channel
);
int ToLegalChannel(
struct ieee80211_device * dev,
u8 channel
);
