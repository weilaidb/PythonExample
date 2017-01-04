static int v9fs_dentry_delete(const struct dentry *dentry)
static int v9fs_cached_dentry_delete(const struct dentry *dentry)
static void v9fs_dentry_release(struct dentry *dentry)
static int v9fs_lookup_revalidate(struct dentry *dentry, struct nameidata *nd)
const struct dentry_operations v9fs_cached_dentry_operations = ;
const struct dentry_operations v9fs_dentry_operations = ;
