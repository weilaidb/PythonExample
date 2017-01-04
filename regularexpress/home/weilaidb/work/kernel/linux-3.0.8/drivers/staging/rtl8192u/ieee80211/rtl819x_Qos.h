#define __INC_QOS_TYPE_H
#define BIT0                    0x00000001
#define BIT1                    0x00000002
#define BIT2                    0x00000004
#define BIT3                    0x00000008
#define BIT4                    0x00000010
#define BIT5                    0x00000020
#define BIT6                    0x00000040
#define BIT7                    0x00000080
#define BIT8                    0x00000100
#define BIT9                    0x00000200
#define BIT10                   0x00000400
#define BIT11                   0x00000800
#define BIT12                   0x00001000
#define BIT13                   0x00002000
#define BIT14                   0x00004000
#define BIT15                   0x00008000
#define BIT16                   0x00010000
#define BIT17                   0x00020000
#define BIT18                   0x00040000
#define BIT19                   0x00080000
#define BIT20                   0x00100000
#define BIT21                   0x00200000
#define BIT22                   0x00400000
#define BIT23                   0x00800000
#define BIT24                   0x01000000
#define BIT25                   0x02000000
#define BIT26                   0x04000000
#define BIT27                   0x08000000
#define BIT28                   0x10000000
#define BIT29                   0x20000000
#define BIT30                   0x40000000
#define BIT31                   0x80000000
#define	MAX_WMMELE_LENGTH	64
typedef u32 QOS_MODE, *PQOS_MODE;
#define QOS_DISABLE		0
#define QOS_WMM			1
#define QOS_WMMSA		2
#define QOS_EDCA		4
#define QOS_HCCA		8
#define QOS_WMM_UAPSD		16
#define AC_PARAM_SIZE	4
#define WMM_PARAM_ELE_BODY_LEN	18
typedef	enum _ACK_POLICYACK_POLICY,*PACK_POLICY;
#define WMM_PARAM_ELEMENT_SIZE	(8+(4*AC_PARAM_SIZE))
typedef	union _QOS_CTRL_FIELDQOS_CTRL_FIELD, *PQOS_CTRL_FIELD;
typedef	union _QOS_INFO_FIELDQOS_INFO_FIELD, *PQOS_INFO_FIELD;
typedef u32 AC_CODING;
#define AC0_BE	0
#define AC1_BK	1
#define AC2_VI	2
#define AC3_VO	3
#define AC_MAX	4
typedef	union _ACI_AIFSNACI_AIFSN, *PACI_AIFSN;
typedef	union _ECWECW, *PECW;
typedef	union _AC_PARAMAC_PARAM, *PAC_PARAM;
typedef	enum _QOS_ELE_SUBTYPEQOS_ELE_SUBTYPE,*PQOS_ELE_SUBTYPE;
typedef	enum _DIRECTION_VALUEDIRECTION_VALUE,*PDIRECTION_VALUE;
typedef union _QOS_TSINFOQOS_TSINFO, *PQOS_TSINFO;
typedef union _TSPEC_BODYTSPEC_BODY, *PTSPEC_BODY;
typedef struct _WMM_TSPEC WMM_TSPEC, *PWMM_TSPEC;
typedef	enum _ACM_METHODACM_METHOD,*PACM_METHOD;
typedef struct _ACMACM, *PACM;
typedef	u8		AC_UAPSD, *PAC_UAPSD;
#define	GET_VO_UAPSD(_apsd) ((_apsd) & BIT0)
#define	SET_VO_UAPSD(_apsd) ((_apsd) |= BIT0)
#define	GET_VI_UAPSD(_apsd) ((_apsd) & BIT1)
#define	SET_VI_UAPSD(_apsd) ((_apsd) |= BIT1)
#define	GET_BK_UAPSD(_apsd) ((_apsd) & BIT2)
#define	SET_BK_UAPSD(_apsd) ((_apsd) |= BIT2)
#define	GET_BE_UAPSD(_apsd) ((_apsd) & BIT3)
#define	SET_BE_UAPSD(_apsd) ((_apsd) |= BIT3)
typedef union _QOS_TCLAS QOS_TCLAS, *PQOS_TCLAS;
typedef struct _QOS_TSTREAM QOS_TSTREAM, *PQOS_TSTREAM;
typedef struct _OCTET_STRINGOCTET_STRING, *POCTET_STRING;
typedef struct _STA_QOSSTA_QOS, *PSTA_QOS;
typedef struct _BSS_QOSBSS_QOS, *PBSS_QOS;
#define sQoSCtlLng			2
#define	QOS_CTRL_LEN(_QosMode)		((_QosMode > QOS_DISABLE)? sQoSCtlLng : 0)
#define IsACValid(ac)			((ac<=7 )?true:false )
