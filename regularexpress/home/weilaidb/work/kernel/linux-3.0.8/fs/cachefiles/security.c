int cachefiles_get_security_ID(struct cachefiles_cache *cache)
static int cachefiles_check_cache_dir(struct cachefiles_cache *cache,
struct dentry *root)
int cachefiles_determine_cache_security(struct cachefiles_cache *cache,
struct dentry *root,
const struct cred **_saved_cred)
