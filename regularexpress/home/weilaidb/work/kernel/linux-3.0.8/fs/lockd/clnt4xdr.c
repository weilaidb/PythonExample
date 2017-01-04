#define NLMDBG_FACILITY		NLMDBG_XDR
#if (NLMCLNT_OHSIZE > XDR_MAX_NETOBJ)
#  error "NLM host name cannot be larger than XDR_MAX_NETOBJ!"
#if (NLMCLNT_OHSIZE > NLM_MAXSTRLEN)
#  error "NLM host name cannot be larger than NLM's maximum string length!"
#define NLM4_void_sz		(0)
#define NLM4_cookie_sz		(1+(NLM_MAXCOOKIELEN>>2))
#define NLM4_caller_sz		(1+(NLMCLNT_OHSIZE>>2))
#define NLM4_owner_sz		(1+(NLMCLNT_OHSIZE>>2))
#define NLM4_fhandle_sz		(1+(NFS3_FHSIZE>>2))
#define NLM4_lock_sz		(5+NLM4_caller_sz+NLM4_owner_sz+NLM4_fhandle_sz)
#define NLM4_holder_sz		(6+NLM4_owner_sz)
#define NLM4_testargs_sz	(NLM4_cookie_sz+1+NLM4_lock_sz)
#define NLM4_lockargs_sz	(NLM4_cookie_sz+4+NLM4_lock_sz)
#define NLM4_cancargs_sz	(NLM4_cookie_sz+2+NLM4_lock_sz)
#define NLM4_unlockargs_sz	(NLM4_cookie_sz+NLM4_lock_sz)
#define NLM4_testres_sz		(NLM4_cookie_sz+1+NLM4_holder_sz)
#define NLM4_res_sz		(NLM4_cookie_sz+1)
#define NLM4_norep_sz		(0)
static s64 loff_t_to_s64(loff_t offset)
static void nlm4_compute_offsets(const struct nlm_lock *lock,
u64 *l_offset, u64 *l_len)
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
static void encode_nlm4_stat(struct xdr_stream *xdr,
const __be32 stat)
static int decode_nlm4_stat(struct xdr_stream *xdr, __be32 *stat)
static void encode_nlm4_holder(struct xdr_stream *xdr,
const struct nlm_res *result)
static int decode_nlm4_holder(struct xdr_stream *xdr, struct nlm_res *result)
static void encode_caller_name(struct xdr_stream *xdr, const char *name)
static void encode_nlm4_lock(struct xdr_stream *xdr,
const struct nlm_lock *lock)
static void nlm4_xdr_enc_testargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_args *args)
static void nlm4_xdr_enc_lockargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_args *args)
static void nlm4_xdr_enc_cancargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_args *args)
static void nlm4_xdr_enc_unlockargs(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_args *args)
static void nlm4_xdr_enc_res(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_res *result)
static void nlm4_xdr_enc_testres(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nlm_res *result)
static int decode_nlm4_testrply(struct xdr_stream *xdr,
struct nlm_res *result)
static int nlm4_xdr_dec_testres(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nlm_res *result)
static int nlm4_xdr_dec_res(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nlm_res *result)
#define nlm4_xdr_dec_norep	NULL
#define PROC(proc, argtype, restype)					\
[NLMPROC_##proc] =
static struct rpc_procinfo	nlm4_procedures[] = ;
struct rpc_version	nlm_version4 = ;
