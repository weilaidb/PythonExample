#define FC_MAX_HOLD_RSCN     32
#define FC_MAX_NS_RSP        64512
#define FC_MAXLOOP           126
#define LPFC_DISC_FLOGI_TMO  10
enum lpfc_work_type ;
struct lpfc_work_evt ;
struct lpfc_scsi_check_condition_event;
struct lpfc_scsi_varqueuedepth_event;
struct lpfc_scsi_event_header;
struct lpfc_fabric_event_header;
struct lpfc_fcprdchkerr_event;
struct lpfc_fast_path_event ;
#define LPFC_SLI4_MAX_XRI	1024
#define XRI_BITMAP_ULONGS (LPFC_SLI4_MAX_XRI / BITS_PER_LONG)
struct lpfc_node_rrqs ;
struct lpfc_nodelist ;
struct lpfc_node_rrq ;
#define NLP_IGNR_REG_CMPL  0x00000001
#define NLP_REG_LOGIN_SEND 0x00000002
#define NLP_PLOGI_SND      0x00000020
#define NLP_PRLI_SND       0x00000040
#define NLP_ADISC_SND      0x00000080
#define NLP_LOGO_SND       0x00000100
#define NLP_RNID_SND       0x00000400
#define NLP_ELS_SND_MASK   0x000007e0
#define NLP_DEFER_RM       0x00010000
#define NLP_DELAY_TMO      0x00020000
#define NLP_NPR_2B_DISC    0x00040000
#define NLP_RCV_PLOGI      0x00080000
#define NLP_LOGO_ACC       0x00100000
#define NLP_TGT_NO_SCSIID  0x00200000
#define NLP_ACC_REGLOGIN   0x01000000
#define NLP_NPR_ADISC      0x02000000
#define NLP_RM_DFLT_RPI    0x04000000
#define NLP_NODEV_REMOVE   0x08000000
#define NLP_TARGET_REMOVE  0x10000000
#define NLP_SC_REQ         0x20000000
#define NLP_RPI_REGISTERED 0x80000000
#define NLP_CHK_NODE_ACT(ndlp)		(((ndlp)->nlp_usg_map \
& NLP_USG_NODE_ACT_BIT) \
&& \
!((ndlp)->nlp_usg_map \
& NLP_USG_FREE_ACK_BIT))
#define NLP_SET_NODE_ACT(ndlp)		((ndlp)->nlp_usg_map \
|= NLP_USG_NODE_ACT_BIT)
#define NLP_INT_NODE_ACT(ndlp)		((ndlp)->nlp_usg_map \
= NLP_USG_NODE_ACT_BIT)
#define NLP_CLR_NODE_ACT(ndlp)		((ndlp)->nlp_usg_map \
&= ~NLP_USG_NODE_ACT_BIT)
#define NLP_CHK_IACT_REQ(ndlp)          ((ndlp)->nlp_usg_map \
& NLP_USG_IACT_REQ_BIT)
#define NLP_SET_IACT_REQ(ndlp)          ((ndlp)->nlp_usg_map \
|= NLP_USG_IACT_REQ_BIT)
#define NLP_CHK_FREE_REQ(ndlp)		((ndlp)->nlp_usg_map \
& NLP_USG_FREE_REQ_BIT)
#define NLP_SET_FREE_REQ(ndlp)		((ndlp)->nlp_usg_map \
|= NLP_USG_FREE_REQ_BIT)
#define NLP_CHK_FREE_ACK(ndlp)		((ndlp)->nlp_usg_map \
& NLP_USG_FREE_ACK_BIT)
#define NLP_SET_FREE_ACK(ndlp)		((ndlp)->nlp_usg_map \
|= NLP_USG_FREE_ACK_BIT)
#define NLP_STE_UNUSED_NODE       0x0
#define NLP_STE_PLOGI_ISSUE       0x1
#define NLP_STE_ADISC_ISSUE       0x2
#define NLP_STE_REG_LOGIN_ISSUE   0x3
#define NLP_STE_PRLI_ISSUE        0x4
#define NLP_STE_UNMAPPED_NODE     0x5
#define NLP_STE_MAPPED_NODE       0x6
#define NLP_STE_NPR_NODE          0x7
#define NLP_STE_MAX_STATE         0x8
#define NLP_STE_FREED_NODE        0xff
#define NLP_EVT_RCV_PLOGI         0x0
#define NLP_EVT_RCV_PRLI          0x1
#define NLP_EVT_RCV_LOGO          0x2
#define NLP_EVT_RCV_ADISC         0x3
#define NLP_EVT_RCV_PDISC         0x4
#define NLP_EVT_RCV_PRLO          0x5
#define NLP_EVT_CMPL_PLOGI        0x6
#define NLP_EVT_CMPL_PRLI         0x7
#define NLP_EVT_CMPL_LOGO         0x8
#define NLP_EVT_CMPL_ADISC        0x9
#define NLP_EVT_CMPL_REG_LOGIN    0xa
#define NLP_EVT_DEVICE_RM         0xb
#define NLP_EVT_DEVICE_RECOVERY   0xc
#define NLP_EVT_MAX_EVENT         0xd
