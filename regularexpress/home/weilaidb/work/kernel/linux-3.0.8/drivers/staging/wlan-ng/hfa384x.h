#define _HFA384x_H
#define HFA384x_FIRMWARE_VERSION(a, b, c) (((a) << 16) + ((b) << 8) + (c))
#define	HFA384x_PORTID_MAX		((u16)7)
#define	HFA384x_NUMPORTS_MAX		((u16)(HFA384x_PORTID_MAX+1))
#define	HFA384x_PDR_LEN_MAX		((u16)512)
#define	HFA384x_PDA_RECS_MAX		((u16)200)
#define	HFA384x_PDA_LEN_MAX		((u16)1024)
#define	HFA384x_SCANRESULT_MAX		((u16)31)
#define	HFA384x_HSCANRESULT_MAX		((u16)31)
#define	HFA384x_CHINFORESULT_MAX	((u16)16)
#define	HFA384x_RID_GUESSING_MAXLEN	2048
#define	HFA384x_RIDDATA_MAXLEN		HFA384x_RID_GUESSING_MAXLEN
#define	HFA384x_USB_RWMEM_MAXLEN	2048
#define		HFA384x_PORTTYPE_IBSS			((u16)0)
#define		HFA384x_PORTTYPE_BSS			((u16)1)
#define		HFA384x_PORTTYPE_PSUEDOIBSS		((u16)3)
#define		HFA384x_WEPFLAGS_PRIVINVOKED		((u16)BIT(0))
#define		HFA384x_WEPFLAGS_EXCLUDE		((u16)BIT(1))
#define		HFA384x_WEPFLAGS_DISABLE_TXCRYPT	((u16)BIT(4))
#define		HFA384x_WEPFLAGS_DISABLE_RXCRYPT	((u16)BIT(7))
#define 	HFA384x_ROAMMODE_HOSTSCAN_HOSTROAM	((u16)3)
#define 	HFA384x_PORTSTATUS_DISABLED		((u16)1)
#define		HFA384x_RATEBIT_1			((u16)1)
#define		HFA384x_RATEBIT_2			((u16)2)
#define		HFA384x_RATEBIT_5dot5			((u16)4)
#define		HFA384x_RATEBIT_11			((u16)8)
#define		HFA384x_ADDR_FLAT_AUX_PAGE_MASK	(0x007fff80)
#define		HFA384x_ADDR_FLAT_AUX_OFF_MASK	(0x0000007f)
#define		HFA384x_ADDR_FLAT_CMD_PAGE_MASK	(0xffff0000)
#define		HFA384x_ADDR_FLAT_CMD_OFF_MASK	(0x0000ffff)
#define		HFA384x_ADDR_AUX_PAGE_MASK	(0xffff)
#define		HFA384x_ADDR_AUX_OFF_MASK	(0x007f)
#define		HFA384x_ADDR_AUX_MKFLAT(p, o)	\
((((u32)(((u16)(p))&HFA384x_ADDR_AUX_PAGE_MASK)) << 7) | \
((u32)(((u16)(o))&HFA384x_ADDR_AUX_OFF_MASK)))
#define		HFA384x_ADDR_CMD_MKPAGE(f) \
((u16)((((u32)(f))&HFA384x_ADDR_FLAT_CMD_PAGE_MASK)>>16))
#define		HFA384x_ADDR_CMD_MKOFF(f) \
((u16)(((u32)(f))&HFA384x_ADDR_FLAT_CMD_OFF_MASK))
#define		HFA3842_PDA_BASE	(0x007f0000UL)
#define		HFA3841_PDA_BASE	(0x003f0000UL)
#define		HFA3841_PDA_BOGUS_BASE	(0x00390000UL)
#define		HFA384x_DLSTATE_DISABLED		0
#define		HFA384x_DLSTATE_RAMENABLED		1
#define		HFA384x_DLSTATE_FLASHENABLED		2
#define		HFA384x_CMD_AINFO		((u16)(BIT(14) | BIT(13) \
| BIT(12) | BIT(11) \
| BIT(10) | BIT(9) \
| BIT(8)))
#define		HFA384x_CMD_MACPORT		((u16)(BIT(10) | BIT(9) | \
BIT(8)))
#define		HFA384x_CMD_PROGMODE		((u16)(BIT(9) | BIT(8)))
#define		HFA384x_CMD_CMDCODE		((u16)(BIT(5) | BIT(4) | \
BIT(3) | BIT(2) | \
BIT(1) | BIT(0)))
#define		HFA384x_STATUS_RESULT		((u16)(BIT(14) | BIT(13) \
| BIT(12) | BIT(11) \
| BIT(10) | BIT(9) \
| BIT(8)))
#define		HFA384x_CMDCODE_INIT		((u16)0x00)
#define		HFA384x_CMDCODE_ENABLE		((u16)0x01)
#define		HFA384x_CMDCODE_DISABLE		((u16)0x02)
#define		HFA384x_CMDCODE_INQ		((u16)0x11)
#define		HFA384x_CMDCODE_DOWNLD		((u16)0x22)
#define 	HFA384x_CMDCODE_MONITOR		((u16)(0x38))
#define		HFA384x_MONITOR_ENABLE		((u16)(0x0b))
#define		HFA384x_MONITOR_DISABLE		((u16)(0x0f))
#define		HFA384x_CMD_ERR			((u16)(0x7F))
#define		HFA384x_PROGMODE_DISABLE	((u16)0x00)
#define		HFA384x_PROGMODE_RAM		((u16)0x01)
#define		HFA384x_PROGMODE_NV		((u16)0x02)
#define		HFA384x_PROGMODE_NVWRITE	((u16)0x03)
#define		HFA384x_RID_CNFPORTTYPE		((u16)0xFC00)
#define		HFA384x_RID_CNFOWNMACADDR	((u16)0xFC01)
#define		HFA384x_RID_CNFDESIREDSSID	((u16)0xFC02)
#define		HFA384x_RID_CNFOWNCHANNEL	((u16)0xFC03)
#define		HFA384x_RID_CNFOWNSSID		((u16)0xFC04)
#define		HFA384x_RID_CNFMAXDATALEN	((u16)0xFC07)
#define		HFA384x_RID_CNFOWNMACADDR_LEN	((u16)6)
#define		HFA384x_RID_CNFDESIREDSSID_LEN	((u16)34)
#define		HFA384x_RID_CNFOWNSSID_LEN	((u16)34)
#define		HFA384x_RID_CREATEIBSS		((u16)0xFC81)
#define		HFA384x_RID_FRAGTHRESH		((u16)0xFC82)
#define		HFA384x_RID_RTSTHRESH		((u16)0xFC83)
#define		HFA384x_RID_TXRATECNTL		((u16)0xFC84)
#define		HFA384x_RID_PROMISCMODE		((u16)0xFC85)
#define		HFA384x_RID_MAXLOADTIME		((u16)0xFD00)
#define		HFA384x_RID_DOWNLOADBUFFER	((u16)0xFD01)
#define		HFA384x_RID_PRIIDENTITY		((u16)0xFD02)
#define		HFA384x_RID_PRISUPRANGE		((u16)0xFD03)
#define		HFA384x_RID_PRI_CFIACTRANGES	((u16)0xFD04)
#define		HFA384x_RID_NICSERIALNUMBER	((u16)0xFD0A)
#define		HFA384x_RID_NICIDENTITY		((u16)0xFD0B)
#define		HFA384x_RID_MFISUPRANGE		((u16)0xFD0C)
#define		HFA384x_RID_CFISUPRANGE		((u16)0xFD0D)
#define		HFA384x_RID_STAIDENTITY		((u16)0xFD20)
#define		HFA384x_RID_STASUPRANGE		((u16)0xFD21)
#define		HFA384x_RID_STA_MFIACTRANGES	((u16)0xFD22)
#define		HFA384x_RID_STA_CFIACTRANGES	((u16)0xFD23)
#define		HFA384x_RID_NICSERIALNUMBER_LEN		((u16)12)
#define		HFA384x_RID_PORTSTATUS		((u16)0xFD40)
#define		HFA384x_RID_CURRENTSSID		((u16)0xFD41)
#define		HFA384x_RID_CURRENTBSSID	((u16)0xFD42)
#define		HFA384x_RID_CURRENTTXRATE	((u16)0xFD44)
#define		HFA384x_RID_SHORTRETRYLIMIT	((u16)0xFD48)
#define		HFA384x_RID_LONGRETRYLIMIT	((u16)0xFD49)
#define		HFA384x_RID_MAXTXLIFETIME	((u16)0xFD4A)
#define		HFA384x_RID_PRIVACYOPTIMP	((u16)0xFD4F)
#define		HFA384x_RID_DBMCOMMSQUALITY	((u16)0xFD51)
#define		HFA384x_RID_DBMCOMMSQUALITY_LEN	 \
((u16) sizeof(hfa384x_dbmcommsquality_t))
#define		HFA384x_RID_JOINREQUEST_LEN \
((u16)sizeof(hfa384x_JoinRequest_data_t))
#define		HFA384x_RID_CURRENTCHANNEL	((u16)0xFDC1)
#define		HFA384x_RID_CNFWEPDEFAULTKEYID	((u16)0xFC23)
#define		HFA384x_RID_CNFWEPDEFAULTKEY0	((u16)0xFC24)
#define		HFA384x_RID_CNFWEPDEFAULTKEY1	((u16)0xFC25)
#define		HFA384x_RID_CNFWEPDEFAULTKEY2	((u16)0xFC26)
#define		HFA384x_RID_CNFWEPDEFAULTKEY3	((u16)0xFC27)
#define		HFA384x_RID_CNFWEPFLAGS		((u16)0xFC28)
#define		HFA384x_RID_CNFAUTHENTICATION	((u16)0xFC2A)
#define		HFA384x_RID_CNFROAMINGMODE	((u16)0xFC2D)
#define		HFA384x_RID_CNFAPBCNint		((u16)0xFC33)
#define		HFA384x_RID_CNFDBMADJUST  	((u16)0xFC46)
#define		HFA384x_RID_CNFWPADATA       	((u16)0xFC48)
#define		HFA384x_RID_CNFBASICRATES	((u16)0xFCB3)
#define		HFA384x_RID_CNFSUPPRATES	((u16)0xFCB4)
#define		HFA384x_RID_CNFPASSIVESCANCTRL	((u16)0xFCBA)
#define		HFA384x_RID_TXPOWERMAX        	((u16)0xFCBE)
#define		HFA384x_RID_JOINREQUEST		((u16)0xFCE2)
#define		HFA384x_RID_AUTHENTICATESTA	((u16)0xFCE3)
#define		HFA384x_RID_HOSTSCAN          	((u16)0xFCE5)
#define		HFA384x_RID_CNFWEPDEFAULTKEY_LEN	((u16)6)
#define		HFA384x_RID_CNFWEP128DEFAULTKEY_LEN	((u16)14)
#define HFA384x_PDR_PCB_PARTNUM		((u16)0x0001)
#define HFA384x_PDR_PDAVER		((u16)0x0002)
#define HFA384x_PDR_NIC_SERIAL		((u16)0x0003)
#define HFA384x_PDR_MKK_MEASUREMENTS	((u16)0x0004)
#define HFA384x_PDR_NIC_RAMSIZE		((u16)0x0005)
#define HFA384x_PDR_MFISUPRANGE		((u16)0x0006)
#define HFA384x_PDR_CFISUPRANGE		((u16)0x0007)
#define HFA384x_PDR_NICID		((u16)0x0008)
#define HFA384x_PDR_MAC_ADDRESS		((u16)0x0101)
#define HFA384x_PDR_REGDOMAIN		((u16)0x0103)
#define HFA384x_PDR_ALLOWED_CHANNEL	((u16)0x0104)
#define HFA384x_PDR_DEFAULT_CHANNEL	((u16)0x0105)
#define HFA384x_PDR_TEMPTYPE		((u16)0x0107)
#define HFA384x_PDR_IFR_SETTING		((u16)0x0200)
#define HFA384x_PDR_RFR_SETTING		((u16)0x0201)
#define HFA384x_PDR_HFA3861_BASELINE	((u16)0x0202)
#define HFA384x_PDR_HFA3861_SHADOW	((u16)0x0203)
#define HFA384x_PDR_HFA3861_IFRF	((u16)0x0204)
#define HFA384x_PDR_HFA3861_CHCALSP	((u16)0x0300)
#define HFA384x_PDR_HFA3861_CHCALI	((u16)0x0301)
#define HFA384x_PDR_MAX_TX_POWER  	((u16)0x0302)
#define HFA384x_PDR_MASTER_CHAN_LIST	((u16)0x0303)
#define HFA384x_PDR_3842_NIC_CONFIG	((u16)0x0400)
#define HFA384x_PDR_USB_ID		((u16)0x0401)
#define HFA384x_PDR_PCI_ID		((u16)0x0402)
#define HFA384x_PDR_PCI_IFCONF		((u16)0x0403)
#define HFA384x_PDR_PCI_PMCONF		((u16)0x0404)
#define HFA384x_PDR_RFENRGY		((u16)0x0406)
#define HFA384x_PDR_USB_POWER_TYPE      ((u16)0x0407)
#define HFA384x_PDR_USB_MAX_POWER	((u16)0x0409)
#define HFA384x_PDR_USB_MANUFACTURER	((u16)0x0410)
#define HFA384x_PDR_USB_PRODUCT  	((u16)0x0411)
#define HFA384x_PDR_ANT_DIVERSITY   	((u16)0x0412)
#define HFA384x_PDR_HFO_DELAY       	((u16)0x0413)
#define HFA384x_PDR_SCALE_THRESH 	((u16)0x0414)
#define HFA384x_PDR_HFA3861_MANF_TESTSP	((u16)0x0900)
#define HFA384x_PDR_HFA3861_MANF_TESTI	((u16)0x0901)
#define HFA384x_PDR_END_OF_PDA		((u16)0x0000)
#define		HFA384x_CMD_AINFO_SET(value)	((u16)((u16)(value) << 8))
#define		HFA384x_CMD_MACPORT_SET(value)	\
((u16)HFA384x_CMD_AINFO_SET(value))
#define		HFA384x_CMD_PROGMODE_SET(value)	\
((u16)HFA384x_CMD_AINFO_SET((u16)value))
#define		HFA384x_CMD_CMDCODE_SET(value)		((u16)(value))
#define		HFA384x_STATUS_RESULT_SET(value)	(((u16)(value)) << 8)
#define HFA384x_STATE_PREINIT	0
#define HFA384x_STATE_INIT	1
#define HFA384x_STATE_RUNNING	2
typedef struct hfa384x_bytestr  __packed hfa384x_bytestr_t;
typedef struct hfa384x_bytestr32  __packed hfa384x_bytestr32_t;
typedef struct hfa384x_compident  __packed hfa384x_compident_t;
typedef struct hfa384x_caplevel  __packed hfa384x_caplevel_t;
#define HFA384x_CNFAUTHENTICATION_OPENSYSTEM	0x0001
#define HFA384x_CNFAUTHENTICATION_SHAREDKEY	0x0002
#define HFA384x_CNFAUTHENTICATION_LEAP     	0x0004
#define HFA384x_CREATEIBSS_JOINCREATEIBSS          0
typedef struct hfa384x_HostScanRequest_data  __packed hfa384x_HostScanRequest_data_t;
typedef struct hfa384x_JoinRequest_data  __packed hfa384x_JoinRequest_data_t;
typedef struct hfa384x_authenticateStation_data  __packed hfa384x_authenticateStation_data_t;
typedef struct hfa384x_WPAData  __packed hfa384x_WPAData_t;
typedef struct hfa384x_downloadbuffer  __packed hfa384x_downloadbuffer_t;
#define HFA384x_PSTATUS_CONN_IBSS	((u16)3)
typedef struct hfa384x_commsquality  __packed hfa384x_commsquality_t;
typedef struct hfa384x_dbmcommsquality  __packed hfa384x_dbmcommsquality_t;
typedef struct hfa384x_tx_frame  __packed hfa384x_tx_frame_t;
#define		HFA384x_TXSTATUS_ACKERR			((u16)BIT(5))
#define		HFA384x_TXSTATUS_FORMERR		((u16)BIT(3))
#define		HFA384x_TXSTATUS_DISCON			((u16)BIT(2))
#define		HFA384x_TXSTATUS_AGEDERR		((u16)BIT(1))
#define		HFA384x_TXSTATUS_RETRYERR		((u16)BIT(0))
#define		HFA384x_TX_MACPORT			((u16)(BIT(10) | \
BIT(9) | BIT(8)))
#define		HFA384x_TX_STRUCTYPE			((u16)(BIT(4) | BIT(3)))
#define		HFA384x_TX_TXEX				((u16)BIT(2))
#define		HFA384x_TX_TXOK				((u16)BIT(1))
#define HFA384x_TXSTATUS_ISERROR(v)	\
(((u16)(v))&\
(HFA384x_TXSTATUS_ACKERR|HFA384x_TXSTATUS_FORMERR|\
HFA384x_TXSTATUS_DISCON|HFA384x_TXSTATUS_AGEDERR|\
HFA384x_TXSTATUS_RETRYERR))
#define	HFA384x_TX_SET(v, m, s)		((((u16)(v))<<((u16)(s)))&((u16)(m)))
#define	HFA384x_TX_MACPORT_SET(v)	HFA384x_TX_SET(v, HFA384x_TX_MACPORT, 8)
#define	HFA384x_TX_STRUCTYPE_SET(v)	HFA384x_TX_SET(v, \
HFA384x_TX_STRUCTYPE, 3)
#define	HFA384x_TX_TXEX_SET(v)		HFA384x_TX_SET(v, HFA384x_TX_TXEX, 2)
#define	HFA384x_TX_TXOK_SET(v)		HFA384x_TX_SET(v, HFA384x_TX_TXOK, 1)
typedef struct hfa384x_rx_frame  __packed hfa384x_rx_frame_t;
#define		HFA384x_RXSTATUS_MACPORT		((u16)(BIT(10) | \
BIT(9) | \
BIT(8)))
#define		HFA384x_RXSTATUS_FCSERR			((u16)BIT(0))
#define		HFA384x_RXSTATUS_MACPORT_GET(value)	((u16)((((u16)(value)) \
& HFA384x_RXSTATUS_MACPORT) >> 8))
#define		HFA384x_RXSTATUS_ISFCSERR(value)	((u16)(((u16)(value)) \
& HFA384x_RXSTATUS_FCSERR))
#define		HFA384x_IT_HANDOVERADDR			((u16)0xF000UL)
#define		HFA384x_IT_COMMTALLIES			((u16)0xF100UL)
#define		HFA384x_IT_SCANRESULTS			((u16)0xF101UL)
#define		HFA384x_IT_CHINFORESULTS		((u16)0xF102UL)
#define		HFA384x_IT_HOSTSCANRESULTS		((u16)0xF103UL)
#define		HFA384x_IT_LINKSTATUS			((u16)0xF200UL)
#define		HFA384x_IT_ASSOCSTATUS			((u16)0xF201UL)
#define		HFA384x_IT_AUTHREQ			((u16)0xF202UL)
#define		HFA384x_IT_PSUSERCNT			((u16)0xF203UL)
#define		HFA384x_IT_KEYIDCHANGED			((u16)0xF204UL)
#define		HFA384x_IT_ASSOCREQ    			((u16)0xF205UL)
#define		HFA384x_IT_MICFAILURE  			((u16)0xF206UL)
typedef struct hfa384x_CommTallies16  __packed hfa384x_CommTallies16_t;
typedef struct hfa384x_CommTallies32  __packed hfa384x_CommTallies32_t;
typedef struct hfa384x_ScanResultSub  __packed hfa384x_ScanResultSub_t;
typedef struct hfa384x_ScanResult  __packed hfa384x_ScanResult_t;
typedef struct hfa384x_ChInfoResultSub  __packed hfa384x_ChInfoResultSub_t;
#define HFA384x_CHINFORESULT_BSSACTIVE	BIT(0)
#define HFA384x_CHINFORESULT_PCFACTIVE	BIT(1)
typedef struct hfa384x_ChInfoResult  __packed hfa384x_ChInfoResult_t;
typedef struct hfa384x_HScanResultSub  __packed hfa384x_HScanResultSub_t;
typedef struct hfa384x_HScanResult  __packed hfa384x_HScanResult_t;
#define HFA384x_LINK_NOTCONNECTED	((u16)0)
#define HFA384x_LINK_CONNECTED		((u16)1)
#define HFA384x_LINK_DISCONNECTED	((u16)2)
#define HFA384x_LINK_AP_CHANGE		((u16)3)
#define HFA384x_LINK_AP_OUTOFRANGE	((u16)4)
#define HFA384x_LINK_AP_INRANGE		((u16)5)
#define HFA384x_LINK_ASSOCFAIL		((u16)6)
typedef struct hfa384x_LinkStatus  __packed hfa384x_LinkStatus_t;
#define HFA384x_ASSOCSTATUS_STAASSOC	((u16)1)
#define HFA384x_ASSOCSTATUS_REASSOC	((u16)2)
#define HFA384x_ASSOCSTATUS_AUTHFAIL	((u16)5)
typedef struct hfa384x_AssocStatus  __packed hfa384x_AssocStatus_t;
typedef struct hfa384x_AuthRequest  __packed hfa384x_AuthReq_t;
typedef struct hfa384x_PSUserCount  __packed hfa384x_PSUserCount_t;
typedef struct hfa384x_KeyIDChanged  __packed hfa384x_KeyIDChanged_t;
typedef union hfa384x_infodata  __packed hfa384x_infodata_t;
typedef struct hfa384x_InfFrame  __packed hfa384x_InfFrame_t;
#define HFA384x_USB_TXFRM	0
#define HFA384x_USB_CMDREQ	1
#define HFA384x_USB_WRIDREQ	2
#define HFA384x_USB_RRIDREQ	3
#define HFA384x_USB_WMEMREQ	4
#define HFA384x_USB_RMEMREQ	5
#define HFA384x_USB_ISTXFRM(a)	(((a) & 0x9000) == 0x1000)
#define HFA384x_USB_ISRXFRM(a)	(!((a) & 0x9000))
#define HFA384x_USB_INFOFRM	0x8000
#define HFA384x_USB_CMDRESP	0x8001
#define HFA384x_USB_WRIDRESP	0x8002
#define HFA384x_USB_RRIDRESP	0x8003
#define HFA384x_USB_WMEMRESP	0x8004
#define HFA384x_USB_RMEMRESP	0x8005
#define HFA384x_USB_BUFAVAIL	0x8006
#define HFA384x_USB_ERROR	0x8007
typedef struct hfa384x_usb_txfrm  __packed hfa384x_usb_txfrm_t;
typedef struct hfa384x_usb_cmdreq  __packed hfa384x_usb_cmdreq_t;
typedef struct hfa384x_usb_wridreq  __packed hfa384x_usb_wridreq_t;
typedef struct hfa384x_usb_rridreq  __packed hfa384x_usb_rridreq_t;
typedef struct hfa384x_usb_wmemreq  __packed hfa384x_usb_wmemreq_t;
typedef struct hfa384x_usb_rmemreq  __packed hfa384x_usb_rmemreq_t;
typedef struct hfa384x_usb_rxfrm  __packed hfa384x_usb_rxfrm_t;
typedef struct hfa384x_usb_infofrm  __packed hfa384x_usb_infofrm_t;
typedef struct hfa384x_usb_statusresp  __packed hfa384x_usb_cmdresp_t;
typedef hfa384x_usb_cmdresp_t hfa384x_usb_wridresp_t;
typedef struct hfa384x_usb_rridresp  __packed hfa384x_usb_rridresp_t;
typedef hfa384x_usb_cmdresp_t hfa384x_usb_wmemresp_t;
typedef struct hfa384x_usb_rmemresp  __packed hfa384x_usb_rmemresp_t;
typedef struct hfa384x_usb_bufavail  __packed hfa384x_usb_bufavail_t;
typedef struct hfa384x_usb_error  __packed hfa384x_usb_error_t;
typedef union hfa384x_usbout  __packed hfa384x_usbout_t;
typedef union hfa384x_usbin  __packed hfa384x_usbin_t;
typedef struct hfa384x_pdr_pcb_partnum  __packed hfa384x_pdr_pcb_partnum_t;
typedef struct hfa384x_pdr_pcb_tracenum  __packed hfa384x_pdr_pcb_tracenum_t;
typedef struct hfa384x_pdr_nic_serial  __packed hfa384x_pdr_nic_serial_t;
typedef struct hfa384x_pdr_mkk_measurements  __packed hfa384x_pdr_mkk_measurements_t;
typedef struct hfa384x_pdr_nic_ramsize  __packed hfa384x_pdr_nic_ramsize_t;
typedef struct hfa384x_pdr_mfisuprange  __packed hfa384x_pdr_mfisuprange_t;
typedef struct hfa384x_pdr_cfisuprange  __packed hfa384x_pdr_cfisuprange_t;
typedef struct hfa384x_pdr_nicid  __packed hfa384x_pdr_nicid_t;
typedef struct hfa384x_pdr_refdac_measurements  __packed hfa384x_pdr_refdac_measurements_t;
typedef struct hfa384x_pdr_vgdac_measurements  __packed hfa384x_pdr_vgdac_measurements_t;
typedef struct hfa384x_pdr_level_comp_measurements  __packed hfa384x_pdr_level_compc_measurements_t;
typedef struct hfa384x_pdr_mac_address  __packed hfa384x_pdr_mac_address_t;
typedef struct hfa384x_pdr_mkk_callname  __packed hfa384x_pdr_mkk_callname_t;
typedef struct hfa384x_pdr_regdomain  __packed hfa384x_pdr_regdomain_t;
typedef struct hfa384x_pdr_allowed_channel  __packed hfa384x_pdr_allowed_channel_t;
typedef struct hfa384x_pdr_default_channel  __packed hfa384x_pdr_default_channel_t;
typedef struct hfa384x_pdr_privacy_option  __packed hfa384x_pdr_privacy_option_t;
typedef struct hfa384x_pdr_temptype  __packed hfa384x_pdr_temptype_t;
typedef struct hfa384x_pdr_refdac_setup  __packed hfa384x_pdr_refdac_setup_t;
typedef struct hfa384x_pdr_vgdac_setup  __packed hfa384x_pdr_vgdac_setup_t;
typedef struct hfa384x_pdr_level_comp_setup  __packed hfa384x_pdr_level_comp_setup_t;
typedef struct hfa384x_pdr_trimdac_setup  __packed hfa384x_pdr_trimdac_setup_t;
typedef struct hfa384x_pdr_ifr_setting  __packed hfa384x_pdr_ifr_setting_t;
typedef struct hfa384x_pdr_rfr_setting  __packed hfa384x_pdr_rfr_setting_t;
typedef struct hfa384x_pdr_hfa3861_baseline  __packed hfa384x_pdr_hfa3861_baseline_t;
typedef struct hfa384x_pdr_hfa3861_shadow  __packed hfa384x_pdr_hfa3861_shadow_t;
typedef struct hfa384x_pdr_hfa3861_ifrf  __packed hfa384x_pdr_hfa3861_ifrf_t;
typedef struct hfa384x_pdr_hfa3861_chcalsp  __packed hfa384x_pdr_hfa3861_chcalsp_t;
typedef struct hfa384x_pdr_hfa3861_chcali  __packed hfa384x_pdr_hfa3861_chcali_t;
typedef struct hfa384x_pdr_hfa3861_nic_config  __packed hfa384x_pdr_nic_config_t;
typedef struct hfa384x_pdr_hfo_delay  __packed hfa384x_hfo_delay_t;
typedef struct hfa384x_pdr_hfa3861_manf_testsp  __packed hfa384x_pdr_hfa3861_manf_testsp_t;
typedef struct hfa384x_pdr_hfa3861_manf_testi  __packed hfa384x_pdr_hfa3861_manf_testi_t;
typedef struct hfa384x_end_of_pda  __packed hfa384x_pdr_end_of_pda_t;
typedef struct hfa384x_pdrec  __packed hfa384x_pdrec_t;
typedef struct hfa384x_statusresult  hfa384x_cmdresult_t;
typedef struct hfa384x_rridresult  hfa384x_rridresult_t;
enum ctlx_state ;
typedef enum ctlx_state CTLX_STATE;
struct hfa384x_usbctlx;
struct hfa384x;
typedef void (*ctlx_cmdcb_t) (struct hfa384x *, const struct hfa384x_usbctlx *);
typedef void (*ctlx_usercb_t) (struct hfa384x *hw,
void *ctlxresult, void *usercb_data);
typedef struct hfa384x_usbctlx  hfa384x_usbctlx_t;
typedef struct hfa384x_usbctlxq  hfa384x_usbctlxq_t;
typedef struct hfa484x_metacmd  hfa384x_metacmd_t;
#define	MAX_GRP_ADDR		32
#define WLAN_COMMENT_MAX	80
#define WLAN_AUTH_MAX           60
#define WLAN_ACCESS_MAX		60
#define WLAN_ACCESS_NONE	0
#define WLAN_ACCESS_ALL		1
#define WLAN_ACCESS_ALLOW	2
#define WLAN_ACCESS_DENY	3
typedef struct prism2sta_authlist  prism2sta_authlist_t;
typedef struct prism2sta_accesslist  prism2sta_accesslist_t;
typedef struct hfa384x  hfa384x_t;
void hfa384x_create(hfa384x_t *hw, struct usb_device *usb);
void hfa384x_destroy(hfa384x_t *hw);
int
hfa384x_corereset(hfa384x_t *hw, int holdtime, int settletime, int genesis);
int hfa384x_drvr_commtallies(hfa384x_t *hw);
int hfa384x_drvr_disable(hfa384x_t *hw, u16 macport);
int hfa384x_drvr_enable(hfa384x_t *hw, u16 macport);
int hfa384x_drvr_flashdl_enable(hfa384x_t *hw);
int hfa384x_drvr_flashdl_disable(hfa384x_t *hw);
int hfa384x_drvr_flashdl_write(hfa384x_t *hw, u32 daddr, void *buf, u32 len);
int hfa384x_drvr_getconfig(hfa384x_t *hw, u16 rid, void *buf, u16 len);
int hfa384x_drvr_ramdl_enable(hfa384x_t *hw, u32 exeaddr);
int hfa384x_drvr_ramdl_disable(hfa384x_t *hw);
int hfa384x_drvr_ramdl_write(hfa384x_t *hw, u32 daddr, void *buf, u32 len);
int hfa384x_drvr_readpda(hfa384x_t *hw, void *buf, unsigned int len);
int hfa384x_drvr_setconfig(hfa384x_t *hw, u16 rid, void *buf, u16 len);
static inline int hfa384x_drvr_getconfig16(hfa384x_t *hw, u16 rid, void *val)
static inline int hfa384x_drvr_setconfig16(hfa384x_t *hw, u16 rid, u16 val)
int
hfa384x_drvr_getconfig_async(hfa384x_t *hw,
u16 rid, ctlx_usercb_t usercb, void *usercb_data);
int
hfa384x_drvr_setconfig_async(hfa384x_t *hw,
u16 rid,
void *buf,
u16 len, ctlx_usercb_t usercb, void *usercb_data);
static inline int
hfa384x_drvr_setconfig16_async(hfa384x_t *hw, u16 rid, u16 val)
int hfa384x_drvr_start(hfa384x_t *hw);
int hfa384x_drvr_stop(hfa384x_t *hw);
int
hfa384x_drvr_txframe(hfa384x_t *hw, struct sk_buff *skb,
union p80211_hdr *p80211_hdr, struct p80211_metawep *p80211_wep);
void hfa384x_tx_timeout(wlandevice_t *wlandev);
int hfa384x_cmd_initialize(hfa384x_t *hw);
int hfa384x_cmd_enable(hfa384x_t *hw, u16 macport);
int hfa384x_cmd_disable(hfa384x_t *hw, u16 macport);
int hfa384x_cmd_allocate(hfa384x_t *hw, u16 len);
int hfa384x_cmd_monitor(hfa384x_t *hw, u16 enable);
int
hfa384x_cmd_download(hfa384x_t *hw,
u16 mode, u16 lowaddr, u16 highaddr, u16 codelen);
