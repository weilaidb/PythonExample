#define CB_OP_TAGLEN_MAXSZ	(512)
#define CB_OP_HDR_RES_MAXSZ	(2 + CB_OP_TAGLEN_MAXSZ)
#define CB_OP_GETATTR_BITMAP_MAXSZ	(4)
#define CB_OP_GETATTR_RES_MAXSZ	(CB_OP_HDR_RES_MAXSZ + \
CB_OP_GETATTR_BITMAP_MAXSZ + \
2 + 2 + 3 + 3)
#define CB_OP_RECALL_RES_MAXSZ	(CB_OP_HDR_RES_MAXSZ)
#if defined(CONFIG_NFS_V4_1)
#define CB_OP_LAYOUTRECALL_RES_MAXSZ	(CB_OP_HDR_RES_MAXSZ)
#define CB_OP_DEVICENOTIFY_RES_MAXSZ	(CB_OP_HDR_RES_MAXSZ)
#define CB_OP_SEQUENCE_RES_MAXSZ	(CB_OP_HDR_RES_MAXSZ + \
4 + 1 + 3)
#define CB_OP_RECALLANY_RES_MAXSZ	(CB_OP_HDR_RES_MAXSZ)
#define CB_OP_RECALLSLOT_RES_MAXSZ	(CB_OP_HDR_RES_MAXSZ)
#define NFSDBG_FACILITY NFSDBG_CALLBACK
#define NFS4ERR_RESOURCE_HDR	11050
typedef __be32 (*callback_process_op_t)(void *, void *,
struct cb_process_state *);
typedef __be32 (*callback_decode_arg_t)(struct svc_rqst *, struct xdr_stream *, void *);
typedef __be32 (*callback_encode_res_t)(struct svc_rqst *, struct xdr_stream *, void *);
struct callback_op ;
static struct callback_op callback_ops[];
static __be32 nfs4_callback_null(struct svc_rqst *rqstp, void *argp, void *resp)
static int nfs4_decode_void(struct svc_rqst *rqstp, __be32 *p, void *dummy)
static int nfs4_encode_void(struct svc_rqst *rqstp, __be32 *p, void *dummy)
static __be32 *read_buf(struct xdr_stream *xdr, int nbytes)
static __be32 decode_string(struct xdr_stream *xdr, unsigned int *len, const char **str)
static __be32 decode_fh(struct xdr_stream *xdr, struct nfs_fh *fh)
static __be32 decode_bitmap(struct xdr_stream *xdr, uint32_t *bitmap)
static __be32 decode_stateid(struct xdr_stream *xdr, nfs4_stateid *stateid)
static __be32 decode_compound_hdr_arg(struct xdr_stream *xdr, struct cb_compound_hdr_arg *hdr)
static __be32 decode_op_hdr(struct xdr_stream *xdr, unsigned int *op)
static __be32 decode_getattr_args(struct svc_rqst *rqstp, struct xdr_stream *xdr, struct cb_getattrargs *args)
static __be32 decode_recall_args(struct svc_rqst *rqstp, struct xdr_stream *xdr, struct cb_recallargs *args)
#if defined(CONFIG_NFS_V4_1)
static __be32 decode_layoutrecall_args(struct svc_rqst *rqstp,
struct xdr_stream *xdr,
struct cb_layoutrecallargs *args)
static
__be32 decode_devicenotify_args(struct svc_rqst *rqstp,
struct xdr_stream *xdr,
struct cb_devicenotifyargs *args)
static __be32 decode_sessionid(struct xdr_stream *xdr,
struct nfs4_sessionid *sid)
static __be32 decode_rc_list(struct xdr_stream *xdr,
struct referring_call_list *rc_list)
static __be32 decode_cb_sequence_args(struct svc_rqst *rqstp,
struct xdr_stream *xdr,
struct cb_sequenceargs *args)
static __be32 decode_recallany_args(struct svc_rqst *rqstp,
struct xdr_stream *xdr,
struct cb_recallanyargs *args)
static __be32 decode_recallslot_args(struct svc_rqst *rqstp,
struct xdr_stream *xdr,
struct cb_recallslotargs *args)
static __be32 encode_string(struct xdr_stream *xdr, unsigned int len, const char *str)
#define CB_SUPPORTED_ATTR0 (FATTR4_WORD0_CHANGE|FATTR4_WORD0_SIZE)
#define CB_SUPPORTED_ATTR1 (FATTR4_WORD1_TIME_METADATA|FATTR4_WORD1_TIME_MODIFY)
static __be32 encode_attr_bitmap(struct xdr_stream *xdr, const uint32_t *bitmap, __be32 **savep)
static __be32 encode_attr_change(struct xdr_stream *xdr, const uint32_t *bitmap, uint64_t change)
static __be32 encode_attr_size(struct xdr_stream *xdr, const uint32_t *bitmap, uint64_t size)
static __be32 encode_attr_time(struct xdr_stream *xdr, const struct timespec *time)
static __be32 encode_attr_ctime(struct xdr_stream *xdr, const uint32_t *bitmap, const struct timespec *time)
static __be32 encode_attr_mtime(struct xdr_stream *xdr, const uint32_t *bitmap, const struct timespec *time)
static __be32 encode_compound_hdr_res(struct xdr_stream *xdr, struct cb_compound_hdr_res *hdr)
static __be32 encode_op_hdr(struct xdr_stream *xdr, uint32_t op, __be32 res)
static __be32 encode_getattr_res(struct svc_rqst *rqstp, struct xdr_stream *xdr, const struct cb_getattrres *res)
#if defined(CONFIG_NFS_V4_1)
static __be32 encode_sessionid(struct xdr_stream *xdr,
const struct nfs4_sessionid *sid)
static __be32 encode_cb_sequence_res(struct svc_rqst *rqstp,
struct xdr_stream *xdr,
const struct cb_sequenceres *res)
static __be32
preprocess_nfs41_op(int nop, unsigned int op_nr, struct callback_op **op)
static void nfs4_callback_free_slot(struct nfs4_session *session)
static void nfs4_cb_free_slot(struct cb_process_state *cps)
static __be32
preprocess_nfs41_op(int nop, unsigned int op_nr, struct callback_op **op)
static void nfs4_cb_free_slot(struct cb_process_state *cps)
static __be32
preprocess_nfs4_op(unsigned int op_nr, struct callback_op **op)
static __be32 process_op(uint32_t minorversion, int nop,
struct svc_rqst *rqstp,
struct xdr_stream *xdr_in, void *argp,
struct xdr_stream *xdr_out, void *resp,
struct cb_process_state *cps)
static __be32 nfs4_callback_compound(struct svc_rqst *rqstp, void *argp, void *resp)
static struct callback_op callback_ops[] = ;
static struct svc_procedure nfs4_callback_procedures1[] = ;
struct svc_version nfs4_callback_version1 = ;
struct svc_version nfs4_callback_version4 = ;
