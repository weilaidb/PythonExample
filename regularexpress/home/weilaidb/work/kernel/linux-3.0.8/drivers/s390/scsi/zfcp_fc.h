#define ZFCP_FC_H
#define ZFCP_FC_CT_SIZE_PAGE	  (PAGE_SIZE - sizeof(struct fc_ct_hdr))
#define ZFCP_FC_GPN_FT_ENT_PAGE	  (ZFCP_FC_CT_SIZE_PAGE \
/ sizeof(struct fc_gpn_ft_resp))
#define ZFCP_FC_GPN_FT_NUM_BUFS	  4
#define ZFCP_FC_GPN_FT_MAX_SIZE	  (ZFCP_FC_GPN_FT_NUM_BUFS * PAGE_SIZE \
- sizeof(struct fc_ct_hdr))
#define ZFCP_FC_GPN_FT_MAX_ENT	  (ZFCP_FC_GPN_FT_NUM_BUFS * \
(ZFCP_FC_GPN_FT_ENT_PAGE + 1))
#define ZFCP_FC_CTELS_TMO	(2 * FC_DEF_R_A_TOV / 1000)
struct zfcp_fc_event ;
struct zfcp_fc_events ;
struct zfcp_fc_gid_pn_req  __packed;
struct zfcp_fc_gid_pn_rsp  __packed;
struct zfcp_fc_gpn_ft_req  __packed;
struct zfcp_fc_gspn_req  __packed;
struct zfcp_fc_gspn_rsp  __packed;
struct zfcp_fc_rspn_req  __packed;
struct zfcp_fc_req ;
enum zfcp_fc_wka_status ;
struct zfcp_fc_wka_port ;
struct zfcp_fc_wka_ports ;
static inline
void zfcp_fc_scsi_to_fcp(struct fcp_cmnd *fcp, struct scsi_cmnd *scsi,
u8 tm_flags)
static inline
void zfcp_fc_eval_fcp_rsp(struct fcp_resp_with_ext *fcp_rsp,
struct scsi_cmnd *scsi)
