#define NFSDBG_FACILITY		NFSDBG_PNFS
#define NFS4_DEVICE_ID_HASH_BITS	5
#define NFS4_DEVICE_ID_HASH_SIZE	(1 << NFS4_DEVICE_ID_HASH_BITS)
#define NFS4_DEVICE_ID_HASH_MASK	(NFS4_DEVICE_ID_HASH_SIZE - 1)
static struct hlist_head nfs4_deviceid_cache[NFS4_DEVICE_ID_HASH_SIZE];
static DEFINE_SPINLOCK(nfs4_deviceid_lock);
void
nfs4_print_deviceid(const struct nfs4_deviceid *id)
EXPORT_SYMBOL_GPL(nfs4_print_deviceid);
static inline u32
nfs4_deviceid_hash(const struct nfs4_deviceid *id)
static struct nfs4_deviceid_node *
_lookup_deviceid(const struct pnfs_layoutdriver_type *ld,
const struct nfs_client *clp, const struct nfs4_deviceid *id,
long hash)
struct nfs4_deviceid_node *
_find_get_deviceid(const struct pnfs_layoutdriver_type *ld,
const struct nfs_client *clp, const struct nfs4_deviceid *id,
long hash)
struct nfs4_deviceid_node *
nfs4_find_get_deviceid(const struct pnfs_layoutdriver_type *ld,
const struct nfs_client *clp, const struct nfs4_deviceid *id)
EXPORT_SYMBOL_GPL(nfs4_find_get_deviceid);
struct nfs4_deviceid_node *
nfs4_unhash_put_deviceid(const struct pnfs_layoutdriver_type *ld,
const struct nfs_client *clp, const struct nfs4_deviceid *id)
EXPORT_SYMBOL_GPL(nfs4_unhash_put_deviceid);
void
nfs4_delete_deviceid(const struct pnfs_layoutdriver_type *ld,
const struct nfs_client *clp, const struct nfs4_deviceid *id)
EXPORT_SYMBOL_GPL(nfs4_delete_deviceid);
void
nfs4_init_deviceid_node(struct nfs4_deviceid_node *d,
const struct pnfs_layoutdriver_type *ld,
const struct nfs_client *nfs_client,
const struct nfs4_deviceid *id)
EXPORT_SYMBOL_GPL(nfs4_init_deviceid_node);
struct nfs4_deviceid_node *
nfs4_insert_deviceid_node(struct nfs4_deviceid_node *new)
EXPORT_SYMBOL_GPL(nfs4_insert_deviceid_node);
bool
nfs4_put_deviceid_node(struct nfs4_deviceid_node *d)
EXPORT_SYMBOL_GPL(nfs4_put_deviceid_node);
static void
_deviceid_purge_client(const struct nfs_client *clp, long hash)
void
nfs4_deviceid_purge_client(const struct nfs_client *clp)
