static void afs_install_vnode(struct afs_vnode *vnode,
struct afs_server *server)
static void afs_vnode_note_promise(struct afs_vnode *vnode,
struct afs_server *server)
static void afs_vnode_deleted_remotely(struct afs_vnode *vnode)
void afs_vnode_finalise_status_update(struct afs_vnode *vnode,
struct afs_server *server)
static void afs_vnode_status_update_failed(struct afs_vnode *vnode, int ret)
int afs_vnode_fetch_status(struct afs_vnode *vnode,
struct afs_vnode *auth_vnode, struct key *key)
int afs_vnode_fetch_data(struct afs_vnode *vnode, struct key *key,
off_t offset, size_t length, struct page *page)
int afs_vnode_create(struct afs_vnode *vnode, struct key *key,
const char *name, umode_t mode, struct afs_fid *newfid,
struct afs_file_status *newstatus,
struct afs_callback *newcb, struct afs_server **_server)
int afs_vnode_remove(struct afs_vnode *vnode, struct key *key, const char *name,
bool isdir)
int afs_vnode_link(struct afs_vnode *dvnode, struct afs_vnode *vnode,
struct key *key, const char *name)
int afs_vnode_symlink(struct afs_vnode *vnode, struct key *key,
const char *name, const char *content,
struct afs_fid *newfid,
struct afs_file_status *newstatus,
struct afs_server **_server)
int afs_vnode_rename(struct afs_vnode *orig_dvnode,
struct afs_vnode *new_dvnode,
struct key *key,
const char *orig_name,
const char *new_name)
int afs_vnode_store_data(struct afs_writeback *wb, pgoff_t first, pgoff_t last,
unsigned offset, unsigned to)
int afs_vnode_setattr(struct afs_vnode *vnode, struct key *key,
struct iattr *attr)
int afs_vnode_get_volume_status(struct afs_vnode *vnode, struct key *key,
struct afs_volume_status *vs)
int afs_vnode_set_lock(struct afs_vnode *vnode, struct key *key,
afs_lock_type_t type)
int afs_vnode_extend_lock(struct afs_vnode *vnode, struct key *key)
int afs_vnode_release_lock(struct afs_vnode *vnode, struct key *key)
