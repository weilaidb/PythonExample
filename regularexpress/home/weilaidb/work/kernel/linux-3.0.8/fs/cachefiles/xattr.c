static const char cachefiles_xattr_cache[] =
XATTR_USER_PREFIX "CacheFiles.cache";
int cachefiles_check_object_type(struct cachefiles_object *object)
int cachefiles_set_object_xattr(struct cachefiles_object *object,
struct cachefiles_xattr *auxdata)
int cachefiles_update_object_xattr(struct cachefiles_object *object,
struct cachefiles_xattr *auxdata)
int cachefiles_check_object_xattr(struct cachefiles_object *object,
struct cachefiles_xattr *auxdata)
int cachefiles_remove_object_xattr(struct cachefiles_cache *cache,
struct dentry *dentry)
