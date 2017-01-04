#define NFSDDBG_FACILITY                NFSDDBG_PROC
#define NFSPROC4_CB_NULL 0
#define NFSPROC4_CB_COMPOUND 1
enum ;
#define NFS4_MAXTAGLEN		20
#define NFS4_enc_cb_null_sz		0
#define NFS4_dec_cb_null_sz		0
#define cb_compound_enc_hdr_sz		4
#define cb_compound_dec_hdr_sz		(3 + (NFS4_MAXTAGLEN >> 2))
#define sessionid_sz			(NFS4_MAX_SESSIONID_LEN >> 2)
#define cb_sequence_enc_sz		(sessionid_sz + 4 +             \
1)
#define cb_sequence_dec_sz		(op_dec_sz + sessionid_sz + 4)
#define op_enc_sz			1
#define op_dec_sz			2
#define enc_nfs4_fh_sz			(1 + (NFS4_FHSIZE >> 2))
#define enc_stateid_sz			(NFS4_STATEID_SIZE >> 2)
#define NFS4_enc_cb_recall_sz		(cb_compound_enc_hdr_sz +       \
cb_sequence_enc_sz +            \
1 + enc_stateid_sz +            \
enc_nfs4_fh_sz)
#define NFS4_dec_cb_recall_sz		(cb_compound_dec_hdr_sz  +      \
cb_sequence_dec_sz +            \
op_dec_sz)
struct nfs4_cb_compound_hdr ;
static void print_overflow_msg(const char *func, const struct xdr_stream *xdr)
static __be32 *xdr_encode_empty_array(__be32 *p)
enum nfs_cb_opnum4 ;
static void encode_nfs_cb_opnum4(struct xdr_stream *xdr, enum nfs_cb_opnum4 op)
static void encode_nfs_fh4(struct xdr_stream *xdr, const struct knfsd_fh *fh)
static void encode_stateid4(struct xdr_stream *xdr, const stateid_t *sid)
static void encode_sessionid4(struct xdr_stream *xdr,
const struct nfsd4_session *session)
static const struct  nfs_cb_errtbl[] = ;
static int nfs_cb_stat_to_errno(int status)
static int decode_cb_op_status(struct xdr_stream *xdr, enum nfs_opnum4 expected,
enum nfsstat4 *status)
static void encode_cb_compound4args(struct xdr_stream *xdr,
struct nfs4_cb_compound_hdr *hdr)
static void encode_cb_nops(struct nfs4_cb_compound_hdr *hdr)
static int decode_cb_compound4res(struct xdr_stream *xdr,
struct nfs4_cb_compound_hdr *hdr)
static void encode_cb_recall4args(struct xdr_stream *xdr,
const struct nfs4_delegation *dp,
struct nfs4_cb_compound_hdr *hdr)
static void encode_cb_sequence4args(struct xdr_stream *xdr,
const struct nfsd4_callback *cb,
struct nfs4_cb_compound_hdr *hdr)
static int decode_cb_sequence4resok(struct xdr_stream *xdr,
struct nfsd4_callback *cb)
static int decode_cb_sequence4res(struct xdr_stream *xdr,
struct nfsd4_callback *cb)
static void nfs4_xdr_enc_cb_null(struct rpc_rqst *req, struct xdr_stream *xdr,
void *__unused)
static void nfs4_xdr_enc_cb_recall(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfsd4_callback *cb)
static int nfs4_xdr_dec_cb_null(struct rpc_rqst *req, struct xdr_stream *xdr,
void *__unused)
static int nfs4_xdr_dec_cb_recall(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfsd4_callback *cb)
#define PROC(proc, call, argtype, restype)				\
[NFSPROC4_CLNT_##proc] =
static struct rpc_procinfo nfs4_cb_procedures[] = ;
static struct rpc_version nfs_cb_version4 = ;
static struct rpc_version *nfs_cb_version[] = ;
static struct rpc_program cb_program;
static struct rpc_stat cb_stats = ;
#define NFS4_CALLBACK 0x40000000
static struct rpc_program cb_program = ;
static int max_cb_time(void)
static int setup_callback_client(struct nfs4_client *clp, struct nfs4_cb_conn *conn, struct nfsd4_session *ses)
static void warn_no_callback_path(struct nfs4_client *clp, int reason)
static void nfsd4_mark_cb_down(struct nfs4_client *clp, int reason)
static void nfsd4_cb_probe_done(struct rpc_task *task, void *calldata)
static const struct rpc_call_ops nfsd4_cb_probe_ops = ;
static struct rpc_cred *callback_cred;
int set_callback_cred(void)
static struct workqueue_struct *callback_wq;
static void run_nfsd4_cb(struct nfsd4_callback *cb)
static void do_probe_callback(struct nfs4_client *clp)
void nfsd4_probe_callback(struct nfs4_client *clp)
void nfsd4_probe_callback_sync(struct nfs4_client *clp)
void nfsd4_change_callback(struct nfs4_client *clp, struct nfs4_cb_conn *conn)
static bool nfsd41_cb_get_slot(struct nfs4_client *clp, struct rpc_task *task)
static void nfsd4_cb_prepare(struct rpc_task *task, void *calldata)
static void nfsd4_cb_done(struct rpc_task *task, void *calldata)
static void nfsd4_cb_recall_done(struct rpc_task *task, void *calldata)
static void nfsd4_cb_recall_release(void *calldata)
static const struct rpc_call_ops nfsd4_cb_recall_ops = ;
int nfsd4_create_callback_queue(void)
void nfsd4_destroy_callback_queue(void)
void nfsd4_shutdown_callback(struct nfs4_client *clp)
static void nfsd4_release_cb(struct nfsd4_callback *cb)
static struct nfsd4_conn * __nfsd4_find_backchannel(struct nfs4_client *clp)
static void nfsd4_process_cb_update(struct nfsd4_callback *cb)
void nfsd4_do_callback_rpc(struct work_struct *w)
void nfsd4_cb_recall(struct nfs4_delegation *dp)
