int v9fs_fid_add(struct dentry *dentry, struct p9_fid *fid)
static struct p9_fid *v9fs_fid_find(struct dentry *dentry, u32 uid, int any)
static int build_path_from_dentry(struct v9fs_session_info *v9ses,
struct dentry *dentry, char ***names)
static struct p9_fid *v9fs_fid_lookup_with_uid(struct dentry *dentry,
uid_t uid, int any)
struct p9_fid *v9fs_fid_lookup(struct dentry *dentry)
struct p9_fid *v9fs_fid_clone(struct dentry *dentry)
static struct p9_fid *v9fs_fid_clone_with_uid(struct dentry *dentry, uid_t uid)
struct p9_fid *v9fs_writeback_fid(struct dentry *dentry)
