#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static u32 dbfsize = 4;
module_param(dbfsize, uint, 0400);
MODULE_PARM_DESC(dbfsize,
"number of pages for each debug feature area (default 4)");
static inline unsigned int zfcp_dbf_plen(unsigned int offset)
static inline
void zfcp_dbf_pl_write(struct zfcp_dbf *dbf, void *data, u16 length, char *area,
u64 req_id)
void zfcp_dbf_hba_fsf_res(char *tag, struct zfcp_fsf_req *req)
void zfcp_dbf_hba_fsf_uss(char *tag, struct zfcp_fsf_req *req)
void zfcp_dbf_hba_bit_err(char *tag, struct zfcp_fsf_req *req)
static void zfcp_dbf_set_common(struct zfcp_dbf_rec *rec,
struct zfcp_adapter *adapter,
struct zfcp_port *port,
struct scsi_device *sdev)
void zfcp_dbf_rec_trig(char *tag, struct zfcp_adapter *adapter,
struct zfcp_port *port, struct scsi_device *sdev,
u8 want, u8 need)
void zfcp_dbf_rec_run(char *tag, struct zfcp_erp_action *erp)
static inline
void zfcp_dbf_san(char *tag, struct zfcp_dbf *dbf, void *data, u8 id, u16 len,
u64 req_id, u32 d_id)
void zfcp_dbf_san_req(char *tag, struct zfcp_fsf_req *fsf, u32 d_id)
void zfcp_dbf_san_res(char *tag, struct zfcp_fsf_req *fsf)
void zfcp_dbf_san_in_els(char *tag, struct zfcp_fsf_req *fsf)
void zfcp_dbf_scsi(char *tag, struct scsi_cmnd *sc, struct zfcp_fsf_req *fsf)
static debug_info_t *zfcp_dbf_reg(const char *name, int size, int rec_size)
static void zfcp_dbf_unregister(struct zfcp_dbf *dbf)
int zfcp_dbf_adapter_register(struct zfcp_adapter *adapter)
void zfcp_dbf_adapter_unregister(struct zfcp_adapter *adapter)
