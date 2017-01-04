#define __WPA2_H__
#define MAX_PMKID_CACHE         16
typedef struct tagsPMKIDInfo  PMKIDInfo, *PPMKIDInfo;
typedef struct tagSPMKIDCache  SPMKIDCache, *PSPMKIDCache;
void
WPA2_ClearRSN (
PKnownBSS        pBSSNode
);
void
WPA2vParseRSN (
PKnownBSS        pBSSNode,
PWLAN_IE_RSN     pRSN
);
unsigned int
WPA2uSetIEs(
void *pMgmtHandle,
PWLAN_IE_RSN pRSNIEs
);
