#define _EHCA_QES_H_
struct ehca_vsgentry ;
#define GRH_FLAG_MASK        EHCA_BMASK_IBM( 7,  7)
#define GRH_IPVERSION_MASK   EHCA_BMASK_IBM( 0,  3)
#define GRH_TCLASS_MASK      EHCA_BMASK_IBM( 4, 12)
#define GRH_FLOWLABEL_MASK   EHCA_BMASK_IBM(13, 31)
#define GRH_PAYLEN_MASK      EHCA_BMASK_IBM(32, 47)
#define GRH_NEXTHEADER_MASK  EHCA_BMASK_IBM(48, 55)
#define GRH_HOPLIMIT_MASK    EHCA_BMASK_IBM(56, 63)
struct ehca_ud_av ;
#define MAX_WQE_SG_ENTRIES 252
#define WQE_OPTYPE_SEND             0x80
#define WQE_OPTYPE_RDMAREAD         0x40
#define WQE_OPTYPE_RDMAWRITE        0x20
#define WQE_OPTYPE_CMPSWAP          0x10
#define WQE_OPTYPE_FETCHADD         0x08
#define WQE_OPTYPE_BIND             0x04
#define WQE_WRFLAG_REQ_SIGNAL_COM   0x80
#define WQE_WRFLAG_FENCE            0x40
#define WQE_WRFLAG_IMM_DATA_PRESENT 0x20
#define WQE_WRFLAG_SOLIC_EVENT      0x10
#define WQEF_CACHE_HINT             0x80
#define WQEF_CACHE_HINT_RD_WR       0x40
#define WQEF_TIMED_WQE              0x20
#define WQEF_PURGE                  0x08
#define WQEF_HIGH_NIBBLE            0xF0
#define MW_BIND_ACCESSCTRL_R_WRITE   0x40
#define MW_BIND_ACCESSCTRL_R_READ    0x20
#define MW_BIND_ACCESSCTRL_R_ATOMIC  0x10
struct ehca_wqe ;
#define WC_SEND_RECEIVE EHCA_BMASK_IBM(0, 0)
#define WC_IMM_DATA     EHCA_BMASK_IBM(1, 1)
#define WC_GRH_PRESENT  EHCA_BMASK_IBM(2, 2)
#define WC_SE_BIT       EHCA_BMASK_IBM(3, 3)
#define WC_STATUS_ERROR_BIT 0x80000000
#define WC_STATUS_REMOTE_ERROR_FLAGS 0x0000F800
#define WC_STATUS_PURGE_BIT 0x10
#define WC_SEND_RECEIVE_BIT 0x80
struct ehca_cqe ;
struct ehca_eqe ;
struct ehca_mrte ;
