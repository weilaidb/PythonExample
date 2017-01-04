#define MAX_EA_VALUE_SIZE 65535
#define CIFS_XATTR_DOS_ATTRIB "user.DosAttrib"
#define CIFS_XATTR_CIFS_ACL "system.cifs_acl"
#define CIFS_XATTR_USER_PREFIX "user."
#define CIFS_XATTR_SYSTEM_PREFIX "system."
#define CIFS_XATTR_OS2_PREFIX "os2."
#define CIFS_XATTR_SECURITY_PREFIX "security."
#define CIFS_XATTR_TRUSTED_PREFIX "trusted."
#define XATTR_TRUSTED_PREFIX_LEN  8
#define XATTR_SECURITY_PREFIX_LEN 9
int cifs_removexattr(struct dentry *direntry, const char *ea_name)
int cifs_setxattr(struct dentry *direntry, const char *ea_name,
const void *ea_value, size_t value_size, int flags)
ssize_t cifs_getxattr(struct dentry *direntry, const char *ea_name,
void *ea_value, size_t buf_size)
ssize_t cifs_listxattr(struct dentry *direntry, char *data, size_t buf_size)
