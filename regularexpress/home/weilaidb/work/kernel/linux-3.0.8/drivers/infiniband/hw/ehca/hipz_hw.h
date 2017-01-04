#define __HIPZ_HW_H__
#define EHCA_MAX_MTU 4
struct hipz_qptemm ;
#define QPX_SQADDER EHCA_BMASK_IBM(48, 63)
#define QPX_RQADDER EHCA_BMASK_IBM(48, 63)
#define QPX_AAELOG_RESET_SRQ_LIMIT EHCA_BMASK_IBM(3, 3)
#define QPTEMM_OFFSET(x) offsetof(struct hipz_qptemm, x)
struct hipz_mrmwmm ;
#define MRMWMM_OFFSET(x) offsetof(struct hipz_mrmwmm, x)
struct hipz_qpedmm ;
#define QPEDMM_OFFSET(x) offsetof(struct hipz_qpedmm, x)
struct hipz_cqtemm ;
#define CQX_FEC_CQE_CNT           EHCA_BMASK_IBM(32, 63)
#define CQX_FECADDER              EHCA_BMASK_IBM(32, 63)
#define CQX_N0_GENERATE_SOLICITED_COMP_EVENT EHCA_BMASK_IBM(0, 0)
#define CQX_N1_GENERATE_COMP_EVENT EHCA_BMASK_IBM(0, 0)
#define CQTEMM_OFFSET(x) offsetof(struct hipz_cqtemm, x)
struct hipz_eqtemm ;
#define EQTEMM_OFFSET(x) offsetof(struct hipz_eqtemm, x)
#define HIPZ_ACCESSCTRL_L_WRITE  0x00800000
#define HIPZ_ACCESSCTRL_R_WRITE  0x00400000
#define HIPZ_ACCESSCTRL_R_READ   0x00200000
#define HIPZ_ACCESSCTRL_R_ATOMIC 0x00100000
#define HIPZ_ACCESSCTRL_MW_BIND  0x00080000
struct hipz_query_hca  __attribute__ ((packed));
#define HCA_CAP_AH_PORT_NR_CHECK      EHCA_BMASK_IBM( 0,  0)
#define HCA_CAP_ATOMIC                EHCA_BMASK_IBM( 1,  1)
#define HCA_CAP_AUTO_PATH_MIG         EHCA_BMASK_IBM( 2,  2)
#define HCA_CAP_BAD_P_KEY_CTR         EHCA_BMASK_IBM( 3,  3)
#define HCA_CAP_SQD_RTS_PORT_CHANGE   EHCA_BMASK_IBM( 4,  4)
#define HCA_CAP_CUR_QP_STATE_MOD      EHCA_BMASK_IBM( 5,  5)
#define HCA_CAP_INIT_TYPE             EHCA_BMASK_IBM( 6,  6)
#define HCA_CAP_PORT_ACTIVE_EVENT     EHCA_BMASK_IBM( 7,  7)
#define HCA_CAP_Q_KEY_VIOL_CTR        EHCA_BMASK_IBM( 8,  8)
#define HCA_CAP_WQE_RESIZE            EHCA_BMASK_IBM( 9,  9)
#define HCA_CAP_RAW_PACKET_MCAST      EHCA_BMASK_IBM(10, 10)
#define HCA_CAP_SHUTDOWN_PORT         EHCA_BMASK_IBM(11, 11)
#define HCA_CAP_RC_LL_QP              EHCA_BMASK_IBM(12, 12)
#define HCA_CAP_SRQ                   EHCA_BMASK_IBM(13, 13)
#define HCA_CAP_UD_LL_QP              EHCA_BMASK_IBM(16, 16)
#define HCA_CAP_RESIZE_MR             EHCA_BMASK_IBM(17, 17)
#define HCA_CAP_MINI_QP               EHCA_BMASK_IBM(18, 18)
#define HCA_CAP_H_ALLOC_RES_SYNC      EHCA_BMASK_IBM(19, 19)
struct hipz_query_port  __attribute__ ((packed));
