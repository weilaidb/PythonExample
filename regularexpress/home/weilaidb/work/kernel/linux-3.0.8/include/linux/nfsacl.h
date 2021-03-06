#define __LINUX_NFSACL_H
#define NFS_ACL_PROGRAM	100227
#define ACLPROC2_GETACL		1
#define ACLPROC2_SETACL		2
#define ACLPROC2_GETATTR	3
#define ACLPROC2_ACCESS		4
#define ACLPROC3_GETACL		1
#define ACLPROC3_SETACL		2
#define NFS_ACL			0x0001
#define NFS_ACLCNT		0x0002
#define NFS_DFACL		0x0004
#define NFS_DFACLCNT		0x0008
#define NFS_ACL_DEFAULT		0x1000
#define NFS_ACL_MAX_ENTRIES	1024
#define NFSACL_MAXWORDS		(2*(2+3*NFS_ACL_MAX_ENTRIES))
#define NFSACL_MAXPAGES		((2*(8+12*NFS_ACL_MAX_ENTRIES) + PAGE_SIZE-1) \
>> PAGE_SHIFT)
#define NFS_ACL_MAX_ENTRIES_INLINE	(5)
#define NFS_ACL_INLINE_BUFSIZE	((2*(2+3*NFS_ACL_MAX_ENTRIES_INLINE)) << 2)
static inline unsigned int
nfsacl_size(struct posix_acl *acl_access, struct posix_acl *acl_default)
extern int
nfsacl_encode(struct xdr_buf *buf, unsigned int base, struct inode *inode,
struct posix_acl *acl, int encode_entries, int typeflag);
extern int
nfsacl_decode(struct xdr_buf *buf, unsigned int base, unsigned int *aclcnt,
struct posix_acl **pacl);
