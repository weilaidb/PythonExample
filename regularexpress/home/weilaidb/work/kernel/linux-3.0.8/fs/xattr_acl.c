struct posix_acl *
posix_acl_from_xattr(const void *value, size_t size)
EXPORT_SYMBOL (posix_acl_from_xattr);
int
posix_acl_to_xattr(const struct posix_acl *acl, void *buffer, size_t size)
EXPORT_SYMBOL (posix_acl_to_xattr);
