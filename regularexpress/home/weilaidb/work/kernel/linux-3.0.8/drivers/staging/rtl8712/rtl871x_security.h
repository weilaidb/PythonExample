#define __RTL871X_SECURITY_H_
#define _NO_PRIVACY_	0x0
#define _WEP40_		0x1
#define _TKIP_		0x2
#define _TKIP_WTMIC_	0x3
#define _AES_		0x4
#define _WEP104_	0x5
#define _WPA_IE_ID_	0xdd
#define _WPA2_IE_ID_	0x30
#define Ndis802_11AuthModeWPA2 (Ndis802_11AuthModeWPANone + 1)
#define Ndis802_11AuthModeWPA2PSK (Ndis802_11AuthModeWPANone + 2)
union pn48 ;
union Keytype ;
struct RT_PMKID_LIST ;
struct security_priv ;
#define GET_ENCRY_ALGO(psecuritypriv, psta, encry_algo, bmcst) \
do  while (0)
#define SET_ICE_IV_LEN(iv_len, icv_len, encrypt)\
do  while (0)
#define GET_TKIP_PN(iv, txpn) \
do  while (0)
#define ROL32(A, n) (((A) << (n)) | (((A)>>(32-(n)))  & ((1UL << (n)) - 1)))
#define ROR32(A, n) ROL32((A), 32 - (n))
struct mic_data ;
void seccalctkipmic(
u8  *key,
u8  *header,
u8  *data,
u32  data_len,
u8  *Miccode,
u8   priority);
void r8712_secmicsetkey(struct mic_data *pmicdata, u8 * key);
void r8712_secmicappend(struct mic_data *pmicdata, u8 * src, u32 nBytes);
void r8712_secgetmic(struct mic_data *pmicdata, u8 * dst);
u32 r8712_aes_encrypt(struct _adapter *padapter, u8 *pxmitframe);
u32 r8712_tkip_encrypt(struct _adapter *padapter, u8 *pxmitframe);
void r8712_wep_encrypt(struct _adapter *padapter, u8  *pxmitframe);
u32 r8712_aes_decrypt(struct _adapter *padapter, u8  *precvframe);
u32 r8712_tkip_decrypt(struct _adapter *padapter, u8  *precvframe);
void r8712_wep_decrypt(struct _adapter *padapter, u8  *precvframe);
void r8712_use_tkipkey_handler(void *FunctionContext);
