#define ZFCP_DBF_H
#define ZFCP_DBF_TAG_LEN       7
#define ZFCP_DBF_INVALID_LUN	0xFFFFFFFFFFFFFFFFull
struct zfcp_dbf_rec_trigger  __packed;
struct zfcp_dbf_rec_running  __packed;
enum zfcp_dbf_rec_id ;
struct zfcp_dbf_rec  __packed;
enum zfcp_dbf_san_id ;
struct zfcp_dbf_san  __packed;
struct zfcp_dbf_hba_res  __packed;
struct zfcp_dbf_hba_uss  __packed;
enum zfcp_dbf_hba_id ;
struct zfcp_dbf_hba  __packed;
enum zfcp_dbf_scsi_id ;
struct zfcp_dbf_scsi  __packed;
struct zfcp_dbf_pay  __packed;
struct zfcp_dbf ;
static inline
void zfcp_dbf_hba_fsf_resp(char *tag, int level, struct zfcp_fsf_req *req)
static inline
void zfcp_dbf_hba_fsf_response(struct zfcp_fsf_req *req)
static inline
void _zfcp_dbf_scsi(char *tag, int level, struct scsi_cmnd *scmd,
struct zfcp_fsf_req *req)
static inline
void zfcp_dbf_scsi_result(struct scsi_cmnd *scmd, struct zfcp_fsf_req *req)
static inline
void zfcp_dbf_scsi_fail_send(struct scsi_cmnd *scmd)
static inline
void zfcp_dbf_scsi_abort(char *tag, struct scsi_cmnd *scmd,
struct zfcp_fsf_req *fsf_req)
static inline
void zfcp_dbf_scsi_devreset(char *tag, struct scsi_cmnd *scmnd, u8 flag)
