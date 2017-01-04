EXPORT_SYMBOL(posix_acl_init);
EXPORT_SYMBOL(posix_acl_alloc);
EXPORT_SYMBOL(posix_acl_clone);
EXPORT_SYMBOL(posix_acl_valid);
EXPORT_SYMBOL(posix_acl_equiv_mode);
EXPORT_SYMBOL(posix_acl_from_mode);
EXPORT_SYMBOL(posix_acl_create_masq);
EXPORT_SYMBOL(posix_acl_chmod_masq);
EXPORT_SYMBOL(posix_acl_permission);
void
posix_acl_init(struct posix_acl *acl, int count)
struct posix_acl *
posix_acl_alloc(int count, gfp_t flags)
struct posix_acl *
posix_acl_clone(const struct posix_acl *acl, gfp_t flags)
int
posix_acl_valid(const struct posix_acl *acl)
int
posix_acl_equiv_mode(const struct posix_acl *acl, mode_t *mode_p)
struct posix_acl *
posix_acl_from_mode(mode_t mode, gfp_t flags)
int
posix_acl_permission(struct inode *inode, const struct posix_acl *acl, int want)
int
posix_acl_create_masq(struct posix_acl *acl, mode_t *mode_p)
int
posix_acl_chmod_masq(struct posix_acl *acl, mode_t mode)
