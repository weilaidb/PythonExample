#define NFSDBG_FACILITY NFSDBG_CALLBACK
__be32 nfs4_callback_getattr(struct cb_getattrargs *args,
struct cb_getattrres *res,
struct cb_process_state *cps)
__be32 nfs4_callback_recall(struct cb_recallargs *args, void *dummy,
struct cb_process_state *cps)
int nfs4_validate_delegation_stateid(struct nfs_delegation *delegation, const nfs4_stateid *stateid)
#if defined(CONFIG_NFS_V4_1)
static u32 initiate_file_draining(struct nfs_client *clp,
struct cb_layoutrecallargs *args)
static u32 initiate_bulk_draining(struct nfs_client *clp,
struct cb_layoutrecallargs *args)
static u32 do_callback_layoutrecall(struct nfs_client *clp,
struct cb_layoutrecallargs *args)
__be32 nfs4_callback_layoutrecall(struct cb_layoutrecallargs *args,
void *dummy, struct cb_process_state *cps)
static void pnfs_recall_all_layouts(struct nfs_client *clp)
__be32 nfs4_callback_devicenotify(struct cb_devicenotifyargs *args,
void *dummy, struct cb_process_state *cps)
int nfs41_validate_delegation_stateid(struct nfs_delegation *delegation, const nfs4_stateid *stateid)
static __be32
validate_seqid(struct nfs4_slot_table *tbl, struct cb_sequenceargs * args)
static bool referring_call_exists(struct nfs_client *clp,
uint32_t nrclists,
struct referring_call_list *rclists)
__be32 nfs4_callback_sequence(struct cb_sequenceargs *args,
struct cb_sequenceres *res,
struct cb_process_state *cps)
static bool
validate_bitmap_values(unsigned long mask)
__be32 nfs4_callback_recallany(struct cb_recallanyargs *args, void *dummy,
struct cb_process_state *cps)
__be32 nfs4_callback_recallslot(struct cb_recallslotargs *args, void *dummy,
struct cb_process_state *cps)
