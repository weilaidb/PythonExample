struct lpfc_hba;
struct lpfc_vport;
typedef enum _lpfc_ctx_cmd  lpfc_ctx_cmd;
struct lpfc_cq_event ;
struct lpfc_iocbq ;
#define SLI_IOCB_RET_IOCB      1
#define IOCB_SUCCESS        0
#define IOCB_BUSY           1
#define IOCB_ERROR          2
#define IOCB_TIMEDOUT       3
#define LPFC_MBX_WAKE		1
#define LPFC_MBX_IMED_UNREG	2
typedef struct lpfcMboxq  LPFC_MBOXQ_t;
#define MBX_POLL        1
#define MBX_NOWAIT      2
#define LPFC_MAX_RING_MASK  5
#define LPFC_MAX_RING       4
struct lpfc_sli_ring;
struct lpfc_sli_ring_mask ;
struct lpfc_sli_ring_stat ;
struct lpfc_sli_ring ;
struct lpfc_hbq_init  ;
struct lpfc_sli_stat ;
struct lpfc_lnk_stat ;
struct lpfc_sli ;
#define LPFC_MBOX_TMO           30
#define LPFC_MBOX_SLI4_CONFIG_TMO 60
#define LPFC_MBOX_TMO_FLASH_CMD 300
