#define _NET80211_IEEE80211_H_
#define IEEE80211_WEP_KEYLEN        5
#define IEEE80211_WEP_IVLEN         3
#define IEEE80211_WEP_KIDLEN        1
#define IEEE80211_WEP_CRCLEN        4
#define IEEE80211_WEP_NKID          4
#define IEEE80211_WEP_EXTIV         0x20
#define IEEE80211_WEP_EXTIVLEN      4
#define IEEE80211_WEP_MICLEN        8
#define IEEE80211_CRC_LEN           4
#define IEEE80211_WAPI_EXTIVLEN      10
#define IEEE80211_ADDR_LEN  6
#define IEEE80211_IS_MULTICAST(_a)  (*(_a) & 0x01)
#define IEEE80211_IS_BROADCAST(_a)  (*(_a) == 0xFF)
#define WEP_HEADER (IEEE80211_WEP_IVLEN + IEEE80211_WEP_KIDLEN)
#define WEP_TRAILER IEEE80211_WEP_CRCLEN
#define CCMP_HEADER (IEEE80211_WEP_IVLEN + IEEE80211_WEP_KIDLEN + \
IEEE80211_WEP_EXTIVLEN)
#define CCMP_TRAILER IEEE80211_WEP_MICLEN
#define TKIP_HEADER (IEEE80211_WEP_IVLEN + IEEE80211_WEP_KIDLEN + \
IEEE80211_WEP_EXTIVLEN)
#define TKIP_TRAILER IEEE80211_WEP_CRCLEN
#define TKIP_MICLEN  IEEE80211_WEP_MICLEN
#define IEEE80211_ADDR_EQ(addr1, addr2)     \
(memcmp(addr1, addr2, IEEE80211_ADDR_LEN) == 0)
#define IEEE80211_ADDR_COPY(dst,src)    memcpy(dst,src,IEEE80211_ADDR_LEN)
#define IEEE80211_KEYBUF_SIZE 16
#define IEEE80211_MICBUF_SIZE (8+8)
#define IEEE80211_CIPHER_WEP            0
#define IEEE80211_CIPHER_TKIP           1
#define IEEE80211_CIPHER_AES_OCB        2
#define IEEE80211_CIPHER_AES_CCM        3
#define IEEE80211_CIPHER_CKIP           5
#define IEEE80211_CIPHER_CCKM_KRK       6
#define IEEE80211_CIPHER_NONE           7
#define IEEE80211_CIPHER_MAX            (IEEE80211_CIPHER_NONE+1)
#define IEEE80211_IS_VALID_WEP_CIPHER_LEN(len) \
(((len) == 5) || ((len) == 13) || ((len) == 16))
PREPACK struct ieee80211_frame  POSTPACK;
PREPACK struct ieee80211_qosframe  POSTPACK;
#define IEEE80211_FC0_VERSION_MASK          0x03
#define IEEE80211_FC0_VERSION_SHIFT         0
#define IEEE80211_FC0_VERSION_0             0x00
#define IEEE80211_FC0_TYPE_MASK             0x0c
#define IEEE80211_FC0_TYPE_SHIFT            2
#define IEEE80211_FC0_TYPE_MGT              0x00
#define IEEE80211_FC0_TYPE_CTL              0x04
#define IEEE80211_FC0_TYPE_DATA             0x08
#define IEEE80211_FC0_SUBTYPE_MASK          0xf0
#define IEEE80211_FC0_SUBTYPE_SHIFT         4
#define IEEE80211_FC0_SUBTYPE_ASSOC_REQ     0x00
#define IEEE80211_FC0_SUBTYPE_ASSOC_RESP    0x10
#define IEEE80211_FC0_SUBTYPE_REASSOC_REQ   0x20
#define IEEE80211_FC0_SUBTYPE_REASSOC_RESP  0x30
#define IEEE80211_FC0_SUBTYPE_PROBE_REQ     0x40
#define IEEE80211_FC0_SUBTYPE_PROBE_RESP    0x50
#define IEEE80211_FC0_SUBTYPE_BEACON        0x80
#define IEEE80211_FC0_SUBTYPE_ATIM          0x90
#define IEEE80211_FC0_SUBTYPE_DISASSOC      0xa0
#define IEEE80211_FC0_SUBTYPE_AUTH          0xb0
#define IEEE80211_FC0_SUBTYPE_DEAUTH        0xc0
#define IEEE80211_FC0_SUBTYPE_PS_POLL       0xa0
#define IEEE80211_FC0_SUBTYPE_RTS           0xb0
#define IEEE80211_FC0_SUBTYPE_CTS           0xc0
#define IEEE80211_FC0_SUBTYPE_ACK           0xd0
#define IEEE80211_FC0_SUBTYPE_CF_END        0xe0
#define IEEE80211_FC0_SUBTYPE_CF_END_ACK    0xf0
#define IEEE80211_FC0_SUBTYPE_DATA          0x00
#define IEEE80211_FC0_SUBTYPE_CF_ACK        0x10
#define IEEE80211_FC0_SUBTYPE_CF_POLL       0x20
#define IEEE80211_FC0_SUBTYPE_CF_ACPL       0x30
#define IEEE80211_FC0_SUBTYPE_NODATA        0x40
#define IEEE80211_FC0_SUBTYPE_CFACK         0x50
#define IEEE80211_FC0_SUBTYPE_CFPOLL        0x60
#define IEEE80211_FC0_SUBTYPE_CF_ACK_CF_ACK 0x70
#define IEEE80211_FC0_SUBTYPE_QOS           0x80
#define IEEE80211_FC0_SUBTYPE_QOS_NULL      0xc0
#define IEEE80211_FC1_DIR_MASK              0x03
#define IEEE80211_FC1_DIR_NODS              0x00
#define IEEE80211_FC1_DIR_TODS              0x01
#define IEEE80211_FC1_DIR_FROMDS            0x02
#define IEEE80211_FC1_DIR_DSTODS            0x03
#define IEEE80211_FC1_MORE_FRAG             0x04
#define IEEE80211_FC1_RETRY                 0x08
#define IEEE80211_FC1_PWR_MGT               0x10
#define IEEE80211_FC1_MORE_DATA             0x20
#define IEEE80211_FC1_WEP                   0x40
#define IEEE80211_FC1_ORDER                 0x80
#define IEEE80211_SEQ_FRAG_MASK             0x000f
#define IEEE80211_SEQ_FRAG_SHIFT            0
#define IEEE80211_SEQ_SEQ_MASK              0xfff0
#define IEEE80211_SEQ_SEQ_SHIFT             4
#define IEEE80211_NWID_LEN                  32
#define IEEE80211_RATE_SIZE     8
#define IEEE80211_RATE_MAXSIZE  15
#define WMM_NUM_AC                  4
#define WMM_PARAM_ACI_M         0x60
#define WMM_PARAM_ACI_S         5
#define WMM_PARAM_ACM_M         0x10
#define WMM_PARAM_ACM_S         4
#define WMM_PARAM_AIFSN_M       0x0f
#define WMM_PARAM_LOGCWMIN_M    0x0f
#define WMM_PARAM_LOGCWMAX_M    0xf0
#define WMM_PARAM_LOGCWMAX_S    4
#define WMM_AC_TO_TID(_ac) (       \
((_ac) == WMM_AC_VO) ? 6 : \
((_ac) == WMM_AC_VI) ? 5 : \
((_ac) == WMM_AC_BK) ? 1 : \
0)
#define TID_TO_WMM_AC(_tid) (      \
((_tid) < 1) ? WMM_AC_BE : \
((_tid) < 3) ? WMM_AC_BK : \
((_tid) < 6) ? WMM_AC_VI : \
WMM_AC_VO)
enum ;
#define ATH_OUI             0x7f0300
#define ATH_OUI_TYPE        0x01
#define ATH_OUI_SUBTYPE     0x01
#define ATH_OUI_VERSION     0x00
#define WPA_OUI             0xf25000
#define WPA_OUI_TYPE        0x01
#define WPA_VERSION         1
#define WPA_CSE_NULL        0x00
#define WPA_CSE_WEP40       0x01
#define WPA_CSE_TKIP        0x02
#define WPA_CSE_CCMP        0x04
#define WPA_CSE_WEP104      0x05
#define WPA_ASE_NONE        0x00
#define WPA_ASE_8021X_UNSPEC    0x01
#define WPA_ASE_8021X_PSK   0x02
#define RSN_OUI         0xac0f00
#define RSN_VERSION     1
#define RSN_CSE_NULL        0x00
#define RSN_CSE_WEP40       0x01
#define RSN_CSE_TKIP        0x02
#define RSN_CSE_WRAP        0x03
#define RSN_CSE_CCMP        0x04
#define RSN_CSE_WEP104      0x05
#define RSN_ASE_NONE            0x00
#define RSN_ASE_8021X_UNSPEC    0x01
#define RSN_ASE_8021X_PSK       0x02
#define RSN_CAP_PREAUTH         0x01
#define WMM_OUI                 0xf25000
#define WMM_OUI_TYPE            0x02
#define WMM_INFO_OUI_SUBTYPE    0x00
#define WMM_PARAM_OUI_SUBTYPE   0x01
#define WMM_VERSION             1
#define WMM_NUM_AC  4
#define WMM_AC_BE   0
#define WMM_AC_BK   1
#define WMM_AC_VI   2
#define WMM_AC_VO   3
#define ACTION_CATEGORY_CODE_TSPEC                 17
#define ACTION_CODE_TSPEC_ADDTS                    0
#define ACTION_CODE_TSPEC_ADDTS_RESP               1
#define ACTION_CODE_TSPEC_DELTS                    2
typedef enum  TSPEC_STATUS_CODE;
#define TSPEC_TSID_MASK             0xF
#define TSPEC_TSID_S                1
typedef PREPACK struct wmm_tspec_ie_t  POSTPACK WMM_TSPEC_IE;
#define IEEE80211_BEACON_INTERVAL(beacon) \
((beacon)[8] | ((beacon)[9] << 8))
#define IEEE80211_BEACON_CAPABILITY(beacon) \
((beacon)[10] | ((beacon)[11] << 8))
#define IEEE80211_CAPINFO_ESS               0x0001
#define IEEE80211_CAPINFO_IBSS              0x0002
#define IEEE80211_CAPINFO_CF_POLLABLE       0x0004
#define IEEE80211_CAPINFO_CF_POLLREQ        0x0008
#define IEEE80211_CAPINFO_PRIVACY           0x0010
#define IEEE80211_CAPINFO_SHORT_PREAMBLE    0x0020
#define IEEE80211_CAPINFO_PBCC              0x0040
#define IEEE80211_CAPINFO_CHNL_AGILITY      0x0080
#define IEEE80211_CAPINFO_SHORT_SLOTTIME    0x0400
#define IEEE80211_CAPINFO_APSD              0x0800
#define IEEE80211_CAPINFO_DSSSOFDM          0x2000
enum ieee80211_authmode ;
#define IEEE80211_PS_MAX_QUEUE    50
