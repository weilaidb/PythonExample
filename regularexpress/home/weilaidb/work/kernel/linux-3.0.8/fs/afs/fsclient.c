static void xdr_decode_AFSFid(const __be32 **_bp, struct afs_fid *fid)
static void xdr_decode_AFSFetchStatus(const __be32 **_bp,
struct afs_file_status *status,
struct afs_vnode *vnode,
afs_dataversion_t *store_version)
static void xdr_decode_AFSCallBack(const __be32 **_bp, struct afs_vnode *vnode)
static void xdr_decode_AFSCallBack_raw(const __be32 **_bp,
struct afs_callback *cb)
static void xdr_decode_AFSVolSync(const __be32 **_bp,
struct afs_volsync *volsync)
static void xdr_encode_AFS_StoreStatus(__be32 **_bp, struct iattr *attr)
static void xdr_decode_AFSFetchVolumeStatus(const __be32 **_bp,
struct afs_volume_status *vs)
static int afs_deliver_fs_fetch_status(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSFetchStatus = ;
int afs_fs_fetch_file_status(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
struct afs_volsync *volsync,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_fetch_data(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSFetchData = ;
static const struct afs_call_type afs_RXFSFetchData64 = ;
static int afs_fs_fetch_data64(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
off_t offset, size_t length,
struct page *buffer,
const struct afs_wait_mode *wait_mode)
int afs_fs_fetch_data(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
off_t offset, size_t length,
struct page *buffer,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_give_up_callbacks(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSGiveUpCallBacks = ;
int afs_fs_give_up_callbacks(struct afs_server *server,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_create_vnode(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSCreateXXXX = ;
int afs_fs_create(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
const char *name,
umode_t mode,
struct afs_fid *newfid,
struct afs_file_status *newstatus,
struct afs_callback *newcb,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_remove(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSRemoveXXXX = ;
int afs_fs_remove(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
const char *name,
bool isdir,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_link(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSLink = ;
int afs_fs_link(struct afs_server *server,
struct key *key,
struct afs_vnode *dvnode,
struct afs_vnode *vnode,
const char *name,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_symlink(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSSymlink = ;
int afs_fs_symlink(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
const char *name,
const char *contents,
struct afs_fid *newfid,
struct afs_file_status *newstatus,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_rename(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSRename = ;
int afs_fs_rename(struct afs_server *server,
struct key *key,
struct afs_vnode *orig_dvnode,
const char *orig_name,
struct afs_vnode *new_dvnode,
const char *new_name,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_store_data(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSStoreData = ;
static const struct afs_call_type afs_RXFSStoreData64 = ;
static int afs_fs_store_data64(struct afs_server *server,
struct afs_writeback *wb,
pgoff_t first, pgoff_t last,
unsigned offset, unsigned to,
loff_t size, loff_t pos, loff_t i_size,
const struct afs_wait_mode *wait_mode)
int afs_fs_store_data(struct afs_server *server, struct afs_writeback *wb,
pgoff_t first, pgoff_t last,
unsigned offset, unsigned to,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_store_status(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSStoreStatus = ;
static const struct afs_call_type afs_RXFSStoreData_as_Status = ;
static const struct afs_call_type afs_RXFSStoreData64_as_Status = ;
static int afs_fs_setattr_size64(struct afs_server *server, struct key *key,
struct afs_vnode *vnode, struct iattr *attr,
const struct afs_wait_mode *wait_mode)
static int afs_fs_setattr_size(struct afs_server *server, struct key *key,
struct afs_vnode *vnode, struct iattr *attr,
const struct afs_wait_mode *wait_mode)
int afs_fs_setattr(struct afs_server *server, struct key *key,
struct afs_vnode *vnode, struct iattr *attr,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_get_volume_status(struct afs_call *call,
struct sk_buff *skb, bool last)
static void afs_get_volume_status_call_destructor(struct afs_call *call)
static const struct afs_call_type afs_RXFSGetVolumeStatus = ;
int afs_fs_get_volume_status(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
struct afs_volume_status *vs,
const struct afs_wait_mode *wait_mode)
static int afs_deliver_fs_xxxx_lock(struct afs_call *call,
struct sk_buff *skb, bool last)
static const struct afs_call_type afs_RXFSSetLock = ;
static const struct afs_call_type afs_RXFSExtendLock = ;
static const struct afs_call_type afs_RXFSReleaseLock = ;
int afs_fs_set_lock(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
afs_lock_type_t type,
const struct afs_wait_mode *wait_mode)
int afs_fs_extend_lock(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
const struct afs_wait_mode *wait_mode)
int afs_fs_release_lock(struct afs_server *server,
struct key *key,
struct afs_vnode *vnode,
const struct afs_wait_mode *wait_mode)
