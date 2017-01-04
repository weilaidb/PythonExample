#define _RTL871X_CMD_C_
static sint _init_cmd_priv(struct cmd_priv *pcmdpriv)
static sint _init_evt_priv(struct evt_priv *pevtpriv)
static void _free_evt_priv(struct evt_priv *pevtpriv)
static void _free_cmd_priv(struct cmd_priv *pcmdpriv)
static sint _enqueue_cmd(struct  __queue *queue, struct cmd_obj *obj)
static struct cmd_obj *_dequeue_cmd(struct  __queue *queue)
u32 r8712_init_cmd_priv(struct cmd_priv *pcmdpriv)
u32 r8712_init_evt_priv(struct evt_priv *pevtpriv)
void r8712_free_evt_priv(struct evt_priv *pevtpriv)
void r8712_free_cmd_priv(struct cmd_priv *pcmdpriv)
u32 r8712_enqueue_cmd(struct cmd_priv *pcmdpriv, struct cmd_obj *obj)
u32 r8712_enqueue_cmd_ex(struct cmd_priv *pcmdpriv, struct cmd_obj *obj)
struct cmd_obj *r8712_dequeue_cmd(struct  __queue *queue)
void r8712_free_cmd_obj(struct cmd_obj *pcmd)
u8 r8712_sitesurvey_cmd(struct _adapter *padapter,
struct ndis_802_11_ssid *pssid)
u8 r8712_setdatarate_cmd(struct _adapter *padapter, u8 *rateset)
u8 r8712_setbasicrate_cmd(struct _adapter *padapter, u8 *rateset)
u8 r8712_setptm_cmd(struct _adapter *padapter, u8 type)
u8 r8712_setrfreg_cmd(struct _adapter  *padapter, u8 offset, u32 val)
u8 r8712_getrfreg_cmd(struct _adapter *padapter, u8 offset, u8 *pval)
void r8712_getbbrfreg_cmdrsp_callback(struct _adapter *padapter,
struct cmd_obj *pcmd)
u8 r8712_createbss_cmd(struct _adapter *padapter)
u8 r8712_joinbss_cmd(struct _adapter  *padapter, struct wlan_network *pnetwork)
u8 r8712_disassoc_cmd(struct _adapter *padapter)
u8 r8712_setopmode_cmd(struct _adapter *padapter,
enum NDIS_802_11_NETWORK_INFRASTRUCTURE networktype)
u8 r8712_setstakey_cmd(struct _adapter *padapter, u8 *psta, u8 unicast_key)
u8 r8712_setrfintfs_cmd(struct _adapter *padapter, u8 mode)
u8 r8712_setrttbl_cmd(struct _adapter *padapter,
struct setratable_parm *prate_table)
u8 r8712_setMacAddr_cmd(struct _adapter *padapter, u8 *mac_addr)
u8 r8712_setassocsta_cmd(struct _adapter *padapter, u8 *mac_addr)
u8 r8712_addbareq_cmd(struct _adapter *padapter, u8 tid)
u8 r8712_wdg_wk_cmd(struct _adapter *padapter)
void r8712_survey_cmd_callback(struct _adapter *padapter, struct cmd_obj *pcmd)
void r8712_disassoc_cmd_callback(struct _adapter *padapter,
struct cmd_obj *pcmd)
void r8712_joinbss_cmd_callback(struct _adapter *padapter, struct cmd_obj *pcmd)
void r8712_createbss_cmd_callback(struct _adapter *padapter,
struct cmd_obj *pcmd)
void r8712_setstaKey_cmdrsp_callback(struct _adapter *padapter,
struct cmd_obj *pcmd)
void r8712_setassocsta_cmdrsp_callback(struct _adapter *padapter,
struct cmd_obj *pcmd)
