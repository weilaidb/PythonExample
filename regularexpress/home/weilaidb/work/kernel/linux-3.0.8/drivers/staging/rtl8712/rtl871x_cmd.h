#define __RTL871X_CMD_H_
#define C2H_MEM_SZ (16*1024)
#define FREE_CMDOBJ_SZ	128
#define MAX_CMDSZ	512
#define MAX_RSPSZ	512
#define MAX_EVTSZ	1024
#define CMDBUFF_ALIGN_SZ 512
struct cmd_obj ;
struct cmd_priv ;
struct evt_obj ;
struct	evt_priv ;
#define init_h2fwcmd_w_parm_no_rsp(pcmd, pparm, code) \
do  while (0)
u32 r8712_enqueue_cmd(struct cmd_priv *pcmdpriv, struct cmd_obj *obj);
u32 r8712_enqueue_cmd_ex(struct cmd_priv *pcmdpriv, struct cmd_obj *obj);
struct cmd_obj *r8712_dequeue_cmd(struct  __queue *queue);
void r8712_free_cmd_obj(struct cmd_obj *pcmd);
int r8712_cmd_thread(void *context);
u32 r8712_init_cmd_priv(struct cmd_priv *pcmdpriv);
void r8712_free_cmd_priv(struct cmd_priv *pcmdpriv);
u32 r8712_init_evt_priv(struct evt_priv *pevtpriv);
void r8712_free_evt_priv(struct evt_priv *pevtpriv);
enum rtl871x_drvint_cid ;
enum RFINTFS ;
struct usb_suspend_parm ;
struct joinbss_parm ;
struct disconnect_parm ;
struct createbss_parm ;
struct	setopmode_parm ;
struct sitesurvey_parm ;
struct setauth_parm ;
struct setkey_parm ;
struct set_stakey_parm ;
struct set_stakey_rsp ;
struct SetMacAddr_param ;
struct set_assocsta_parm ;
struct set_assocsta_rsp ;
struct del_assocsta_parm ;
struct setstapwrstate_parm ;
struct	setbasicrate_parm ;
struct getbasicrate_parm ;
struct getbasicrate_rsp ;
struct setdatarate_parm ;
struct getdatarate_parm ;
struct getdatarate_rsp ;
struct	getphy_rsp ;
struct readBB_parm ;
struct readBB_rsp ;
struct readTSSI_parm ;
struct readTSSI_rsp ;
struct writeBB_parm ;
struct readRF_parm ;
struct readRF_rsp ;
struct writeRF_parm ;
struct setrfintfs_parm ;
struct getrfintfs_parm ;
struct drvint_cmd_parm ;
struct	setantenna_parm ;
struct	enrateadaptive_parm ;
struct settxagctbl_parm ;
struct gettxagctbl_parm ;
struct gettxagctbl_rsp ;
struct setagcctrl_parm ;
struct setssup_parm	;
struct getssup_parm	;
struct getssup_rsp	;
struct setssdlevel_parm	;
struct getssdlevel_parm	;
struct getssdlevel_rsp	;
struct setssulevel_parm	;
struct getssulevel_parm	;
struct getssulevel_rsp	;
struct	setcountjudge_parm ;
struct	getcountjudge_parm ;
struct	getcountjudge_rsp ;
struct setpwrmode_parm  ;
struct setatim_parm ;
struct setratable_parm ;
struct getratable_parm ;
struct getratable_rsp ;
struct gettxretrycnt_parm ;
struct gettxretrycnt_rsp ;
struct getrxretrycnt_parm ;
struct getrxretrycnt_rsp ;
struct getbcnokcnt_parm ;
struct getbcnokcnt_rsp ;
struct getbcnerrcnt_parm ;
struct getbcnerrcnt_rsp ;
struct getcurtxpwrlevel_parm ;
struct getcurtxpwrlevel_rsp ;
struct setdig_parm ;
struct setra_parm ;
struct setprobereqextraie_parm ;
struct setassocreqextraie_parm ;
struct setproberspextraie_parm ;
struct setassocrspextraie_parm ;
struct addBaReq_parm ;
struct SetChannel_parm ;
struct PT_param ;
#define GEN_CMD_CODE(cmd)	cmd ## _CMD_
#define H2C_RSP_OFFSET			512
#define H2C_SUCCESS			0x00
#define H2C_SUCCESS_RSP			0x01
#define H2C_DUPLICATED			0x02
#define H2C_DROPPED			0x03
#define H2C_PARAMETERS_ERROR		0x04
#define H2C_REJECTED			0x05
#define H2C_CMD_OVERFLOW		0x06
#define H2C_RESERVED			0x07
u8 r8712_setMacAddr_cmd(struct _adapter *padapter, u8 *mac_addr);
u8 r8712_setassocsta_cmd(struct _adapter *padapter, u8 *mac_addr);
u8 r8712_sitesurvey_cmd(struct _adapter *padapter,
struct ndis_802_11_ssid *pssid);
u8 r8712_createbss_cmd(struct _adapter *padapter);
u8 r8712_setstakey_cmd(struct _adapter *padapter, u8 *psta, u8 unicast_key);
u8 r8712_joinbss_cmd(struct _adapter *padapter,
struct wlan_network *pnetwork);
u8 r8712_disassoc_cmd(struct _adapter *padapter);
u8 r8712_setopmode_cmd(struct _adapter *padapter,
enum NDIS_802_11_NETWORK_INFRASTRUCTURE networktype);
u8 r8712_setdatarate_cmd(struct _adapter *padapter, u8 *rateset);
u8 r8712_setbasicrate_cmd(struct _adapter *padapter, u8 *rateset);
u8 r8712_getrfreg_cmd(struct _adapter *padapter, u8 offset, u8 * pval);
u8 r8712_setrfintfs_cmd(struct _adapter *padapter, u8 mode);
u8 r8712_setrfreg_cmd(struct _adapter  *padapter, u8 offset, u32 val);
u8 r8712_setrttbl_cmd(struct _adapter  *padapter,
struct setratable_parm *prate_table);
u8 r8712_setptm_cmd(struct _adapter *padapter, u8 type);
u8 r8712_addbareq_cmd(struct _adapter *padapter, u8 tid);
u8 r8712_wdg_wk_cmd(struct _adapter *padapter);
void r8712_survey_cmd_callback(struct _adapter  *padapter,
struct cmd_obj *pcmd);
void r8712_disassoc_cmd_callback(struct _adapter  *padapter,
struct cmd_obj *pcmd);
void r8712_joinbss_cmd_callback(struct _adapter  *padapter,
struct cmd_obj *pcmd);
void r8712_createbss_cmd_callback(struct _adapter *padapter,
struct cmd_obj *pcmd);
void r8712_getbbrfreg_cmdrsp_callback(struct _adapter *padapter,
struct cmd_obj *pcmd);
void r8712_setstaKey_cmdrsp_callback(struct _adapter  *padapter,
struct cmd_obj *pcmd);
void r8712_setassocsta_cmdrsp_callback(struct _adapter  *padapter,
struct cmd_obj *pcmd);
struct _cmd_callback ;
