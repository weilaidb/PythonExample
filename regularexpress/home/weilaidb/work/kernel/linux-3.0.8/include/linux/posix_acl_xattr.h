#define _POSIX_ACL_XATTR_H
#define POSIX_ACL_XATTR_ACCESS	"system.posix_acl_access"
#define POSIX_ACL_XATTR_DEFAULT	"system.posix_acl_default"
#define POSIX_ACL_XATTR_VERSION	0x0002
#define ACL_UNDEFINED_ID	(-1)
typedef struct  posix_acl_xattr_entry;
typedef struct  posix_acl_xattr_header;
static inline size_t
posix_acl_xattr_size(int count)
static inline int
posix_acl_xattr_count(size_t size)
struct posix_acl *posix_acl_from_xattr(const void *value, size_t size);
int posix_acl_to_xattr(const struct posix_acl *acl, void *buffer, size_t size);
