extern mempool_t *cifs_mid_poolp;
static void
wake_up_task(struct mid_q_entry *mid)
struct mid_q_entry *
AllocMidQEntry(const struct smb_hdr *smb_buffer, struct TCP_Server_Info *server)
void
DeleteMidQEntry(struct mid_q_entry *midEntry)
static void
delete_mid(struct mid_q_entry *mid)
static int
smb_sendv(struct TCP_Server_Info *server, struct kvec *iov, int n_vec)
int
smb_send(struct TCP_Server_Info *server, struct smb_hdr *smb_buffer,
unsigned int smb_buf_length)
static int wait_for_free_request(struct TCP_Server_Info *server,
const int long_op)
static int allocate_mid(struct cifs_ses *ses, struct smb_hdr *in_buf,
struct mid_q_entry **ppmidQ)
static int
wait_for_response(struct TCP_Server_Info *server, struct mid_q_entry *midQ)
int
cifs_call_async(struct TCP_Server_Info *server, struct kvec *iov,
unsigned int nvec, mid_callback_t *callback, void *cbdata,
bool ignore_pend)
int
SendReceiveNoRsp(const unsigned int xid, struct cifs_ses *ses,
struct smb_hdr *in_buf, int flags)
static int
cifs_sync_mid_result(struct mid_q_entry *mid, struct TCP_Server_Info *server)
static int
send_nt_cancel(struct TCP_Server_Info *server, struct smb_hdr *in_buf,
struct mid_q_entry *mid)
int
cifs_check_receive(struct mid_q_entry *mid, struct TCP_Server_Info *server,
bool log_error)
int
SendReceive2(const unsigned int xid, struct cifs_ses *ses,
struct kvec *iov, int n_vec, int *pRespBufType,
const int flags)
int
SendReceive(const unsigned int xid, struct cifs_ses *ses,
struct smb_hdr *in_buf, struct smb_hdr *out_buf,
int *pbytes_returned, const int long_op)
static int
send_lock_cancel(const unsigned int xid, struct cifs_tcon *tcon,
struct smb_hdr *in_buf,
struct smb_hdr *out_buf)
int
SendReceiveBlockingLock(const unsigned int xid, struct cifs_tcon *tcon,
struct smb_hdr *in_buf, struct smb_hdr *out_buf,
int *pbytes_returned)
