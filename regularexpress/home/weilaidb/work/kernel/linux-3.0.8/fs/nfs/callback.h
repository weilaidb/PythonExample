#define __LINUX_FS_NFS_CALLBACK_H
#define NFS4_CALLBACK 0x40000000
#define NFS4_CALLBACK_XDRSIZE 2048
#define NFS4_CALLBACK_BUFSIZE (1024 + NFS4_CALLBACK_XDRSIZE)
enum nfs4_callback_procnum ;
enum nfs4_callback_opnum ;
struct cb_process_state ;
struct cb_compound_hdr_arg ;
struct cb_compound_hdr_res ;
struct cb_getattrargs ;
struct cb_getattrres ;
struct cb_recallargs ;
#if defined(CONFIG_NFS_V4_1)
struct referring_call ;
struct referring_call_list ;
struct cb_sequenceargs ;
struct cb_sequenceres ;
extern __be32 nfs4_callback_sequence(struct cb_sequenceargs *args,
struct cb_sequenceres *res,
struct cb_process_state *cps);
extern int nfs41_validate_delegation_stateid(struct nfs_delegation *delegation,
const nfs4_stateid *stateid);
#define RCA4_TYPE_MASK_RDATA_DLG	0
#define RCA4_TYPE_MASK_WDATA_DLG	1
#define RCA4_TYPE_MASK_DIR_DLG         2
#define RCA4_TYPE_MASK_FILE_LAYOUT     3
#define RCA4_TYPE_MASK_BLK_LAYOUT      4
#define RCA4_TYPE_MASK_OBJ_LAYOUT_MIN  8
#define RCA4_TYPE_MASK_OBJ_LAYOUT_MAX  9
#define RCA4_TYPE_MASK_OTHER_LAYOUT_MIN 12
#define RCA4_TYPE_MASK_OTHER_LAYOUT_MAX 15
#define RCA4_TYPE_MASK_ALL 0xf31f
struct cb_recallanyargs ;
extern __be32 nfs4_callback_recallany(struct cb_recallanyargs *args,
void *dummy,
struct cb_process_state *cps);
struct cb_recallslotargs ;
extern __be32 nfs4_callback_recallslot(struct cb_recallslotargs *args,
void *dummy,
struct cb_process_state *cps);
struct cb_layoutrecallargs ;
extern unsigned nfs4_callback_layoutrecall(
struct cb_layoutrecallargs *args,
void *dummy, struct cb_process_state *cps);
extern void nfs4_check_drain_bc_complete(struct nfs4_session *ses);
struct cb_devicenotifyitem ;
struct cb_devicenotifyargs ;
extern __be32 nfs4_callback_devicenotify(
struct cb_devicenotifyargs *args,
void *dummy, struct cb_process_state *cps);
extern int check_gss_callback_principal(struct nfs_client *, struct svc_rqst *);
extern __be32 nfs4_callback_getattr(struct cb_getattrargs *args,
struct cb_getattrres *res,
struct cb_process_state *cps);
extern __be32 nfs4_callback_recall(struct cb_recallargs *args, void *dummy,
struct cb_process_state *cps);
extern int nfs_callback_up(u32 minorversion, struct rpc_xprt *xprt);
extern void nfs_callback_down(int minorversion);
extern int nfs4_validate_delegation_stateid(struct nfs_delegation *delegation,
const nfs4_stateid *stateid);
extern int nfs4_set_callback_sessionid(struct nfs_client *clp);
#define NFS41_BC_MIN_CALLBACKS 1
#define NFS41_BC_MAX_CALLBACKS 1
extern unsigned int nfs_callback_set_tcpport;
extern unsigned short nfs_callback_tcpport;
extern unsigned short nfs_callback_tcpport6;
