typedef	u_long	Counter ;
typedef u_char	TimeStamp[8] ;
typedef struct fddi_addr LongAddr ;
typedef	u_long	Timer_2 ;
typedef	u_long	Timer ;
typedef	u_short	ResId ;
typedef u_short	SMTEnum ;
typedef	u_char	SMTFlag ;
typedef struct  SetCountType ;
#define MIB_PATH_P	(1<<0)
#define MIB_PATH_S	(1<<1)
#define MIB_PATH_L	(1<<2)
#define MIB_P_PATH_LOCAL	(1<<0)
#define MIB_P_PATH_SEC_ALTER	(1<<1)
#define MIB_P_PATH_PRIM_ALTER	(1<<2)
#define MIB_P_PATH_CON_ALTER	(1<<3)
#define MIB_P_PATH_SEC_PREFER	(1<<4)
#define MIB_P_PATH_PRIM_PREFER	(1<<5)
#define MIB_P_PATH_CON_PREFER	(1<<6)
#define MIB_P_PATH_THRU		(1<<7)
#define MIB_PATH_ISOLATED	0
#define MIB_PATH_LOCAL		1
#define MIB_PATH_SECONDARY	2
#define MIB_PATH_PRIMARY	3
#define MIB_PATH_CONCATENATED	4
#define MIB_PATH_THRU		5
#define MIB_PMDCLASS_MULTI	0
#define MIB_PMDCLASS_SINGLE1	1
#define MIB_PMDCLASS_SINGLE2	2
#define MIB_PMDCLASS_SONET	3
#define MIB_PMDCLASS_LCF	4
#define MIB_PMDCLASS_TP		5
#define MIB_PMDCLASS_UNKNOWN	6
#define MIB_PMDCLASS_UNSPEC	7
#define MIB_SMT_STASTA_CON	0
#define MIB_SMT_STASTA_SEPA	1
#define MIB_SMT_STASTA_THRU	2
struct fddi_mib  ;
#define	SMT_OID_CF_STATE	1
#define	SMT_OID_PCM_STATE_A	2
#define	SMT_OID_PCM_STATE_B	17
#define	SMT_OID_RMT_STATE	3
#define	SMT_OID_UNA		4
#define	SMT_OID_DNA		5
#define	SMT_OID_ERROR_CT	6
#define	SMT_OID_LOST_CT		7
#define	SMT_OID_LEM_CT		8
#define	SMT_OID_LEM_CT_A	11
#define	SMT_OID_LEM_CT_B	12
#define	SMT_OID_LCT_FAIL_CT	9
#define	SMT_OID_LCT_FAIL_CT_A	13
#define	SMT_OID_LCT_FAIL_CT_B	14
#define	SMT_OID_LEM_REJECT_CT	10
#define	SMT_OID_LEM_REJECT_CT_A	15
#define	SMT_OID_LEM_REJECT_CT_B	16
#define SMT_OID_ECF_REQ_RX	20
#define SMT_OID_ECF_REPLY_RX	21
#define SMT_OID_ECF_REQ_TX	22
#define SMT_OID_ECF_REPLY_TX	23
#define SMT_OID_PMF_GET_RX	24
#define SMT_OID_PMF_SET_RX	25
#define SMT_OID_RDF_RX		26
#define SMT_OID_RDF_TX		27
