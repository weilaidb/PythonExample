struct lpfc_hba;
#define list_remove_head(list, entry, type, member)		\
do  while(0)
#define list_get_first(list, type, member)			\
(list_empty(list)) ? NULL :				\
list_entry((list)->next, type, member)
struct lpfc_rport_data ;
struct fcp_rsp ;
struct fcp_cmnd ;
struct lpfc_scsicmd_bkt ;
struct lpfc_scsi_buf ;
#define LPFC_SCSI_DMA_EXT_SIZE 264
#define LPFC_BPL_SIZE          1024
#define MDAC_DIRECT_CMD                  0x22
