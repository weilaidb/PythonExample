#define NLMDBG_FACILITY		NLMDBG_XDR
#if (NLMCLNT_OHSIZE > XDR_MAX_NETOBJ)
#  error "NLM host name cannot be larger than XDR_MAX_NETOBJ!"
#define NLM_cookie_sz		(1+(NLM_MAXCOOKIELEN>>2))
#define NLM_caller_sz		(1+(NLMCLNT_OHSIZE>>2))
#define NLM_owner_sz		(1+(NLMCLNT_OHSIZE>>2))
#define NLM_fhandle_sz		(1+(NFS2_FHSIZE>>2))
#define NLM_lock_sz		(3+NLM_caller_sz+NLM_owner_sz+NLM_fhandle_sz)
#define NLM_holder_sz		(4+NLM_owner_sz)
#define NLM_testargs_sz		(NLM_cookie_sz+1+NLM_lock_sz)
#define NLM_lockargs_sz		(NLM_cookie_sz+4+NLM_lock_sz)
#define NLM_cancargs_sz		(NLM_cookie_sz+2+NLM_lock_sz)
#define NLM_unlockargs_sz	(NLM_cookie_sz+NLM_lock_sz)
#define NLM_testres_sz		(NLM_cookie_sz+1+NLM_holder_sz)
#define NLM_res_sz		(NLM_cookie_sz+1)
#define NLM_norep_sz		(0)
static s32 loff_t_to_s32(loff_t offset)
static void nlm_compute_offsets(const struct nlm_lock *lock,
u32 *l_offset, u32 *l_len)
static void print_overflow_msg(const char *func, const struct xdr_stream *xdr)
static void encode_bool(struct xdr_stream *xdr, const int value)
static void encode_int32(struct xdr_stream *xdr, const s32 value)
static void encode_netobj(struct xdr_stream *xdr,
const u8 *data, const unsigned int length)
static int decode_netobj(struct xdr_stream *xdr,
struct xdr_netobj *obj)
static void encode_cookie(struct xdr_stream *xdr,
const struct nlm_cookie *cookie)
static int decode_cookie(struct xdr_stream *xdr,
struct nlm_cookie *cookie)
static void encode_fh(struct xdr_stream *xdr, const struct nfs_fh *fh)
static void encode_nlm_stat(struct xdr_stream *xdr,
const __be32 stat)
static int decode_nlm_stat(struct xdr_stream *xdr,
__be32 *stat)
static void encode_nlm_holder(struct xdr_stream *xdr,
const struct nlm_res *result)
static int decode_nlm_holder(struct xdr_stream *xdr, struct nlm_res *result)
static void encode_caller_name(struct xdr_stream *xdr, const char *name)
static void encode_nlm_lock(struct xdr_stream *xdr,
const struct nlm_lock *lock)
static void nlm_xdr_enc_testargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_args *args)
static void nlm_xdr_enc_lockargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_args *args)
static void nlm_xdr_enc_cancargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_args *args)
static void nlm_xdr_enc_unlockargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_args *args)
static void nlm_xdr_enc_res(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_res *result)
static void encode_nlm_testrply(struct xdr_stream *xdr,
const struct nlm_res *result)
static void nlm_xdr_enc_testres(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_res *result)
static int decode_nlm_testrply(struct xdr_stream *xdr,
struct nlm_res *result)
static int nlm_xdr_dec_testres(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nlm_res *result)
static int nlm_xdr_dec_res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nlm_res *result)
#define nlm_xdr_dec_norep	NULL
#define PROC(proc, argtype, restype)	\
[NLMPROC_##proc] =
static struct rpc_procinfo	nlm_procedures[] = ;
static struct rpc_version	nlm_version1 = ;
static struct rpc_version	nlm_version3 = ;
static struct rpc_version	*nlm_versions[] = ;
static struct rpc_stat		nlm_rpc_stats;
struct rpc_program		nlm_program = ;
