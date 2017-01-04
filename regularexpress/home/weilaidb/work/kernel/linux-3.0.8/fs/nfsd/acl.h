#define LINUX_NFS4_ACL_H
#define NFS4_ACL_MAX 170
struct nfs4_acl *nfs4_acl_new(int);
int nfs4_acl_get_whotype(char *, u32);
int nfs4_acl_write_who(int who, char *p);
int nfs4_acl_permission(struct nfs4_acl *acl, uid_t owner, gid_t group,
uid_t who, u32 mask);
#define NFS4_ACL_TYPE_DEFAULT	0x01
#define NFS4_ACL_DIR		0x02
#define NFS4_ACL_OWNER		0x04
struct nfs4_acl *nfs4_acl_posix_to_nfsv4(struct posix_acl *,
struct posix_acl *, unsigned int flags);
int nfs4_acl_nfsv4_to_posix(struct nfs4_acl *, struct posix_acl **,
struct posix_acl **, unsigned int flags);
