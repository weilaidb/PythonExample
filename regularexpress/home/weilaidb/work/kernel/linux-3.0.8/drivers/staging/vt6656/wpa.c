static int          msglevel                =MSG_LEVEL_INFO;
const BYTE abyOUI00[4] = ;
const BYTE abyOUI01[4] = ;
const BYTE abyOUI02[4] = ;
const BYTE abyOUI03[4] = ;
const BYTE abyOUI04[4] = ;
const BYTE abyOUI05[4] = ;
void
WPA_ClearRSN(
PKnownBSS        pBSSList
)
void
WPA_ParseRSN(
PKnownBSS        pBSSList,
PWLAN_IE_RSN_EXT pRSN
)
BOOL
WPA_SearchRSN(
BYTE                byCmd,
BYTE                byEncrypt,
PKnownBSS        pBSSList
)
BOOL
WPAb_Is_RSN(
PWLAN_IE_RSN_EXT pRSN
)
